/*
 * XREFs of ?RecordOutputColorSpace@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180013080
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18001320C (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180013460 (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::RecordOutputColorSpace(
        CCompositionSurfaceBitmap *this,
        HMONITOR a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  __int64 v4; // r9
  struct CCompositionSurfaceInfo *v5; // rbx
  CComposition *v6; // rax

  if ( CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)((char *)this - 56)) )
  {
    v5 = (struct CCompositionSurfaceInfo *)*((_QWORD *)this + 4);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(**((_QWORD **)v5 + 24) + 32LL))(
           *((_QWORD **)v5 + 24),
           v4) )
    {
      v6 = (CComposition *)(*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v5 + 3) + 8LL))(*((_QWORD **)v5 + 3));
      CComposition::AddCompSurfInfoUpdate(v6, v5);
    }
  }
}
