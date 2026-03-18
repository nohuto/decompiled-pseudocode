/*
 * XREFs of MmIsSessionExecutionValid @ 0x140017710
 * Callers:
 *     RtlpWalkFrameChain @ 0x1400182A0 (RtlpWalkFrameChain.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400176C0 (MiSessionLookupImage.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MmLockLoadedModuleListShared @ 0x14005F110 (MmLockLoadedModuleListShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MmIsSessionExecutionValid(__int64 a1, __int64 a2, unsigned __int64 a3)
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
    v6 = MiSessionLookupImage(a3) != 0LL;
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
