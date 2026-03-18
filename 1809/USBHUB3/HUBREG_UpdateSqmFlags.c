/*
 * XREFs of HUBREG_UpdateSqmFlags @ 0x1C0076E6C
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C0017F60 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006E360 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

int __fastcall HUBREG_UpdateSqmFlags(__int64 a1)
{
  __int64 v2; // rax
  int result; // eax
  unsigned __int16 v4; // r9
  int v5; // eax
  int v6; // edi
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-28h]
  int v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
             WdfDriverGlobals,
             v2,
             1LL,
             131103LL,
             0LL,
             &v13);
  if ( result < 0 )
  {
    v4 = 119;
LABEL_29:
    v9 = *(_QWORD *)(a1 + 8);
    goto LABEL_30;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
             WdfDriverGlobals,
             v13,
             L"\b\n",
             131103LL,
             0,
             0LL,
             0LL,
             &v12);
  if ( result < 0 )
  {
    v4 = 120;
    goto LABEL_29;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, int *))(WdfFunctions_01015 + 1920))(
         WdfDriverGlobals,
         v12,
         L"\"$",
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v11;
  }
  else
  {
    if ( v5 != -1073741772 )
    {
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C005F130);
      LODWORD(v10) = v6;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(v7 + 64),
                 2u,
                 2u,
                 0x79u,
                 (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
                 v10);
      goto LABEL_31;
    }
    v8 = 0;
  }
  v11 = *(_DWORD *)(a1 + 1640) | 8 | v8;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *))(WdfFunctions_01015 + 1968))(
             WdfDriverGlobals,
             v12,
             L"\"$");
  v9 = *(_QWORD *)(a1 + 8);
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD))(WdfFunctions_01015 + 1968))(
               WdfDriverGlobals,
               v12,
               L"(*",
               *(unsigned int *)(v9 + 216));
    if ( result >= 0 )
    {
      result = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 2592));
      if ( !result )
        goto LABEL_31;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                 WdfDriverGlobals,
                 v12,
                 L"24",
                 4LL,
                 4,
                 a1 + 2608);
      if ( result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                   WdfDriverGlobals,
                   v12,
                   L"24",
                   4LL,
                   4,
                   a1 + 2612);
        if ( result >= 0 )
        {
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                     WdfDriverGlobals,
                     v12,
                     L"24",
                     4LL,
                     4,
                     a1 + 2616);
          if ( result >= 0 )
          {
            result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                       WdfDriverGlobals,
                       v12,
                       L"24",
                       4LL,
                       4,
                       a1 + 2620);
            if ( result >= 0 )
            {
              result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                         WdfDriverGlobals,
                         v12,
                         L"24",
                         4LL,
                         4,
                         a1 + 2624);
              if ( result >= 0 )
              {
                result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                           WdfDriverGlobals,
                           v12,
                           L"24",
                           4LL,
                           4,
                           a1 + 2628);
                if ( result >= 0 )
                {
                  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                             WdfDriverGlobals,
                             v12,
                             L"24",
                             4LL,
                             4,
                             a1 + 2632);
                  if ( result >= 0 )
                    goto LABEL_31;
                  v4 = 130;
                }
                else
                {
                  v4 = 129;
                }
              }
              else
              {
                v4 = 128;
              }
            }
            else
            {
              v4 = 127;
            }
          }
          else
          {
            v4 = 126;
          }
        }
        else
        {
          v4 = 125;
        }
      }
      else
      {
        v4 = 124;
      }
    }
    else
    {
      v4 = 123;
    }
    goto LABEL_29;
  }
  v4 = 122;
LABEL_30:
  LODWORD(v10) = result;
  result = WPP_RECORDER_SF_d(
             *(_QWORD *)(v9 + 1432),
             2u,
             5u,
             v4,
             (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
             v10);
LABEL_31:
  if ( v12 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v13 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
