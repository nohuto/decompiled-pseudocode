/*
 * XREFs of UsbhGetInitRegUsbDeviceFlags @ 0x1C0021920
 * Callers:
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C0024BB0 (UsbhGetPersistedUsbFlagsPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0051C08 (WPP_RECORDER_SF_DDD.c)
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
  int v10; // eax
  PVOID SystemRoutineAddress; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall *v13)(int, int, int, int, __int64, __int64); // [rsp+58h] [rbp-29h] BYREF
  int v14; // [rsp+60h] [rbp-21h]
  wchar_t *v15; // [rsp+68h] [rbp-19h]
  wchar_t **v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+98h] [rbp+17h]
  __int64 v22; // [rsp+A0h] [rbp+1Fh]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        v7,
        81,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        (__int64)PersistedUsbFlagsPath);
    v8 = GlobalInitDeviceValues;
    v9 = &GlobalInitDeviceValues;
    while ( v8 )
    {
      v15 = v8;
      v10 = *((_DWORD *)v9 + 2);
      v13 = UsbhQueryGlobalDeviceValue;
      v14 = 0;
      v16 = v9;
      v17 = v10;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v21 = 0;
      v22 = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = RtlQueryRegistryValues;
      ((void (__fastcall *)(_QWORD, void *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))SystemRoutineAddress)(
        0LL,
        PersistedUsbFlagsPath,
        &v13,
        a2,
        0LL);
      v9 += 3;
      v8 = *v9;
    }
    ExFreePoolWithTag(PersistedUsbFlagsPath, 0);
  }
}
