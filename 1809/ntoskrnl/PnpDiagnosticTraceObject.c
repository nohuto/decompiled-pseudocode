/*
 * XREFs of PnpDiagnosticTraceObject @ 0x1400F5308
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140159CC0 (PnpDeviceCompletionRoutine.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140681E50 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140681F20 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PipEnumerateDevice @ 0x1406E91B0 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1406ECCFC (PnpStartDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x1406F56C4 (PiDevCfgProcessDevice.c)
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14083DBA4 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpRebalance @ 0x140840B08 (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x1409CC918 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x1409D6630 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x1409D7AF0 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObject(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  REGHANDLE v2; // rbx
  int v6; // r8d
  __int16 v7; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v6 = *a2;
  UserData.Reserved = 0;
  v11 = 0;
  v7 = (unsigned __int16)v6 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  UserData.Size = 2;
  v10 = v6;
  return EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}
