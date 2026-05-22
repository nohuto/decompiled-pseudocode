/*
 * XREFs of ?AddRef@DragNDropProcessor@@W7EAAKXZ @ 0x18000B300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DragNDropProcessor::AddRef(__int64 a1)
{
  return ComboButtonProcessor::AddRef((ComboButtonProcessor *)(a1 - 8));
}
