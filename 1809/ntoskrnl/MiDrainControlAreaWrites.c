/*
 * XREFs of MiDrainControlAreaWrites @ 0x1400958A8
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x1400957FC (MiPrepareSegmentForDeletion.c)
 *     MiDestroySection @ 0x1401698BC (MiDestroySection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiDrainControlAreaWrites(__int64 a1, KIRQL a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  __int16 v7; // [rsp+30h] [rbp-20h] BYREF
  char v8; // [rsp+32h] [rbp-1Eh]
  int v9; // [rsp+34h] [rbp-1Ch]
  _QWORD v10[3]; // [rsp+38h] [rbp-18h] BYREF

  for ( ; *(_DWORD *)(a1 + 76); a2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72)) )
  {
    v9 = 0;
    v10[1] = v10;
    v6 = 8;
    v10[0] = v10;
    v5 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v5;
    v7 = 263;
    v8 = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(a2);
    KeWaitForGate(&v7, 18LL);
  }
}
