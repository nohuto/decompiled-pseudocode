/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x140881BB0
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x14087FE4C (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x14088097C (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x140882320 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x1408839C0 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
