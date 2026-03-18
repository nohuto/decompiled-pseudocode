/*
 * XREFs of PfInitializeSuperfetch @ 0x140A18DA0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400E59B0 (ExRundownCompleted.c)
 *     ZwNotifyChangeKey @ 0x1401C2350 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x1407774E0 (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x14077856C (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x1407787DC (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x140A18E98 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140A19044 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x140A192E8 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140467BD8);
  PfpScenCtxInitialize((__int64)&qword_140467B60);
  PfpScenCtxStart((__int64)&qword_140467B60);
  ExInitializePushLock(&stru_140467C80);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140467C80);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140467C80);
  qword_140467C88 = 0LL;
  qword_140467C90 = 0LL;
  dword_140467CA8 |= 1u;
  qword_140467CA0 = (__int64)&qword_140467C98;
  qword_140467C98 = (__int64)&qword_140467C98;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140467980, 4u, 1u);
  return 0LL;
}
