/*
 * XREFs of HUBREG_QueryUsbHardwareVerifierValue @ 0x1C007A028
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0074514 (HUBFDO_QueryHubErrataFlags.c)
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C0079414 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000B2B8 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryUsbHardwareVerifierValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned __int16 v10; // dx
  void *v11; // rdi
  void *v12; // rax
  NTSTATUS v13; // ebx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-79h]
  __int64 v19; // [rsp+40h] [rbp-61h] BYREF
  __int64 v20; // [rsp+48h] [rbp-59h] BYREF
  __int64 v21; // [rsp+50h] [rbp-51h] BYREF
  __int64 v22; // [rsp+58h] [rbp-49h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-41h] BYREF
  char v24; // [rsp+70h] [rbp-31h] BYREF

  v22 = a5;
  *(_QWORD *)&DestinationString.Length = 3407872LL;
  *a7 = 0;
  v10 = *(_WORD *)(a1 + 2);
  DestinationString.Buffer = (wchar_t *)&v24;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( v10 )
  {
    if ( v10 > 0x200u )
    {
      v12 = &g_HwVerifierUsb2XName;
      if ( v10 >= 0x300u )
        v12 = &g_HwVerifierUsb30Name;
      v11 = v12;
    }
    else
    {
      v11 = &g_HwVerifierUsbUpto20Name;
    }
  }
  else
  {
    v11 = &g_HwVerifierUsb30Name;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
          WdfDriverGlobals,
          0LL,
          &g_HwVerifierKeyName,
          131097LL,
          0LL,
          &v21);
  if ( v13 < 0 )
  {
    v21 = 0LL;
    goto LABEL_13;
  }
  v13 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a2, a3, a4);
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
            WdfDriverGlobals,
            v21,
            &DestinationString,
            131097LL,
            0LL,
            &v20);
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
              WdfDriverGlobals,
              v20,
              v11,
              131097LL,
              0LL,
              &v19);
      if ( v13 >= 0 )
      {
        v14 = v22;
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                WdfDriverGlobals,
                v19,
                v22,
                4LL,
                a7,
                0LL,
                0LL);
        if ( v13 >= 0 )
          goto LABEL_49;
        goto LABEL_23;
      }
      v19 = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    v14 = v22;
LABEL_23:
    if ( v13 == -1073741772 )
    {
      if ( v19 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
        v19 = 0LL;
      }
      if ( v20 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
        v20 = 0LL;
      }
      v13 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S", a2, a3);
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                WdfDriverGlobals,
                v21,
                &DestinationString,
                131097LL,
                0LL,
                &v20);
        if ( v13 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                  WdfDriverGlobals,
                  v20,
                  v11,
                  131097LL,
                  0LL,
                  &v19);
          v15 = v19;
          if ( v13 < 0 )
            v15 = 0LL;
          v19 = v15;
        }
        else
        {
          v20 = 0LL;
        }
        *a7 = 0;
        if ( v13 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                  WdfDriverGlobals,
                  v19,
                  v14,
                  4LL,
                  a7,
                  0LL,
                  0LL);
          if ( v13 >= 0 )
            goto LABEL_49;
        }
        if ( v13 == -1073741772 )
        {
          if ( v19 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
            v19 = 0LL;
          }
          if ( v20 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
            v20 = 0LL;
          }
          v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                  WdfDriverGlobals,
                  v21,
                  &g_HwVerifierGlobalName,
                  131097LL,
                  0LL,
                  &v20);
          if ( v13 >= 0 )
          {
            v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                    WdfDriverGlobals,
                    v20,
                    v11,
                    131097LL,
                    0LL,
                    &v19);
            if ( v13 >= 0 )
            {
              v16 = v19;
              *a7 = 0;
              v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                      WdfDriverGlobals,
                      v16,
                      v14,
                      4LL,
                      a7,
                      0LL,
                      0LL);
            }
            else
            {
              v19 = 0LL;
            }
          }
          else
          {
            v20 = 0LL;
          }
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v13;
        WPP_RECORDER_SF_d(a6, 2u, 5u, 0x10u, (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids, v18);
      }
    }
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = v13;
    WPP_RECORDER_SF_d(a6, 2u, 5u, 0xFu, (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids, v18);
  }
LABEL_13:
  if ( v13 < 0 )
  {
    *a7 = 0;
    if ( v13 != -1073741772 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = v13;
      WPP_RECORDER_SF_d(a6, 2u, 5u, 0x11u, (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids, v18);
    }
    goto LABEL_51;
  }
LABEL_49:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = *a7;
    WPP_RECORDER_SF_d(a6, 2u, 5u, 0x12u, (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids, v18);
  }
LABEL_51:
  if ( v19 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v20 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v21 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v13;
}
