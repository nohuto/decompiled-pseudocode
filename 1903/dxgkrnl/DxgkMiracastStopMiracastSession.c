/*
 * XREFs of DxgkMiracastStopMiracastSession @ 0x1C004F610
 * Callers:
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C0203B60 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF50 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1A0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02A4A1C (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastStopMiracastSession(const WCHAR *a1, struct _KEVENT *a2)
{
  char *DeviceContextFromName; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int *v7; // rdi
  __int64 v8; // rax
  unsigned int v10; // ebx
  __int64 v11; // r8

  DeviceContextFromName = (char *)DpiMiracastGetDeviceContextFromName(a1);
  v7 = (int *)DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    v10 = DpiMiracastStopMiracastSessionSync(DeviceContextFromName, 0, 0LL, a2, 0x80u, 0);
    DpiMiracastReleaseMiracastDeviceContext(v7, (__int64)v7, v11);
    return v10;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v8);
    if ( a2 )
      ObfDereferenceObject(a2);
    return 2147483654LL;
  }
}
