/*
 * XREFs of ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801793A4
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801690E4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x18017880C (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x180064294 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$make_shared@VCRegion@@$$V@std@@YA?AV?$shared_ptr@VCRegion@@@0@XZ @ 0x180167DEC (--$make_shared@VCRegion@@$$V@std@@YA-AV-$shared_ptr@VCRegion@@@0@XZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180168764 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016C870 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x1801796E4 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::Init(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CMILCOMBase *a5,
        __int64 a6,
        int a7,
        void **a8)
{
  __int64 v10; // rcx
  CGdiSpriteBitmap *v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rax
  CCompositionSurfaceInfo *v14; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  std::_Ref_count_base *v18; // [rsp+28h] [rbp-40h]

  *(_QWORD *)(a1 + 8) = a2;
  ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)(a1 + 16), a3);
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *(_QWORD *)(a1 + 24) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  v11 = *(CGdiSpriteBitmap **)(a1 + 32);
  if ( v11 )
    CGdiSpriteBitmap::Release(v11);
  *(_QWORD *)(a1 + 32) = a5;
  if ( a5 )
    CMILCOMBase::InternalAddRef(a5);
  v12 = *(_QWORD *)(a1 + 40);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  *(_QWORD *)(a1 + 40) = a6;
  if ( a6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
  std::shared_ptr<CRegion>::reset(a1 + 48);
  *(_DWORD *)(a1 + 64) = 1;
  *(_DWORD *)(a1 + 68) = a7;
  if ( a7 >= 2 && a8 )
  {
    v13 = std::make_shared<CRegion,>(&v17);
    std::shared_ptr<CRegion>::operator=((_QWORD *)(a1 + 48), v13);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    FastRegion::CRegion::Copy(*(void ***)(a1 + 48), a8);
  }
  *(_DWORD *)(a1 + 80) = 0;
  v14 = *(CCompositionSurfaceInfo **)(a1 + 32);
  *(_QWORD *)(a1 + 72) = *((_QWORD *)a5 + 7);
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v14);
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 24LL))(
             (__int64)RenderingRealizationNoRef + 144,
             &v17);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(result + 8);
  return result;
}
