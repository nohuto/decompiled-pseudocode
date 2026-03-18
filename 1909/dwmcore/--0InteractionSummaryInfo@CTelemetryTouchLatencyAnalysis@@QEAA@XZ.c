/*
 * XREFs of ??0InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800DF950
 * Callers:
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800DF368 (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo *__fastcall CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::InteractionSummaryInfo(
        CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo *this)
{
  memset_0((char *)this + 200, 0, 0x48uLL);
  `vector constructor iterator'(
    (char *)this + 272,
    36LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  memset_0((char *)this + 484, 0, 0x48uLL);
  `vector constructor iterator'(
    (char *)this + 556,
    36LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  return this;
}
