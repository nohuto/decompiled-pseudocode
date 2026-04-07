/*
 * XREFs of ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009081C
 * Callers:
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18008B644 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001CDE0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180023254 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18008F8A0 (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 *     ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x18008FB04 (-UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x18009024C (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180090590 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 *     ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x180090AD0 (-ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementStart(
        struct CAnimatedGlassSheet **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v4; // ebx
  struct CWindowData *WindowDataByHwnd; // rax
  CWindowArrangementTransition *v6; // rcx
  struct CWindowData *v7; // rsi
  struct CRenderDataVisual *RootVisualForDesktop; // r15
  int v9; // eax
  struct CVisual *v10; // rdx
  struct CVisual *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  int inserted; // eax
  struct CAnimatedGlassSheet *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  const struct tagRECT *v19; // r8
  LONG v20; // ecx
  CAnimatedGlassSheet *v21; // rcx
  int started; // eax
  int updated; // eax
  int v24; // r8d
  CRippleEffect *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // r8d
  struct tagRECT v31; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                       *((HWND *)a2 + 1));
  *((_BYTE *)this + 24) = 0;
  v7 = WindowDataByHwnd;
  if ( WindowDataByHwnd && CWindowArrangementTransition::ShouldShowTransition(v6, WindowDataByHwnd) )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                             *((_QWORD *)v7 + 15));
    v9 = CWindowArrangementTransition::EnsureAnimationObjects(this);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x67u);
      return v4;
    }
    v10 = *this;
    v11 = *this;
    if ( *this )
    {
      v12 = *((_QWORD *)v10 + 3);
      if ( v12 )
      {
        v13 = VisualCollection::Remove((VisualCollection *)(v12 + 32), v10);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x70u);
          return v4;
        }
        v11 = *this;
      }
    }
    inserted = VisualCollection::InsertRelative(
                 (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                 v11,
                 *((struct CVisual **)v7 + 49),
                 0,
                 1);
    v4 = inserted;
    if ( inserted >= 0 )
    {
      v15 = this[1];
      if ( v15 )
      {
        v16 = *((_QWORD *)v15 + 3);
        if ( v16 )
        {
          v17 = VisualCollection::Remove((VisualCollection *)(v16 + 32), v15);
          v4 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x78u);
            return v4;
          }
          v15 = this[1];
        }
        v18 = VisualCollection::InsertRelative(
                (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                v15,
                *((struct CVisual **)v7 + 49),
                1u,
                1);
        v4 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x7Au);
          return v4;
        }
      }
      v19 = (const struct tagRECT *)((char *)a2 + 16);
      v20 = *((_DWORD *)a2 + 8);
      v31.top = *((_DWORD *)a2 + 9);
      v31.bottom = v31.top;
      v31.left = v20;
      v31.right = v20;
      v21 = *this;
      if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
      {
        started = CAnimatedGlassSheet::StartRectAnimation(v21, &v31, v19, 0.2);
        v4 = started;
        if ( started < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x83u);
          return v4;
        }
        updated = CAnimatedGlassSheet::UpdateAlphaAnimation(*this, 1.0, 0.1);
        v4 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x84u);
          return v4;
        }
        v25 = this[1];
        if ( v25 )
        {
          v26 = CRippleEffect::Start(v25, (const struct tagPOINT *)a2 + 4, 0.2);
          v4 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x87u);
            return v4;
          }
        }
      }
      else
      {
        v27 = CAnimatedGlassSheet::StartRectAnimation(v21, &v31, v19, 0.000001);
        v4 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x92u);
          return v4;
        }
        v28 = CAnimatedGlassSheet::UpdateAlphaAnimation(*this, 1.0, 0.000001);
        v4 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x93u);
          return v4;
        }
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmGlassSheetAnimation_Start, v24);
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmRippleAnimation_Start, v29);
      }
      this[2] = (struct CAnimatedGlassSheet *)*((_QWORD *)a2 + 1);
      *((_BYTE *)this + 24) = 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x72u);
    }
  }
  return v4;
}
