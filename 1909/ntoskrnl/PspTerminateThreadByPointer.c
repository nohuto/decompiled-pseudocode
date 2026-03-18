/*
 * XREFs of PspTerminateThreadByPointer @ 0x14067DB90
 * Callers:
 *     PspSystemThreadStartup @ 0x140134020 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     PspUserThreadStartup @ 0x1405E7470 (PspUserThreadStartup.c)
 *     PspTerminateAllThreads @ 0x14067A1DC (PspTerminateAllThreads.c)
 *     NtTerminateThread @ 0x14067DB20 (NtTerminateThread.c)
 *     PsTerminateSystemThread @ 0x1406ADC90 (PsTerminateSystemThread.c)
 *     NtTerminateProcess @ 0x1406D6760 (NtTerminateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x1400E4DEC (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x1408C9224 (PspCatchCriticalBreak.c)
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
