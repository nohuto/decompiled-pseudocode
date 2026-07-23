/*
 * XREFs of KeRaiseUserException @ 0x140290890
 * Callers:
 *     ExHandleLogBadReference @ 0x14031A004 (ExHandleLogBadReference.c)
 *     ObCloseHandleTableEntry @ 0x1405E7360 (ObCloseHandleTableEntry.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     ObpCloseHandle @ 0x1405F673C (ObpCloseHandle.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x14013FA9C (KiSetupForInstrumentationReturn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeRaiseUserException(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v4; // r9
  unsigned __int8 v5; // al
  __int64 TrapFrame; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  v4 = 1;
  if ( !CurrentIrql )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentIrql = v5;
  }
  TrapFrame = (__int64)CurrentThread->TrapFrame;
  if ( TrapFrame && (*(_BYTE *)(TrapFrame + 368) & 1) != 0 )
  {
    *((_DWORD *)CurrentThread->Teb + 176) = a1;
    _disable();
    *(_WORD *)(TrapFrame + 368) = 51;
    *(_QWORD *)(TrapFrame + 360) = KeRaiseUserExceptionDispatcher;
    if ( *(_BYTE *)(TrapFrame + 43) != 2 )
      KiSetupForInstrumentationReturn(TrapFrame);
    _enable();
  }
  if ( CurrentIrql < v4 )
  {
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v4) != 0 && KeGetCurrentIrql() >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
  return a1;
}
