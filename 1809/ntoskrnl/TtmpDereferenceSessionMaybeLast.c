/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x140880970
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x14087EC0C (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x14087F73C (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x1408810E0 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x140882780 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
