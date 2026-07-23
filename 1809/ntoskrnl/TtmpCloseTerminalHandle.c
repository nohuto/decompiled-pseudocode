/*
 * XREFs of TtmpCloseTerminalHandle @ 0x1408802C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     TtmpSetTerminalPendingCleanup @ 0x14088057C (TtmpSetTerminalPendingCleanup.c)
 *     TtmiLogTerminalHandleClosed @ 0x140886FA8 (TtmiLogTerminalHandleClosed.c)
 */

__int64 __fastcall TtmpCloseTerminalHandle(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  HANDLE ProcessId; // rax

  v5 = *(_DWORD *)(a2 + 28);
  v8 = **(_DWORD **)(a2 + 16);
  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    TtmpSetTerminalPendingCleanup(*(_QWORD *)(a2 + 16), a2);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  ProcessId = PsGetProcessId(Process);
  return TtmiLogTerminalHandleClosed(v8, v5, ProcessId, a4);
}
