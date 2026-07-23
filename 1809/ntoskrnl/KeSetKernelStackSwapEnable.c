/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x140101D60
 * Callers:
 *     ExpWorkerThread @ 0x1400B5BB0 (ExpWorkerThread.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     KiEpfStart @ 0x14029C0E4 (KiEpfStart.c)
 *     ExpSetSwappingKernelApc @ 0x14056E710 (ExpSetSwappingKernelApc.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     ExSwapinWorkerThreads @ 0x1406E15BC (ExSwapinWorkerThreads.c)
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
