/*
 * XREFs of MiIncrementLargeSubsections @ 0x1402B634C
 * Callers:
 *     MiReferenceDataSubsections @ 0x140026658 (MiReferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x140853B74 (MiCloneLargeFileOnlyVad.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1402B5EB4 (MiEnableLargeSubsection.c)
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
  __int16 v21; // [rsp+30h] [rbp-20h] BYREF
  char v22; // [rsp+32h] [rbp-1Eh]
  int v23; // [rsp+34h] [rbp-1Ch]
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+50h]

  v2 = *a1;
  v3 = (__int64)a1;
  v4 = 0;
  v26 = *a1;
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
      v23 = 0;
      v24[1] = v24;
      v20 = 512;
      v24[0] = v24;
      v19 = *(_QWORD *)(v2 + 80);
      *(_QWORD *)(v2 + 80) = &v19;
      v21 = 263;
      v22 = 6;
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v8);
      KeWaitForGate((__int64)&v21, 0x13u);
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
        v15 = MiBuildWakeList(v26, 512);
        MiReleaseControlAreaWaiters(v15);
        if ( !v14 )
        {
          v4 = -1;
          --*(_DWORD *)(v3 + 108);
          goto LABEL_30;
        }
        ++*(_DWORD *)(v3 + 108);
        v2 = v26;
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
