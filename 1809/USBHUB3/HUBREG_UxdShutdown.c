/*
 * XREFs of HUBREG_UxdShutdown @ 0x1C0076940
 * Callers:
 *     HUBFDO_EvtDeviceShutdownPreprocess @ 0x1C000AD10 (HUBFDO_EvtDeviceShutdownPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBREG_QueryGlobalUxdSettings @ 0x1C0075968 (HUBREG_QueryGlobalUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C0076754 (HUBREG_DeleteUxdSubKeys.c)
 */

__int64 __fastcall HUBREG_UxdShutdown(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  int v4; // eax
  unsigned __int16 v5; // r9
  __int64 v7; // [rsp+28h] [rbp-28h]
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF

  v10 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005F130);
  HUBREG_QueryGlobalUxdSettings(v2);
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UxdDeviceSettingsKey,
         983103LL,
         0LL,
         &v10) >= 0 )
    HUBREG_DeleteUxdSubKeys(a1, v2, v10);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         1LL,
         983103LL,
         0LL,
         &v9);
  if ( v3 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
           WdfDriverGlobals,
           v9,
           &g_UxdPortSettingsKey,
           983103LL,
           0LL,
           &v8);
    v3 = v4;
    if ( v4 == -1073741772 )
    {
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
             WdfDriverGlobals,
             v9,
             &g_UxdPortSettingsKey,
             983103LL,
             0,
             0LL,
             0LL,
             &v8);
      v3 = v4;
      if ( v4 >= 0 )
        goto LABEL_11;
      v5 = 114;
      goto LABEL_7;
    }
    if ( v4 < 0 )
    {
      v5 = 115;
LABEL_7:
      LODWORD(v7) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v5,
        (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
        v7);
      goto LABEL_11;
    }
    HUBREG_DeleteUxdSubKeys(a1, v2, v8);
  }
LABEL_11:
  if ( v10 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v8 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v9 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v3;
}
