/*
 * XREFs of HUBREG_EvtWorkItemPerformPostSurpriseRemovalRecoveryActions @ 0x1C0076B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_EvtWorkItemPerformPostSurpriseRemovalRecoveryActions(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // ebx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  unsigned __int16 v9; // r9
  __int64 v11; // [rsp+28h] [rbp-48h]
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+28h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     WdfDriverGlobals->Driver,
                     off_1C005F130)
                 + 80);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3016))(WdfDriverGlobals, v2);
  v4 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
         WdfDriverGlobals,
         v3,
         1LL) )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 3024))(
           WdfDriverGlobals,
           v2,
           0LL,
           0LL);
    if ( v5 < 0 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C005F130);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 64),
        2u,
        2u,
        0x15u,
        (__int64)&WPP_1362546fee9e322e2fa74dbd802c5a46_Traceguids,
        v5);
    }
  }
  v15 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Usb\\Ceip");
  RtlInitUnicodeString(&v12, L"BootPathSurpriseRemovalCount");
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
         WdfDriverGlobals,
         0LL,
         &DestinationString,
         131103LL,
         0,
         0LL,
         0LL,
         &v15);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, unsigned int *))(WdfFunctions_01015 + 1920))(
           WdfDriverGlobals,
           v15,
           &v12,
           &v14);
    if ( v7 < 0 )
    {
      if ( v7 != -1073741772 )
      {
        v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
               WdfDriverGlobals,
               WdfDriverGlobals->Driver,
               off_1C005F130);
        v9 = 117;
        goto LABEL_10;
      }
    }
    else
    {
      v4 = v14 + 1;
    }
    v14 = v4;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, _QWORD))(WdfFunctions_01015 + 1968))(
           WdfDriverGlobals,
           v15,
           &v12,
           v4);
    if ( v7 >= 0 )
      goto LABEL_11;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005F130);
    v9 = 118;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005F130);
    v9 = 116;
  }
LABEL_10:
  LODWORD(v11) = v7;
  WPP_RECORDER_SF_d(*(_QWORD *)(v8 + 64), 2u, 2u, v9, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids, v11);
LABEL_11:
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
