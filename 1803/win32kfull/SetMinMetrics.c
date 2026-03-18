/*
 * XREFs of SetMinMetrics @ 0x1C0053C74
 * Callers:
 *     UserOnGreTextReady @ 0x1C0050168 (UserOnGreTextReady.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C005068C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 *     xxxInitWindowStation @ 0x1C00B3FAC (xxxInitWindowStation.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C0053FE8 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall SetMinMetrics(struct _UNICODE_STRING *a1, char *a2)
{
  char *v2; // r8
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-38h] BYREF
  char v9; // [rsp+38h] [rbp-30h] BYREF
  int TWIPSMetricById; // [rsp+3Ch] [rbp-2Ch]
  int v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+44h] [rbp-24h]
  int v13; // [rsp+48h] [rbp-20h]

  v2 = a2;
  if ( !a2 )
  {
    TWIPSMetricById = GetTWIPSMetricById(a1, 0x92u, -2310);
    v11 = GetTWIPSMetricById(a1, 0x93u, 0);
    v12 = GetTWIPSMetricById(a1, 0x94u, 0);
    FastGetProfileIntFromID(a1, 23LL, 150LL, 0LL, &v8, 0);
    v2 = &v9;
    v13 = v8;
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
