/*
 * XREFs of EtwpCovSampCaptureBufferRelease @ 0x140334F3C
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140900D68 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140901740 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140335880 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferRelease(__int64 a1, __int64 a2)
{
  return EtwpCovSampCaptureReleaseToLookaside(a1, *(_QWORD *)(a2 + 48), a2);
}
