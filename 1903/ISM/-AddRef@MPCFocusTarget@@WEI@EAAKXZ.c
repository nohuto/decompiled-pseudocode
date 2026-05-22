/*
 * XREFs of ?AddRef@MPCFocusTarget@@WEI@EAAKXZ @ 0x180038060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::AddRef(__int64 a1)
{
  return ComboButtonProcessor::AddRef((ComboButtonProcessor *)(a1 - 72));
}
