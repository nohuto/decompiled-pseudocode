/*
 * XREFs of ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180022740
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180022580 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z @ 0x180022620 (-Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180022698 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180022708 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x180022B44 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x1800497A4 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x180088614 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::EnsureTopLevelWindow(CWindowList *this, struct CWindowData *a2)
{
  int v3; // eax
  CVisual *v4; // r14
  int IsMagnifier; // edi
  bool v6; // r9
  HWND v7; // rdx
  CDesktopManager *v8; // rax
  CTopLevelWindow3D *v9; // rbp
  struct IDwmChannel *v10; // rsi
  CTopLevelWindow3D *v11; // rax
  CTopLevelWindow3D *v12; // rdi
  int v13; // eax
  bool v14; // dl
  int v15; // esi
  bool v16; // zf
  __int64 v18; // rdx
  int IsCursor; // eax
  unsigned int v20; // ebx
  unsigned int v21; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CVisual *v23; // [rsp+50h] [rbp+8h] BYREF

  v23 = this;
  if ( *((_QWORD *)a2 + 49) )
    return 0LL;
  v23 = 0LL;
  v3 = CTopLevelWindow::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5), &v23);
  v4 = v23;
  IsMagnifier = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x40u);
  }
  else if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 15)) )
  {
    v7 = (HWND)*((_QWORD *)a2 + 5);
    if ( v7 )
    {
      if ( (*((_BYTE *)a2 + 600) & 0x10) == 0 )
        CTopLevelWindow::SendTopLevelWindowCommand(v4, v7, a2, v6);
    }
  }
  if ( IsMagnifier < 0 )
  {
    v18 = 1689LL;
    goto LABEL_22;
  }
  v8 = CDesktopManager::s_pDesktopManagerInstance;
  v9 = 0LL;
  *((_QWORD *)v4 + 90) = a2;
  *((_QWORD *)a2 + 49) = v4;
  v10 = (struct IDwmChannel *)*((_QWORD *)v8 + 5);
  v11 = (CTopLevelWindow3D *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               488LL);
  if ( v11 )
    v12 = CTopLevelWindow3D::CTopLevelWindow3D(v11);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x40u);
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69E,
      (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v15,
      v21);
    return (unsigned int)v15;
  }
  v13 = CTopLevelWindow3D::Initialize(v12, v10);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x40u);
  }
  else
  {
    v9 = v12;
    v12 = 0LL;
  }
  if ( v12 )
    CBaseObject::Release(v12);
  if ( v15 < 0 )
    goto LABEL_25;
  *((_QWORD *)v9 + 41) = a2;
  *(_OWORD *)((char *)v9 + 308) = *((_OWORD *)a2 + 3);
  v16 = (*((_BYTE *)a2 + 599) & 1) == 0;
  *((_QWORD *)a2 + 50) = v9;
  if ( !v16 )
  {
    IsMagnifier = CVisual::SetIsMagnifier(v4, v14);
    if ( IsMagnifier >= 0 )
    {
      *((_BYTE *)a2 + 599) &= ~1u;
      goto LABEL_17;
    }
    v18 = 1700LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)IsMagnifier,
      v21);
    return (unsigned int)IsMagnifier;
  }
LABEL_17:
  if ( (*((_BYTE *)a2 + 600) & 1) == 0 )
    return 0LL;
  IsCursor = CVisual::SetIsCursor(v4, 1);
  v20 = IsCursor;
  if ( IsCursor >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6AA,
    (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)IsCursor,
    v21);
  return v20;
}
