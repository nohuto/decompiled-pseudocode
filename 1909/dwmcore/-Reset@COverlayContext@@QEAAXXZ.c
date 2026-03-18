/*
 * XREFs of ?Reset@COverlayContext@@QEAAXXZ @ 0x18002AEE4
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180028760 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18002AE24 (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18002BC20 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x18005B5E4 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006F790 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800DD310 (--1COverlayContext@@MEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002B064 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18002B080 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?clear@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D85DC (-clear@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneInfo@COver.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801847A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  struct COverlayContext::OverlayPlaneInfo *v2; // rbx
  struct COverlayContext::OverlayPlaneInfo *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  char v7[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
  {
    v2 = (struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1054);
    v3 = (struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1055);
    while ( v2 != v3 )
    {
      COverlayContext::EnsureIndependentFlipState(this, v2, 0, 0);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)v2 + 3) + 112LL))(*((_QWORD **)v2 + 3)) )
        (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v2 + 3) + 96LL))(*((_QWORD **)v2 + 3));
      *((_BYTE *)this + 13438) = 1;
      v2 = (struct COverlayContext::OverlayPlaneInfo *)((char *)v2 + 256);
    }
  }
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 192);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 4312);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 8432);
  detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::clear((char *)this + 12552);
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
  *((_BYTE *)this + 13439) = 0;
  *((_BYTE *)this + 13441) = 0;
  (*(void (**)(void))(v4 + 8))();
  COverlayContext::ClearDirectFlip(this);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 312LL))(v5, 0LL);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2)) )
    {
      v6 = *((_DWORD *)this + 26);
      if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 24LL))(
                         *((_QWORD *)this + 2),
                         v7)
                     + 4) != v6 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 128LL))(*((_QWORD *)this + 2), v6);
    }
  }
  *((_BYTE *)this + 13432) = 0;
}
