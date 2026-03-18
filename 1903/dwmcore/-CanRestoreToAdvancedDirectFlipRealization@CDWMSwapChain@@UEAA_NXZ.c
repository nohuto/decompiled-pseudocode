/*
 * XREFs of ?CanRestoreToAdvancedDirectFlipRealization@CDWMSwapChain@@UEAA_NXZ @ 0x180163C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::CanRestoreToAdvancedDirectFlipRealization(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 67) != *((_QWORD *)this + 66);
}
