/*
 * XREFs of HUBREG_QueryUxdDeviceKey @ 0x1C0075EE4
 * Callers:
 *     HUBREG_UpdateUxdSettings @ 0x1C00761A8 (HUBREG_UpdateUxdSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0010EB4 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryUxdDeviceKey(__int64 a1, __int64 a2)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+20h] [rbp-98h]
  __int64 v8; // [rsp+28h] [rbp-90h]
  __int64 v9; // [rsp+40h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-70h] BYREF
  __int64 v11; // [rsp+58h] [rbp-60h] BYREF

  *(_DWORD *)&DestinationString.Length = 3407872;
  DestinationString.Buffer = (wchar_t *)&v11;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                  + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UxdDeviceSettingsKey,
         131097LL,
         0LL,
         &v9);
  if ( v4 >= 0 )
  {
    LODWORD(v7) = *(unsigned __int16 *)(a1 + 2000);
    v5 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"%04X%04X%04X",
           *(unsigned __int16 *)(a1 + 1996),
           *(unsigned __int16 *)(a1 + 1998),
           v7);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v9,
             &DestinationString,
             68LL,
             a2,
             0LL,
             0LL);
    }
    else
    {
      LODWORD(v8) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x68u,
        (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
        v8);
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v4;
}
