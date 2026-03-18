/*
 * XREFs of HUBREG_QueryValuesInHubHardwareKey @ 0x1C0074BAC
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C006AC40 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryValuesInHubHardwareKey(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int16 v4; // r9
  __int64 v5; // [rsp+28h] [rbp-18h]
  unsigned int v6; // [rsp+60h] [rbp+20h] BYREF
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v7 = 0LL;
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
                      WdfDriverGlobals,
                      v1,
                      1LL,
                      131097LL,
                      0LL,
                      &v7);
  if ( (int)result < 0 )
  {
    v4 = 51;
LABEL_20:
    LODWORD(v5) = result;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 2520),
               2u,
               3u,
               v4,
               (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
               v5);
    goto LABEL_21;
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
      v4 = 52;
      goto LABEL_20;
    }
  }
  else if ( v6 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x100u);
  }
  v6 = 0;
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                      WdfDriverGlobals,
                      v7,
                      &g_HubInstHardResetCount,
                      4LL,
                      &v6,
                      0LL,
                      0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
    {
      v4 = 53;
      goto LABEL_20;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 56) = v6;
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
      v4 = 54;
      goto LABEL_20;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (v6 << 29)) & 0x20000000;
  }
  v6 = 0;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, unsigned int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v7,
             L"&(",
             4LL,
             &v6,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    result = v6;
    *(_DWORD *)(a1 + 160) = v6;
    goto LABEL_21;
  }
  if ( (_DWORD)result != -1073741772 )
  {
    v4 = 55;
    goto LABEL_20;
  }
LABEL_21:
  if ( v7 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
