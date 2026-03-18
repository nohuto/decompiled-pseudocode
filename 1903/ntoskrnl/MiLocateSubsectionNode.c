/*
 * XREFs of MiLocateSubsectionNode @ 0x1400734A0
 * Callers:
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MiComputeDataFlushRange @ 0x140071840 (MiComputeDataFlushRange.c)
 *     MiReferenceDataSubsections @ 0x1400A8B68 (MiReferenceDataSubsections.c)
 *     MiAdvanceVadView @ 0x1400ACF34 (MiAdvanceVadView.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiDereferenceDataSubsections @ 0x1402DE92C (MiDereferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

_QWORD *__fastcall MiLocateSubsectionNode(__int64 a1, unsigned __int64 a2, int a3)
{
  KIRQL v6; // bp
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  _QWORD *v13; // r8
  unsigned __int16 v14; // cx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v20; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD v22[36]; // [rsp+20h] [rbp-98h] BYREF

  memset(v22, 0, sizeof(v22));
  if ( a2 >= 0x3FFFFFFFFFF000LL )
    return 0LL;
  if ( a3 == 1 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v7 = *(_QWORD *)(a1 + 288);
  v8 = a2 >> 12;
  v9 = *(unsigned int *)(v7 + 36) | ((unsigned __int64)(*(_WORD *)(v7 + 32) & 0xFFC0) << 26);
  v10 = v9 + *(unsigned int *)(v7 + 40);
  if ( *(_WORD *)(v7 + 34) < 0x10u )
    --v10;
  v11 = HIDWORD(v8);
  if ( v8 >= v9 )
  {
    v11 = HIDWORD(v8);
    if ( v8 <= v10 )
    {
      if ( v6 != 17 )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v6);
      }
      return (_QWORD *)v7;
    }
  }
  v13 = *(_QWORD **)(a1 + 272);
  v14 = v22[8] & 0x3F | ((_WORD)v11 << 6);
  v22[9] = v8;
  LOWORD(v22[8]) = v14;
  if ( !v13 )
  {
LABEL_14:
    if ( v6 != 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21);
      }
      __writecr8(v6);
    }
    return 0LL;
  }
  v15 = ((unsigned __int64)v14 << 26) ^ (unsigned int)v8 ^ (v14 << 26);
  while ( 1 )
  {
    v16 = *((unsigned int *)v13 - 5) | ((unsigned __int64)(*(_WORD *)(v13 - 3) & 0xFFC0) << 26);
    v17 = v16 + *((unsigned int *)v13 - 4);
    if ( *((_WORD *)v13 - 11) < 0x10u )
      --v17;
    if ( v15 > v17 )
    {
      v13 = (_QWORD *)v13[1];
      goto LABEL_25;
    }
    if ( v15 >= v16 )
      break;
    v13 = (_QWORD *)*v13;
LABEL_25:
    if ( !v13 )
      goto LABEL_14;
  }
  v18 = v13 - 7;
  *(_QWORD *)(a1 + 288) = v13 - 7;
  if ( v6 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v20);
    }
    __writecr8(v6);
  }
  return v18;
}
