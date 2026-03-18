/*
 * XREFs of ?ExtractOsLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018DC5C
 * Callers:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018DE1C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractOsLatencyArray(
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a1,
        unsigned __int64 a2,
        unsigned int *a3)
{
  unsigned __int64 v3; // r10
  const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *v4; // r9
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v3 = 0LL;
  v4 = a1;
  v5 = 0;
  if ( !a1 )
  {
    v8 = 53;
LABEL_3:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070057, v8, 0LL);
    return v5;
  }
  if ( !a3 )
  {
    v8 = 54;
    goto LABEL_3;
  }
  if ( a2 - 1 > 4 )
  {
    v8 = 57;
    goto LABEL_3;
  }
  if ( a2 )
  {
    do
    {
      v6 = *(_DWORD *)v4;
      v4 = (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)((char *)v4 + 36);
      a3[v3++] = v6;
    }
    while ( v3 < a2 );
  }
  return v5;
}
