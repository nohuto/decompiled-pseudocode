/*
 * XREFs of ?IsUsedForAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAA_NXZ @ 0x1800D9E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsUsedForAdvancedDirectFlipRestoreBuffer(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 66) != 0LL;
}
