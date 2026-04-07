/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000EB90
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E820 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180009E84 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000CA3C (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18000D6D4 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000D76C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x18000D82C (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18000ED5C (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020FF0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800219E0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F5C0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007C68C (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  int v3; // edx
  int v4; // ecx
  char v5; // al
  __int64 v7; // r11
  CLivePreview *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  int started; // eax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // ebx
  CTopLevelWindow *v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // edi
  int v22; // eax
  unsigned int v23; // esi
  __int128 v24; // xmm0
  int v25; // eax
  int v26; // eax
  unsigned int v27; // edi
  int v28; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 41);
  v3 = *(_DWORD *)(v1 + 100) & 0x20000000;
  v4 = *(_DWORD *)(v1 + 100) & 0x1000000;
  v5 = v4 != 0;
  if ( *((_BYTE *)this + 288) == (v3 != 0) )
  {
    if ( v5 == *((_BYTE *)this + 289) || v3 )
      return 0LL;
    *((_BYTE *)this + 289) = v5;
    v21 = 4;
    if ( v4 )
      v21 = 2;
    if ( !(unsigned __int8)CTopLevelWindow3D::ShouldShowTransition(this, v21) )
      return 0LL;
    v22 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this);
    v23 = v22;
    if ( v22 >= 0 )
    {
      v24 = *(_OWORD *)(*((_QWORD *)this + 41) + 48LL);
      *((_DWORD *)this + 93) = v21;
      *(_OWORD *)((char *)this + 308) = v24;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x234,
      (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v22,
      v28);
    return v23;
  }
  else
  {
    *((_BYTE *)this + 288) = v3 != 0;
    *((_BYTE *)this + 289) = v5;
    if ( (unsigned __int8)CTopLevelWindow3D::ShouldShowTransition(this, 3LL) )
    {
      v11 = *((_QWORD *)this + 41);
      if ( *((_BYTE *)this + 288) )
      {
        if ( (*(_BYTE *)(v11 + 604) & 0x40) == 0 && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
        {
          if ( *((_QWORD *)this + 45) )
          {
            v25 = CTopLevelWindow3D::StopAnimation(this);
            if ( v25 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x207,
                (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
                (const char *)(unsigned int)v25,
                v28);
          }
          started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
          v13 = started;
          if ( started < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x209,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)started,
              v28);
            return v13;
          }
        }
      }
      else
      {
        v16 = *(CTopLevelWindow **)(v11 + 400);
        if ( (*(_BYTE *)(v11 + 607) & 8) != 0 )
        {
          v26 = CTopLevelWindow::ShowWindow(v16, 1);
          v27 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x210,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v26,
              v28);
            return v27;
          }
          *(_BYTE *)(*((_QWORD *)this + 41) + 607LL) &= ~8u;
        }
        else
        {
          v17 = CTopLevelWindow::ShowWindow(v16, 0);
          v18 = v17;
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x218,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v17,
              v28);
            return v18;
          }
          *((_BYTE *)this + 480) = 1;
          v19 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
          v20 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x21A,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v19,
              v28);
            return v20;
          }
        }
      }
      v14 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
      v15 = v14;
      if ( v14 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x221,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v14,
        v28);
      return v15;
    }
    else
    {
      v7 = *((_QWORD *)this + 41);
      v8 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
      if ( *((_BYTE *)v8 + 280) && v7 && CLivePreview::_IsInLivePreview(v8, *((const struct CWindowData **)this + 41)) )
        return 0LL;
      v9 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v7 + 400), 1);
      v10 = v9;
      if ( v9 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x227,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v9,
        v28);
      return v10;
    }
  }
}
