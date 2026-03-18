/*
 * XREFs of MiComputeFlushRange @ 0x140077C78
 * Callers:
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     MmTrimSection @ 0x1400E0C60 (MmTrimSection.c)
 * Callees:
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x14005EDE0 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     MiLockSectionControlArea @ 0x14005F650 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeDataFlushRange @ 0x140071840 (MiComputeDataFlushRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputeFlushRange(_QWORD *a1, _QWORD *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v12[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = MiLockSectionControlArea(a1, 1, v12);
  v9 = v8;
  if ( v8 )
  {
    if ( (!a4 || (unsigned int)MiDoesControlAreaHaveUserWritableReferences(v8))
      && (*(_DWORD *)(v9 + 56) & 3) == 0
      && *(_QWORD *)(v9 + 32) )
    {
      return MiComputeDataFlushRange(v9, v12[0], a2, a3, 0, a5);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12[0] < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v12[0]);
  }
  return 0LL;
}
