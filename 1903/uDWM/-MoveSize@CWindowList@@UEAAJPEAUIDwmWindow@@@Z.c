/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A160
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x18000444C (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18000C780 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000CF68 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000DFD0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18000EFD0 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18000FEC4 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010478 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001367C (--0CWindowData@@QEAA@XZ.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800141F4 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180015A00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x18001A078 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022BF4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180023870 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x1800250E8 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x18002B820 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18002BA54 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x1800333C4 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x1800333F0 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x1800397B8 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18003BEA4 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x18004032C (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_1a2d7eb9b07ca6f2dc9b65c4384631da___ @ 0x18004CDFC (CWindowList--ForEachSoftwareCursorListener__lambda_1a2d7eb9b07ca6f2dc9b65c4384631da___.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor_0 @ 0x18004FD7A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18008AC20 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008BE60 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x18008E0E0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 *     McTemplateU0pq @ 0x18008E4E0 (McTemplateU0pq.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18008F584 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x180093508 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  struct IDwmWindow *v3; // r15
  unsigned int v4; // r14d
  struct CWindowData *v5; // rdi
  int v6; // ebx
  struct CWindowData *v7; // rsi
  char v8; // bl
  struct tagRECT *v9; // r13
  int v10; // r8d
  int v11; // esi
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // r9
  unsigned int v15; // edx
  LONG v16; // r12d
  LONG v17; // esi
  int v18; // r8d
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // ecx
  unsigned __int64 v22; // rax
  int v23; // r12d
  __int64 v24; // rax
  char v25; // al
  unsigned int v26; // esi
  __int64 v27; // r13
  CWindowData *v28; // rcx
  char v29; // al
  int v30; // r8d
  __int64 v31; // rcx
  unsigned int v32; // edx
  RECT v33; // xmm0
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  unsigned int v37; // edx
  RECT v38; // xmm0
  __int64 v39; // rax
  __int64 v41; // rsi
  char v42; // bl
  __int64 v43; // rax
  RECT v44; // xmm1
  int v45; // ecx
  __int64 v46; // rbx
  unsigned int v47; // r8d
  __int64 v48; // rcx
  unsigned int v49; // edx
  int v50; // eax
  int left; // ebx
  int top; // esi
  int v53; // eax
  float v54; // xmm7_4
  struct CWindowData *v55; // rsi
  __int64 v56; // rbx
  bool v57; // zf
  __int64 v58; // rax
  int v59; // ecx
  int v60; // edx
  CDesktopThumbnailCVIVisual *v61; // rcx
  CButton *v62; // rcx
  volatile signed __int32 *v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // r12
  CProjectionBorderVisual *v66; // rcx
  struct CWindowData *v67; // r12
  unsigned int i; // ebx
  CWindowList *v69; // r15
  unsigned int j; // ebx
  __int64 v71; // rcx
  struct CStoryboard *v72; // rbx
  int v73; // ecx
  int v74; // esi
  int v75; // ebx
  float v76; // xmm6_4
  CWindowList *v77; // rcx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rcx
  const struct CStoryboard *v85; // r15
  __int64 v86; // rbx
  char v87; // r13
  struct CStoryboard *v88; // r15
  __int64 v89; // r9
  struct tagPOINT v90; // rbx
  struct CStoryboard *v91; // r13
  char v92; // r15
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  CWindowData *v99; // rax
  CWindowData *v100; // rax
  int v101; // eax
  CVisual *v102; // rcx
  float v103; // xmm6_4
  float v104; // xmm6_4
  CTransitionVisualController *v105; // rcx
  int SnapshotIndex; // eax
  CTransitionVisualController *v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  int started; // eax
  struct CWindowData *v111; // rdx
  __int64 v112; // r12
  __int64 v113; // r12
  CAccentBlurBehind *v114; // rcx
  CWindowList *v115; // rcx
  CTopLevelWindow *v116; // rcx
  HWND v117; // rdx
  bool v118; // bl
  HWND v119; // rcx
  int v120; // ecx
  wchar_t **v121; // rdx
  WCHAR *v122; // rax
  int v123; // r9d
  int v124; // r8d
  void *v125; // [rsp+28h] [rbp-D8h]
  char v126; // [rsp+30h] [rbp-D0h]
  char v127; // [rsp+30h] [rbp-D0h]
  bool v128; // [rsp+31h] [rbp-CFh] BYREF
  bool v129; // [rsp+32h] [rbp-CEh] BYREF
  int v130; // [rsp+34h] [rbp-CCh] BYREF
  int v131; // [rsp+38h] [rbp-C8h]
  struct CWindowData *v132; // [rsp+40h] [rbp-C0h] BYREF
  int v133; // [rsp+48h] [rbp-B8h]
  struct CStoryboard *v134; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v135; // [rsp+58h] [rbp-A8h]
  struct tagPOINT v136; // [rsp+60h] [rbp-A0h] BYREF
  struct CStoryboard *v137; // [rsp+68h] [rbp-98h]
  int v138; // [rsp+70h] [rbp-90h] BYREF
  struct IDwmWindow *v139; // [rsp+78h] [rbp-88h]
  struct tagPOINT v140; // [rsp+80h] [rbp-80h] BYREF
  CWindowList *v141; // [rsp+88h] [rbp-78h]
  __int64 v142; // [rsp+90h] [rbp-70h]
  _DWORD v143[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v144; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v145[3]; // [rsp+A8h] [rbp-58h] BYREF
  struct CTransitionWindowSnapshot *v146; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v147; // [rsp+C8h] [rbp-38h] BYREF
  int v148; // [rsp+D0h] [rbp-30h]
  int v149; // [rsp+D4h] [rbp-2Ch]
  RECT rc1; // [rsp+D8h] [rbp-28h] BYREF
  RECT v151; // [rsp+E8h] [rbp-18h] BYREF
  RECT rc2; // [rsp+F8h] [rbp-8h] BYREF
  RECT v153; // [rsp+108h] [rbp+8h] BYREF
  WCHAR ClassName[264]; // [rsp+120h] [rbp+20h] BYREF

  v141 = this;
  v139 = a2;
  v145[2] = &CDesktopManager::s_csDwmInstance;
  v3 = a2;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 16LL))(v3) )
    goto LABEL_2;
  v99 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         752LL);
  if ( !v99 || (v100 = CWindowData::CWindowData(v99), (v7 = v100) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x891u, v125);
    goto LABEL_165;
  }
  *((_QWORD *)v100 + 3) = v3;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v3)(v3, v100);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 24LL))(v3);
  v101 = CWindowList::SyncWindowData(this, v3, v7);
  v6 = v101;
  if ( v101 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v101, 0x895u, v125);
  v133 = v6;
  if ( v6 < 0 )
  {
LABEL_165:
    v23 = v6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB7Cu, v125);
    goto LABEL_37;
  }
  if ( !v5 )
  {
    v23 = v6;
    goto LABEL_37;
  }
  v8 = 0;
  (*(void (__fastcall **)(struct IDwmWindow *, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, &v147);
  v9 = (struct tagRECT *)((char *)v5 + 180);
  v10 = 0;
  v11 = v147 - *((_DWORD *)v5 + 45);
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v13 = HIDWORD(v147) - *((_DWORD *)v5 + 46);
  v14 = *((_QWORD *)v5 + 5);
  v131 = v11;
  v15 = *(_DWORD *)(v12 + 72);
  if ( v15 )
  {
    while ( **(_QWORD **)(*(_QWORD *)(v12 + 48) + 8LL * (unsigned int)v10) != v14 )
    {
      if ( ++v10 >= v15 )
        goto LABEL_6;
    }
    if ( v10 >= 0 )
    {
      _mm_lfence();
      v80 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * (unsigned int)v10);
      if ( (*(_BYTE *)(v80 + 40) & 4) != 0 )
      {
        v81 = *(_QWORD *)(v80 + 104);
        v11 = v147 - v81;
        v13 = HIDWORD(v147) - HIDWORD(v81);
        v131 = v147 - v81;
      }
    }
  }
LABEL_6:
  if ( v11 || v13 )
  {
    v142 = v147;
    v137 = (struct CStoryboard *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v8 = 0;
    v126 = 0;
    if ( *((_DWORD *)v137 + 10) )
    {
      v86 = v142;
      v87 = 0;
      v88 = v137;
      do
      {
        v137 = *(struct CStoryboard **)(*((_QWORD *)v88 + 2) + 8LL * v4);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v4, (HWND *)v5, v137, 0) )
        {
          v134 = (struct CStoryboard *)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v93 = CWindowPropertyTracker::_EnsureRecordExists((struct CStoryboard *)((char *)v88 + 48), v137, v5, &v130);
          LODWORD(v135) = v93;
          if ( v93 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, 0x35u, v125);
          }
          else
          {
            v94 = (unsigned int)v130;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v88 + 6) + 8LL * (unsigned int)v130) + 104LL) = v86;
            v95 = *(_QWORD *)(*((_QWORD *)v88 + 6) + 8 * v94);
            *(_DWORD *)(v95 + 40) |= 4u;
          }
          CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&v134);
          v87 |= (v135 & 0x80000000) == 0LL;
        }
        ++v4;
      }
      while ( v4 < *((_DWORD *)v88 + 10) );
      v3 = v139;
      v4 = 0;
      v11 = v131;
      v126 = v87;
      v9 = (struct tagRECT *)((char *)v5 + 180);
      v8 = v126;
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v8 )
    {
      OffsetRect(v9, v11, v13);
      v47 = 0;
      v48 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
      v49 = *(_DWORD *)(v48 + 48);
      if ( v49 )
      {
        v89 = *(_QWORD *)(v48 + 24);
        while ( !*(_BYTE *)(v89 + 24LL * v47 + 16) || *((_QWORD *)v5 + 50) != *(_QWORD *)(v89 + 24LL * v47) )
        {
          if ( ++v47 >= v49 )
            goto LABEL_51;
        }
        v102 = *(CVisual **)(v89 + 24LL * v47 + 8);
        v136.x = v9->left;
        v136.y = *((_DWORD *)v5 + 46);
        CVisual::SetOffset(v102, &v136);
      }
LABEL_51:
      v132 = v5;
      v50 = *((_DWORD *)v5 + 87);
      left = v9->left;
      top = v9->top;
      if ( (v50 & 1) != 0 )
      {
        v103 = (float)*((int *)v5 + 80) / (float)*((int *)v5 + 86);
        if ( v103 != 1.0 )
        {
          left = (int)floor_0((float)((float)left * v103) + 0.5);
          top = (int)floor_0((float)((float)top * v103) + 0.5);
        }
      }
      else if ( (v50 & 2) != 0 )
      {
        v104 = (float)*((int *)v5 + 80) / (float)*((int *)v5 + 81);
        if ( v104 != 1.0 )
        {
          left = (int)floor_0((float)((float)left * v104) + 0.5);
          top = (int)floor_0((float)((float)top * v104) + 0.5);
        }
        left += *((_DWORD *)v5 + 84) - (int)floor_0((float)((float)*((int *)v5 + 82) * v104) + 0.5);
        top += *((_DWORD *)v5 + 85) - (int)floor_0((float)((float)*((int *)v5 + 83) * v104) + 0.5);
      }
      else
      {
        v53 = *((_DWORD *)v5 + 82);
        if ( (double)v53 != 0.0 || (double)*((int *)v5 + 83) != 0.0 )
        {
          left -= (int)floor_0((float)v53 + 0.5);
          top -= (int)floor_0((float)*((int *)v5 + 83) + 0.5);
        }
        v54 = *((float *)v5 + 76);
        if ( v54 != 1.0 )
        {
          left = (int)floor_0((float)((float)left * v54) + 0.5);
          top = (int)floor_0((float)((float)top * v54) + 0.5);
        }
        if ( (double)*((int *)v5 + 84) != 0.0 || (double)*((int *)v5 + 85) != 0.0 )
        {
          left += (int)floor_0((float)*((int *)v5 + 84) + 0.5);
          top += (int)floor_0((float)*((int *)v5 + 85) + 0.5);
        }
      }
      OffsetRect((LPRECT)v5 + 3, left - *((_DWORD *)v5 + 12), top - *((_DWORD *)v5 + 13));
      v55 = v132;
      v56 = *((_QWORD *)v132 + 50);
      if ( v56 )
      {
        v57 = (*(_BYTE *)(v56 + 241) & 1) == 0;
        v58 = *(_QWORD *)(v56 + 720);
        v59 = *(_DWORD *)(v58 + 48);
        v60 = *(_DWORD *)(v58 + 52);
        v135 = __PAIR64__(v60, v59);
        if ( !v57 )
        {
          v59 = -32000;
          v135 = 0xFFFF8300FFFF8300uLL;
          v60 = -32000;
        }
        if ( v59 != *(_DWORD *)(v56 + 112) || v60 != *(_DWORD *)(v56 + 116) )
        {
          *(_QWORD *)(v56 + 112) = v135;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 24LL))(v56, 8LL);
          v58 = *(_QWORD *)(v56 + 720);
        }
        v61 = *(CDesktopThumbnailCVIVisual **)(v58 + 592);
        if ( v61 )
          CDesktopThumbnailCVIVisual::SetDirtyFlags(v61, 0x1000u);
        v62 = *(CButton **)(v56 + 736);
        if ( v62 )
        {
          CButton::SetMouseCapture(v62, 0);
          v62 = *(CButton **)(v56 + 736);
          if ( v62 )
          {
            CBaseObject::Release(v62);
            *(_QWORD *)(v56 + 736) = 0LL;
          }
        }
        v63 = *(volatile signed __int32 **)(v56 + 728);
        if ( v63 )
        {
          *(_QWORD *)(v56 + 728) = 0LL;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 120LL))(v63);
          v62 = *(CButton **)(v56 + 728);
          if ( v62 )
            (*(void (__fastcall **)(CButton *))(*(_QWORD *)v62 + 112LL))(v62);
          if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v63)(v63, 1LL);
        }
        wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService(v62);
        v55 = v132;
        if ( (*((_BYTE *)v132 + 608) & 1) != 0 )
        {
          v143[0] = *((_DWORD *)v132 + 12);
          v143[1] = *((_DWORD *)v132 + 13);
          v145[0] = &v132;
          v145[1] = v143;
          CWindowList::ForEachSoftwareCursorListener__lambda_1a2d7eb9b07ca6f2dc9b65c4384631da___(v141, v145);
          v55 = v132;
        }
      }
      v64 = *((_QWORD *)v55 + 51);
      if ( !v64 )
        goto LABEL_77;
      v65 = *(_QWORD *)(v64 + 328);
      if ( *(char *)(v65 + 607) < 0
        || (*(_DWORD *)(v65 + 612) & 0xFFF) == 0xFFF
        || (v105 = (CTransitionVisualController *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31),
            v134 = *(struct CStoryboard **)(v65 + 40),
            SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(v105, (HWND)v134),
            (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v107, SnapshotIndex, &v146) < 0) )
      {
        if ( *(_BYTE *)(v64 + 288) || *(_DWORD *)(v64 + 372) )
          goto LABEL_77;
        *(_OWORD *)(v64 + 308) = *(_OWORD *)(v65 + 48);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0pq(v109, v108, v134, 0LL);
        started = CTopLevelWindow3D::StartAnimation(v64, 9u);
        if ( started < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x1A5u, v125);
      }
      v55 = v132;
