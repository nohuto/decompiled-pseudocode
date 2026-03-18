/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1408BE6F4
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1408BC710 (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408BD2B8 (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x1408BEE70 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x1408C0510 (TtmpDeleteQueue.c)
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
