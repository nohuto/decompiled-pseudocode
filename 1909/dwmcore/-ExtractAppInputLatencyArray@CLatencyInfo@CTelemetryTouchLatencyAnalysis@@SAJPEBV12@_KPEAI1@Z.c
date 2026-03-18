/*
 * XREFs of ?ExtractAppInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018D888
 * Callers:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018DE1C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppInputLatencyArray(
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a1,
        unsigned __int64 a2,
        unsigned int *a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // ebx
  unsigned int *v5; // rax
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v3 = 0LL;
  v4 = 0;
  if ( !a1 )
  {
    v8 = 101;
LABEL_3:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070057, v8, 0LL);
    return v4;
  }
  if ( !a3 )
  {
    v8 = 102;
    goto LABEL_3;
  }
  if ( a2 - 1 > 4 )
  {
    v8 = 105;
    goto LABEL_3;
  }
  if ( a2 )
  {
    v5 = (unsigned int *)((char *)a1 + 20);
    do
    {
      v6 = *v5;
      v5 += 9;
      a3[v3++] = v6;
    }
    while ( v3 < a2 );
  }
  return v4;
}
