/*
 * XREFs of ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x1801ADE38
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1800BCD30 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 *     ?EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble@@@Z @ 0x1801677C0 (-EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastPresentCount@CSwapChainBase@@QEAAJPEAI@Z @ 0x180165220 (-GetLastPresentCount@CSwapChainBase@@QEAAJPEAI@Z.c)
 *     McTemplateU0xqqqq @ 0x1801AE100 (McTemplateU0xqqqq.c)
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x1801B55F8 (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::PreRender(CComputeScribbleRenderer *this, struct CRegion *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebp
  __int64 v6; // r15
  CComputeScribbleRenderer::CFramebuffer *v7; // rsi
  __int64 v8; // rcx
  int LastPresentCount; // edi
  __int64 v10; // rdx
  CComposition *v12; // rax
  __int64 v13; // rcx
  char v14; // dl
  unsigned int v15; // [rsp+40h] [rbp-58h] BYREF
  char v16[16]; // [rsp+48h] [rbp-50h] BYREF
  int v17; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = *(_QWORD *)this;
  ++*((_QWORD *)this + 6);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 176) + 72LL))(*(_QWORD *)(v2 + 176));
  v6 = (v5 + *((_DWORD *)this + 4) - 1) % *((_DWORD *)this + 4);
  v7 = *(CComputeScribbleRenderer::CFramebuffer **)(*((_QWORD *)this + 1) + 8LL * v5);
  v8 = *(_QWORD *)this;
  v15 = 0;
  LastPresentCount = CSwapChainBase::GetLastPresentCount(*(CSwapChainBase **)(v8 + 176), &v15);
  if ( LastPresentCount < 0 )
  {
    v10 = 136LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)(unsigned int)LastPresentCount);
    return (unsigned int)LastPresentCount;
  }
  memset_0(v16, 0, 0x20uLL);
  LastPresentCount = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(*(_QWORD *)this + 176LL) + 344LL))(
                       *(_QWORD *)(*(_QWORD *)this + 176LL),
                       v16);
  if ( LastPresentCount < 0 )
  {
    v10 = 142LL;
    goto LABEL_3;
  }
  LastPresentCount = CComputeScribbleRenderer::CFramebuffer::AcquireForRender(v7, *((_QWORD *)this + 6), a2);
  if ( LastPresentCount < 0 )
  {
    v10 = 147LL;
    goto LABEL_3;
  }
  v12 = g_pComposition;
  *((_QWORD *)this + 3) = v7;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v12 + 69) + 136LL))(*((_QWORD *)v12 + 69)) )
    v7 = *(CComputeScribbleRenderer::CFramebuffer **)(*((_QWORD *)this + 1) + 8 * v6);
  *((_QWORD *)this + 5) = v7;
  v14 = v15;
  if ( v15 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v6);
    *((_QWORD *)this + 4) = v13;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqqqq(
      v13,
      (unsigned int)&EVTDESC_COMPUTESCRIBBLE_PRERENDER,
      *((_QWORD *)this + 6),
      v5,
      v14,
      v16[0],
      v17);
  return 0LL;
}
