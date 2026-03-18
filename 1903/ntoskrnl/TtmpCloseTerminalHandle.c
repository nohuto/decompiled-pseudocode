/*
 * XREFs of TtmpCloseTerminalHandle @ 0x1408BCBD0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x1400045E0 (PsGetProcessId.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408BCE8C (TtmpSetTerminalPendingCleanup.c)
 *     TtmiLogTerminalHandleClosed @ 0x1408C3C4C (TtmiLogTerminalHandleClosed.c)
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
