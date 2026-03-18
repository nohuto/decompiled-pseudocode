/*
 * XREFs of IopUpdateFunctionPointers @ 0x1402945C8
 * Callers:
 *     IopIrpExtensionControl @ 0x140293BB4 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x14029A394 (IoPerfInit.c)
 *     IoPerfReset @ 0x14029A470 (IoPerfReset.c)
 *     IoVerifierInit @ 0x14096293C (IoVerifierInit.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopUpdateFunctionPointers(int a1, char a2, char a3)
{
  int v6; // eax
  volatile __int32 *v7; // rcx
  __int32 v8; // eax
  __int32 v9; // eax
  __int64 result; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( a2 )
    v6 = a1 | IopFunctionPointerMask;
  else
    v6 = IopFunctionPointerMask & ~a1;
  IopFunctionPointerMask = v6;
  if ( (v6 & 1) != 0 )
  {
    _InterlockedExchange(&IopDispatchAllocateIrp, 1);
    _InterlockedExchange(&IopDispatchCallDriver, 1);
    v7 = &IopDispatchFreeIrp;
    _InterlockedExchange(&IopDispatchCompleteRequest, 1);
    v8 = 1;
  }
  else
  {
    _InterlockedExchange(&IopDispatchFreeIrp, 0);
    v7 = &IopDispatchAllocateIrp;
    v9 = (IopFunctionPointerMask & 2) != 0 ? 3 : 0;
    _InterlockedExchange(&IopDispatchCallDriver, v9);
    _InterlockedExchange(&IopDispatchCompleteRequest, v9);
    if ( (IopFunctionPointerMask & 4) != 0 )
      v8 = 2;
    else
      v8 = 0;
  }
  result = (unsigned int)_InterlockedExchange(v7, v8);
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
  }
  return result;
}
