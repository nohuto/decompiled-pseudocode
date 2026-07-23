/*
 * XREFs of PopHaltDeviceIdle @ 0x140155F38
 * Callers:
 *     PoInitializeBroadcast @ 0x1406E1D44 (PoInitializeBroadcast.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS PopHaltDeviceIdle()
{
  __int16 *v0; // rbx
  KIRQL v1; // di
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int16 v4; // [rsp+30h] [rbp-28h] BYREF
  char v5; // [rsp+32h] [rbp-26h]
  int v6; // [rsp+34h] [rbp-24h]
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v0 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_14043D5E4 = 1;
  if ( dword_14043D5E0 )
  {
    v6 = 0;
    v7[1] = v7;
    v0 = &v4;
    v4 = 1;
    v7[0] = v7;
    PopDeviceIdleSync = (PRKEVENT)&v4;
    v5 = 6;
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
