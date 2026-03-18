/*
 * XREFs of Controller_GetDeviceEnumerator @ 0x1C0060980
 * Callers:
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_GetDeviceEnumerator(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct _DEVICE_OBJECT *v4; // rax
  NTSTATUS DeviceProperty; // eax
  __int64 v7; // [rsp+28h] [rbp-40h]
  NTSTATUS v8; // [rsp+28h] [rbp-40h]
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+38h] [rbp-30h] BYREF

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
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v8 = DeviceProperty;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x5Cu, (__int64)&Context.Logger + 4, v8);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v7) = v3;
    WPP_RECORDER_SF_d(a2, 4u, 4u, 0x5Du, (__int64)&Context.Logger + 4, v7);
  }
  return v3;
}
