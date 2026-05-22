/*
 * XREFs of ?Release@ComboButtonProcessor@@W7EAAKXZ @ 0x1800380F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::Release(__int64 a1)
{
  return SystemButtonProcessor::Release((SystemButtonProcessor *)(a1 - 8));
}
