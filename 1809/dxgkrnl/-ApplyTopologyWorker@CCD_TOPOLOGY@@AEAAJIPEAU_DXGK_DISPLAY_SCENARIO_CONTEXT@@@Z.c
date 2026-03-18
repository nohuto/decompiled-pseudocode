/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01372F4 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C0005B94 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2692::_AUTO_USING_PM_PathChanged2692 @ 0x1C00AEDF0 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PathChanged2692--_AUTO_USING_PM_PathCha.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2690::_AUTO_USING_PM_PrimaryClonePathIndex2690 @ 0x1C00AEE38 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex2690--_AUTO_USING_.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2692::__AUTO_USING_PM_PathChanged2692 @ 0x1C00AEEBC (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PathChanged2692--__AUTO_USING_PM_PathCh.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2690::__AUTO_USING_PM_PrimaryClonePathIndex2690 @ 0x1C00AEEF8 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex2690--__AUTO_USING.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00C7C78 (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00C93FC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00C9FC8 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00CA594 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00CD9C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00CEA74 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00CECA0 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF408 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C00DC378 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00F6724 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C013782C (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@@Z @ 0x1C02110CC (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02886A8 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C0288830 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        DWORD a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned __int16 v3; // r15
  unsigned __int16 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  int Active; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rsi
  unsigned int v30; // edx
  _DWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  DXGGLOBAL *Global; // rax
  SIZE_T v35; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  PVOID v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // r14d
  DXGGLOBAL *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rcx
  DXGGLOBAL *v45; // rax
  __int64 v46; // rcx
  unsigned __int16 v47; // ax
  unsigned __int16 v48; // r10
  unsigned __int16 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r11
  unsigned __int16 v52; // bx
  bool i; // cf
  __int64 v54; // rdx
  __int16 v55; // r9
  __int64 v56; // rbx
  __int64 v57; // r8
  unsigned __int16 v58; // r10
  __int64 v59; // rdx
  __int64 v60; // r9
  unsigned __int16 v61; // r8
  bool j; // cf
  __int64 v63; // rdx
  unsigned __int16 v64; // r11
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // r11
  unsigned __int16 v68; // r11
  unsigned __int16 v69; // ax
  unsigned int v70; // r8d
  unsigned int v71; // r9d
  __int64 v72; // r10
  __int64 v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r10
  int v77; // edx
  __int64 v78; // rax
  unsigned __int16 v79; // ax
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned int v82; // r14d
  __int64 v83; // rcx
  unsigned int v84; // r9d
  __int64 v85; // r10
  __int64 v86; // r8
  __int64 v87; // rbx
  __int64 v88; // rsi
  __int64 v89; // r8
  int v90; // edx
  __int64 v91; // rax
  unsigned int v92; // edx
  __int64 v93; // rax
  int v94; // eax
  unsigned int v95; // ebx
  char v96; // r12
  DWORD LowPart; // r15d
  int v98; // eax
  __int64 v99; // rsi
  __int64 v100; // r14
  _QWORD *v101; // rax
  int v102; // eax
  __int64 v103; // r14
  _QWORD *v104; // rax
  struct DXGGLOBAL *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  unsigned __int16 v108; // si
  __int64 v109; // rdx
  __int64 v110; // rbx
  unsigned int v111; // r15d
  __int64 v112; // rax
  __int64 v113; // rax
  LONG v114; // ecx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rbx
  int v118; // eax
  __int64 v119; // r13
  _QWORD *v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rdx
  int v123; // r10d
  unsigned int v124; // r8d
  unsigned int v125; // r9d
  __int64 v126; // rdx
  int v127; // eax
  __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rcx
  unsigned __int16 v131; // bx
  __int64 v132; // rdx
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rax
  unsigned __int16 v137[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v138[4]; // [rsp+34h] [rbp-CCh] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v140; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-B0h]
  __int64 v142; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v143; // [rsp+60h] [rbp-A0h]
  __int64 v144[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v145[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v146[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v147[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v148; // [rsp+E0h] [rbp-20h]
  int v149; // [rsp+F4h] [rbp-Ch]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  char v151; // [rsp+130h] [rbp+30h]

  v3 = 0;
  *(_QWORD *)&v140.left = a3;
  Luid.LowPart = a2;
  v151 = 0;
  v5 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v147, 8u, 0);
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 77);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v11 = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v12 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v12 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v13);
    v14 = v12;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
LABEL_8:
    WdLogEvent5_WdError(v14);
    goto LABEL_156;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2328));
  Current = DXGPROCESS::GetCurrent();
  v16 = Current;
  if ( !Current )
  {
    v14 = WdLogNewEntry5_WdError(v15);
    goto LABEL_8;
  }
  if ( !(unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = Current;
    WdLogEvent5_WdError(v18);
    v11 = -1073741790;
    goto LABEL_156;
  }
  v138[0] = 0;
  v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v138, 1);
  v23 = v19;
  if ( v19 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v24 + 24) = v23;
    goto LABEL_19;
  }
  for ( v137[0] = 8; ; v5 = v137[0] )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v147, v5, v21, v22) < v5 )
    {
      v135 = WdLogNewEntry5_WdLowResource(v25);
      *(_QWORD *)(v135 + 24) = *((_QWORD *)this + 8);
      *(_QWORD *)(v135 + 32) = v5;
      WdLogEvent5_WdLowResource(v135);
      LODWORD(v23) = -1073741801;
      goto LABEL_153;
    }
    v149 |= 3u;
    Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v147, 0, 1, 1, v137);
    v23 = Active;
    if ( Active != -1073741789 )
      break;
  }
  if ( Active < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v24 + 24) = *((_QWORD *)this + 8);
    *(_QWORD *)(v24 + 32) = v23;
