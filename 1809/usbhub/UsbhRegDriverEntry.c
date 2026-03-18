/*
 * XREFs of UsbhRegDriverEntry @ 0x1C00259D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhRegCreateUsbflagsKey @ 0x1C00249B8 (UsbhRegCreateUsbflagsKey.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C0051CF0 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhRegDriverEntry(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)); // rax
  char v6; // al
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  _UNKNOWN **v10; // rbx
  unsigned __int16 v11; // bx
  WCHAR *PoolWithTag; // rax
  const WCHAR *v13; // rdi
  wchar_t *Buffer; // rbx
  unsigned int v15; // edi
  PVOID v16; // rax
  char v17; // al
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  _UNKNOWN **v21; // rbx
  int v23; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  __int64 v27; // [rsp+88h] [rbp+10h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      a3,
      91,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      *(_QWORD *)(a2 + 8));
  v27 = 0LL;
  KseQueryDeviceFlags(L"USBHUB:GLOBAL_FLAGS", L"USBHUB", &v27);
  if ( (v27 & 1) != 0 )
    dword_1C006E68C = 1;
  v4 = 112;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      61,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)))RtlQueryRegistryValues;
  v23 = 0;
  v6 = SystemRoutineAddress(1LL, L"usb", &GlobalUsbhubLegacyValues);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      62,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      v6);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      63,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      (__int64)L"usb");
  v10 = &off_1C005F788;
  do
  {
    if ( !*(v10 - 3) )
      break;
    if ( *((_DWORD *)v10 + 2) == 4 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_SD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)*v10,
        v8,
        v9,
        v23,
        (__int64)*(v10 - 1),
        *(_DWORD *)*v10);
    v10 += 7;
    v4 -= 56;
  }
  while ( v4 >= 0x38 );
  v11 = *(_WORD *)a2 + 12;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v11, 0x42554855u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v11);
    RtlInitUnicodeString(&Destination, v13);
    Destination.MaximumLength = v11;
    RtlCopyUnicodeString(&Destination, (PCUNICODE_STRING)a2);
    if ( RtlAppendUnicodeToString(&Destination, L"\\hubg") >= 0 )
    {
      Buffer = Destination.Buffer;
      v15 = 1120;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          61,
          (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids);
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      v16 = MmGetSystemRoutineAddress(&DestinationString);
      if ( !v16 )
        v16 = RtlQueryRegistryValues;
      v24 = 0;
      v17 = ((__int64 (__fastcall *)(_QWORD, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD))v16)(
              0LL,
              Buffer,
              &GlobalUsbhubValues,
              0LL);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          62,
          (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
          v17);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v19,
          63,
          (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
          (__int64)Buffer);
      v21 = &off_1C005F328;
      do
      {
        if ( !*(v21 - 3) )
          break;
        if ( *((_DWORD *)v21 + 2) == 4 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_SD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_DWORD *)*v21,
            v19,
            v20,
            v24,
            (__int64)*(v21 - 1),
            *(_DWORD *)*v21);
        v21 += 7;
        v15 -= 56;
      }
      while ( v15 >= 0x38 );
    }
    RtlFreeUnicodeString(&Destination);
  }
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 2;
  return 0LL;
}
