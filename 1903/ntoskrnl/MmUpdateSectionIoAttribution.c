/*
 * XREFs of MmUpdateSectionIoAttribution @ 0x1400E9798
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14005F650 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmUpdateSectionIoAttribution(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = MiLockSectionControlArea(a1, 1, &v8);
  v5 = v4;
  if ( v4 )
  {
    if ( a2 != 8LL * *(_QWORD *)(v4 + 120) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 32)) <= 1 )
        __fastfail(0xEu);
      v6 = *(_QWORD *)(v4 + 120);
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
    __writecr8(v8);
    if ( v3 )
      IoDiskIoAttributionDereference(v3);
  }
}
