/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18007BCB4
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039EBC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180007B30 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000D76C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800167EC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180018A54 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800286B4 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x1800380E8 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x18007A7F8 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18007ADBC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18007C46C (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18007D268 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x18007D3B0 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18007D5B4 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x18007E0B8 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x18008DE50 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 */

__int64 __fastcall CLivePreview::_FadeOutToGlass(CLivePreview *this, const struct CWindowData *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v7; // r8
  struct CVisual *v8; // r8
  VisualCollection *v9; // rdi
  int inserted; // eax
  struct CVisual *v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r15
  CTopLevelWindow *v20; // rcx
  int v21; // eax
  bool v22; // zf
  CBaseObject *v23; // r15
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  CWindowList *v27; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  __int64 v29; // r8
  struct _LIST_ENTRY *v30; // r9
  struct _LIST_ENTRY *i; // r14
  CWindowData **Flink; // rcx
  char v33; // r13
  unsigned int v34; // r12d
  int v35; // eax
  struct CVisual *v36; // r15
  CWindowData **v37; // rcx
  int v38; // eax
  char v39; // bl
  _QWORD *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // edx
  int v43; // eax
  __int64 v44; // rbx
  struct _LIST_ENTRY v45; // xmm0
  int v46; // eax
  int updated; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  __int128 v54; // [rsp+30h] [rbp-30h] BYREF
  __int128 v55; // [rsp+40h] [rbp-20h] BYREF
  __int64 v56; // [rsp+50h] [rbp-10h]
  unsigned int v57; // [rsp+58h] [rbp-8h]
  CBaseObject *v58; // [rsp+B0h] [rbp+50h] BYREF
  struct _LIST_ENTRY *v59; // [rsp+B8h] [rbp+58h]

  v4 = CLivePreview::_HideExistingVisuals(this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x5B0u);
    return v5;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 64) + 72LL) )
    goto LABEL_76;
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *((_QWORD *)this + 36));
  v7 = *((_QWORD *)this + 68);
  if ( v7 )
    v8 = *(struct CVisual **)(v7 + 400);
  else
    v8 = 0LL;
  v9 = (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32);
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               this,
               v8,
               0,
               1);
  v5 = inserted;
  if ( inserted >= 0 )
  {
    v11 = this;
    v12 = *(_QWORD *)(*((_QWORD *)this + 69) + 48LL);
    if ( v12 )
      v11 = *(struct CVisual **)(v12 + 400);
    v13 = VisualCollection::InsertRelative(v9, *((struct CVisual **)this + 63), v11, 1u, 1);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x5BBu);
      return v5;
    }
    v16 = *((_DWORD *)this + 82) - 1;
    v17 = v16;
    if ( v16 >= 0 )
    {
      v18 = 40LL * v16;
      do
      {
        v19 = *(_QWORD *)(v18 + *((_QWORD *)this + 38));
        if ( *(char *)(v19 + 606) >= 0 && (!a2 || *(_QWORD *)(v19 + 40) != *((_QWORD *)a2 + 5)) )
        {
          v20 = *(CTopLevelWindow **)(v19 + 400);
          v58 = 0LL;
          v21 = CTopLevelWindow::CloneVisualTreeForLivePreview(v20, 0, v14, v15, &v58);
          v5 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x5C6u);
            return v5;
          }
          v22 = *(_DWORD *)(v19 + 112) == 1;
          v23 = v58;
          if ( v22 )
          {
            v24 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 64) + 32LL), v58, 0LL, 0, 1);
            v5 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x5CAu);
              return v5;
            }
          }
          else
          {
            v25 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 65) + 32LL), v58, 0LL, 0, 1);
            v5 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x5CEu);
              return v5;
            }
          }
          *(_QWORD *)(v18 + *((_QWORD *)this + 38) + 8) = v23;
        }
        v18 -= 40LL;
        --v17;
      }
      while ( v17 >= 0 );
    }
    v26 = *((_QWORD *)this + 36);
    v55 = 0LL;
    v56 = 0LL;
    v27 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
    v57 = 0;
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(v27, v26);
    v59 = WindowListForDesktop;
    for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
    {
      Flink = (CWindowData **)i[25].Flink;
      if ( Flink && LODWORD(i[7].Flink) == 12 )
      {
        v33 = 0;
        v34 = CAccent::s_clrCurrentAccentBackground;
        if ( LODWORD(i[10].Flink) != CAccent::s_clrCurrentAccentBackground )
        {
          v34 = (unsigned int)i[10].Flink;
          LODWORD(i[10].Flink) = CAccent::s_clrCurrentAccentBackground;
          CTopLevelWindow::OnAccentPolicyUpdated(Flink);
          Flink = (CWindowData **)i[25].Flink;
          v33 = 1;
        }
        v58 = 0LL;
        v35 = CTopLevelWindow::CloneVisualTreeForLivePreview((CTopLevelWindow *)Flink, 0, v29, (__int64)v30, &v58);
        v5 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x5EBu);
          goto LABEL_64;
        }
        v36 = v58;
        if ( v58 && !*((_QWORD *)v58 + 90) )
          *((_QWORD *)v58 + 90) = i;
        if ( v33 )
        {
          v37 = (CWindowData **)i[25].Flink;
          LODWORD(i[10].Flink) = v34;
          CTopLevelWindow::OnAccentPolicyUpdated(v37);
        }
        v38 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), v36, 0LL, 0, 1);
        v5 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x5F8u);
          goto LABEL_64;
        }
        if ( SHIBYTE(i[37].Blink) < 0 )
        {
          v39 = 0;
          CTopLevelWindow::SetLivePreviewAlpha(v36, 0.0);
        }
        else
        {
          v39 = 1;
        }
        v40 = (_QWORD *)((char *)this + 400);
        *(_QWORD *)&v54 = v36;
        v41 = *((unsigned int *)this + 106);
        BYTE8(v54) = v39;
        v42 = v41 + 1;
        if ( (int)v41 + 1 >= (unsigned int)v41 )
        {
          if ( v42 > *((_DWORD *)this + 105) )
          {
            v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v40, 16, 1, &v54);
            if ( v43 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0xC0u);
          }
          else
          {
            *(_OWORD *)(*v40 + 16 * v41) = v54;
            *((_DWORD *)this + 106) = v42;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v44 = v57;
        v30 = i + 3;
        if ( v57 + 1 >= v57 )
        {
          if ( v57 + 1 > HIDWORD(v56) )
          {
            v46 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v55, 16, 1, v30);
            if ( v46 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0xC0u);
          }
          else
          {
            v45 = *v30;
            ++v57;
            *(struct _LIST_ENTRY *)(v55 + 16 * v44) = v45;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        if ( v36 )
          CBaseObject::Release(v36);
        WindowListForDesktop = v59;
      }
    }
    CLivePreview::_AddImmersiveBackground((__int64)this, (__int64)&v55);
    VisualCollection::InsertRelative(
      (VisualCollection *)(*((_QWORD *)this + 63) + 32LL),
      *((struct CVisual **)this + 65),
      0LL,
      0,
      1);
    updated = CLivePreview::_UpdateGlassVisual(this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x60Au);
LABEL_64:
      DynArrayImpl<0>::~DynArrayImpl<0>(&v55);
      return v5;
    }
    v48 = CLivePreview::_UpdateResources(this);
    v5 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x60Bu);
      goto LABEL_64;
    }
    v49 = CLivePreview::_UpdateInstructions(this);
    v5 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v49, 0x60Cu);
      goto LABEL_64;
    }
    v50 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 64LL))(*((_QWORD *)this + 66));
    v5 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v50, 0x60Eu);
      goto LABEL_64;
    }
    v51 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 64LL))(*((_QWORD *)this + 65));
    v5 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, 0x60Fu);
      goto LABEL_64;
    }
    v52 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 64LL))(*((_QWORD *)this + 64));
    v5 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0x610u);
      goto LABEL_64;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v55);
LABEL_76:
    *((_DWORD *)this + 146) = 3;
    CLivePreview::GetAnimationDuration(0);
    CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 58));
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x5B5u);
  return v5;
}
