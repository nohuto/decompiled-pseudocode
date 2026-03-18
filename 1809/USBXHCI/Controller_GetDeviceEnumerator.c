/*
 * XREFs of Controller_GetDeviceEnumerator @ 0x1C005968C
 * Callers:
 *     Controller_Create @ 0x1C0057BD4 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_GetDeviceEnumerator(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct _DEVICE_OBJECT *v4; // rax
  NTSTATUS DeviceProperty; // eax
  __int64 v7; // [rsp+28h] [rbp-30h]
  NTSTATUS v8; // [rsp+28h] [rbp-30h]
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 264))(
                                  WPP_MAIN_CB.Dpc.ProcessorHistory,
                                  a1);
  DeviceProperty = IoGetDeviceProperty(v4, DevicePropertyEnumeratorName, 0x10u, PropertyBuffer, &ResultLength);
  if ( DeviceProperty >= 0 )
  {
    if ( _wcsicmp(PropertyBuffer, L"ACPI") )
    {
      if ( !_wcsicmp(PropertyBuffer, L"URS") )
        v3 = 2;
    }
    else
    {
      v3 = 1;
    }
  }
  else
  {
    v8 = DeviceProperty;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x5Au, (__int64)&Context.Logger + 4, v8);
  }
  LODWORD(v7) = v3;
  WPP_RECORDER_SF_d(a2, 4u, 4u, 0x5Bu, (__int64)&Context.Logger + 4, v7);
  return v3;
}
