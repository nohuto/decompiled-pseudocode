/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x14009A1E0
 * Callers:
 *     ExpWorkerThread @ 0x140059CD0 (ExpWorkerThread.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     KiEpfStart @ 0x1402B3184 (KiEpfStart.c)
 *     ExpSetSwappingKernelApc @ 0x14059C950 (ExpSetSwappingKernelApc.c)
 *     NtQueryInformationFile @ 0x1405F0890 (NtQueryInformationFile.c)
 *     ObWaitForMultipleObjects @ 0x14060CA50 (ObWaitForMultipleObjects.c)
 *     ExSwapinWorkerThreads @ 0x14072BB98 (ExSwapinWorkerThreads.c)
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
