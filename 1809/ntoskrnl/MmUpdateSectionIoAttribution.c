/*
 * XREFs of MmUpdateSectionIoAttribution @ 0x140105298
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x140020210 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmUpdateSectionIoAttribution(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  result = MiLockSectionControlArea(a1, 1, &v8);
  v5 = result;
  if ( result )
  {
    if ( a2 != 8LL * *(_QWORD *)(result + 120) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 32)) <= 1 )
        __fastfail(0xEu);
      v6 = *(_QWORD *)(result + 120);
      v3 = 8 * v6;
      *(_QWORD *)(v5 + 120) = (a2 >> 3) | v6 & 0xE000000000000000uLL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v8;
    __writecr8(v8);
    if ( v3 )
      return IoDiskIoAttributionDereference(v3);
  }
  return result;
}
