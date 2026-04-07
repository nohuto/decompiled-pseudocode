/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000D8A0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B2F4 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001BC50 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800210F0 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180023C40 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18000F590 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180011450 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180011520 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001286C (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180012F50 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800142F0 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800146E8 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18001BED4 (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001CDE0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001F520 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001F720 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180022740 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002379C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180029F70 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800369B4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180037574 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180037FC8 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180038170 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E150 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  char v3; // al
  __int64 v5; // rdx
  char v6; // al
  __int64 v7; // rsi
  char v9; // r15
  int v10; // eax
  unsigned int v11; // ebx
  CTopLevelWindow3D *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  struct _LIST_ENTRY *PrecedingVisibleWindowVisual; // rax
  struct CVisual *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  int inserted; // eax
  unsigned int v22; // ebx
  struct CVisual *v23; // r14
  __int64 v24; // rbx
  int v25; // eax
  __int64 i; // rbx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rbx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rbx
  double *v34; // rbx
  double v35; // xmm3_8
  float v36; // xmm0_4
  int v37; // eax
  __int64 v38; // r14
  int v39; // eax
  __int64 j; // rbx
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rbx
  CWindowIconic *v44; // rcx
  __int64 v45; // rbx
  CRenderDataVisual *v46; // rcx
  int v47; // eax
  __int64 k; // rbx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rbx
  CTopLevelWindow *v52; // rcx
  __int64 v53; // rax
  bool v54; // dl
  __int64 v55; // rcx
  char v56; // al
  __int64 v57; // rcx
  unsigned __int8 v58; // al
  int updated; // eax
  CVisual *v60; // rcx
  unsigned int v61; // ebx
  CVisual *v62; // rax
  int v63; // edx
  int v64; // eax
  unsigned int v65; // ebx
  int v66; // eax
  unsigned int v67; // ebx
  int v68; // eax
  unsigned int v69; // ebx
  __int64 v70; // rax
  char v71; // al
  int v72; // ebx
  CWindowData *v73; // rcx
  CTransitionVisualController *v74; // rcx
  __int64 v75; // rdx
  int v76; // r8d
  _QWORD *v77; // rax
  int v78; // eax
  __int64 *v79; // r9
  __int64 v80; // r10
  __int64 v81; // rax
  int v82; // edx
  __int64 v83; // r9
  __int64 v84; // r8
  unsigned int v85; // r15d
  unsigned int v86; // r14d
  __int64 v87; // r12
  int v88; // eax
  int v89; // eax
  unsigned int v90; // ebx
  double v91; // rax
  __int64 v92; // rcx
  struct CVisual *v93; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int v95; // eax
  unsigned int v96; // ebx
  int v98; // [rsp+20h] [rbp-69h]
  __int128 v99; // [rsp+30h] [rbp-59h] BYREF
  __int64 v100; // [rsp+40h] [rbp-49h]
  unsigned int v101; // [rsp+48h] [rbp-41h]
  __int64 Buffer; // [rsp+50h] [rbp-39h] BYREF
  __int64 v103; // [rsp+58h] [rbp-31h]
  __int128 v104; // [rsp+60h] [rbp-29h]
  __int128 v105; // [rsp+70h] [rbp-19h]
  __int128 v106; // [rsp+80h] [rbp-9h]
  __int64 v107; // [rsp+90h] [rbp+7h]
  char v108; // [rsp+98h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  bool v110; // [rsp+F8h] [rbp+6Fh] BYREF
  char v111; // [rsp+100h] [rbp+77h]

  v111 = a3;
  v3 = *((_BYTE *)a2 + 596);
  v5 = *((_QWORD *)a2 + 5);
  v6 = v3 & 1;
  v7 = 0LL;
  v110 = 0;
  v9 = a3;
  if ( v5 && v5 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 84) || !v6 )
  {
    v10 = CLivePreview::OnWindowShowHide(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
            a2,
            &v110,
            0);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB12,
        (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v10,
        v98);
      return v11;
    }
    if ( !v110 )
    {
      v12 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 50);
      if ( v12 )
      {
        v13 = CTopLevelWindow3D::ShowWindow(v12, 0, 0);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB18,
            (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v13,
            v98);
          return v14;
        }
      }
    }
  }
  else
  {
    v15 = CWindowList::EnsureTopLevelWindow(CDesktopManager::s_pDesktopManagerInstance, a2);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAD9,
        (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v15,
        v98);
      return v16;
    }
    PrecedingVisibleWindowVisual = CWindowList::FindPrecedingVisibleWindowVisual(this, (struct _LIST_ENTRY *)a2);
    Buffer = *((_QWORD *)a2 + 15);
    v103 = 0LL;
    v104 = 0LL;
    v18 = (struct CVisual *)PrecedingVisibleWindowVisual;
    v107 = -1LL;
    v108 = 0;
    v105 = 0LL;
    v106 = 0LL;
    v19 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
    if ( v19 )
      v20 = v19[3];
    else
      v20 = 0LL;
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(v20 + 32),
                 *((struct CVisual **)a2 + 49),
                 v18,
                 1,
                 1);
    v22 = inserted;
    if ( inserted < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xADC,
        (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)inserted,
        v98);
      return v22;
    }
    v23 = (struct CVisual *)*((_QWORD *)a2 + 51);
    if ( v23 )
    {
      if ( *((_QWORD *)v23 + 3) )
      {
        v93 = (struct CVisual *)*((_QWORD *)a2 + 49);
        RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
        v95 = VisualCollection::InsertRelative(
                (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                v23,
                v93,
                1,
                1);
        v96 = v95;
        if ( v95 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xADF,
            (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v95,
            v98);
          return v96;
        }
      }
    }
    v24 = *((_QWORD *)a2 + 49);
    v25 = *(_DWORD *)(v24 + 80);
    if ( (v25 & 0x400000) == 0 )
    {
      *(_DWORD *)(v24 + 80) = v25 | 0x400000;
      for ( i = *(_QWORD *)(v24 + 24); i; i = *(_QWORD *)(i + 24) )
      {
        if ( (*(_BYTE *)(i + 80) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
      }
    }
    v27 = *((_QWORD *)a2 + 49);
    v28 = *(_DWORD *)(v27 + 80);
    if ( (v28 & 0x8000) == 0 )
    {
      *(_DWORD *)(v27 + 80) = v28 | 0x8000;
      CVisual::PropagateDirtyChildren((CVisual *)v27);
      v27 = *((_QWORD *)a2 + 49);
    }
    v29 = *(_DWORD *)(v27 + 80);
    if ( (v29 & 0x10000) == 0 )
    {
      v30 = *(_QWORD *)(v27 + 24);
      for ( *(_DWORD *)(v27 + 80) = v29 | 0x10000; v30; v30 = *(_QWORD *)(v30 + 24) )
      {
        if ( (*(_BYTE *)(v30 + 80) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
      }
    }
    v31 = *((_QWORD *)a2 + 49);
    v32 = *(_DWORD *)(v31 + 80);
    if ( (v32 & 0x20000) == 0 )
    {
      v33 = *(_QWORD *)(v31 + 24);
      for ( *(_DWORD *)(v31 + 80) = v32 | 0x20000; v33; v33 = *(_QWORD *)(v33 + 24) )
      {
        if ( (*(_BYTE *)(v33 + 80) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
      }
    }
    v34 = (double *)*((_QWORD *)a2 + 49);
    v35 = (double)*(unsigned __int8 *)(*((_QWORD *)v34 + 90) + 344LL) / 255.0;
    v36 = v35;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v34[23] - v36)) & _xmm) > 0.0000011920929 )
    {
      v91 = *v34;
      v92 = *((_QWORD *)a2 + 49);
      v34[23] = v35;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)&v91 + 24LL))(v92, 32LL);
      v34 = (double *)*((_QWORD *)a2 + 49);
    }
    v37 = *((_DWORD *)v34 + 20);
    if ( (v37 & 0x40000) == 0 )
    {
      v38 = *((_QWORD *)v34 + 3);
      for ( *((_DWORD *)v34 + 20) = v37 | 0x40000; v38; v38 = *(_QWORD *)(v38 + 24) )
      {
        if ( (*(_BYTE *)(v38 + 80) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
      }
    }
    v39 = *((_DWORD *)v34 + 20);
    if ( (v39 & 0x4000000) == 0 )
    {
      *((_DWORD *)v34 + 20) = v39 | 0x4000000;
      for ( j = *((_QWORD *)v34 + 3); j; j = *(_QWORD *)(j + 24) )
      {
        if ( (*(_BYTE *)(j + 80) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)j + 32LL))(j);
      }
    }
    v41 = *((_QWORD *)a2 + 49);
    if ( v41 )
    {
      v42 = *(_DWORD *)(v41 + 80);
      if ( (v42 & 0x100000) == 0 )
      {
        v43 = *(_QWORD *)(v41 + 24);
        for ( *(_DWORD *)(v41 + 80) = v42 | 0x100000; v43; v43 = *(_QWORD *)(v43 + 24) )
        {
          if ( (*(_BYTE *)(v43 + 80) & 1) != 0 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
        }
      }
    }
    v44 = (CWindowIconic *)*((_QWORD *)a2 + 54);
    if ( v44 )
      CWindowIconic::OnColorizationUpdated(v44, 1);
    v45 = *((_QWORD *)a2 + 49);
    v46 = *(CRenderDataVisual **)(v45 + 288);
    if ( v46 )
      CRenderDataVisual::ClearInstructions(v46);
    v47 = *(_DWORD *)(v45 + 80);
    if ( (v47 & 0x80000) == 0 )
    {
      *(_DWORD *)(v45 + 80) = v47 | 0x80000;
      for ( k = *(_QWORD *)(v45 + 24); k; k = *(_QWORD *)(k + 24) )
      {
        if ( (*(_BYTE *)(k + 80) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)k + 32LL))(k);
      }
    }
    v49 = *((_QWORD *)a2 + 49);
    v50 = *(_DWORD *)(v49 + 80);
    if ( (v50 & 0x4000) == 0 )
    {
      v51 = *(_QWORD *)(v49 + 24);
      for ( *(_DWORD *)(v49 + 80) = v50 | 0x4000; v51; v51 = *(_QWORD *)(v51 + 24) )
      {
        if ( (*(_BYTE *)(v51 + 80) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
      }
    }
    v52 = (CTopLevelWindow *)*((_QWORD *)a2 + 49);
    v53 = *((_QWORD *)v52 + 90);
    v54 = v53 && (*(_BYTE *)(v53 + 596) & 1) != 0 && *(char *)(v53 + 599) >= 0;
    CTopLevelWindow::UpdateAccent(v52, v54);
    v55 = *((_QWORD *)a2 + 3);
    if ( v55 )
    {
      v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 296LL))(v55);
      CWindowList::SetExcludeFromDDA(this, *((struct IDwmWindow **)a2 + 3), v56);
      v57 = *((_QWORD *)a2 + 3);
      if ( v57 )
      {
        v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 304LL))(v57);
        CWindowList::SetPassiveUpdateMode(this, *((struct IDwmWindow **)a2 + 3), v58);
      }
    }
    CWindowList::OnPositionChange(this, a2, 0);
    updated = CWindowList::UpdateWindowScale(this, (struct tagPOINT *)a2, 0);
    v61 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAFA,
        (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)updated,
        v98);
      return v61;
    }
    v62 = (CVisual *)*((_QWORD *)a2 + 49);
    if ( v62 )
    {
      v63 = *((_DWORD *)v62 + 20);
      v60 = (CVisual *)*((_QWORD *)a2 + 49);
      if ( (v63 & 0x4000000) == 0 )
      {
        *((_DWORD *)v62 + 20) = v63 | 0x4000000;
        CVisual::PropagateDirtyChildren(v60);
        v62 = (CVisual *)*((_QWORD *)a2 + 49);
      }
      if ( v62 )
      {
        if ( *((_QWORD *)a2 + 47) )
          CVisual::SetDirtyFlags(v62, 0x2000000u);
        else
          *((_DWORD *)v62 + 20) &= ~0x2000000u;
      }
    }
    v64 = CWindowList::UpdateThumbnailsForNewWindow(v60, a2);
    v65 = v64;
    if ( v64 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAFE,
        (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v64,
        v98);
      return v65;
    }
    v66 = CLivePreview::OnWindowShowHide(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
            a2,
            &v110,
            0);
    v67 = v66;
    if ( v66 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB02,
        (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v66,
        v98);
      return v67;
    }
    CWindowList::ShowProjectionBorder(this, a2, *((_QWORD *)a2 + 51) != 0LL);
    if ( !v110 )
    {
      v68 = CTopLevelWindow3D::ShowWindow(
              *((CTopLevelWindow3D **)a2 + 50),
              1,
              *(_BYTE *)(*((_QWORD *)a2 + 49) + 825LL) == 0);
      v69 = v68;
      if ( v68 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB0B,
          (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v68,
          v98);
        return v69;
      }
    }
  }
  v70 = *((_QWORD *)a2 + 68);
  v71 = v70 && (*(_BYTE *)(v70 + 597) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(a2);
  if ( *((_BYTE *)a2 + 597) >> 7 != v71 )
    CWindowData::UpdateOwnerLists(a2, !(*((_BYTE *)a2 + 597) >> 7));
  v72 = 0;
  if ( *((_DWORD *)a2 + 116) )
  {
    v83 = *((_QWORD *)a2 + 55);
    v84 = *((unsigned int *)a2 + 116);
    v99 = 0LL;
    v100 = 0LL;
    v101 = 0;
    if ( (int)DynArrayImpl<0>::AddMultipleAndSet(&v99, 8LL, v84, v83) >= 0 )
    {
      v85 = v101;
      v86 = 0;
      if ( v101 )
      {
        v87 = v99;
        while ( 1 )
        {
          v88 = CSecondaryWindowRepresentation::OnRepresentationUpdated(*(CSecondaryWindowRepresentation **)(v87 + 8LL * v86));
          v72 = v88;
          if ( v88 < 0 )
            break;
          if ( ++v86 >= v85 )
            goto LABEL_100;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v88, 0x1E7Bu);
        DynArrayImpl<0>::~DynArrayImpl<0>(&v99);
        v9 = v111;
        goto LABEL_70;
      }
LABEL_100:
      v9 = v111;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v99);
  }
LABEL_70:
  if ( v72 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x1C87u);
  }
  else
  {
    v73 = (CWindowData *)*((_QWORD *)a2 + 68);
    if ( v73 && (v78 = CWindowData::NotifyRepresentationChanged(v73), v72 = v78, v78 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v78, 0x1C8Au);
    }
    else
    {
      v74 = (CTransitionVisualController *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
      if ( v74 )
      {
        if ( *((_DWORD *)a2 + 28) != 1 )
        {
          v75 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
          v76 = 0;
          if ( *(_DWORD *)(v75 + 40) )
          {
            v79 = *(__int64 **)(v75 + 16);
            v80 = *(unsigned int *)(v75 + 40);
            do
            {
              v81 = *v79;
              v82 = v76 + 1;
              ++v79;
              if ( *(_DWORD *)(v81 + 24) == 4 )
                v82 = v76;
              v76 = v82;
              --v80;
            }
            while ( v80 );
            if ( v82 > 0 )
              CTransitionVisualController::_SetupHighZOrderStaticWindows(v74);
          }
        }
      }
    }
  }
  if ( v72 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1D,
      (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v72,
      v98);
    return (unsigned int)v72;
  }
  else
  {
    if ( !v9 )
      return 0LL;
    Buffer = *((_QWORD *)a2 + 15);
    v104 = 0LL;
    v105 = 0LL;
    v106 = 0LL;
    v103 = 0LL;
    v107 = -1LL;
    v108 = 0;
    v77 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
    if ( v77 )
      v7 = v77[8];
    if ( *((_QWORD *)a2 + 5) == v7
      && (v89 = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15)), v90 = v89, v89 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB27,
        (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v89,
        v98);
      return v90;
    }
    else
    {
      return 0LL;
    }
  }
}
