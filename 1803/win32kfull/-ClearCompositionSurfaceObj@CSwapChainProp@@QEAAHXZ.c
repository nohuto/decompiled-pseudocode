/*
 * XREFs of ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C013271C
 * Callers:
 *     UserSetWindowedSwapChain @ 0x1C0132514 (UserSetWindowedSwapChain.c)
 *     ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C0132660 (-Delete@CSwapChainProp@@UEAAXXZ.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0135BC0 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::ClearCompositionSurfaceObj(CSwapChainProp *this)
{
  unsigned int v2; // ebx
  void *v3; // rcx

  v2 = 0;
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    DxgkReleaseCompositionObjectReference(v3);
    *((_QWORD *)this + 2) = 0LL;
    return 1;
  }
  return v2;
}
