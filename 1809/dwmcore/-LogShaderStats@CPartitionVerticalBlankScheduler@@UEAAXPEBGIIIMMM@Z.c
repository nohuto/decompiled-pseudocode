/*
 * XREFs of ?LogShaderStats@CPartitionVerticalBlankScheduler@@UEAAXPEBGIIIMMM@Z @ 0x180084380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::LogShaderStats(
        CPartitionVerticalBlankScheduler *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        float a6,
        float a7,
        float a8)
{
  CTelemetryTracking::LogShaderStats(
    (CPartitionVerticalBlankScheduler *)((char *)this + 29968),
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8);
}
