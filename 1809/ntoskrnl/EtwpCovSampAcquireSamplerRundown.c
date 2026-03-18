/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x1408C398C
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408C3B68 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x1408C3C7C (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampImageNotify @ 0x1408C6AD0 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1408C7584 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerQuery @ 0x1408C7E84 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1408C90E4 (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140409E20) )
  {
    *a1 = qword_140409E18;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
