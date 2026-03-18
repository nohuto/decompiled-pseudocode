/*
 * XREFs of ?GetLogicalFrontBufferIndex@CSwapChainBase@@MEBAIXZ @ 0x1800E7B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainBase::GetLogicalFrontBufferIndex(CSwapChainBase *this)
{
  return (unsigned int)(*((_DWORD *)this + 40) - 1);
}
