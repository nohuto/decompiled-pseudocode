/*
 * XREFs of PepQueryPerfDomainInfo @ 0x1C00381A8
 * Callers:
 *     RegisterXsdDomain @ 0x1C0022E00 (RegisterXsdDomain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     ProcLibTracePepPerfDomain @ 0x1C0007F2C (ProcLibTracePepPerfDomain.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009A50 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepQueryPerfDomainInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v4; // edi
  char v5; // r8
  char v6; // al
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 1104);
  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v8) = *(_DWORD *)(a2 + 36);
  v4 = 0;
  if ( (int)PoFxProcessorNotification(v2, 42LL, &v8) < 0 )
    return v4;
  v5 = BYTE4(v8);
  if ( !BYTE4(v8) )
  {
    *(_DWORD *)(a2 + 40) = 252;
    goto LABEL_11;
  }
  if ( BYTE4(v8) == 1 )
  {
    *(_DWORD *)(a2 + 40) = 253;
    goto LABEL_11;
  }
  if ( BYTE4(v8) == 2 )
  {
    *(_DWORD *)(a2 + 40) = 254;
LABEL_11:
    v6 = BYTE5(v8);
    *(_WORD *)(a2 + 58) = HIWORD(v8);
    *(_QWORD *)(a2 + 60) = v9;
    *(_BYTE *)(a2 + 56) = v5;
    *(_BYTE *)(a2 + 57) = v6;
    ProcLibTracePepPerfDomain((unsigned __int8 *)a2, 0);
    return v4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x21u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      BYTE4(v8));
  return (unsigned int)-1073741811;
}
