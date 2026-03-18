/*
 * XREFs of UsbhRegDriverEntry @ 0x1C0026920
 * Callers:
 *     <none>
 * Callees:
 *     UsbhRegCreateUsbflagsKey @ 0x1C0025604 (UsbhRegCreateUsbflagsKey.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C0053D54 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhRegDriverEntry(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD); // rax
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
  int v23; // [rsp+20h] [rbp-40h]
  int v24; // [rsp+20h] [rbp-40h]
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+98h] [rbp+38h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
    dword_1C006F68C = 1;
  v4 = 112;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      61,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  v23 = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD))RtlQueryRegistryValues;
  v6 = SystemRoutineAddress(1LL, L"usb", &GlobalUsbhubLegacyValues, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        62,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        v6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        v8,
        63,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        (__int64)L"usb");
  }
  v10 = &off_1C0061788;
  do
  {
    if ( !*(v10 - 3) )
      break;
    if ( *((_DWORD *)v10 + 2) == 4
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_SD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)*v10,
        v8,
        v9,
        v23,
        (__int64)*(v10 - 1),
        *(_DWORD *)*v10);
    }
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
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          61,
          (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids);
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      v16 = MmGetSystemRoutineAddress(&DestinationString);
      v24 = 0;
      if ( !v16 )
        v16 = RtlQueryRegistryValues;
      v17 = ((__int64 (__fastcall *)(_QWORD, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD))v16)(
              0LL,
              Buffer,
              &GlobalUsbhubValues,
              0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            62,
            (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
            v17);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            v19,
            63,
            (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
            (__int64)Buffer);
      }
      v21 = &off_1C0061328;
      do
      {
        if ( !*(v21 - 3) )
          break;
        if ( *((_DWORD *)v21 + 2) == 4
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_SD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_DWORD *)*v21,
            v19,
            v20,
            v24,
            (__int64)*(v21 - 1),
            *(_DWORD *)*v21);
        }
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
