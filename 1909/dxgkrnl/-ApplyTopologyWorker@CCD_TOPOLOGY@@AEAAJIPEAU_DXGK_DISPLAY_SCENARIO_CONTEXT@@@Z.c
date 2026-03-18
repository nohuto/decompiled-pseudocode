/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CEB9C
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CE7A8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C0002228 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000224C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C00C337C (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00CC350 (DxgkStatusChangeNotify.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00CF5C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CF96C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2715::__AUTO_USING_PM_PrimaryClonePathIndex2715 @ 0x1C00CFA00 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex2715--__AUTO_USING.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2717::__AUTO_USING_PM_PathChanged2717 @ 0x1C00CFA3C (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PathChanged2717--__AUTO_USING_PM_PathCh.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00CFA78 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00CFCA4 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00CFD84 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D54DC (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00D81F0 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D889C (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DAE0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DAE84 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C00E9060 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01284EC (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02C0AD8 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C02C0C60 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        DWORD a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v3; // r14d
  unsigned __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rsi
  __int64 v11; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGPROCESS *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rsi
  unsigned int v32; // edx
  _DWORD *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // ecx
  _DWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // edx
  _DWORD *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // ecx
  _DWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  DXGGLOBAL *Global; // rax
  SIZE_T v48; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  PVOID v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rax
  DXGGLOBAL *v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rcx
  unsigned __int16 v59; // ax
  unsigned int v60; // r14d
  unsigned __int16 v61; // r10
  unsigned __int16 v62; // r9
  __int64 v63; // r8
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int16 v66; // r9
  unsigned __int16 v67; // r11
  __int64 v68; // r11
  __int64 v69; // r8
  unsigned __int16 v70; // r10
  __int64 v71; // rdx
  __int64 v72; // r9
  unsigned __int16 v73; // r8
  __int64 v74; // rdx
  unsigned __int16 v75; // r11
  __int64 v76; // rcx
  unsigned __int16 v77; // r11
  unsigned __int16 v78; // ax
  unsigned int v79; // r8d
  unsigned int v80; // r9d
  __int64 v81; // r8
  __int64 v82; // r10
  int v83; // edx
  __int64 v84; // rax
  unsigned __int16 v85; // r15
  unsigned __int16 v86; // ax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rcx
  unsigned int v90; // r9d
  __int64 v91; // r10
  __int64 v92; // r8
  __int64 v93; // rbx
  __int64 v94; // rsi
  __int64 v95; // r8
  int v96; // edx
  __int64 v97; // rax
  unsigned int v98; // edx
  __int64 v99; // rax
  int v100; // eax
  unsigned int v101; // ebx
  char v102; // r12
  DWORD LowPart; // r15d
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // rsi
  __int64 v108; // r14
  int v109; // eax
  __int64 v110; // r8
  __int64 v111; // r14
  struct DXGGLOBAL *v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  unsigned __int16 v115; // si
  __int64 v116; // rdx
  __int64 v117; // rbx
  unsigned int v118; // r15d
  __int64 v119; // rax
  LONG v120; // ecx
  __int64 v121; // rbx
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r13
  __int64 v126; // rcx
  __int64 v127; // rdx
  int v128; // r10d
  const GUID *v129; // r8
  unsigned int v130; // r9d
  struct DXGGLOBAL *v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rsi
  unsigned __int16 j; // bx
  __int64 v135; // rdx
  int v136; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rbx
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rbx
  __int64 v148; // r11
  __int64 v149; // r10
  __int64 v150; // rbx
  __int64 v151; // rcx
  _QWORD *v152; // rax
  _QWORD *v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  _QWORD *v156; // rax
  int v157; // eax
  __int64 v158; // r8
  __int64 v159; // rbx
  __int64 v160; // rax
  int v161; // edx
  __int64 v162; // rax
  unsigned __int16 i; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v165; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-B0h]
  __int64 v167; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v168; // [rsp+60h] [rbp-A0h]
  __int64 v169; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v170; // [rsp+70h] [rbp-90h]
  __int64 v171; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v172; // [rsp+80h] [rbp-80h]
  __int64 v173; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v174; // [rsp+90h] [rbp-70h]
  _BYTE v175[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v176; // [rsp+E0h] [rbp-20h]
  int v177; // [rsp+F4h] [rbp-Ch]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  char v179; // [rsp+130h] [rbp+30h]

  v3 = 0;
  *(_QWORD *)&v165.left = a3;
  Luid.LowPart = a2;
  v179 = 0;
  v5 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v175, 8u, 0);
  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 74);
  if ( v10 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v14) = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v140 = WdLogNewEntry5_WdError(v9, v8, v11);
    *(_QWORD *)(v140 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v142, v141);
    v143 = v140;
    *(_QWORD *)(v140 + 32) = -1073741811LL;
LABEL_133:
    WdLogEvent5_WdError(v143);
    goto LABEL_118;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2328));
  Current = DXGPROCESS::GetCurrent();
  v18 = Current;
  if ( !Current )
  {
    v144 = WdLogNewEntry5_WdError(v16, v15, v17);
LABEL_132:
    v143 = v144;
    goto LABEL_133;
  }
  if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    for ( i = 8; ; v5 = i )
    {
      if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v175, v5) < v5 )
      {
        v162 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
        *(_QWORD *)(v162 + 24) = *((_QWORD *)this + 8);
        *(_QWORD *)(v162 + 32) = v5;
        WdLogEvent5_WdLowResource(v162);
        LODWORD(v14) = -1073741801;
        goto LABEL_118;
      }
      v177 |= 3u;
      v26 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v175, 0, 1, 1, &i);
      v14 = v26;
      if ( v26 != -1073741789 )
        break;
    }
    if ( v26 < 0 )
    {
      v144 = WdLogNewEntry5_WdError(v28, v27, v29);
      *(_QWORD *)(v144 + 24) = *((_QWORD *)this + 8);
      *(_QWORD *)(v144 + 32) = v14;
      goto LABEL_132;
    }
    v30 = *((_QWORD *)this + 8);
    v31 = v176;
    v32 = *(unsigned __int16 *)(v30 + 20);
    v173 = v30 + 48;
    v174 = v32;
    if ( v32 )
    {
      v33 = (_DWORD *)(v30 + 280);
      v34 = v32;
      do
      {
        *v33 |= 4u;
        v33[3] = 0;
        v33 += 68;
        --v34;
      }
      while ( v34 );
    }
    v35 = *(unsigned __int16 *)(v31 + 20);
    v171 = v31 + 48;
    v172 = v35;
    if ( v35 )
    {
      v36 = (_DWORD *)(v31 + 280);
      v37 = v35;
      do
      {
        *v36 |= 4u;
        v36[3] = 0;
        v36 += 68;
        --v37;
      }
      while ( v37 );
    }
    v38 = *((_QWORD *)this + 8);
    v39 = *(unsigned __int16 *)(v38 + 20);
    v169 = v38 + 48;
    v170 = v39;
    if ( v39 )
    {
      v40 = (_DWORD *)(v38 + 280);
      v41 = v39;
      do
      {
        *v40 |= 0x10u;
        v40[4] = 0;
        v40 += 68;
        --v41;
      }
      while ( v41 );
    }
    v42 = *(unsigned __int16 *)(v31 + 20);
    v167 = v31 + 48;
    v168 = v42;
    if ( v42 )
    {
      v43 = (_DWORD *)(v31 + 280);
      v44 = v42;
      do
      {
        *v43 |= 0x10u;
        v43[4] = 0;
        v43 += 68;
        --v44;
      }
      while ( v44 );
    }
    CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
    CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v175);
    Global = DXGGLOBAL::GetGlobal(v46, v45);
    MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
    v48 = 332 * MaximumAdapterCount;
    if ( !is_mul_ok(MaximumAdapterCount, 0x14CuLL) )
      v48 = -1LL;
    v50 = operator new[](v48, 0x63644356u, PagedPool);
    v54 = *((_QWORD *)this + 8);
    *(_QWORD *)(v54 + 40) = v50;
    v55 = *((_QWORD *)this + 8);
    if ( *(_QWORD *)(v55 + 40) )
    {
      *(_WORD *)(v55 + 28) = 0;
      while ( 1 )
      {
        v56 = DXGGLOBAL::GetGlobal(v54, v51);
        if ( v3 >= DXGGLOBAL::GetMaximumAdapterCount(v56) )
          break;
        v57 = 332LL * v3;
        memset((void *)(v57 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)), 0, 0x14CuLL);
        memset((void *)(v57 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL), 255, 0x40uLL);
        ++v3;
      }
      DxgkRemoveAllSessionViewForCurrentSession();
      v59 = *(_WORD *)(v31 + 20);
      v60 = 0;
      v61 = 0;
      if ( v59 )
      {
        LOWORD(v58) = 0;
        do
        {
          v62 = 0;
          v63 = 272LL * (unsigned __int16)v58 + v31;
          *(_DWORD *)(v63 + 296) = 0;
          v64 = *((_QWORD *)this + 8);
          if ( *(_WORD *)(v64 + 20) )
          {
            while ( !CCD_TOPOLOGY::IsMatchingSource(
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v63 + 48),
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v62 + v64 + 48))
                 || *(_DWORD *)(v63 + 76) != *(_DWORD *)(v65 + 28) )
            {
              v62 = v66 + 1;
              if ( v62 >= v67 )
                goto LABEL_35;
            }
            if ( !CCD_TOPOLOGY::IsMatchingSource(
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v63 + 292) + v31 + 48),
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v65 + 244) + v64 + 48)) )
            {
              *(_DWORD *)(v68 + v31 + 296) = 1;
              *(_QWORD *)(272LL * *(unsigned int *)(v63 + 292) + v31 + 244) = 0LL;
            }
          }
