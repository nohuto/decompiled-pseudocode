/*
 * XREFs of ?RecordOutputColorSpace@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180014110
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180014294 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::RecordOutputColorSpace(
        CCompositionSurfaceBitmap *this,
        HMONITOR a2,
        unsigned int a3)
{
  if ( CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)((char *)this - 56)) )
    (*(void (__fastcall **)(_QWORD, HMONITOR, _QWORD))(**((_QWORD **)this + 4) + 144LL))(*((_QWORD *)this + 4), a2, a3);
}
