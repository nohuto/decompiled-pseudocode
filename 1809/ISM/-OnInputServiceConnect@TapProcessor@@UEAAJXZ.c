/*
 * XREFs of ?OnInputServiceConnect@TapProcessor@@UEAAJXZ @ 0x180028D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TapProcessor::OnInputServiceConnect(TapProcessor *this)
{
  *((_BYTE *)this + 64) = 1;
  return 0LL;
}