LABEL_35:
          if ( v62 >= *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
          {
            *(_DWORD *)(272LL * *(unsigned int *)(v63 + 292) + v31 + 296) = 1;
            *(_QWORD *)(272LL * *(unsigned int *)(v63 + 292) + v31 + 244) = 0LL;
          }
          v59 = *(_WORD *)(v31 + 20);
          v58 = ++v61;
        }
        while ( v61 < v59 );
      }
      v69 = *((_QWORD *)this + 8);
      v70 = 0;
      v71 = v69;
      if ( *(_WORD *)(v69 + 20) )
      {
        LOWORD(v58) = 0;
        do
        {
          v72 = 272LL * (unsigned __int16)v58 + v69;
          v73 = 0;
          *(_DWORD *)(v72 + 296) = 0;
          if ( *(_WORD *)(v31 + 20) )
          {
            while ( !CCD_TOPOLOGY::IsMatchingSource(
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v72 + 48),
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v73 + v31 + 48))
                 || *(_DWORD *)(v74 + 28) != *(_DWORD *)(v72 + 76) )
            {
              if ( ++v73 >= v75 )
                goto LABEL_46;
            }
            v76 = *(unsigned int *)(v74 + 244);
            if ( (_DWORD)v76 == v73 && *(_DWORD *)(v72 + 292) == v70 )
            {
              *(_QWORD *)(v72 + 244) = *(_QWORD *)(v74 + 196);
            }
            else
            {
              v147 = *((_QWORD *)this + 8);
              if ( !CCD_TOPOLOGY::IsMatchingSource(
                      (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v72 + 292) + v147 + 48),
                      (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272 * v76 + v31 + 48)) )
              {
                *(_DWORD *)(v148 + v147 + 296) = 1;
                *(_QWORD *)(272LL * *(unsigned int *)(v72 + 292) + *((_QWORD *)this + 8) + 244) = 0LL;
              }
            }
          }
