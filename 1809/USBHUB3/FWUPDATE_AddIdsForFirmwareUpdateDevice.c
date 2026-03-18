/*
 * XREFs of FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x1C007A320
 * Callers:
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C007A588 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0010EB4 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FWUPDATE_AddIdsForFirmwareUpdateDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // r15d
  unsigned __int16 v5; // r12
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  unsigned __int16 v9; // r9
  int v11; // [rsp+20h] [rbp-99h]
  NTSTATUS v12; // [rsp+28h] [rbp-91h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-89h] BYREF
  char v14; // [rsp+40h] [rbp-79h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 2466);
  v3 = *(unsigned __int16 *)(a1 + 2464);
  v5 = *(_WORD *)(a1 + 2468);
  *(_DWORD *)&DestinationString.Length = 9437184;
  DestinationString.Buffer = (wchar_t *)&v14;
  v7 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&GFU", v3, v2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 11;
LABEL_21:
    v12 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v9,
      (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
      v12);
    return v8;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1696))(
         WdfDriverGlobals,
         a2,
         &DestinationString);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 12;
    goto LABEL_21;
  }
  v11 = v5;
  v7 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&REV_%04X&GFU", v3, v2, v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 13;
    goto LABEL_21;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1712))(
         WdfDriverGlobals,
         a2,
         &DestinationString);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 14;
    goto LABEL_21;
  }
  v7 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&GFU", v3, v2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 15;
    goto LABEL_21;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1712))(
         WdfDriverGlobals,
         a2,
         &DestinationString);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 16;
    goto LABEL_21;
  }
  v7 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_WINUSB&MS_SUBCOMP_GFU");
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 17;
    goto LABEL_21;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1720))(
         WdfDriverGlobals,
         a2,
         &DestinationString);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 18;
    goto LABEL_21;
  }
  v7 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_WINUSB");
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 19;
    goto LABEL_21;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1720))(
         WdfDriverGlobals,
         a2,
         &DestinationString);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 20;
    goto LABEL_21;
  }
  return v8;
}
