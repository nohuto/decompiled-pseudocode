/*
 * XREFs of ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180030B48 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180049840 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800D86DC (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800D9140 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800E8A50 (--1COverlayContext@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800EAA00 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?clear@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180079DF8 (-clear@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneInfo@COver.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D7F38 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800D7F60 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x18016AFFC (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801BD35C (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  struct COverlayContext::OverlayPlaneInfo *v2; // rbx
  struct COverlayContext::OverlayPlaneInfo *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
  {
    v2 = (struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1054);
    v3 = (struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1055);
    while ( v2 != v3 )
    {
      COverlayContext::EnsureIndependentFlipState(this, v2, 0, 0);
      v6 = *((_QWORD *)v2 + 3);
      if ( *(_BYTE *)(v6 + 228) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v6 + 48));
      *((_BYTE *)this + 13422) = 1;
      v2 = (struct COverlayContext::OverlayPlaneInfo *)((char *)v2 + 256);
    }
  }
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 192);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 4312);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 8432);
  detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::clear();
  *((_OWORD *)this + 801) = _xmm;
  *((_WORD *)this + 6440) = 32085;
  *((_OWORD *)this + 802) = _xmm;
  *((_OWORD *)this + 803) = _xmm;
  *((_OWORD *)this + 804) = _xmm;
  *((_WORD *)this + 6508) = 32085;
  *(_OWORD *)((char *)this + 12952) = _xmm;
  *(_OWORD *)((char *)this + 12968) = _xmm;
  *(_OWORD *)((char *)this + 12984) = _xmm;
  *(_OWORD *)((char *)this + 13000) = _xmm;
  v4 = *((_QWORD *)this + 1644);
  *((_BYTE *)this + 13423) = 0;
  *((_BYTE *)this + 13425) = 0;
  (*(void (**)(void))(v4 + 8))();
  COverlayContext::ClearDirectFlip(this);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 312LL))(v5, 0LL);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2)) )
    {
      if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 24LL))(
                         *((_QWORD *)this + 2),
                         v7)
                     + 4) != *((_DWORD *)this + 26) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 128LL))(*((_QWORD *)this + 2));
    }
  }
  *((_BYTE *)this + 13416) = 0;
}
