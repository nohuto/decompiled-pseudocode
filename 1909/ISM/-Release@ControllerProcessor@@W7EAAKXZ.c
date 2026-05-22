/*
 * XREFs of ?Release@ControllerProcessor@@W7EAAKXZ @ 0x180037910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ControllerProcessor::Release(__int64 a1)
{
  return TouchProcessor::Release((TouchProcessor *)(a1 - 8));
}
