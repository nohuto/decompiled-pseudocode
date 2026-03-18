/*
 * XREFs of ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801949E4
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180184090 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x180193C64 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180090988 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800B0AF4 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$make_shared@VCRegion@@$$V@std@@YA?AV?$shared_ptr@VCRegion@@@0@XZ @ 0x180182AA8 (--$make_shared@VCRegion@@$$V@std@@YA-AV-$shared_ptr@VCRegion@@@0@XZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180183710 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180187718 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x180194E04 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::Init(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int **a8)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  std::_Ref_count_base *v19; // [rsp+28h] [rbp-40h]

  *(_QWORD *)(a1 + 8) = a2;
  ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)(a1 + 16), a3);
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *(_QWORD *)(a1 + 24) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *(_QWORD *)(a1 + 32) = a5;
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  v12 = *(_QWORD *)(a1 + 40);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  *(_QWORD *)(a1 + 40) = a6;
  if ( a6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
  std::shared_ptr<CRegion>::reset(a1 + 48);
  *(_DWORD *)(a1 + 64) = 1;
  *(_DWORD *)(a1 + 68) = a7;
  if ( a7 >= 3 && a8 )
  {
    v13 = std::make_shared<CRegion,>(&v18);
    std::shared_ptr<CRegion>::operator=((_QWORD *)(a1 + 48), v13);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    FastRegion::CRegion::Copy(*(int ***)(a1 + 48), a8);
  }
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_BYTE *)(a1 + 96) = 0;
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 56LL))(a5);
  v15 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 72) = v14;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v16 + 144) + 24LL))(v16 + 144, &v18);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(result + 8);
  return result;
}
