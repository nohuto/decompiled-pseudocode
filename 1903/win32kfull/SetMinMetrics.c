/*
 * XREFs of SetMinMetrics @ 0x1C00E463C
 * Callers:
 *     xxxInitWindowStation @ 0x1C00E04A8 (xxxInitWindowStation.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00E122C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00E886C (UserOnGreTextReady.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C00E49F8 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall SetMinMetrics(struct _UNICODE_STRING *a1, __int64 *a2)
{
  __int64 *v2; // r8
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  v9 = 0LL;
  v2 = a2;
  v10 = 0LL;
  v11 = 0;
  if ( !a2 )
  {
    HIDWORD(v9) = GetTWIPSMetricById(a1, 0x92u, -2310);
    LODWORD(v10) = GetTWIPSMetricById(a1, 0x93u, 0);
    HIDWORD(v10) = GetTWIPSMetricById(a1, 0x94u, 0);
    FastGetProfileIntFromID(a1, 23LL, 150LL);
    v2 = &v9;
    v11 = v8;
  }
  v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  if ( v4 <= 0 )
    v4 = 0;
  *((_DWORD *)v2 + 1) = v4;
  if ( v5 <= 0 )
    v5 = 0;
  *((_DWORD *)v2 + 2) = v5;
  v6 = *((_DWORD *)v2 + 3);
  if ( v6 <= 0 )
    v6 = 0;
  *((_DWORD *)v2 + 4) &= 0xFu;
  *((_DWORD *)v2 + 3) = v6;
  *(_DWORD *)(gpsi + 2124LL) = v4 + 6;
  *(_DWORD *)(gpsi + 2128LL) = *(_DWORD *)(gpsi + 2336LL) + 6;
  *(_DWORD *)(gpsi + 2084LL) = *((_DWORD *)v2 + 2) + *(_DWORD *)(gpsi + 2124LL);
  *(_DWORD *)(gpsi + 2088LL) = *((_DWORD *)v2 + 3) + *(_DWORD *)(gpsi + 2128LL);
  result = *((unsigned int *)v2 + 4);
  *(_DWORD *)(gpsi + 2120LL) = result;
  return result;
}
