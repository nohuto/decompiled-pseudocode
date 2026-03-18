/*
 * XREFs of DxgkMiracastStopMiracastSession @ 0x1C0048B74
 * Callers:
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C01D5D20 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0046480 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00466D0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C0269634 (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastStopMiracastSession(const WCHAR *a1, struct _KEVENT *a2)
{
  char *DeviceContextFromName; // rax
  __int64 v4; // rcx
  int *v5; // rdi
  __int64 v6; // rax
  unsigned int v8; // ebx
  size_t v9; // [rsp+28h] [rbp-10h]

  DeviceContextFromName = (char *)DpiMiracastGetDeviceContextFromName(a1);
  v5 = (int *)DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    LODWORD(v9) = 0;
    v8 = DpiMiracastStopMiracastSessionSync(DeviceContextFromName, 0, 0LL, a2, 0x80u, v9);
    DpiMiracastReleaseMiracastDeviceContext(v5, (unsigned int)v5);
    return v8;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v6);
    if ( a2 )
      ObfDereferenceObject(a2);
    return 2147483654LL;
  }
}
