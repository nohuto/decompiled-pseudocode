/*
 * XREFs of TtmpCloseQueueHandle @ 0x140883980
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x140885B00 (TtmiLogQueueHandleClosed.c)
 */

__int64 __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  HANDLE ProcessId; // rax

  ProcessId = PsGetProcessId(a1);
  return TtmiLogQueueHandleClosed(a2, ProcessId, a4);
}
