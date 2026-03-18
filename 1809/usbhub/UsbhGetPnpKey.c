/*
 * XREFs of UsbhGetPnpKey @ 0x1C005BF68
 * Callers:
 *     UsbhBuildUxdPnpId @ 0x1C005BA30 (UsbhBuildUxdPnpId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhGetPnpKey(__int64 a1, __int64 a2, const GUID *a3, _QWORD *a4, _DWORD *a5)
{
  NTSTATUS result; // eax
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, void **); // rax
  int v9; // ebx
  int v10; // edx
  __int64 v11; // [rsp+30h] [rbp-61h] BYREF
  int v12; // [rsp+38h] [rbp-59h]
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-51h] BYREF
  void *v14; // [rsp+50h] [rbp-41h] BYREF
  int v15; // [rsp+58h] [rbp-39h]
  wchar_t *Buffer; // [rsp+60h] [rbp-31h]
  __int64 *v17; // [rsp+68h] [rbp-29h]
  int v18; // [rsp+70h] [rbp-21h]
  __int64 v19; // [rsp+78h] [rbp-19h]
  int v20; // [rsp+80h] [rbp-11h]
  __int64 v21; // [rsp+88h] [rbp-9h]
  int v22; // [rsp+90h] [rbp-1h]
  __int64 v23; // [rsp+98h] [rbp+7h]
  __int64 v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A8h] [rbp+17h]
  __int64 v26; // [rsp+B0h] [rbp+1Fh]
  int v27; // [rsp+B8h] [rbp+27h]
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp+2Fh] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x20u,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids);
  result = RtlStringFromGUID(a3, &GuidString);
  if ( result >= 0 )
  {
    v11 = 0LL;
    v14 = &UsbhQueryUxdDevice;
    Buffer = GuidString.Buffer;
    v17 = &v11;
    v12 = 0;
    v15 = 4;
    v18 = 0;
    v19 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v22 = 0;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0;
    v26 = 0LL;
    v27 = 0;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, void **))MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, void **))RtlQueryRegistryValues;
    v9 = SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\pnp", &v14);
    RtlFreeUnicodeString(&GuidString);
    if ( v9 >= 0 )
    {
      if ( !v11 )
        return -1073741811;
      v10 = v12;
      if ( !v12 )
        return -1073741811;
      *a4 = v11;
      *a5 = v10;
    }
    return v9;
  }
  return result;
}
