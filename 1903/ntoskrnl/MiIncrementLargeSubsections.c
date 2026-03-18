/*
 * XREFs of MiIncrementLargeSubsections @ 0x1402CC3E8
 * Callers:
 *     MiReferenceDataSubsections @ 0x1400A8B68 (MiReferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x14088C610 (MiCloneLargeFileOnlyVad.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiBuildWakeList @ 0x1400743CC (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E05A0 (MiReleaseControlAreaWaiters.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDecrementLargeSubsections @ 0x1402CB518 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1402CB9CC (MiEnableLargeSubsection.c)
 */

__int64 __fastcall MiIncrementLargeSubsections(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 *v5; // r12
  volatile LONG *v7; // r13
  KIRQL v8; // r14
  int v9; // eax
  int v10; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  int v12; // eax
  struct _KPRCB *v13; // rcx
  int v14; // ebx
  __int64 *v15; // rax
  unsigned __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+28h] [rbp-28h]
  int v21; // [rsp+2Ch] [rbp-24h]
  _DWORD v22[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+50h]

  v2 = *a1;
  v3 = (__int64)a1;
  v4 = 0;
  v25 = *a1;
  v5 = 0LL;
  v7 = (volatile LONG *)(*a1 + 72);
  v8 = ExAcquireSpinLockExclusive(v7);
  while ( 1 )
  {
    v9 = *(_DWORD *)(v3 + 48) >> 30;
    if ( !v9 )
      break;
    if ( v9 == 1 && !v4 )
      v4 = 1;
    v10 = *(_DWORD *)(v3 + 108);
    if ( v10 == -1 )
      break;
    if ( v10 == 1 )
    {
      v21 = 0;
      v22[1] = 0;
      v23[1] = v23;
      v23[0] = v23;
      v19 = *(_QWORD *)(v2 + 80);
      *(_QWORD *)(v2 + 80) = &v19;
      v22[0] = 393479;
      v20 = 512;
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v8);
      KeWaitForGate((__int64)v22, 19);
    }
    else
    {
      v12 = v10 + 1;
      *(_DWORD *)(v3 + 108) = v12;
      if ( v12 == 1 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v7);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
        {
          v13 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v13);
        }
        __writecr8(v8);
        v14 = MiEnableLargeSubsection(v3);
        ExAcquireSpinLockExclusive(v7);
        v15 = MiBuildWakeList(v25, 512);
        MiReleaseControlAreaWaiters(v15);
        if ( !v14 )
        {
          v4 = -1;
          --*(_DWORD *)(v3 + 108);
          goto LABEL_30;
        }
        ++*(_DWORD *)(v3 + 108);
        v2 = v25;
      }
      v5 = (__int64 *)v3;
      if ( a2 )
      {
        v16 = *(unsigned int *)(v3 + 44);
        if ( a2 <= v16 )
          goto LABEL_30;
        a2 -= v16;
      }
      v3 = *(_QWORD *)(v3 + 16);
    }
    if ( !v3 )
      goto LABEL_30;
  }
  v4 = -1;
LABEL_30:
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v17);
  }
  __writecr8(v8);
  if ( v4 == -1 && v5 )
    MiDecrementLargeSubsections(a1, v5);
  return v4;
}
