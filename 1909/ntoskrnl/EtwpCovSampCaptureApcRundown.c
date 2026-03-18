/*
 * XREFs of EtwpCovSampCaptureApcRundown @ 0x1409006B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x140334740 (EtwpCovSampCaptureApcRelease.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRundown(__int64 a1)
{
  return EtwpCovSampCaptureApcRelease(a1 - 56);
}