LABEL_46:
          v59 = *(_WORD *)(v31 + 20);
          if ( v73 >= v59 )
          {
            *(_DWORD *)(272LL * *(unsigned int *)(v72 + 292) + *((_QWORD *)this + 8) + 296) = 1;
            *(_QWORD *)(272LL * *(unsigned int *)(v72 + 292) + *((_QWORD *)this + 8) + 244) = 0LL;
            v59 = *(_WORD *)(v31 + 20);
          }
          v69 = *((_QWORD *)this + 8);
          v58 = ++v70;
          v71 = v69;
        }
        while ( v70 < *(_WORD *)(v69 + 20) );
      }
      v77 = 0;
      if ( v59 )
      {
        v78 = 0;
        do
        {
          v79 = *(_DWORD *)(v71 + 36);
          v80 = 0;
          if ( v79 )
          {
            v149 = *(_QWORD *)(v71 + 40);
            v150 = 272LL * v78;
            do
            {
              v151 = 332LL * v80;
              if ( *(_DWORD *)(v150 + v31 + 64) == *(_DWORD *)(v151 + v149)
                && *(_DWORD *)(v150 + v31 + 68) == *(_DWORD *)(v151 + v149 + 4) )
              {
                break;
              }
              ++v80;
            }
            while ( v80 < v79 );
            v60 = 0;
          }
          v81 = 332LL * v80;
          v82 = 272LL * v77;
          *(_DWORD *)(*(_QWORD *)(v71 + 40) + v81 + 80) |= 1 << *(_DWORD *)(v82 + v31 + 72);
          if ( (*(_QWORD *)(v82 + v31 + 48) & 0x1000000000LL) != 0 )
            v83 = 1 << *(_DWORD *)(v82 + v31 + 72);
          else
            v83 = 0;
          v58 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
          *(_DWORD *)(v58 + v81 + 228) |= v83;
          if ( *(_DWORD *)(v82 + v31 + 296) == 1 )
          {
            v58 = *(unsigned int *)(v82 + v31 + 72);
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v81 + 136) |= 1 << v58;
          }
          v69 = *((_QWORD *)this + 8);
          v71 = v69;
          v84 = *(unsigned int *)(v69 + 36);
          if ( v80 >= (unsigned int)v84 )
          {
            v58 = *(_QWORD *)(v69 + 40);
            *(_QWORD *)(332 * v84 + v58) = *(_QWORD *)(v82 + v31 + 64);
            ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
            v69 = *((_QWORD *)this + 8);
            v71 = v69;
          }
          v78 = ++v77;
        }
        while ( v77 < *(_WORD *)(v31 + 20) );
      }
      v85 = 0;
      if ( *(_WORD *)(v69 + 20) )
      {
        v86 = 0;
        while ( 1 )
        {
          v87 = 272LL * v86;
          v88 = *(_QWORD *)(v87 + v69 + 48);
          if ( (v88 & 0x187) != 0 )
          {
            *(_QWORD *)(v87 + v69 + 48) = v88 | 0x40000000000000LL;
            *(_QWORD *)(v87 + *((_QWORD *)this + 8) + 56) |= *(_DWORD *)(v87 + *((_QWORD *)this + 8) + 48) & 0x187;
            v69 = *((_QWORD *)this + 8);
          }
          *(_DWORD *)(v87 + v69 + 240) = 0;
          v89 = *((_QWORD *)this + 8);
          v90 = *(_DWORD *)(v89 + 36);
          if ( v90 )
          {
            v91 = *(_QWORD *)(v89 + 40);
            do
            {
              v92 = 332LL * v60;
              if ( *(_DWORD *)(v87 + v89 + 64) == *(_DWORD *)(v92 + v91)
                && *(_DWORD *)(v87 + v89 + 68) == *(_DWORD *)(v92 + v91 + 4) )
              {
                break;
              }
              ++v60;
            }
            while ( v60 < v90 );
          }
          v93 = 272LL * v85;
          v94 = 332LL * v60;
          *(_DWORD *)(*(_QWORD *)(v89 + 40) + v94 + 84) |= 1 << *(_DWORD *)(v93 + v89 + 72);
          v95 = *((_QWORD *)this + 8);
          if ( (*(_QWORD *)(v95 + v93 + 48) & 0x1000000000LL) != 0 )
            v96 = 1 << *(_DWORD *)(v95 + v93 + 72);
          else
            v96 = 0;
          *(_DWORD *)(*(_QWORD *)(v95 + 40) + v94 + 228) |= v96;
          v97 = *((_QWORD *)this + 8);
          v98 = *(_DWORD *)(v93 + v97 + 292);
          if ( v98 == v85 )
          {
            *(_DWORD *)(*(_QWORD *)(v97 + 40) + v94 + 72) |= 1 << *(_DWORD *)(v93 + v97 + 72);
          }
          else if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v98, v85, 1) )
          {
            goto LABEL_72;
          }
          v58 = *((_QWORD *)this + 8);
          v71 = 83LL * v60 + *(unsigned int *)(v93 + v58 + 72);
          *(_DWORD *)(*(_QWORD *)(v58 + 40) + 4 * v71 + 8) = v85;