LABEL_19:
    WdLogEvent5_WdError(v24);
LABEL_153:
    v11 = v23;
    goto LABEL_154;
  }
  v28 = *((_QWORD *)this + 8);
  v29 = v148;
  v30 = *(unsigned __int16 *)(v28 + 20);
  v142 = v28 + 48;
  v143 = v30;
  if ( v30 )
  {
    v31 = (_DWORD *)(v28 + 280);
    v32 = v30;
    do
    {
      *v31 |= 4u;
      v31[3] = 0;
      v31 += 68;
      --v32;
    }
    while ( v32 );
  }
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2690::_AUTO_USING_PM_PrimaryClonePathIndex2690(
    (__int64)v146,
    v29);
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2692::_AUTO_USING_PM_PathChanged2692(
    (__int64)v145,
    *((_QWORD *)this + 8));
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2692::_AUTO_USING_PM_PathChanged2692(
    (__int64)v144,
    v29);
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v147);
  Global = DXGGLOBAL::GetGlobal(v33);
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v35 = 324 * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 0x144uLL) )
    v35 = -1LL;
  v37 = operator new[](v35, 0x63644356u, PagedPool);
  v38 = *((_QWORD *)this + 8);
  *(_QWORD *)(v38 + 40) = v37;
  v39 = *((_QWORD *)this + 8);
  if ( *(_QWORD *)(v39 + 40) )
  {
    *(_WORD *)(v39 + 28) = 0;
    v41 = 0;
    v42 = DXGGLOBAL::GetGlobal(v38);
    if ( DXGGLOBAL::GetMaximumAdapterCount(v42) )
    {
      do
      {
        v43 = 324LL * v41;
        memset((void *)(v43 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)), 0, 0x144uLL);
        memset((void *)(v43 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL), 255, 0x40uLL);
        ++v41;
        v45 = DXGGLOBAL::GetGlobal(v44);
      }
      while ( v41 < DXGGLOBAL::GetMaximumAdapterCount(v45) );
    }
    DxgkRemoveAllSessionViewForCurrentSession();
    v47 = *(_WORD *)(v29 + 20);
    v48 = 0;
    if ( v47 )
    {
      LOWORD(v46) = 0;
      do
      {
        v49 = 0;
        v50 = 272LL * (unsigned __int16)v46 + v29;
        *(_DWORD *)(v50 + 296) = 0;
        v51 = *((_QWORD *)this + 8);
        v52 = *(_WORD *)(v51 + 20);
        for ( i = v52 != 0; i; i = v49 < v52 )
        {
          if ( CCD_TOPOLOGY::IsMatchingSource(
                 (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v50 + 48),
                 (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v49 + v51 + 48))
            && *(_DWORD *)(v50 + 76) == *(_DWORD *)(v54 + 28) )
          {
            v56 = 272LL * *(unsigned int *)(v50 + 292);
            if ( !CCD_TOPOLOGY::IsMatchingSource(
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v56 + v29 + 48),
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v54 + 244) + v51 + 48)) )
            {
              *(_DWORD *)(v56 + v29 + 296) = 1;
              *(_QWORD *)(272LL * *(unsigned int *)(v50 + 292) + v29 + 244) = 0LL;
            }
            break;
          }
          v49 = v55 + 1;
        }
        if ( v49 >= *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
        {
          *(_DWORD *)(272LL * *(unsigned int *)(v50 + 292) + v29 + 296) = 1;
          *(_QWORD *)(272LL * *(unsigned int *)(v50 + 292) + v29 + 244) = 0LL;
        }
        v47 = *(_WORD *)(v29 + 20);
        v46 = ++v48;
      }
      while ( v48 < v47 );
    }
    v57 = *((_QWORD *)this + 8);
    v58 = 0;
    v59 = v57;
    if ( *(_WORD *)(v57 + 20) )
    {
      LOWORD(v46) = 0;
      do
      {
        v60 = 272LL * (unsigned __int16)v46 + v57;
        v61 = 0;
        *(_DWORD *)(v60 + 296) = 0;
        for ( j = *(_WORD *)(v29 + 20) != 0; j; j = v61 < v64 )
        {
          if ( CCD_TOPOLOGY::IsMatchingSource(
                 (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v60 + 48),
                 (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v61 + v29 + 48))
            && *(_DWORD *)(v63 + 28) == *(_DWORD *)(v60 + 76) )
          {
            v65 = *(unsigned int *)(v63 + 244);
            if ( (_DWORD)v65 == v61 && *(_DWORD *)(v60 + 292) == v58 )
            {
              *(_QWORD *)(v60 + 244) = *(_QWORD *)(v63 + 196);
            }
            else
            {
              v66 = *((_QWORD *)this + 8);
              if ( !CCD_TOPOLOGY::IsMatchingSource(
                      (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v60 + 292) + v66 + 48),
                      (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272 * v65 + v29 + 48)) )
              {
                *(_DWORD *)(v67 + v66 + 296) = 1;
                *(_QWORD *)(272LL * *(unsigned int *)(v60 + 292) + *((_QWORD *)this + 8) + 244) = 0LL;
              }
            }
            break;
          }
          ++v61;
        }
        v47 = *(_WORD *)(v29 + 20);
        if ( v61 >= v47 )
        {
          *(_DWORD *)(272LL * *(unsigned int *)(v60 + 292) + *((_QWORD *)this + 8) + 296) = 1;
          *(_QWORD *)(272LL * *(unsigned int *)(v60 + 292) + *((_QWORD *)this + 8) + 244) = 0LL;
          v47 = *(_WORD *)(v29 + 20);
        }
        v57 = *((_QWORD *)this + 8);
        v46 = ++v58;
        v59 = v57;
      }
      while ( v58 < *(_WORD *)(v57 + 20) );
    }
    v68 = 0;
    if ( v47 )
    {
      v69 = 0;
      do
      {
        v70 = *(_DWORD *)(v59 + 36);
        v71 = 0;
        if ( v70 )
        {
          v72 = *(_QWORD *)(v59 + 40);
          v73 = 272LL * v69;
          do
          {
            v74 = 324LL * v71;
            if ( *(_DWORD *)(v29 + v73 + 64) == *(_DWORD *)(v74 + v72)
              && *(_DWORD *)(v29 + v73 + 68) == *(_DWORD *)(v74 + v72 + 4) )
            {
              break;
            }
            ++v71;
          }
          while ( v71 < v70 );
        }
        v75 = 324LL * v71;
        v76 = 272LL * v68;
        *(_DWORD *)(*(_QWORD *)(v59 + 40) + v75 + 76) |= 1 << *(_DWORD *)(v76 + v29 + 72);
        if ( (*(_QWORD *)(v76 + v29 + 48) & 0x1000000000LL) != 0 )
          v77 = 1 << *(_DWORD *)(v76 + v29 + 72);
        else
          v77 = 0;
        v46 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
        *(_DWORD *)(v46 + v75 + 220) |= v77;
        if ( *(_DWORD *)(v76 + v29 + 296) == 1 )
        {
          v46 = *(unsigned int *)(v76 + v29 + 72);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v75 + 132) |= 1 << v46;
        }
        v57 = *((_QWORD *)this + 8);
        v59 = v57;
        v78 = *(unsigned int *)(v57 + 36);
        if ( v71 >= (unsigned int)v78 )
        {
          v46 = *(_QWORD *)(v57 + 40);
          *(_QWORD *)(324 * v78 + v46) = *(_QWORD *)(v76 + v29 + 64);
          ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
          v57 = *((_QWORD *)this + 8);
          v59 = v57;
        }
        v69 = ++v68;
      }
      while ( v68 < *(_WORD *)(v29 + 20) );
      v16 = Current;
    }
    if ( *(_WORD *)(v57 + 20) )
    {
      v79 = 0;
      while ( 1 )
      {
        v80 = 272LL * v79;
        v81 = *(_QWORD *)(v57 + v80 + 48);
        if ( (v81 & 0x187) != 0 )
        {
          *(_QWORD *)(v57 + v80 + 48) = v81 | 0x40000000000000LL;
          *(_QWORD *)(v80 + *((_QWORD *)this + 8) + 56) |= *(_DWORD *)(v80 + *((_QWORD *)this + 8) + 48) & 0x187;
          v57 = *((_QWORD *)this + 8);
        }
        *(_DWORD *)(v57 + v80 + 240) = 0;
        v82 = 0;
        v83 = *((_QWORD *)this + 8);
        v84 = *(_DWORD *)(v83 + 36);
        if ( v84 )
        {
          v85 = *(_QWORD *)(v83 + 40);
          do
          {
            v86 = 324LL * v82;
            if ( *(_DWORD *)(v83 + v80 + 64) == *(_DWORD *)(v86 + v85)
              && *(_DWORD *)(v83 + v80 + 68) == *(_DWORD *)(v86 + v85 + 4) )
            {
              break;
            }
            ++v82;
          }
          while ( v82 < v84 );
        }
        v87 = 272LL * v3;
        v88 = 324LL * v82;
        *(_DWORD *)(*(_QWORD *)(v83 + 40) + v88 + 80) |= 1 << *(_DWORD *)(v87 + v83 + 72);
        v89 = *((_QWORD *)this + 8);
        v90 = (*(_QWORD *)(v89 + v87 + 48) & 0x1000000000LL) != 0 ? 1 << *(_DWORD *)(v89 + v87 + 72) : 0;
        *(_DWORD *)(*(_QWORD *)(v89 + 40) + v88 + 220) |= v90;
        v91 = *((_QWORD *)this + 8);
        v92 = *(_DWORD *)(v91 + v87 + 292);
        if ( v92 == v3 )
          break;
        if ( !CCD_TOPOLOGY::IsSameCloneGroup(this, v92, v3, 1) )
          goto LABEL_87;
LABEL_88:
        v57 = *((_QWORD *)this + 8);
        if ( *(_DWORD *)(v87 + v57 + 296) == 1 )
        {
          v46 = *(unsigned int *)(v87 + v57 + 72);
          *(_DWORD *)(*(_QWORD *)(v57 + 40) + v88 + 132) |= 1 << v46;
          v57 = *((_QWORD *)this + 8);
        }
        v93 = *(unsigned int *)(v57 + 36);
        if ( v82 >= (unsigned int)v93 )
        {
          v46 = *(_QWORD *)(v57 + 40);
          *(_QWORD *)(324 * v93 + v46) = *(_QWORD *)(v87 + v57 + 64);
          ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
          v57 = *((_QWORD *)this + 8);
        }
        v79 = ++v3;
        if ( v3 >= *(_WORD *)(v57 + 20) )
        {
          v16 = Current;
          goto LABEL_94;
        }
      }
      *(_DWORD *)(*(_QWORD *)(v91 + 40) + v88 + 72) |= 1 << *(_DWORD *)(v91 + v87 + 72);
LABEL_87:
      v46 = *((_QWORD *)this + 8);
      *(_DWORD *)(*(_QWORD *)(v46 + 40) + 4 * (81LL * v82 + *(unsigned int *)(v87 + v46 + 72)) + 8) = v3;
      goto LABEL_88;
    }
