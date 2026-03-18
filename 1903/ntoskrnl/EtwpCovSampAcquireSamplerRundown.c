/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x140900B88
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140900D68 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140900E7C (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampImageNotify @ 0x140903F10 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140904A18 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerQuery @ 0x140905304 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140906588 (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140432580) )
  {
    *a1 = qword_140432578;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
