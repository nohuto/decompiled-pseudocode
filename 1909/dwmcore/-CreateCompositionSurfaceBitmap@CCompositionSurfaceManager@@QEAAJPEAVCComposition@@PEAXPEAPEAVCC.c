/*
 * XREFs of ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18024D40C
 * Callers:
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A2F84 (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x180218234 (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SET.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800ABB70 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801C6830 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
        CCompositionSurfaceManager *this,
        struct CComposition *a2,
        void *a3,
        struct CCompositionSurfaceBitmap **a4)
{
  signed int v6; // eax
  __int64 v7; // rcx
  struct CCompositionSurfaceInfo *v8; // rdi
  unsigned int v9; // ebx
  signed int v10; // eax
  __int64 v11; // rcx
  struct CCompositionSurfaceInfo *v13; // [rsp+30h] [rbp-18h] BYREF

  v13 = 0LL;
  v6 = CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(this, a3, &v13);
  v8 = v13;
  v9 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1Eu, 0LL);
  }
  else
  {
    v10 = CCompositionSurfaceBitmap::Create(a2, v13, a4);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x22u, 0LL);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
