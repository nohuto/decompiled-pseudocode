/*
 * XREFs of ?Release@MouseProcessor@@WBI@EAAKXZ @ 0x180054570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(__int64 a1)
{
  return DWMLegacyInputTarget::Release((DWMLegacyInputTarget *)(a1 - 24));
}
