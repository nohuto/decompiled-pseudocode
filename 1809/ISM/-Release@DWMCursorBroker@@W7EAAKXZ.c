/*
 * XREFs of ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x1800545C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::Release(__int64 a1)
{
  return DWMLegacyInputTarget::Release((DWMLegacyInputTarget *)(a1 - 8));
}
