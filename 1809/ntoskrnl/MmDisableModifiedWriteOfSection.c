/*
 * XREFs of MmDisableModifiedWriteOfSection @ 0x140021D70
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x140020210 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmDisableModifiedWriteOfSection(_QWORD *a1)
{
  bool v1; // bl
  __int64 v2; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v2 = MiLockSectionControlArea(a1, 1, &v5);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 40) )
      v1 = (*(_DWORD *)(v2 + 56) & 8) != 0;
    else
      *(_DWORD *)(v2 + 56) |= 8u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v5);
    LOBYTE(v2) = v1;
  }
  return v2;
}
