/*
 * XREFs of PfInitializeSuperfetch @ 0x140A19260
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400EA950 (ExRundownCompleted.c)
 *     ZwNotifyChangeKey @ 0x1401C2ED0 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x14077AAC0 (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x14077BB4C (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x14077BDBC (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x140A19358 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140A19504 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x140A197A8 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_1404678D8);
  PfpScenCtxInitialize((__int64)&qword_140467860);
  PfpScenCtxStart((__int64)&qword_140467860);
  ExInitializePushLock(&stru_140467980);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140467980);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140467980);
  qword_140467988 = 0LL;
  qword_140467990 = 0LL;
  dword_1404679A8 |= 1u;
  qword_1404679A0 = (__int64)&qword_140467998;
  qword_140467998 = (__int64)&qword_140467998;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140467680, 4u, 1u);
  return 0LL;
}
