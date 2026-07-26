/*
 * XREFs of ndisMediaDisconnectWorker @ 0x1C00F5460
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisRequestDeviceLowPower @ 0x1C00B8D00 (ndisRequestDeviceLowPower.c)
 */

void __fastcall ndisMediaDisconnectWorker(_QWORD *P)
{
  _DWORD *v1; // rbx
  POWER_STATE v3; // edi
  POWER_STATE v4; // r14d
  _BYTE v5[248]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+130h] [rbp+30h] BYREF
  __int64 v7; // [rsp+138h] [rbp+38h]
  int v8; // [rsp+140h] [rbp+40h]

  v1 = (_DWORD *)P[4];
  memset(v5, 0, sizeof(v5));
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x15u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
  if ( (v1[1115] & 8) != 0 )
  {
    v3.SystemState = v1[318];
    v4.SystemState = v1[277];
    LODWORD(v6) = 1311360;
    HIDWORD(v7) = 1;
    memset(v5, 0, sizeof(v5));
    *(_DWORD *)&v5[88] |= 8u;
    *(_DWORD *)&v5[8] = 0;
    *(_QWORD *)&v5[104] = &ndisIntReqGeneric;
    *(_DWORD *)v5 = 15466902;
    *(_QWORD *)&v5[40] = &v6;
    *(_DWORD *)&v5[32] = -50265847;
    *(_DWORD *)&v5[4] = 1;
    *(_DWORD *)&v5[48] = 20;
    if ( !(unsigned int)ndisQuerySetMiniport(v1, 0LL, (struct _NDIS_OID_REQUEST *)v5, 0LL, 0LL) )
    {
      v1[333] = v1[317];
      if ( v3.SystemState >= v4.SystemState )
        v3.SystemState = v4.SystemState;
      ndisRequestDeviceLowPower((__int64)v1, v3, (REQUEST_POWER_COMPLETE *)ndisMediaDisconnectComplete, v1, 4u);
    }
    ExFreePoolWithTag(P, 0);
  }
  ndisDereferenceMiniport((__int64)v1, 0xBu);
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x16u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
}
