/*
 * XREFs of ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C00E49F8
 * Callers:
 *     SetIconMetrics @ 0x1C00E4424 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00E463C (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00E4788 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTWIPSMetricById(struct _UNICODE_STRING *a1, unsigned int a2)
{
  unsigned int v2; // edx
  int v4; // [rsp+58h] [rbp+20h]

  FastGetProfileIntFromID(a1, 23LL, a2);
  v2 = v4;
  if ( v4 < 0 )
    return (unsigned int)((720 - v4 * *(unsigned __int16 *)(gpsi + 6998LL)) / 1440);
  return v2;
}
