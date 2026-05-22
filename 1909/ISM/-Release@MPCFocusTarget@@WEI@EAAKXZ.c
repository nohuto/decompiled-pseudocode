/*
 * XREFs of ?Release@MPCFocusTarget@@WEI@EAAKXZ @ 0x180037C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::Release(__int64 a1)
{
  return SystemButtonProcessor::Release((SystemButtonProcessor *)(a1 - 72));
}