LABEL_72:
          v69 = *((_QWORD *)this + 8);
          if ( *(_DWORD *)(v93 + v69 + 296) == 1 )
          {
            v58 = *(unsigned int *)(v93 + v69 + 72);
            v71 = *(_QWORD *)(v69 + 40);
            *(_DWORD *)(v71 + v94 + 136) |= 1 << v58;
            v69 = *((_QWORD *)this + 8);
          }
          v99 = *(unsigned int *)(v69 + 36);
          if ( v60 >= (unsigned int)v99 )
          {
            v58 = *(_QWORD *)(v69 + 40);
            v71 = 332 * v99;
            *(_QWORD *)(332 * v99 + v58) = *(_QWORD *)(v93 + v69 + 64);
            ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
            v69 = *((_QWORD *)this + 8);
          }
          ++v85;
          v60 = 0;
          v86 = v85;
          if ( v85 >= *(_WORD *)(v69 + 20) )
          {
            v18 = Current;
            break;
          }
        }
      }
      v100 = *(_DWORD *)(v69 + 36);
      v101 = 0;
      v102 = v100 != 0;
      LOBYTE(i) = v100 != 0;
      if ( v100 )
      {
        LowPart = Luid.LowPart;
        do
        {
          v104 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v101);
          v58 = v101;
          v107 = 332LL * v101;
          v108 = v104;
          if ( v104 < 0 )
          {
            v152 = (_QWORD *)WdLogNewEntry5_WdError(v101, v105, v106);
            v152[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v107 + 4);
            v152[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332LL * v101);
            v152[5] = *((_QWORD *)this + 8);
            v152[6] = v108;
            WdLogEvent5_WdError(v152);
            CCD_TOPOLOGY::MarkPathsApplyFailure(
              this,
              (const struct _LUID *)(v107 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
              0xFFFFFFFF,
              v108);
          }
          else
          {
            v71 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
            if ( *(_QWORD *)(v71 + v107 + 80) )
            {
              v109 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
                       this,
                       v18,
                       LowPart,
                       v101,
                       *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v165.left);
              v111 = v109;
              if ( v109 < 0 )
              {
                v153 = (_QWORD *)WdLogNewEntry5_WdError(v58, v71, v110);
                v153[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v107 + 4);
                v153[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 332LL * v101);
                v153[5] = *((_QWORD *)this + 8);
                v153[6] = v111;
                WdLogEvent5_WdError(v153);
              }
              else
              {
                v102 = 0;
              }
            }
          }
          ++v101;
        }
        while ( v101 < *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) );
        LOBYTE(i) = v102;
      }
      v112 = DXGGLOBAL::GetGlobal(v58, v71);
      QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v112 + 139), 0);
      v114 = *((_QWORD *)this + 8);
      if ( *(_WORD *)(v114 + 20) )
      {
        v115 = 0;
        v116 = *((_QWORD *)this + 8);
        while ( 1 )
        {
          v117 = 272LL * v115;
          v118 = *(_DWORD *)(v117 + v114 + 292);
          if ( *(int *)(v117 + v114 + 240) >= 0 )
          {
            if ( v118 == v115 )
              goto LABEL_90;
            if ( !CCD_TOPOLOGY::IsSameCloneGroup(this, v118, v115, 1) )
              break;
          }
LABEL_97:
          v114 = *((_QWORD *)this + 8);
          ++v115;
          v116 = v114;
          if ( v115 >= *(_WORD *)(v114 + 20) )
          {
            v102 = i;
            goto LABEL_99;
          }
        }
        v116 = *((_QWORD *)this + 8);
LABEL_90:
        v119 = *(_QWORD *)(v117 + v116 + 48);
        if ( (v119 & 0x800) == 0 || (v119 & 0x20000) == 0 )
        {
          v154 = WdLogNewEntry5_WdAssertion(v113, v116);
          WdLogEvent5_WdAssertion(v154);
          v116 = *((_QWORD *)this + 8);
        }
        v165.left = *(_DWORD *)(v117 + v116 + 192);
        v165.right = *(_DWORD *)(v117 + v116 + 200) + v165.left;
        v165.top = *(_DWORD *)(v117 + v116 + 196);
        v120 = *(_DWORD *)(v117 + v116 + 204) + v165.top;
        Luid = 0LL;
        v165.bottom = v120;
        if ( *(_DWORD *)(v117 + v116 + 244) || *(_DWORD *)(v117 + v116 + 248) )
        {
          Luid = *(struct _LUID *)(v117 + v116 + 244);
        }
        else
        {
          if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
          {
            v155 = WdLogNewEntry5_WdAssertion(v139, v138);
            WdLogEvent5_WdAssertion(v155);
          }
          v116 = *((_QWORD *)this + 8);
        }
        v121 = 272LL * v115;
        v122 = DxgkCreateSessionViewForCurrentSession(
                 (struct _LUID *)(v121 + v116 + 64),
                 *(_DWORD *)(v121 + v116 + 72),
                 &v165,
                 v118 == v115,
                 &Luid);
        v125 = v122;
        if ( v122 < 0 )
        {
          v156 = (_QWORD *)WdLogNewEntry5_WdError(v113, v123, v124);
          v156[3] = *(int *)(v121 + *((_QWORD *)this + 8) + 68);
          v156[4] = *(unsigned int *)(v121 + *((_QWORD *)this + 8) + 64);
          v156[5] = *(unsigned int *)(v121 + *((_QWORD *)this + 8) + 72);
          v156[6] = v125;
          WdLogEvent5_WdError(v156);
          *(_DWORD *)(v121 + *((_QWORD *)this + 8) + 240) = v125;
        }
        else if ( v118 == v115 )
        {
          ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
        }
        goto LABEL_97;
      }
