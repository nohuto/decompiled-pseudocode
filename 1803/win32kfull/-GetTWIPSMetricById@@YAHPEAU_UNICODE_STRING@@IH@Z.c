/*
 * XREFs of ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C0053FE8
 * Callers:
 *     SetIconMetrics @ 0x1C0053A98 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C0053C74 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0053DAC (xxxSetWindowNCMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTWIPSMetricById(struct _UNICODE_STRING *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edx
  int v5; // [rsp+58h] [rbp+20h] BYREF

  FastGetProfileIntFromID(a1, 23LL, a2, a3, &v5, 0);
  v3 = v5;
  if ( v5 < 0 )
    return (unsigned int)((720 - v5 * *(unsigned __int16 *)(gpsi + 6998LL)) / 1440);
  return v3;
}
