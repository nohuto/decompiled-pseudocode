/*
 * XREFs of ??0InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180063900
 * Callers:
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180063374 (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo *__fastcall CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::InteractionSummaryInfo(
        CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo *this)
{
  memset_0((char *)this + 184, 0, 0x30uLL);
  `vector constructor iterator'(
    (char *)this + 232,
    24LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  memset_0((char *)this + 384, 0, 0x30uLL);
  `vector constructor iterator'(
    (char *)this + 432,
    24LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  return this;
}
