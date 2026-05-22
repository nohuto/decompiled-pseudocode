/*
 * XREFs of ?Release@MPCFocusTarget@@WEI@EAAKXZ @ 0x18000B350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall MPCFocusTarget::Release(__int64 a1)
{
  return TouchProcessor::Release((TouchProcessor *)(a1 - 72));
}
