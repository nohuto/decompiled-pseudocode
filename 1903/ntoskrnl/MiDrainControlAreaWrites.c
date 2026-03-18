/*
 * XREFs of MiDrainControlAreaWrites @ 0x1400DF8B0
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x1400DF804 (MiPrepareSegmentForDeletion.c)
 *     MiDestroySection @ 0x140170208 (MiDestroySection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiDrainControlAreaWrites(__int64 a1, KIRQL a2)
{
  bool v3; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v6; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+28h] [rbp-28h]
  int v8; // [rsp+2Ch] [rbp-24h]
  __int16 v9; // [rsp+30h] [rbp-20h] BYREF
  char v10; // [rsp+32h] [rbp-1Eh]
  char v11; // [rsp+33h] [rbp-1Dh]
  int v12; // [rsp+34h] [rbp-1Ch]
  _QWORD v13[3]; // [rsp+38h] [rbp-18h] BYREF

  v8 = 0;
  v3 = *(_DWORD *)(a1 + 76) == 0;
  v11 = 0;
  if ( !v3 )
  {
    do
    {
      v12 = 0;
      v13[1] = v13;
      v7 = 8;
      v13[0] = v13;
      v6 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = &v6;
      v9 = 263;
      v10 = 6;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(a2);
      KeWaitForGate(&v9, 18LL);
      a2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    }
    while ( *(_DWORD *)(a1 + 76) );
  }
}
