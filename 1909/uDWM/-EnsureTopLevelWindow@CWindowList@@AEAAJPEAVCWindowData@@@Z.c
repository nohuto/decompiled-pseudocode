/*
 * XREFs of ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800263B0
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001850C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180025F94 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180026284 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180026300 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180026378 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x180026728 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18004AF70 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x18008E434 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___ @ 0x18008E674 (CWindowList--ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___.c)
 */

__int64 __fastcall CWindowList::EnsureTopLevelWindow(CWindowList *this, struct CWindowData *a2)
{
  int v4; // eax
  CVisual *v5; // r14
  int v6; // edi
  bool v7; // r9
  HWND v8; // rdx
  CTopLevelWindow3D *v9; // rsi
  CTopLevelWindow3D *v10; // rax
  CTopLevelWindow3D *v11; // rdi
  int v12; // eax
  bool v13; // dl
  int IsCursor; // ebx
  struct CWindowData *v15; // rax
  struct CWindowData *v16; // rax
  __int64 v18; // rdx
  unsigned int v19; // [rsp+20h] [rbp-10h]
  void *v20; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct CWindowData *v22; // [rsp+68h] [rbp+38h] BYREF
  CVisual *v23; // [rsp+70h] [rbp+40h] BYREF

  v22 = a2;
  if ( *((_QWORD *)a2 + 50) )
    return 0LL;
  v23 = 0LL;
  v4 = CTopLevelWindow::Create((struct CCanvasVisual ***)&v23);
  v5 = v23;
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3Eu, v20);
  }
  else if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 15)) )
  {
    v8 = (HWND)*((_QWORD *)a2 + 5);
    if ( v8 )
    {
      if ( (*((_BYTE *)a2 + 608) & 0x10) == 0 )
        CTopLevelWindow::SendTopLevelWindowCommand(v5, v8, a2, v7);
    }
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A3,
      (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v6,
      v19);
    return (unsigned int)v6;
  }
  v9 = 0LL;
  *((_QWORD *)v5 + 90) = v22;
  *((_QWORD *)v22 + 50) = v5;
  v10 = (CTopLevelWindow3D *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               488LL);
  if ( v10 )
    v11 = CTopLevelWindow3D::CTopLevelWindow3D(v10);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    IsCursor = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x40u, v20);
LABEL_20:
    v9 = 0LL;
    goto LABEL_14;
  }
  v12 = CTopLevelWindow3D::Initialize(v11);
  IsCursor = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x40u, v20);
  }
  else
  {
    v9 = v11;
    v11 = 0LL;
    IsCursor = 0;
  }
  if ( IsCursor < 0 )
    goto LABEL_20;
LABEL_14:
  if ( v11 )
    CBaseObject::Release(v11);
  if ( IsCursor < 0 )
  {
    v18 = 1704LL;
  }
  else
  {
    v15 = v22;
    *((_QWORD *)v9 + 41) = v22;
    *(_OWORD *)((char *)v9 + 308) = *((_OWORD *)v15 + 3);
    *((_QWORD *)v22 + 51) = v9;
    v16 = v22;
    if ( (*((_BYTE *)v22 + 607) & 1) == 0 )
    {
LABEL_18:
      if ( (*((_BYTE *)v16 + 608) & 1) == 0 )
        return 0LL;
      IsCursor = CVisual::SetIsCursor(v5, 1);
      if ( IsCursor >= 0 )
      {
        wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService();
        v23 = (CVisual *)&v22;
        CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___(this, &v23);
        return 0LL;
      }
      v18 = 1716LL;
      goto LABEL_28;
    }
    IsCursor = CVisual::SetIsMagnifier(v5, v13);
    if ( IsCursor >= 0 )
    {
      *((_BYTE *)v22 + 607) &= ~1u;
      v16 = v22;
      goto LABEL_18;
    }
    v18 = 1710LL;
  }
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)IsCursor,
    v19);
  return (unsigned int)IsCursor;
}
