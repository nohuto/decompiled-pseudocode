/*
 * XREFs of UsbhGetInitRegUsbDeviceFlags @ 0x1C0022354
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C00257FC (UsbhGetPersistedUsbFlagsPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0053C6C (WPP_RECORDER_SF_DDD.c)
 */

void __fastcall UsbhGetInitRegUsbDeviceFlags(__int64 a1, __int64 a2)
{
  _WORD *v3; // rdi
  __int64 v4; // rcx
  int v5; // edx
  void *PersistedUsbFlagsPath; // rbx
  int v7; // r8d
  wchar_t *v8; // rax
  wchar_t **v9; // rdi
  PVOID SystemRoutineAddress; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall *v12)(int, int, int, int, __int64, __int64); // [rsp+58h] [rbp-29h] BYREF
  int v13; // [rsp+60h] [rbp-21h]
  wchar_t *v14; // [rsp+68h] [rbp-19h]
  wchar_t **v15; // [rsp+70h] [rbp-11h]
  int v16; // [rsp+78h] [rbp-9h]
  __int64 v17; // [rsp+80h] [rbp-1h]
  int v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  int v20; // [rsp+98h] [rbp+17h]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      79,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids);
  v3 = PdoExt(a2);
  PersistedUsbFlagsPath = (void *)UsbhGetPersistedUsbFlagsPath(v4, a2);
  if ( PersistedUsbFlagsPath )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDD(
          WPP_GLOBAL_Control->DeviceExtension,
          (unsigned __int16)v3[706],
          (unsigned __int16)v3[705],
          80,
          (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
          v3[704],
          v3[705],
          v3[706]);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          v7,
          81,
          (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
          (__int64)PersistedUsbFlagsPath);
    }
    v8 = GlobalInitDeviceValues;
    v9 = &GlobalInitDeviceValues;
    while ( v8 )
    {
      v14 = v8;
      v16 = *((_DWORD *)v9 + 2);
      v12 = UsbhQueryGlobalDeviceValue;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      v13 = 0;
      v15 = v9;
      v17 = 0LL;
      v18 = 0;
      v19 = 0LL;
      v20 = 0;
      v21 = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = RtlQueryRegistryValues;
      ((void (__fastcall *)(_QWORD, void *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))SystemRoutineAddress)(
        0LL,
        PersistedUsbFlagsPath,
        &v12,
        a2,
        0LL);
      v9 += 3;
      v8 = *v9;
    }
    ExFreePoolWithTag(PersistedUsbFlagsPath, 0);
  }
}
