/*
 * XREFs of ?SetOverlayRenderTarget@CWindowList@@AEAAJPEAUHWND__@@NH@Z @ 0x18008CA64
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800116A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x1800202D0 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18003B53C (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800870D8 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 */

__int64 __fastcall CWindowList::SetOverlayRenderTarget(CWindowList *this, HWND a2, double a3, int a4)
{
  int SyncedWindowDataByHwnd; // ebx
  __int64 v6; // rdx
  CBaseObject *v8; // rsi
  CVisual *v9; // rcx
  int v10; // eax
  unsigned int *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  CBaseObject *v16; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v17; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v16 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v16);
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v6 = 1737LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)SyncedWindowDataByHwnd);
    return (unsigned int)SyncedWindowDataByHwnd;
  }
  v8 = v16;
  if ( !v16 )
    return 0LL;
  v9 = (CVisual *)*((_QWORD *)v16 + 49);
  if ( !v9 )
    return 0LL;
  if ( !a4 )
  {
    SyncedWindowDataByHwnd = CVisual::SetContent(v9, 0LL);
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v6 = 1778LL;
      goto LABEL_3;
    }
    CVisual::SetScale(
      *((CVisual **)v8 + 49),
      *(double *)(*((_QWORD *)v8 + 49) + 168LL) / a3,
      _mm_unpackhi_pd(*(__m128d *)(*((_QWORD *)v8 + 49) + 168LL), *(__m128d *)(*((_QWORD *)v8 + 49) + 168LL)).m128d_f64[0]
    / a3);
LABEL_26:
    SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 5)
                                                               + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 5));
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v6 = 1785LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  v16 = 0LL;
  v10 = CResource::Create(0x19u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v16);
  v11 = (unsigned int *)v16;
  v12 = v10;
  if ( v10 >= 0 )
  {
    CTopLevelWindow::GetActualWindowRect(*((CTopLevelWindow **)v8 + 49), &v17, 0, 1, 1);
    v14 = 0LL;
    if ( v17.bottom - v17.top >= 0 )
      v14 = (unsigned int)(v17.bottom - v17.top);
    v15 = 0LL;
    if ( v17.right - v17.left >= 0 )
      v15 = (unsigned int)(v17.right - v17.left);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, int, _DWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                              + 5)
                                                                                           + 1272LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            v11[6],
            v15,
            v14,
            *(_QWORD *)(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19) + 56LL) + 336LL),
            87,
            0);
    v12 = v10;
    if ( v10 < 0 )
    {
      v13 = 1760LL;
      goto LABEL_19;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 5)
                                                            + 1280LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            v11[6],
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v8 + 49) + 16LL) + 24LL));
    v12 = v10;
    if ( v10 < 0 )
    {
      v13 = 1765LL;
      goto LABEL_19;
    }
    v10 = CVisual::SetContent(*((CVisual **)v8 + 49), (struct CResource *)v11);
    v12 = v10;
    if ( v10 < 0 )
    {
      v13 = 1768LL;
      goto LABEL_19;
    }
    CVisual::SetScale(
      *((CVisual **)v8 + 49),
      *(double *)(*((_QWORD *)v8 + 49) + 168LL) * a3,
      _mm_unpackhi_pd(*(__m128d *)(*((_QWORD *)v8 + 49) + 168LL), *(__m128d *)(*((_QWORD *)v8 + 49) + 168LL)).m128d_f64[0]
    * a3);
    CBaseObject::Release((CBaseObject *)v11);
    goto LABEL_26;
  }
  v13 = 1750LL;
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
