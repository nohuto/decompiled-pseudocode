/*
 * XREFs of ?IsRootVisual@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180165A50
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180036350 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisualTree::IsRootVisual(const struct CVisual **this, const struct CVisual *a2)
{
  return a2 == this[3];
}
