/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800286E8
 * Callers:
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800286B4 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180032E88 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 * Callees:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x18000B050 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180012B04 (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180026AD0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180029898 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002A114 (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x18008D334 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CTopLevelWindow *this, char a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  struct CVisual **v8; // rsi
  struct CVisual *v9; // r8
  int inserted; // eax
  struct CVisual *v11; // rcx
  int updated; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct CWindowData *v15; // rdx
  int v16; // r8d
  CAccent *v17; // rbx
  CBaseObject *v18; // rcx
  int v19; // r9d
  int v20; // [rsp+20h] [rbp-18h]
  unsigned int v21; // [rsp+20h] [rbp-18h]
  void *v22; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v4 = *((_QWORD *)this + 90);
  v6 = *(_DWORD *)(v4 + 152);
  if ( !v6 || v6 == 6 )
  {
    if ( *((_QWORD *)this + 33) )
    {
      CWindowList::UnregisterAccentState(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
        (struct CWindowData *)v4);
      inserted = VisualCollection::Remove(
                   (VisualCollection *)(*((_QWORD *)this + 32) + 32LL),
                   *((struct CVisual **)this + 33));
      v3 = inserted;
      if ( inserted < 0 )
      {
        v21 = 3484;
        goto LABEL_29;
      }
      v18 = (CBaseObject *)*((_QWORD *)this + 33);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *((_QWORD *)this + 33) = 0LL;
      }
    }
  }
  else
  {
    v8 = (struct CVisual **)((char *)this + 264);
    v9 = (struct CVisual *)*((_QWORD *)this + 33);
    if ( !v9 )
    {
      inserted = CAccent::Create((struct CAccent **)this + 33);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v21 = 3445;
        goto LABEL_29;
      }
      v11 = *v8;
      *((_QWORD *)v11 + 46) = *((_QWORD *)this + 102);
      updated = CAccent::UpdateAcrylicBackgroundBrush((struct Windows::UI::Composition::ICompositionBrush **)v11);
      v3 = updated;
      if ( updated < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBB,
          (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)updated,
          v20);
      else
        v3 = 0;
      if ( v3 < 0 )
      {
        v21 = 3446;
        v19 = v3;
        goto LABEL_31;
      }
      *((_BYTE *)*v8 + 632) = (*(_DWORD *)(*((_QWORD *)this + 90) + 104LL) & 0x400000) != 0;
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *v8, 0LL, 1u, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v21 = 3448;
        goto LABEL_29;
      }
      v4 = *((_QWORD *)this + 90);
      v9 = *v8;
    }
    v13 = *(_QWORD *)(v4 + 120);
    *((_QWORD *)v9 + 50) = *(_QWORD *)(v4 + 40);
    *((_QWORD *)v9 + 51) = v13;
    v14 = *((_QWORD *)this + 90);
    v15 = (struct CWindowData *)v14;
    if ( !*(_DWORD *)(v14 + 160) && (*(_BYTE *)(v14 + 156) & 2) == 0 && *(_DWORD *)(v14 + 152) == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 90) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
      v15 = (struct CWindowData *)*((_QWORD *)this + 90);
    }
    v16 = *((_DWORD *)v15 + 38);
    if ( v16 < 3 || v16 > 5 )
      CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), v15);
    else
      CWindowList::RegisterAccentState(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61));
    v17 = *v8;
    if ( a2 != *((_BYTE *)*v8 + 397) )
    {
      (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v17 + 24LL))(*v8, 0x10000LL);
      *((_BYTE *)v17 + 397) = a2;
      v17 = *v8;
    }
    inserted = CAccent::UpdateAccentPolicy(
                 v17,
                 (const struct tagRECT *)(*((_QWORD *)this + 90) + 48LL),
                 (__m128i *)(*((_QWORD *)this + 90) + 152LL),
                 *(struct CBaseGeometryProxy **)(*((_QWORD *)this + 90) + 368LL));
    v3 = inserted;
    if ( inserted < 0 )
    {
      v21 = 3477;
LABEL_29:
      v19 = inserted;
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v21, v22);
    }
  }
  return (unsigned int)v3;
}
