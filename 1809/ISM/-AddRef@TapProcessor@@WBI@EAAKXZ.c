/*
 * XREFs of ?AddRef@TapProcessor@@WBI@EAAKXZ @ 0x180054580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TapProcessor::AddRef(__int64 a1)
{
  return Win32kInterop::AddRef((Win32kInterop *)(a1 - 24));
}