LABEL_94:
    v94 = *(_DWORD *)(v57 + 36);
    v95 = 0;
    v96 = v94 != 0;
    LOBYTE(v137[0]) = v94 != 0;
    if ( v94 )
    {
      LowPart = Luid.LowPart;
      do
      {
        v98 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v95);
        v46 = v95;
        v99 = 324LL * v95;
        v100 = v98;
        if ( v98 >= 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v99 + 76) )
          {
            v102 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
                     this,
                     v16,
                     LowPart,
                     v95,
                     *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v140.left);
            v103 = v102;
            if ( v102 >= 0 )
            {
              v96 = 0;
            }
            else
            {
              v104 = (_QWORD *)WdLogNewEntry5_WdError(v46);
              v104[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v99 + 4);
              v104[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324LL * v95);
              v104[5] = *((_QWORD *)this + 8);
              v104[6] = v103;
              WdLogEvent5_WdError(v104);
            }
          }
        }
        else
        {
          v101 = (_QWORD *)WdLogNewEntry5_WdError(v95);
          v101[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v99 + 4);
          v101[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324LL * v95);
          v101[5] = *((_QWORD *)this + 8);
          v101[6] = v100;
          WdLogEvent5_WdError(v101);
          CCD_TOPOLOGY::MarkPathsApplyFailure(
            this,
            (const struct _LUID *)(v99 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
            0xFFFFFFFF,
            v100);
        }
        ++v95;
      }
      while ( v95 < *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) );
      LOBYTE(v137[0]) = v96;
    }
    v105 = DXGGLOBAL::GetGlobal(v46);
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v105 + 143));
    v107 = *((_QWORD *)this + 8);
    if ( *(_WORD *)(v107 + 20) )
    {
      v108 = 0;
      v109 = *((_QWORD *)this + 8);
      while ( 1 )
      {
        v110 = 272LL * v108;
        v111 = *(_DWORD *)(v110 + v107 + 292);
        if ( *(int *)(v110 + v107 + 240) >= 0 )
        {
          if ( v111 == v108 )
            goto LABEL_110;
          if ( !CCD_TOPOLOGY::IsSameCloneGroup(this, v111, v108, 1) )
            break;
        }
LABEL_123:
        v107 = *((_QWORD *)this + 8);
        ++v108;
        v109 = v107;
        if ( v108 >= *(_WORD *)(v107 + 20) )
        {
          v96 = v137[0];
          goto LABEL_125;
        }
      }
      v109 = *((_QWORD *)this + 8);
LABEL_110:
      v112 = *(_QWORD *)(v110 + v109 + 48);
      if ( (v112 & 0x800) == 0 || (v112 & 0x20000) == 0 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v106);
        WdLogEvent5_WdAssertion(v113);
        v109 = *((_QWORD *)this + 8);
      }
      v140.left = *(_DWORD *)(v110 + v109 + 192);
      v140.right = *(_DWORD *)(v110 + v109 + 200) + v140.left;
      v140.top = *(_DWORD *)(v110 + v109 + 196);
      v114 = *(_DWORD *)(v110 + v109 + 204) + v140.top;
      Luid = 0LL;
      v140.bottom = v114;
      if ( *(_DWORD *)(v110 + v109 + 244) || *(_DWORD *)(v110 + v109 + 248) )
      {
        Luid = *(struct _LUID *)(v110 + v109 + 244);
      }
      else
      {
        if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
        {
          v116 = WdLogNewEntry5_WdAssertion(v115);
          WdLogEvent5_WdAssertion(v116);
        }
        v109 = *((_QWORD *)this + 8);
      }
      v117 = 272LL * v108;
      v118 = DxgkCreateSessionViewForCurrentSession(
               (struct _LUID *)(v117 + v109 + 64),
               *(_DWORD *)(v117 + v109 + 72),
               &v140,
               v111 == v108,
               &Luid);
      v119 = v118;
      if ( v118 >= 0 )
      {
        if ( v111 == v108 )
          ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
      }
      else
      {
        v120 = (_QWORD *)WdLogNewEntry5_WdError(v106);
        v120[3] = *(int *)(v117 + *((_QWORD *)this + 8) + 68);
        v120[4] = *(unsigned int *)(v117 + *((_QWORD *)this + 8) + 64);
        v120[5] = *(unsigned int *)(v117 + *((_QWORD *)this + 8) + 72);
        v120[6] = v119;
        WdLogEvent5_WdError(v120);
        *(_DWORD *)(v117 + *((_QWORD *)this + 8) + 240) = v119;
      }
      goto LABEL_123;
    }
