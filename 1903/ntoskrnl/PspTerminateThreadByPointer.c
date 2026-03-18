/*
 * XREFs of PspTerminateThreadByPointer @ 0x140678480
 * Callers:
 *     PspSystemThreadStartup @ 0x140133530 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     PspUserThreadStartup @ 0x1405E6CA0 (PspUserThreadStartup.c)
 *     PspTerminateAllThreads @ 0x140674ACC (PspTerminateAllThreads.c)
 *     NtTerminateThread @ 0x140678410 (NtTerminateThread.c)
 *     PsTerminateSystemThread @ 0x1406B85A0 (PsTerminateSystemThread.c)
 *     NtTerminateProcess @ 0x1406D6D10 (NtTerminateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x1400AE89C (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x1408C9944 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(ULONG_PTR BugCheckParameter1, unsigned int a2, char a3)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(BugCheckParameter1 + 544);
  if ( (*(_DWORD *)(BugCheckParameter1 + 1760) & 0x20) != 0 && (*(_DWORD *)(v4 + 780) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v4);
    PspCatchCriticalBreak("Terminating critical thread 0x%p (in %s)\n", BugCheckParameter1, v4 + 1104, a2);
  }
  if ( a3 && (struct _KTHREAD *)BugCheckParameter1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1760), 1u);
    PspExitThread(a2);
    __debugbreak();
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 1788) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1760), 0) )
    *(_DWORD *)(BugCheckParameter1 + 1808) = a2;
  KeRequestTerminationThread(BugCheckParameter1);
  return 0LL;
}
