/*
 * XREFs of PfInitializeSuperfetch @ 0x1409D5634
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x14008F7F0 (ExRundownCompleted.c)
 *     ZwNotifyChangeKey @ 0x1401BA550 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x140752F48 (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x140753FE4 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x14075422C (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x1409D572C (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x1409D58C4 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x1409D5B8C (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_14043D1D8);
  PfpScenCtxInitialize(qword_14043D160);
  PfpScenCtxStart((__int64)qword_14043D160);
  ExInitializePushLock(&stru_14043D280);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_14043D280);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_14043D280);
  qword_14043D288 = 0LL;
  BugCheckParameter2 = 0LL;
  dword_14043D2A8 |= 1u;
  qword_14043D2A0 = (__int64)&qword_14043D298;
  qword_14043D298 = (__int64)&qword_14043D298;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_14043CF80, 4u, 1u);
  return 0LL;
}
