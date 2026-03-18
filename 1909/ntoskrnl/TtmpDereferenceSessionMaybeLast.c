/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1408BDFC4
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1408BBFE0 (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408BCB88 (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x1408BE740 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x1408BFDE0 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
