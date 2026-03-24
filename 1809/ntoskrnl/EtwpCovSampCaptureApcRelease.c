/*
 * XREFs of EtwpCovSampCaptureApcRelease @ 0x1403162C0
 * Callers:
 *     EtwpCovSampCaptureApcRundown @ 0x1408C3B30 (EtwpCovSampCaptureApcRundown.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140316E50 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRelease(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = qword_140409DE8;
  memset((void *)(a1 + 56), 0, 0x58uLL);
  v3 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 144) = 0;
  return EtwpCovSampCaptureReleaseToLookaside(v1, v3, a1);
}
