/*
 * XREFs of GreSfmGenerateMoveData @ 0x1C0299D90
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C0045950 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSfmGenerateMoveData(int a1)
{
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  g_bUseMoveHints = a1;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return 0LL;
}
