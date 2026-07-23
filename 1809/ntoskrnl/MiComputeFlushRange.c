/*
 * XREFs of MiComputeFlushRange @ 0x14002015C
 * Callers:
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     MmTrimSection @ 0x1400E9770 (MmTrimSection.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x140020210 (MiLockSectionControlArea.c)
 *     MiComputeDataFlushRange @ 0x140076E20 (MiComputeDataFlushRange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x1401120A0 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r11
  __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = MiLockSectionControlArea(a1, 1LL, v14);
  v10 = v8;
  if ( v8 )
  {
    if ( (!a4 || (unsigned int)MiDoesControlAreaHaveUserWritableReferences(v8))
      && (*(_DWORD *)(v10 + 56) & 3) == 0
      && *(_QWORD *)(v10 + 32) )
    {
      LOBYTE(v9) = v14[0];
      return MiComputeDataFlushRange(v10, v9, a2, a3, 0, a5);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14[0] < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v12);
    }
    __writecr8(v14[0]);
  }
  return 0LL;
}
