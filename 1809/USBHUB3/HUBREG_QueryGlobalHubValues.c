/*
 * XREFs of HUBREG_QueryGlobalHubValues @ 0x1C0074758
 * Callers:
 *     DriverEntry @ 0x1C007D008 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryGlobalHubValues(__int64 a1)
{
  __int64 result; // rax
  char v3; // al
  unsigned __int16 v4; // r9
  __int64 v5; // [rsp+28h] [rbp-18h]
  unsigned int v6; // [rsp+70h] [rbp+30h] BYREF
  __int64 v7; // [rsp+78h] [rbp+38h] BYREF

  v7 = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 4), 0x80u);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
             WdfDriverGlobals,
             0LL,
             &g_HubGlobalKeyName,
             131097LL,
             0LL,
             &v7);
  if ( (int)result < 0 )
    goto LABEL_48;
  v6 = 0;
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                      WdfDriverGlobals,
                      v7,
                      L"24",
                      4LL,
                      &v6,
                      0LL,
                      0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
    {
      v4 = 42;
      goto LABEL_47;
    }
  }
  else if ( v6 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 4), 2u);
  }
  v6 = 0;
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                      WdfDriverGlobals,
                      v7,
                      L"$&",
                      4LL,
                      &v6,
                      0LL,
                      0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
    {
      v4 = 44;
      goto LABEL_47;
    }
  }
  else if ( v6 > 2 )
  {
    LODWORD(v5) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      2u,
      2u,
      0x2Bu,
      (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
      v5);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v6;
  }
  v6 = 0;
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                      WdfDriverGlobals,
                      v7,
                      L"(*",
                      4LL,
                      &v6,
                      0LL,
                      0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
    {
      v4 = 45;
      goto LABEL_47;
    }
  }
  else if ( v6 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 4), 8u);
  }
  v6 = 0;
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                      WdfDriverGlobals,
                      v7,
                      L"&(",
                      4LL,
                      &v6,
                      0LL,
                      0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
    {
      v4 = 46;
      goto LABEL_47;
    }
  }
  else if ( !v6 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFF7F);
  }
  v6 = 0;
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                      WdfDriverGlobals,
                      v7,
                      L"\"$",
                      4LL,
                      &v6,
                      0LL,
                      0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
    {
      v4 = 47;
      goto LABEL_47;
    }
  }
  else if ( v6 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 4), 0x10u);
  }
  v6 = 0;
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                      WdfDriverGlobals,
                      v7,
                      L"02",
                      4LL,
                      &v6,
                      0LL,
                      0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
    {
      v4 = 48;
      goto LABEL_47;
    }
  }
  else
  {
    v3 = v6;
    if ( v6 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 4), 0x20u);
      v3 = v6;
    }
    if ( (v3 & 8) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 4), 0x2000u);
      v3 = v6;
    }
    if ( (v3 & 4) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 4), 0x4000u);
  }
  v6 = 0;
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                      WdfDriverGlobals,
                      v7,
                      &g_WakeOnConnectUI,
                      4LL,
                      &v6,
                      0LL,
                      0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
      goto LABEL_27;
    v4 = 49;
LABEL_47:
    LODWORD(v5) = result;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 64),
               2u,
               2u,
               v4,
               (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
               v5);
    goto LABEL_48;
  }
  if ( v6 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 4), 0x40u);
LABEL_27:
  v6 = 0;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v7,
             L"NP",
             4LL,
             &v6,
             0LL,
             0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
      goto LABEL_48;
    v4 = 50;
    goto LABEL_47;
  }
  if ( v6 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 4), 0x10000u);
LABEL_48:
  if ( v7 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
