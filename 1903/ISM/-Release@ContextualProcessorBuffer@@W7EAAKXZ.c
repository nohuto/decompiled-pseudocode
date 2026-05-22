/*
 * XREFs of ?Release@ContextualProcessorBuffer@@W7EAAKXZ @ 0x180039120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContextualProcessorBuffer::Release(__int64 a1)
{
  return DWMLegacyInputTarget::Release((DWMLegacyInputTarget *)(a1 - 8));
}
