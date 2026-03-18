/*
 * XREFs of ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C0132660
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C013271C (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 */

void __fastcall CSwapChainProp::Delete(CSwapChainProp *this)
{
  CSwapChainProp::ClearCompositionSurfaceObj(this);
  Win32FreePool(this);
}
