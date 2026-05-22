/*
 * XREFs of ?Release@ControllerProcessor@@WEA@EAAKXZ @ 0x180038570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ControllerProcessor::Release(__int64 a1)
{
  return TouchProcessor::Release((TouchProcessor *)(a1 - 64));
}
