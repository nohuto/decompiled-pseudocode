/*
 * XREFs of PfInitializeSuperfetch @ 0x1409D4634
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x14008A400 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x14008F8D0 (ExRundownCompleted.c)
 *     ZwNotifyChangeKey @ 0x1401BA3D0 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x140751D78 (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x140752E14 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x14075305C (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x1409D472C (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x1409D48C4 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x1409D4B8C (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_14043C118);
  PfpScenCtxInitialize(qword_14043C0A0);
  PfpScenCtxStart((__int64)qword_14043C0A0);
  ExInitializePushLock(&stru_14043C1C0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_14043C1C0);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_14043C1C0);
  qword_14043C1C8 = 0LL;
  BugCheckParameter2 = 0LL;
  dword_14043C1E8 |= 1u;
  qword_14043C1E0 = (__int64)&qword_14043C1D8;
  qword_14043C1D8 = (__int64)&qword_14043C1D8;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_14043BEC0, 4u, 1u);
  return 0LL;
}
