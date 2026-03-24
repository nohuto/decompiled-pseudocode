/*
 * XREFs of PnpDiagnosticTraceObject @ 0x1400F5288
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140159BC0 (PnpDeviceCompletionRoutine.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140680C90 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140680D60 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PipEnumerateDevice @ 0x1406E7F10 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1406EBA5C (PnpStartDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x1406F4424 (PiDevCfgProcessDevice.c)
 *     IopUnloadDriver @ 0x1407089C8 (IopUnloadDriver.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14083C944 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpRebalance @ 0x14083F8A8 (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x1409CB918 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x1409D5630 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x1409D6AF0 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAD60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
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
