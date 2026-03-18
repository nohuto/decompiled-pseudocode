/*
 * XREFs of EtwpCovSampCaptureBufferProcess @ 0x1409007DC
 * Callers:
 *     EtwpCovSampCaptureWorkerThread @ 0x1409010A0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1409004E8 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextAddAddresses @ 0x1409012D0 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampContextAddSamples @ 0x1409013C4 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampStackHashCheck @ 0x140904548 (EtwpCovSampStackHashCheck.c)
 */

void __fastcall EtwpCovSampCaptureBufferProcess(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&BugCheckParameter2) < 0 )
    goto LABEL_6;
  if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
  {
    v5 = BugCheckParameter2;
    EtwpCovSampContextAddSamples(BugCheckParameter2);
    goto LABEL_7;
  }
  if ( (unsigned int)EtwpCovSampStackHashCheck(a1, v4, a2 + 64, *(unsigned __int16 *)(a2 + 62)) )
  {
LABEL_6:
    v5 = BugCheckParameter2;
  }
  else
  {
    v5 = BugCheckParameter2;
    EtwpCovSampContextAddAddresses(BugCheckParameter2);
  }
LABEL_7:
  if ( v5 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140432520);
    KeLeaveCriticalRegion();
  }
}
