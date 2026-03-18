/*
 * XREFs of ?RecordCompositionMode@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x1800129C0
 * Callers:
 *     ?RecordCompositionMode@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x180012990 (-RecordCompositionMode@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180030B48 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180013460 (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x180152B2C (-SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z.c)
 */

void __fastcall CCompositionSurfaceInfo::RecordCompositionMode(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  CComposition *v8; // rax
  __int64 v9; // rax

  if ( !a3 && *(_BYTE *)(a1 + 68) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 8LL))(*(_QWORD *)(a1 + 24));
    CRenderTargetManager::SetIndependentFlipNotifyMode(*(CRenderTargetManager **)(v9 + 64), *(struct _LUID *)(a1 + 40));
  }
  if ( a4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 192) + 24LL))(
           *(_QWORD *)(a1 + 192),
           a2,
           a3) )
    {
      v8 = (CComposition *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 8LL))(*(_QWORD *)(a1 + 24));
      CComposition::AddCompSurfInfoUpdate(v8, (struct CCompositionSurfaceInfo *)a1);
    }
  }
}
