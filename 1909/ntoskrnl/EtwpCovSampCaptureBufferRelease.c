/*
 * XREFs of EtwpCovSampCaptureBufferRelease @ 0x14033499C
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409006C8 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409010A0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1403352E0 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferRelease(__int64 a1, __int64 a2)
{
  return EtwpCovSampCaptureReleaseToLookaside(a1, *(_QWORD *)(a2 + 48), a2);
}
