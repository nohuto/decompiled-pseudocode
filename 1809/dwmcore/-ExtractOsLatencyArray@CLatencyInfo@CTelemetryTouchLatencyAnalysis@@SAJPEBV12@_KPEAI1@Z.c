/*
 * XREFs of ?ExtractOsLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014E024
 * Callers:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014E1D4 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractOsLatencyArray(
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a1,
        unsigned __int64 a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *v4; // r9
  unsigned __int64 i; // rax
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = a1;
  if ( !a1 )
  {
    v8 = 46;
LABEL_3:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, v8);
    return v3;
  }
  if ( !a3 )
  {
    v8 = 47;
    goto LABEL_3;
  }
  if ( a2 - 1 > 4 )
  {
    v8 = 50;
    goto LABEL_3;
  }
  for ( i = 0LL; i < a2; ++i )
  {
    v6 = *(_DWORD *)v4;
    v4 = (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)((char *)v4 + 24);
    a3[i] = v6;
  }
  return v3;
}
