/*
 * XREFs of ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C0221860
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C01539FC (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 */

void __fastcall CSwapChainProp::Delete(CSwapChainProp *this)
{
  CSwapChainProp::ClearCompositionSurfaceObj(this);
  Win32FreePool(this);
}
