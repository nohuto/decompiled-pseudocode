/*
 * XREFs of PnpDiagnosticTraceObjectWithStatus @ 0x1400F5F44
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400F5EA0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140681F20 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbLoadNode @ 0x1406AAD94 (PiDrvDbLoadNode.c)
 *     PiDevCfgProcessDevice @ 0x1406F56C4 (PiDevCfgProcessDevice.c)
 *     PnpRebalance @ 0x140840B08 (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x1409CC918 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObjectWithStatus(
        PCEVENT_DESCRIPTOR EventDescriptor,
        unsigned __int16 *a2,
        int a3)
{
  REGHANDLE v3; // rbx
  int v7; // ecx
  __int16 v8; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  int *v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]
  int v16; // [rsp+B0h] [rbp+30h] BYREF

  v16 = a3;
  v3 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v7 = *a2;
  UserData.Reserved = 0;
  v12 = 0;
  v15 = 0;
  v8 = (unsigned __int16)v7 >> 1;
  UserData.Ptr = (ULONGLONG)&v8;
  v10 = *((_QWORD *)a2 + 1);
  v13 = &v16;
  v11 = v7;
  UserData.Size = 2;
  v14 = 4;
  return EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
}
