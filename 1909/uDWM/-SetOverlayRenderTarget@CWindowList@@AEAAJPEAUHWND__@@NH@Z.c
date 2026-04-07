/*
 * XREFs of ?SetOverlayRenderTarget@CWindowList@@AEAAJPEAUHWND__@@NH@Z @ 0x180092748
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800166DC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180032464 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180036A00 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18008CE84 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ??$CreateProxy@VCOverlayRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCOverlayRenderTargetProxy@@@Z @ 0x1800B5D80 (--$CreateProxy@VCOverlayRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCOverlayRenderTargetProxy@@.c)
 *     ?Create@COverlayRenderTargetProxy@@QEAAJIIU_LUID@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B64DC (-Create@COverlayRenderTargetProxy@@QEAAJIIU_LUID@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CWindowList::SetOverlayRenderTarget(CWindowList *this, HWND a2, double a3, int a4)
{
  int SyncedWindowDataByHwnd; // ebx
  __int64 v6; // rdx
  COverlayRenderTargetProxy *v8; // rsi
  CVisual *v9; // rcx
  int v10; // eax
  struct CResource **v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  unsigned int v14; // r8d
  unsigned int v15; // edx
  enum DXGI_FORMAT v16; // [rsp+20h] [rbp-40h]
  enum DXGI_COLOR_SPACE_TYPE v17; // [rsp+28h] [rbp-38h]
  COverlayRenderTargetProxy *v18; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v19; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v18 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v18);
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v6 = 1756LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)SyncedWindowDataByHwnd);
    return (unsigned int)SyncedWindowDataByHwnd;
  }
  v8 = v18;
  if ( !v18 )
    return 0LL;
  v9 = (CVisual *)*((_QWORD *)v18 + 50);
  if ( !v9 )
    return 0LL;
  if ( !a4 )
  {
    SyncedWindowDataByHwnd = CVisual::SetContent(v9, 0LL);
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v6 = 1792LL;
      goto LABEL_3;
    }
    CVisual::SetScale(
      *((CVisual **)v8 + 50),
      *(double *)(*((_QWORD *)v8 + 50) + 168LL) / a3,
      _mm_unpackhi_pd(*(__m128d *)(*((_QWORD *)v8 + 50) + 168LL), *(__m128d *)(*((_QWORD *)v8 + 50) + 168LL)).m128d_f64[0]
    / a3);
LABEL_26:
    SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 5)
                                                                             + 16LL)
                                                               + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 5)
                                                                                  + 16LL));
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v6 = 1799LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  v18 = 0LL;
  v10 = CCompositor::CreateProxy<COverlayRenderTargetProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          &v18);
  v11 = (struct CResource **)v18;
  v12 = v10;
  if ( v10 >= 0 )
  {
    CTopLevelWindow::GetActualWindowRect(*((CTopLevelWindow **)v8 + 50), &v19, 0, 1, 1);
    v14 = 0;
    if ( v19.bottom - v19.top >= 0 )
      v14 = v19.bottom - v19.top;
    v15 = 0;
    if ( v19.right - v19.left >= 0 )
      v15 = v19.right - v19.left;
    v10 = COverlayRenderTargetProxy::Create(
            (COverlayRenderTargetProxy *)v11,
            v15,
            v14,
            *(struct _LUID *)(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19) + 56LL) + 336LL),
            v16,
            v17);
    v12 = v10;
    if ( v10 < 0 )
    {
      v13 = 1776LL;
      goto LABEL_19;
    }
    v10 = (*((__int64 (__fastcall **)(struct CResource **, _QWORD))*v11 + 1))(
            v11,
            *(_QWORD *)(*((_QWORD *)v8 + 50) + 16LL));
    v12 = v10;
    if ( v10 < 0 )
    {
      v13 = 1779LL;
      goto LABEL_19;
    }
    v10 = CVisual::SetContent(*((CVisual **)v8 + 50), v11[2]);
    v12 = v10;
    if ( v10 < 0 )
    {
      v13 = 1782LL;
      goto LABEL_19;
    }
    CVisual::SetScale(
      *((CVisual **)v8 + 50),
      *(double *)(*((_QWORD *)v8 + 50) + 168LL) * a3,
      _mm_unpackhi_pd(*(__m128d *)(*((_QWORD *)v8 + 50) + 168LL), *(__m128d *)(*((_QWORD *)v8 + 50) + 168LL)).m128d_f64[0]
    * a3);
    CBaseObject::Release((CBaseObject *)v11);
    goto LABEL_26;
  }
  v13 = 1767LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v10);
  if ( v11 )
    CBaseObject::Release((CBaseObject *)v11);
  return v12;
}
