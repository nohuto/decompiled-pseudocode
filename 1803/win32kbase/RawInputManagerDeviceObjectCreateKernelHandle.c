/*
 * XREFs of RawInputManagerDeviceObjectCreateKernelHandle @ 0x1C00F1D78
 * Callers:
 *     rimCreateDev @ 0x1C00F86B0 (rimCreateDev.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreateKernelHandle(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // ebx

  *Handle = (void *)-1LL;
  if ( a1[1] == 2 )
  {
    v7 = ObOpenObjectByPointer(a1, 0x200u, 0LL, 3u, ExRawInputManagerObjectType, 0, Handle);
    if ( v7 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  }
  else
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v7;
}
