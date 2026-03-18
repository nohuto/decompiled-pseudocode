/*
 * XREFs of PopHaltDeviceIdle @ 0x1401659DC
 * Callers:
 *     PoInitializeBroadcast @ 0x140728DE4 (PoInitializeBroadcast.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS PopHaltDeviceIdle()
{
  __int64 *v0; // rbx
  KIRQL v1; // di
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v4; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-10h]

  v4 = 0LL;
  v0 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140467B34 = 1;
  if ( dword_140467B30 )
  {
    HIDWORD(v4) = 0;
    v6 = &v5;
    v0 = &v4;
    LOWORD(v4) = 1;
    v5 = (__int64)&v5;
    PopDeviceIdleSync = (PRKEVENT)&v4;
    BYTE2(v4) = 6;
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v1;
  __writecr8(v1);
  if ( v0 )
    return KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
  return result;
}
