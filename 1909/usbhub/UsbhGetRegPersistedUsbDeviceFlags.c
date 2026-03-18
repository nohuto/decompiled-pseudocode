/*
 * XREFs of UsbhGetRegPersistedUsbDeviceFlags @ 0x1C0022A90
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0025DB8 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C00257FC (UsbhGetPersistedUsbFlagsPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhGetRegPersistedUsbDeviceFlags(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  wchar_t *v6; // rax
  wchar_t **v7; // rsi
  PVOID SystemRoutineAddress; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-29h] BYREF
  __int64 (__fastcall *v10)(int, int, int, int, __int64, __int64); // [rsp+48h] [rbp-19h] BYREF
  int v11; // [rsp+50h] [rbp-11h]
  wchar_t *v12; // [rsp+58h] [rbp-9h]
  wchar_t **v13; // [rsp+60h] [rbp-1h]
  int v14; // [rsp+68h] [rbp+7h]
  __int64 v15; // [rsp+70h] [rbp+Fh]
  int v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+90h] [rbp+2Fh]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      85,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids);
  PdoExt(a2);
  result = UsbhGetPersistedUsbFlagsPath(v3, a2);
  v5 = result;
  if ( result )
  {
    v6 = GlobalPersistedDeviceValues;
    v7 = &GlobalPersistedDeviceValues;
    while ( v6 )
    {
      v12 = v6;
      v14 = *((_DWORD *)v7 + 2);
      v10 = UsbhQueryGlobalDeviceValue;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      v11 = 0;
      v13 = v7;
      v15 = 0LL;
      v16 = 0;
      v17 = 0LL;
      v18 = 0;
      v19 = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = RtlQueryRegistryValues;
      ((void (__fastcall *)(_QWORD, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))SystemRoutineAddress)(
        0LL,
        v5,
        &v10,
        a2,
        0LL);
      v7 += 3;
      v6 = *v7;
    }
    return v5;
  }
  return result;
}
