/*
 * XREFs of MmIsSessionExecutionValid @ 0x14009DA50
 * Callers:
 *     RtlpWalkFrameChain @ 0x14009EAD0 (RtlpWalkFrameChain.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MmLockLoadedModuleListShared @ 0x14009B76C (MmLockLoadedModuleListShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiSessionLookupImage @ 0x14009DB08 (MiSessionLookupImage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MmIsSessionExecutionValid(__int64 a1, __int64 a2, __int64 a3)
{
  int SessionId; // edi
  BOOL v6; // ebx
  unsigned __int8 v7; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v10; // [rsp+48h] [rbp+20h] BYREF

  SessionId = MmGetSessionIdEx(a2);
  if ( SessionId == -1
    || *(_BYTE *)(a1 + 586) == 1 && SessionId != (unsigned int)MmGetSessionIdEx(*(_QWORD *)(a1 + 544))
    || (*(_DWORD *)(a1 + 116) & 0x800) != 0
    || *(_QWORD *)(a1 + 40) != KeGetPcr()->Prcb.RspBase )
  {
    return 0LL;
  }
  v6 = 1;
  if ( a3 )
  {
    MmLockLoadedModuleListShared(&v10);
    v6 = MiSessionLookupImage(a3) != 0;
    ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
    v7 = v10;
    if ( v10 < 0xFu )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v7 = v10;
      }
      __writecr8(v7);
    }
  }
  return v6;
}
