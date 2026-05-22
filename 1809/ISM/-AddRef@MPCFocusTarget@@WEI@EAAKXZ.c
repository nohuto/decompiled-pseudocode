/*
 * XREFs of ?AddRef@MPCFocusTarget@@WEI@EAAKXZ @ 0x18000B320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall MPCFocusTarget::AddRef(__int64 a1)
{
  return ComboButtonProcessor::AddRef((ComboButtonProcessor *)(a1 - 72));
}
