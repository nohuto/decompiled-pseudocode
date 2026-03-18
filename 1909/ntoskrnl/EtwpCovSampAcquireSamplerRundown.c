/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x1409004E8
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409006C8 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x1409007DC (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampImageNotify @ 0x140903870 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140904378 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerQuery @ 0x140904C64 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140905EE8 (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140432520) )
  {
    *a1 = qword_140432518;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