LABEL_125:
    CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
    CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v147);
    v122 = *((_QWORD *)this + 8);
    v123 = 0;
    v124 = 0;
    v125 = *(_DWORD *)(v122 + 36);
    if ( v125 )
    {
      v126 = *(_QWORD *)(v122 + 40);
      while ( 1 )
      {
        v121 = 324LL * v124;
        if ( *(_DWORD *)(v121 + v126 + 92) || *(_DWORD *)(v121 + v126 + 84) )
          break;
        if ( *(_DWORD *)(v121 + v126 + 88) || *(_DWORD *)(v121 + v126 + 120) || *(_DWORD *)(v121 + v126 + 116) )
          v123 = 1;
        if ( ++v124 >= v125 )
          goto LABEL_136;
      }
      v123 = 0;
LABEL_136:
      if ( v123 )
      {
        v140.top = 0;
        v140.left = 11;
        *(_QWORD *)&v140.right = 0LL;
        v127 = DxgkStatusChangeNotify(&v140);
        v128 = v127;
        if ( v127 < 0 )
        {
          v129 = WdLogNewEntry5_WdError(v121);
          *(_QWORD *)(v129 + 24) = v128;
          WdLogEvent5_WdError(v129);
        }
      }
    }
    DXGGLOBAL::GetGlobal(v121);
    v130 = *((_QWORD *)this + 8);
    if ( *(_WORD *)(v130 + 20) > 1u )
    {
      DXGGLOBAL::RecordFeatureUsage(v130, 0LL);
      v130 = *((_QWORD *)this + 8);
    }
    if ( !*(_WORD *)(v130 + 20) )
    {
LABEL_150:
      v11 = v96 != 0 ? 0xC0000001 : 0;
      goto LABEL_151;
    }
    v131 = 0;
    while ( 1 )
    {
      v132 = 272LL * v131;
      if ( *(int *)(v132 + v130 + 240) >= 0 )
      {
        v133 = *(_DWORD *)(v132 + v130 + 256);
        if ( v133 == 12 )
        {
          v134 = 4LL;
LABEL_148:
          DXGGLOBAL::RecordFeatureUsage(v130, v134);
          goto LABEL_149;
        }
        if ( v133 == 30 )
        {
          v134 = 5LL;
          goto LABEL_148;
        }
      }
LABEL_149:
      v130 = *((_QWORD *)this + 8);
      if ( ++v131 >= *(_WORD *)(v130 + 20) )
        goto LABEL_150;
    }
  }
  v40 = WdLogNewEntry5_WdLowResource(v38);
  *(_QWORD *)(v40 + 24) = this;
  *(_QWORD *)(v40 + 32) = *((_QWORD *)this + 8);
  WdLogEvent5_WdLowResource(v40);
  v11 = -1073741801;
LABEL_151:
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2692::__AUTO_USING_PM_PathChanged2692(v144);
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2692::__AUTO_USING_PM_PathChanged2692(v145);
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2690::__AUTO_USING_PM_PrimaryClonePathIndex2690(v146);
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2690::__AUTO_USING_PM_PrimaryClonePathIndex2690(&v142);
LABEL_154:
  if ( v138[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_156:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v147);
  if ( v151 )
    KeUnstackDetachProcess(&ApcState);
  return v11;
}
