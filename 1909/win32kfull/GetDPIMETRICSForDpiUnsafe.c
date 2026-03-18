/*
 * XREFs of GetDPIMETRICSForDpiUnsafe @ 0x1C012A76C
 * Callers:
 *     GetDPIMETRICSForDpi @ 0x1C012A5CC (GetDPIMETRICSForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C012A5EC (GetScaledLogFontForDpi.c)
 * Callees:
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01CC520 (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01CC720 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDPIMETRICSForDpiUnsafe(int a1)
{
  struct tagDpiKMMetricsCacheNode *result; // rax
  struct tagDpiKMMetricsCacheNode *v2; // rbx

  if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return (struct tagDpiKMMetricsCacheNode *)GetSessionDpiMetrics();
  if ( a1 == 96 )
    return (struct tagDpiKMMetricsCacheNode *)Get96DpiMetrics();
  result = EnsureKMDpiMetricsCacheNode(a1);
  v2 = result;
  if ( result )
  {
    RefreshDpiKMMetricsCacheNode(result);
    return (struct tagDpiKMMetricsCacheNode *)((char *)v2 + 16);
  }
  return result;
}
