/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800369B4
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180036568 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180036980 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024D50 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18002631C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x180036B84 (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180036C58 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180036E98 (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180087578 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CTopLevelWindow *this, char a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  int v6; // eax
  struct CVisual **v8; // rsi
  struct CVisual *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  struct CWindowData *v12; // rdx
  int v13; // r8d
  CAccent *v14; // rdi
  int updated; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int inserted; // eax
  int v21; // eax
  CBaseObject *v22; // rcx

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
      v21 = VisualCollection::Remove(
              (VisualCollection *)(*((_QWORD *)this + 32) + 32LL),
              *((struct CVisual **)this + 33));
      v3 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xDB0u);
      }
      else
      {
        v22 = (CBaseObject *)*((_QWORD *)this + 33);
        if ( v22 )
        {
          CBaseObject::Release(v22);
          *((_QWORD *)this + 33) = 0LL;
        }
      }
    }
  }
  else
  {
    v8 = (struct CVisual **)((char *)this + 264);
    v9 = (struct CVisual *)*((_QWORD *)this + 33);
    if ( !v9 )
    {
      v16 = CAccent::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CAccent **)this + 33);
      v3 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xD87u);
        return v3;
      }
      wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService(v18, v17, v19);
      *((_QWORD *)*v8 + 46) = *((_QWORD *)this + 102);
      *((_BYTE *)*v8 + 632) = (*(_DWORD *)(*((_QWORD *)this + 90) + 104LL) & 0x400000) != 0;
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *v8, 0LL, 1u, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xD8Du);
        return v3;
      }
      v4 = *((_QWORD *)this + 90);
      v9 = *v8;
    }
    v10 = *(_QWORD *)(v4 + 120);
    *((_QWORD *)v9 + 50) = *(_QWORD *)(v4 + 40);
    *((_QWORD *)v9 + 51) = v10;
    v11 = *((_QWORD *)this + 90);
    v12 = (struct CWindowData *)v11;
    if ( !*(_DWORD *)(v11 + 160) && (*(_BYTE *)(v11 + 156) & 2) == 0 && *(_DWORD *)(v11 + 152) == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 90) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
      v12 = (struct CWindowData *)*((_QWORD *)this + 90);
    }
    v13 = *((_DWORD *)v12 + 38);
    if ( v13 == 5 || v13 == 3 )
      CWindowList::RegisterAccentState(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61));
    else
      CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), v12);
    v14 = *v8;
    if ( a2 != *((_BYTE *)*v8 + 397) )
    {
      (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v14 + 24LL))(*v8, 0x10000LL);
      *((_BYTE *)v14 + 397) = a2;
      v14 = *v8;
    }
    updated = CAccent::UpdateAccentPolicy(
                v14,
                (const struct tagRECT *)(*((_QWORD *)this + 90) + 48LL),
                (__m128i *)(*((_QWORD *)this + 90) + 152LL),
                *(struct CResource **)(*((_QWORD *)this + 90) + 360LL));
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xDA9u);
  }
  return v3;
}
