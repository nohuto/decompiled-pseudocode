/*
 * XREFs of PspTerminateThreadByPointer @ 0x1406765B0
 * Callers:
 *     PspSystemThreadStartup @ 0x140132510 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 *     PspUserThreadStartup @ 0x1405F6E40 (PspUserThreadStartup.c)
 *     PspTerminateAllThreads @ 0x140676204 (PspTerminateAllThreads.c)
 *     NtTerminateThread @ 0x140676540 (NtTerminateThread.c)
 *     NtTerminateProcess @ 0x14067A830 (NtTerminateProcess.c)
 *     PsTerminateSystemThread @ 0x1406CC590 (PsTerminateSystemThread.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x1400F1328 (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x14088B490 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  __int64 v4; // rdi
  unsigned int v5; // esi

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 544);
  v5 = a2;
  if ( (*(_DWORD *)(a1 + 1744) & 0x20) != 0 && (*(_DWORD *)(v4 + 772) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v4);
    PspCatchCriticalBreak("Terminating critical thread 0x%p (in %s)\n", (const void *)a1, (const char *)(v4 + 1104));
  }
  if ( v3 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1744), 1u);
    PspExitThread(v5);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 1740) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1744), 0) )
    *(_DWORD *)(a1 + 1792) = v5;
  KeRequestTerminationThread(a1, a2, a3);
  return 0LL;
}
