/*
 * XREFs of UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C00216A0
 * Callers:
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0023890 (UsbhGetRegUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     RtlStringCbPrintfW @ 0x1C0024E10 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C0051CF0 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhRegQueryGlobalLegacyDeviceKeys(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v5; // r14
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // r15d
  unsigned int v9; // edi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const WCHAR *, void **); // rax
  unsigned int v11; // eax
  int v12; // r9d
  int **v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-E0h]
  int v16; // [rsp+20h] [rbp-E0h]
  __int16 v17; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  __int16 *v20; // [rsp+60h] [rbp-A0h]
  int v21; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v22; // [rsp+70h] [rbp-90h]
  void *v23; // [rsp+90h] [rbp-70h] BYREF
  int v24; // [rsp+98h] [rbp-68h]
  wchar_t *v25; // [rsp+A0h] [rbp-60h]
  int *v26; // [rsp+A8h] [rbp-58h] BYREF
  int v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+C0h] [rbp-40h]
  void *v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+D0h] [rbp-30h]
  const wchar_t *v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  int v34; // [rsp+E8h] [rbp-18h]
  __int64 v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  __int64 v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+108h] [rbp+8h]
  __int64 v39; // [rsp+110h] [rbp+10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      72,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids);
  v3 = PdoExt(a2);
  v3[358] &= ~0x800u;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x36uLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x36uLL);
  v17 = 0;
  LODWORD(v15) = *((unsigned __int16 *)v3 + 705);
  v8 = RtlStringCbPrintfW(v5, 0x36uLL, L"IgnoreHWSerNum%04x%04x", *((unsigned __int16 *)v3 + 704), v15);
  if ( (v8 & 0xC0000000) != 0xC0000000 )
  {
    v24 = 0;
    v20 = &v17;
    v23 = &UsbhQueryGlobalLegacyDeviceValue;
    v26 = &v19;
    v9 = 168;
    v25 = v5;
    v32 = L"GenericUSBDeviceString";
    v22 = v3 + 548;
    v33 = &v21;
    v19 = 3;
    v27 = 3;
    v28 = 0LL;
    v29 = 2;
    v30 = &UsbhQueryGlobalLegacyDeviceValue;
    v31 = 0;
    v21 = 0;
    v34 = 0;
    v35 = 0LL;
    v36 = 0;
    v37 = 0LL;
    v38 = 0;
    v39 = 0LL;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        61,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids);
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))RtlQueryRegistryValues;
    v16 = 0;
    v11 = SystemRoutineAddress(2LL, L"usbflags", &v23);
    v8 = v11;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        62,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        v11);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        v7,
        63,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        (__int64)L"usbflags");
    v13 = &v26;
    do
    {
      if ( !*(v13 - 3) )
        break;
      if ( *((_DWORD *)v13 + 2) == 4 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_SD(WPP_GLOBAL_Control->DeviceExtension, **v13, v7, v12, v16, (__int64)*(v13 - 1), **v13);
      v13 += 7;
      v9 -= 56;
    }
    while ( v9 >= 0x38 );
    if ( (v8 & 0xC0000000) != 0xC0000000 && (_BYTE)v17 )
      v3[358] |= 0x800u;
  }
  if ( v3[549] )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        v7,
        73,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        *((_QWORD *)v3 + 275));
  }
  ExFreePoolWithTag(v5, 0);
  return v8;
}
