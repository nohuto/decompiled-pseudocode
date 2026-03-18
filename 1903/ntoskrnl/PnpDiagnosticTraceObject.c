/*
 * XREFs of PnpDiagnosticTraceObject @ 0x14013DB6C
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1401454C0 (PnpDeviceCompletionRoutine.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F0460 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1406F0700 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiDevCfgProcessDevice @ 0x1406F952C (PiDevCfgProcessDevice.c)
 *     PipEnumerateDevice @ 0x140702370 (PipEnumerateDevice.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     PnpStartDeviceNode @ 0x14071802C (PnpStartDeviceNode.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x140877AF4 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpRebalance @ 0x14087B2EC (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x140A11064 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140A193A0 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140A19B90 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObject(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  REGHANDLE v2; // rbx
  int v5; // r8d
  __int16 v7; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v5 = *a2;
  UserData.Reserved = 0;
  v11 = 0;
  v7 = (unsigned __int16)v5 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  UserData.Size = 2;
  v10 = v5;
  return EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}