LABEL_99:
      CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
      CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v175);
      v127 = *((_QWORD *)this + 8);
      v128 = 0;
      v129 = 0LL;
      v130 = *(_DWORD *)(v127 + 36);
      if ( v130 )
      {
        v127 = *(_QWORD *)(v127 + 40);
        while ( 1 )
        {
          v126 = 332LL * (unsigned int)v129;
          if ( *(_DWORD *)(v126 + v127 + 96) || *(_DWORD *)(v126 + v127 + 88) )
            break;
          if ( *(_DWORD *)(v126 + v127 + 92) || *(_DWORD *)(v126 + v127 + 124) || *(_DWORD *)(v126 + v127 + 120) )
            v128 = 1;
          v129 = (const GUID *)(unsigned int)((_DWORD)v129 + 1);
          if ( (unsigned int)v129 >= v130 )
            goto LABEL_107;
        }
        v128 = 0;
LABEL_107:
        if ( v128 )
        {
          v165.top = 0;
          v165.left = 11;
          *(_QWORD *)&v165.right = 0LL;
          v157 = DxgkStatusChangeNotify(&v165.left, v127, v129);
          v159 = v157;
          if ( v157 < 0 )
          {
            v160 = WdLogNewEntry5_WdError(v126, v127, v158);
            *(_QWORD *)(v160 + 24) = v159;
            WdLogEvent5_WdError(v160);
          }
        }
      }
      v131 = DXGGLOBAL::GetGlobal(v126, v127);
      v132 = *((_QWORD *)this + 8);
      v133 = (__int64)v131;
      if ( *(_WORD *)(v132 + 20) > 1u )
      {
        DXGGLOBAL::RecordFeatureUsage((__int64)v131, 0, 1);
        v132 = *((_QWORD *)this + 8);
      }
      if ( *(_WORD *)(v132 + 20) )
      {
        for ( j = 0; j < *(_WORD *)(v132 + 20); ++j )
        {
          v135 = 272LL * j;
          if ( *(int *)(v135 + v132 + 240) >= 0 )
          {
            v136 = *(_DWORD *)(v135 + v132 + 256);
            if ( v136 == 12 )
            {
              v161 = 4;
LABEL_164:
              DXGGLOBAL::RecordFeatureUsage(v133, v161, 1);
              goto LABEL_115;
            }
            if ( v136 == 30 )
            {
              v161 = 5;
              goto LABEL_164;
            }
          }
LABEL_115:
          v132 = *((_QWORD *)this + 8);
        }
      }
      LODWORD(v14) = v102 != 0 ? 0xC0000001 : 0;
    }
    else
    {
      v146 = WdLogNewEntry5_WdLowResource(v54, v51, v52, v53);
      *(_QWORD *)(v146 + 24) = this;
      *(_QWORD *)(v146 + 32) = *((_QWORD *)this + 8);
      WdLogEvent5_WdLowResource(v146);
      LODWORD(v14) = -1073741801;
    }
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2717::__AUTO_USING_PM_PathChanged2717(&v167);
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2717::__AUTO_USING_PM_PathChanged2717(&v169);
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2715::__AUTO_USING_PM_PrimaryClonePathIndex2715(&v171);
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2715::__AUTO_USING_PM_PrimaryClonePathIndex2715(&v173);
  }
  else
  {
    v145 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v145 + 24) = Current;
    WdLogEvent5_WdError(v145);
    LODWORD(v14) = -1073741790;
  }
LABEL_118:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v175);
  if ( v179 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v14;
}
