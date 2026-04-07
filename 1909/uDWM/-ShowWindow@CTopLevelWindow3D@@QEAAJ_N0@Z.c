/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022FA0
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001850C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000CA3C (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18000ED5C (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020FF0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800219E0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x1800230E4 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F5C0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007C68C (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18008E0EC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(const struct CWindowData **this, bool a2, char a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  int v7; // eax
  const struct CWindowData *v9; // r11
  CLivePreview *v10; // rcx
  int v12; // eax
  int v13; // eax
  const struct CWindowData *v14; // rax
  int v15; // eax
  int v16; // eax
  int started; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  void *v19; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( !a2 || *((char *)this[41] + 607) < 0 )
  {
    if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation((CTopLevelWindow3D *)this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x125u, v19);
    }
    else if ( !this[45] || *((_DWORD *)this + 92) != 3 )
    {
      v6 = CTopLevelWindow3D::StopAnimation((__int64)this);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x12Eu, v19);
      }
      else
      {
        v7 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[41] + 50), 0);
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x130u, v19);
      }
    }
    return v3;
  }
  if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, a2) )
  {
    v15 = CTopLevelWindow3D::StartAnimation((__int64)this, 7u);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x10Eu, v19);
  }
  else
  {
    if ( !CTopLevelWindow3D::ShouldShowTransition((__int64)this, 1) )
    {
LABEL_10:
      if ( !this[45] )
      {
        v9 = this[41];
        v10 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
        if ( !*((_BYTE *)v10 + 280) || !v9 || !CLivePreview::_IsInLivePreview(v10, this[41]) )
        {
          v12 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)v9 + 50), 1);
          v3 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x11Du, v19);
        }
      }
      return v3;
    }
    if ( !a3 )
    {
      v14 = this[41];
      if ( *((_DWORD *)v14 + 153) != 93 )
        goto LABEL_10;
      *((_DWORD *)v14 + 153) = 4095;
    }
    if ( this[45] )
    {
      v16 = CTopLevelWindow3D::StopAnimation((__int64)this);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x115,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v16,
          v18);
    }
    v13 = CTopLevelWindow3D::StartAnimation((__int64)this, 1u);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x117u, v19);
  }
  return v3;
}
