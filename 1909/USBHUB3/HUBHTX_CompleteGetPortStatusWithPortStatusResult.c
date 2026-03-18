/*
 * XREFs of HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C0005D10
 * Callers:
 *     HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer @ 0x1C0007FB0 (HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBHTX_CompleteGetPortStatusWithPortStatusResult(__int64 *a1)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  v2 = *(_DWORD *)(a1[323] + 184);
  v3 = *(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(
                                 WdfDriverGlobals,
                                 a1[316])
                             + 184)
                 + 24LL);
  if ( v3 == 2228240 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2144))(
           WdfDriverGlobals,
           a1[316],
           &v9);
    if ( v4 >= 0 )
    {
      *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v9,
                   0LL)
               + 4) = v2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
        WdfDriverGlobals,
        a1[316],
        8LL);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(a1[315], 2u, 3u, 0x71u, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids, v4);
    }
  }
  else if ( v3 == 2228243 )
  {
    v5 = a1[316];
    LOWORD(v10[0]) = 40;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
      WdfDriverGlobals,
      v5,
      v10);
    v6 = (_DWORD *)v10[1];
    v4 = 0;
    v7 = v10[2];
    if ( (v2 & 1) != 0 )
      *(_DWORD *)v10[1] |= 2u;
    else
      v4 = -1073741810;
    if ( (v2 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v7 + 32) & 0x2000) != 0 )
        _InterlockedAnd((volatile signed __int32 *)(v7 + 32), 0xFFFFDFFF);
      else
        *v6 |= 1u;
    }
    if ( (v2 & 0x10000) != 0 )
      v4 = -1073741810;
  }
  else
  {
    v4 = -1073741630;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a1[316],
           (unsigned int)v4);
}