LABEL_77:
      v66 = (CProjectionBorderVisual *)*((_QWORD *)v55 + 52);
      if ( v66 )
      {
        CProjectionBorderVisual::UpdateRectFromWindow(v66, v55);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 64LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
          *((_QWORD *)v132 + 5));
        v55 = v132;
      }
      v67 = v55;
      for ( i = 0; i < *((_DWORD *)v55 + 118); ++i )
      {
        v79 = *(_QWORD *)(*((_QWORD *)v55 + 56) + 8LL * i);
        if ( *(struct CWindowData **)(v79 + 64) == v67 && *(_DWORD *)(v79 + 72) == 1 )
        {
          CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v79);
          v55 = v132;
        }
      }
      v69 = v141;
      for ( j = 0; j < *((_DWORD *)v69 + 140); ++j )
      {
        v71 = *((_QWORD *)v69 + 67);
        if ( *(_DWORD *)(v71 + 16LL * j + 8) == 3 )
        {
          v111 = *(struct CWindowData **)(v71 + 16LL * j);
          v112 = *((_QWORD *)v111 + 50);
          if ( v112 )
          {
            if ( !v55 || *((_QWORD *)v111 + 15) == *((_QWORD *)v55 + 15) )
            {
              v113 = *(_QWORD *)(v112 + 264);
              if ( v113 )
              {
                v114 = *(CAccentBlurBehind **)(v113 + 336);
                if ( v114 )
                {
                  if ( *((_QWORD *)v111 + 5) == *(_QWORD *)(v113 + 400)
                    || CAccentBlurBehind::IsBlurBehindDirty(
                         v114,
                         v111,
                         (const struct tagRECT *)(v113 + 616),
                         *(_QWORD *)(v113 + 408),
                         *(HWND *)(v113 + 400)) )
                  {
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v113 + 24LL))(v113, 0x10000LL);
                  }
                }
              }
            }
          }
        }
      }
      v3 = v139;
      v8 = v126;
    }
  }
  v16 = v148 - v147;
  if ( v148 - (int)v147 < 0 )
    v16 = 0;
  v17 = v149 - HIDWORD(v147);
  v131 = v149 - HIDWORD(v147);
  if ( v149 - HIDWORD(v147) < 0 )
  {
    v17 = 0;
    v131 = 0;
  }
  v18 = 0;
  v19 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v20 = *(_DWORD *)(v19 + 72);
  if ( !v20 )
    goto LABEL_13;
  while ( **(_QWORD **)(*(_QWORD *)(v19 + 48) + 8LL * (unsigned int)v18) != *((_QWORD *)v5 + 5) )
  {
    if ( ++v18 >= v20 )
      goto LABEL_13;
  }
  if ( v18 >= 0
    && (_mm_lfence(), v82 = *(_QWORD *)(*(_QWORD *)(v19 + 48) + 8LL * (unsigned int)v18),
                      (*(_BYTE *)(v82 + 40) & 2) != 0) )
  {
    v134 = *(struct CStoryboard **)(v82 + 112);
    v21 = (int)v134;
    v22 = (unsigned __int64)v134 >> 32;
  }
  else
  {
LABEL_13:
    v21 = v9->right - v9->left;
    if ( v21 < 0 )
      v21 = 0;
    LODWORD(v22) = *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46);
    if ( (v22 & 0x80000000) != 0LL )
      LODWORD(v22) = 0;
  }
  if ( v16 == v21 && v17 == (_DWORD)v22 )
  {
    v23 = v133;
    if ( !v8 )
    {
LABEL_20:
      v24 = *((_QWORD *)v5 + 69);
      v25 = v24 && (*(_BYTE *)(v24 + 605) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v5);
      if ( *((_BYTE *)v5 + 605) >> 7 != v25 )
        CWindowData::UpdateOwnerLists(v5, !(*((_BYTE *)v5 + 605) >> 7));
      v26 = 0;
      if ( *((_DWORD *)v5 + 146) )
      {
        do
        {
          v27 = *(_QWORD *)(*((_QWORD *)v5 + 70) + 8LL * v26);
          v28 = *(CWindowData **)(v27 + 552);
          if ( v28
            && (*((_BYTE *)v28 + 605) & 0x40) != 0
            && (*(_BYTE *)(v27 + 604) & 1) != 0
            && (*(_DWORD *)(v27 + 100) & 0xC00000) != 0xC00000
            && (*(char *)(v27 + 104) >= 0 || (*(_DWORD *)(v27 + 612) & 0xFFF) == 0x11) )
          {
            if ( *(_QWORD *)(v27 + 32) )
            {
              v118 = CWindowData::WillEndAnimationCloaked(v28);
              if ( CWindowData::WillEndAnimationCloaked((CWindowData *)v27) == v118
                && ContainsRect(
                     (const struct tagRECT *)(*(_QWORD *)(v27 + 552) + 48LL),
                     (const struct tagRECT *)(v27 + 48)) )
              {
                v119 = *(HWND *)(v27 + 40);
                ClassName[0] = 0;
                if ( !GetClassNameW(v119, ClassName, 260) )
                {
LABEL_212:
                  v29 = 1;
                  goto LABEL_28;
                }
                v120 = 0;
                v121 = off_1800C0638;
                while ( 1 )
                {
                  v122 = ClassName;
                  do
                  {
                    v123 = *(WCHAR *)((char *)v122 + (char *)*v121 - (char *)ClassName);
                    v124 = *v122 - v123;
                    if ( v124 )
                      break;
                    ++v122;
                  }
                  while ( v123 );
                  if ( !v124 )
                    break;
                  ++v120;
                  ++v121;
                  if ( v120 )
                    goto LABEL_212;
                }
              }
            }
          }
          v29 = 0;
LABEL_28:
          if ( *(_BYTE *)(v27 + 605) >> 7 != v29 )
            CWindowData::UpdateOwnerLists((CWindowData *)v27, !(*(_BYTE *)(v27 + 605) >> 7));
        }
        while ( ++v26 < *((_DWORD *)v5 + 146) );
      }
    }
  }
  else
  {
    v136.x = v16;
    v136.y = v17;
    v134 = (struct CStoryboard *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    v72 = v134;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v127 = 0;
    if ( *((_DWORD *)v72 + 10) )
    {
      v90 = v136;
      v91 = v134;
      v92 = 0;
      do
      {
        v134 = *(struct CStoryboard **)(*((_QWORD *)v91 + 2) + 8LL * v4);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v4, (HWND *)v5, v134, 0) )
        {
          v144 = &CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v96 = CWindowPropertyTracker::_EnsureRecordExists((struct CStoryboard *)((char *)v91 + 48), v134, v5, &v138);
          v130 = v96;
          if ( v96 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v96, 0x25u, v125);
          }
          else
          {
            v97 = (unsigned int)v138;
            *(struct tagPOINT *)(*(_QWORD *)(*((_QWORD *)v91 + 6) + 8LL * (unsigned int)v138) + 112LL) = v90;
            v98 = *(_QWORD *)(*((_QWORD *)v91 + 6) + 8 * v97);
            *(_DWORD *)(v98 + 40) |= 2u;
          }
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v144);
          v92 |= v130 >= 0;
        }
        ++v4;
      }
      while ( v4 < *((_DWORD *)v91 + 10) );
      v17 = v131;
      v9 = (struct tagRECT *)((char *)v5 + 180);
      v127 = v92;
      v4 = 0;
      v3 = v139;
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v127 )
    {
      v73 = v16 + v9->left;
      v23 = 0;
      *((_DWORD *)v5 + 47) = v73;
      *((_DWORD *)v5 + 48) = v17 + *((_DWORD *)v5 + 46);
      CWindowData::EstablishPixelAlignedScale(v5, &v129);
      v74 = v9->right - v9->left;
      if ( v74 < 0 )
        v74 = 0;
      v75 = *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46);
      if ( v75 < 0 )
        v75 = 0;
      v76 = *((float *)v5 + 76);
      if ( v76 != 1.0 )
      {
        v74 = (int)floor_0((float)((float)v74 * v76) + 0.5);
        v75 = (int)floor_0((float)((float)v75 * v76) + 0.5);
      }
      *((_DWORD *)v5 + 14) = v74 + *((_DWORD *)v5 + 12);
      v77 = (CWindowList *)(unsigned int)(v75 + *((_DWORD *)v5 + 13));
      v57 = *((_QWORD *)v5 + 50) == 0LL;
      *((_DWORD *)v5 + 15) = (_DWORD)v77;
      if ( v57 || (v78 = CWindowData::OnWindowSizeUpdated(v5), v23 = v78, v78 >= 0) )
      {
        if ( v129 )
        {
          CWindowList::OnClientMarginsChange(v77, v5);
          CWindowList::OnClientGlassChange(v115, v5);
          v116 = (CTopLevelWindow *)*((_QWORD *)v5 + 50);
          if ( v116 )
            CTopLevelWindow::OnWindowScaleUpdated(v116);
          v117 = (HWND)*((_QWORD *)v5 + 5);
          v140 = (struct tagPOINT)*((_QWORD *)v5 + 6);
          v128 = 0;
          CWindowPropertyTracker::GetWindowEndPosition(
            (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
            v117,
            &v140);
          CAnimationScheduler::OnWindowPositionChange(
            *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
            v5,
            v140,
            &v128);
          if ( !v128 )
            CWindowList::OnPositionChange(v141, v5, 1);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v78, 0xD54u, v125);
      }
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xBB5u, v125);
        goto LABEL_37;
      }
      goto LABEL_20;
    }
    v23 = v133;
  }
  v30 = 0;
  v31 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v32 = *(_DWORD *)(v31 + 72);
  if ( !v32 )
    goto LABEL_32;
  while ( **(_QWORD **)(*(_QWORD *)(v31 + 48) + 8LL * (unsigned int)v30) != *((_QWORD *)v5 + 5) )
  {
    if ( ++v30 >= v32 )
      goto LABEL_32;
  }
  if ( v30 >= 0
    && (_mm_lfence(), v83 = *(_QWORD *)(*(_QWORD *)(v31 + 48) + 8LL * (unsigned int)v30),
                      (*(_BYTE *)(v83 + 40) & 8) != 0) )
  {
    v33 = *(RECT *)(v83 + 120);
  }
  else
  {
LABEL_32:
    v33 = *(RECT *)((char *)v5 + 196);
  }
  v34 = 0LL;
  v35 = *((_QWORD *)v5 + 5);
  rc2 = v33;
  v36 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v37 = *(_DWORD *)(v36 + 72);
  if ( !v37 )
    goto LABEL_34;
  while ( **(_QWORD **)(*(_QWORD *)(v36 + 48) + 8LL * (unsigned int)v34) != v35 )
  {
    v34 = (unsigned int)(v34 + 1);
    if ( (unsigned int)v34 >= v37 )
      goto LABEL_34;
  }
  if ( (int)v34 >= 0
    && (_mm_lfence(),
        v84 = *(_QWORD *)(*(_QWORD *)(v36 + 48) + 8LL * (unsigned int)v34),
        (*(_BYTE *)(v84 + 40) & 0x10) != 0) )
  {
    v38 = *(RECT *)(v84 + 136);
  }
  else
  {
LABEL_34:
    v38 = *(RECT *)((char *)v5 + 212);
  }
  v39 = *(_QWORD *)v3;
  v153 = v38;
  (*(void (__fastcall **)(struct IDwmWindow *, RECT *, __int64, __int64))(v39 + 96))(v3, &rc1, v34, v35);
  (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v3 + 104LL))(v3, &v151);
  (*(void (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)v3 + 112LL))(v3, (__int64)v5 + 228);
  if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v151, &v153) )
  {
    v41 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v42 = 0;
    if ( *(_DWORD *)(v41 + 40) )
    {
      do
      {
        v85 = *(const struct CStoryboard **)(*(_QWORD *)(v41 + 16) + 8LL * v4);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v4, (HWND *)v5, v85, 0) )
          v42 |= (int)CWindowPropertyTracker::OnWindowClientContentRectChange(
                        (CWindowPropertyTracker *)(v41 + 48),
                        v85,
                        v5,
                        &rc1,
                        &v151) >= 0;
        ++v4;
      }
      while ( v4 < *(_DWORD *)(v41 + 40) );
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v42 )
    {
      v43 = *((_QWORD *)v5 + 50);
      v44 = v151;
      *(RECT *)((char *)v5 + 196) = rc1;
      *(RECT *)((char *)v5 + 212) = v44;
      if ( v43 )
      {
        v45 = *(_DWORD *)(v43 + 80);
        if ( (v45 & 0x4000000) == 0 )
        {
          v46 = *(_QWORD *)(v43 + 24);
          for ( *(_DWORD *)(v43 + 80) = v45 | 0x4000000; v46; v46 = *(_QWORD *)(v46 + 24) )
          {
            if ( (*(_BYTE *)(v46 + 80) & 1) != 0 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
          }
        }
      }
    }
  }
LABEL_37:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v23;
}
