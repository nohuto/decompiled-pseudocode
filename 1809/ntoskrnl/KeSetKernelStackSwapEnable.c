/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x140101CE0
 * Callers:
 *     ExpWorkerThread @ 0x1400B5C70 (ExpWorkerThread.c)
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     KiEpfStart @ 0x14029BEF4 (KiEpfStart.c)
 *     ExpSetSwappingKernelApc @ 0x14056D710 (ExpSetSwappingKernelApc.c)
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     ExSwapinWorkerThreads @ 0x1406E031C (ExSwapinWorkerThreads.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // dl

  CurrentThread = KeGetCurrentThread();
  v2 = (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0;
  if ( Enable != v2 )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
  }
  return v2;
}
