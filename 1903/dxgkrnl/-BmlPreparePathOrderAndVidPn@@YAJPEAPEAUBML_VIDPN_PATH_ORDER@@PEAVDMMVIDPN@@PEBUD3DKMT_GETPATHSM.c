/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DD958
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D2E58 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02C223C (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000390C (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003CE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0003D6C (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C003F98C (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0055EF8 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     BmlGetNextBestTargetMode @ 0x1C00DACC4 (BmlGetNextBestTargetMode.c)
 *     BmlGetNextBestSourceMode @ 0x1C00DB424 (BmlGetNextBestSourceMode.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00DBE2C (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlIsSecondaryClonePath @ 0x1C00DE240 (BmlIsSecondaryClonePath.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E24F8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E6D08 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00EAC24 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00EE55C (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C012E580 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C012ECA0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     BmlFillPreferredMonitorMode @ 0x1C0137D90 (BmlFillPreferredMonitorMode.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C02B5684 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        int a6,
        int a7)
{
  __int64 *v7; // r12
  __int64 v9; // r14
  __int16 v10; // r13
  PVOID v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  VIDPN_MGR *v16; // rdi
  VIDPN_MGR *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  VIDPN_MGR *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  bool v27; // zf
  char v28; // cl
  unsigned int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdi
  void *v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // r13d
  __int64 v40; // rcx
  unsigned int v41; // eax
  struct DMMVIDPNTOPOLOGY *v42; // r13
  unsigned int v43; // ebx
  unsigned int v44; // r14d
  __int64 v45; // rcx
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rsi
  unsigned int v50; // r13d
  __int64 v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v57; // rax
  __int64 v58; // rcx
  _DWORD *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  VIDPN_MGR *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rdx
  _DWORD *v74; // rcx
  unsigned int v75; // ebx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r10
  __int64 v80; // r10
  int v81; // eax
  unsigned int v82; // r15d
  __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // r8
  unsigned int v86; // esi
  unsigned int v87; // r14d
  unsigned int v88; // r9d
  __int64 v89; // r10
  __int64 v90; // rcx
  unsigned __int64 v91; // rbx
  unsigned int v92; // r13d
  unsigned int v93; // r12d
  unsigned int v94; // r14d
  __int64 v95; // rsi
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r15
  __int64 v100; // rcx
  struct DMMVIDPNSOURCEMODESET *v101; // r15
  __int64 v102; // rcx
  int v103; // eax
  DMMVIDPNPRESENTPATH *v104; // r13
  __int64 v105; // rbx
  __int64 v106; // rax
  struct DMMVIDPNTARGETMODESET *v107; // rbx
  __int64 v108; // rcx
  __int16 v109; // ax
  __int64 v111; // rax
  __int64 v112; // r14
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rbx
  __int64 v126; // rax
  __int64 v127; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // rbx
  __int64 v132; // rax
  __int64 v133; // rax
  BOOL v134; // eax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // r13
  __int64 v139; // rax
  __int64 v140; // rax
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  _QWORD *v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  int v149; // eax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  _QWORD *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // r13
  __int64 v161; // rbx
  __int64 v162; // r14
  __int64 v163; // rax
  DXGADAPTER *v164; // r14
  __int64 v165; // r15
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r13
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rax
  __int64 v174; // rax
  MONITOR_MGR *v175; // rcx
  __int64 v176; // rax
  int MonitorInstance; // eax
  __int64 v178; // rax
  __int64 v179; // rax
  struct DXGMONITOR *v180; // r14
  __int64 v181; // rax
  __int64 v182; // rax
  bool v183; // al
  int v184; // r14d
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 *v187; // rbx
  __int64 v188; // rdx
  int v189; // ecx
  int v190; // eax
  __int64 v191; // rax
  int v192; // r8d
  int v193; // edx
  int v194; // eax
  __int64 v195; // rdx
  __int64 v196; // rcx
  _QWORD *v197; // rax
  _QWORD *v198; // rax
  __int64 v199; // r15
  __int64 v200; // rax
  __int64 v201; // rax
  unsigned int v202; // r8d
  unsigned int v203; // eax
  __int64 v204; // rax
  __int64 v205; // rax
  _QWORD *v206; // rax
  _QWORD *v207; // rax
  __int64 v208; // rdx
  __int64 *v209; // rcx
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  _QWORD *v213; // rax
  __int64 v214; // rcx
  __int64 v215; // rax
  unsigned __int8 *v216; // r8
  unsigned int i; // r9d
  __int64 v218; // r10
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  _QWORD *v222; // rax
  unsigned int v223; // eax
  __int64 v224; // r10
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r8
  _QWORD *v228; // rax
  unsigned int v229; // eax
  __int64 v230; // r10
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r8
  _QWORD *v234; // rax
  bool IsVirtualModeSuportDisabled; // [rsp+48h] [rbp-71h]
  unsigned int v236; // [rsp+4Ch] [rbp-6Dh]
  unsigned int v237; // [rsp+4Ch] [rbp-6Dh]
  bool v238; // [rsp+50h] [rbp-69h]
  __int64 v239; // [rsp+58h] [rbp-61h]
  unsigned __int64 v240; // [rsp+58h] [rbp-61h]
  VIDPN_MGR *v241; // [rsp+60h] [rbp-59h]
  unsigned int v242; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 v243; // [rsp+70h] [rbp-49h]
  unsigned int v244; // [rsp+78h] [rbp-41h]
  unsigned int v245; // [rsp+7Ch] [rbp-3Dh] BYREF
  const struct DMMVIDPNPRESENTPATH *v246; // [rsp+80h] [rbp-39h]
  __int64 v247; // [rsp+88h] [rbp-31h] BYREF
  unsigned int v248; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v249; // [rsp+94h] [rbp-25h] BYREF
  DMMVIDPNTOPOLOGY *v250; // [rsp+98h] [rbp-21h]
  struct DXGMONITOR *v251; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v252; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v253[9]; // [rsp+B0h] [rbp-9h] BYREF
  struct DMMVIDPNPRESENTPATH *v255; // [rsp+108h] [rbp+4Fh]
  char v257; // [rsp+118h] [rbp+5Fh]

  v7 = a1;
  v9 = a2;
  v10 = a4;
  v11 = operator new[](104LL * *(unsigned __int16 *)(a3 + 20) + 16, 0x63644356u, PagedPool);
  *v7 = (__int64)v11;
  if ( !v11 )
  {
    v115 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v115 + 24) = a3;
    *(_QWORD *)(v115 + 32) = *(unsigned __int16 *)(a3 + 20);
    WdLogEvent5_WdLowResource(v115);
    return 3221225626LL;
  }
  v16 = *(VIDPN_MGR **)(v9 + 48);
  v241 = v16;
  v17 = v16;
  v18 = *((_QWORD *)v16 + 1);
  if ( !v18 )
  {
    v116 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v116);
    v18 = *((_QWORD *)v16 + 1);
    v17 = *(VIDPN_MGR **)(v9 + 48);
  }
  v19 = *(_QWORD *)(v18 + 16);
  v20 = v17;
  v21 = *(_QWORD *)(v19 + 2552);
  if ( *(_BYTE *)(v21 + 233) && *(_BYTE *)(v21 + 234)
    || (v257 = 0,
        v20 = *(VIDPN_MGR **)(*(_QWORD *)(v19 + 192) + 64LL),
        *(_DWORD *)(*((_QWORD *)v20 + 5) + 28LL) >= 0x4003u) )
  {
    v257 = 1;
  }
  v22 = *((_QWORD *)v17 + 1);
  if ( !v22 )
  {
    v117 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v117);
    v22 = *((_QWORD *)v17 + 1);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v22 + 16) + 2560LL) )
  {
    v23 = (unsigned __int8 *)*v7;
    *(_DWORD *)(*v7 + 8) &= 0xFFFFFFF2;
  }
  else
  {
    v118 = *(_QWORD *)(v9 + 48);
    v119 = *(_QWORD *)(v118 + 8);
    if ( !v119 )
    {
      v120 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v120);
      v119 = *(_QWORD *)(v118 + 8);
    }
    v121 = *(_QWORD *)(*(_QWORD *)(v119 + 16) + 2552LL);
    if ( *(_QWORD *)(*(_QWORD *)(v121 + 16) + 2560LL) )
    {
      v122 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v122 + 24) = 6379LL;
      WdLogEvent5_WdAssertion(v122);
    }
    v123 = *v7;
    v124 = (*(_DWORD *)(*v7 + 8) ^ *(_DWORD *)(v121 + 352)) & 1;
    *(_DWORD *)(*v7 + 8) ^= v124;
    v125 = *(_QWORD *)(v9 + 48);
    v126 = *(_QWORD *)(v125 + 8);
    if ( !v126 )
    {
      v127 = WdLogNewEntry5_WdAssertion(v124, v123);
      WdLogEvent5_WdAssertion(v127);
      v126 = *(_QWORD *)(v125 + 8);
    }
    DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(
                                     *(ADAPTER_DISPLAY **)(*(_QWORD *)(v126 + 16) + 2552LL),
                                     v123);
    v129 = *v7;
    v130 = DisplayOnlyDriverUseRawModes != 0 ? 4 : 0;
    *(_DWORD *)(*v7 + 8) = v130 | *(_DWORD *)(*v7 + 8) & 0xFFFFFFFB;
    v131 = *(_QWORD *)(v9 + 48);
    v132 = *(_QWORD *)(v131 + 8);
    if ( !v132 )
    {
      v133 = WdLogNewEntry5_WdAssertion(v129, v130);
      WdLogEvent5_WdAssertion(v133);
      v132 = *(_QWORD *)(v131 + 8);
    }
    v134 = ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(
             *(DXGADAPTER ***)(*(_QWORD *)(v132 + 16) + 2552LL),
             v130);
    v23 = (unsigned __int8 *)*v7;
    v20 = v134 ? (VIDPN_MGR *)8 : 0LL;
    *(_DWORD *)(*v7 + 8) = (unsigned int)v20 | *(_DWORD *)(*v7 + 8) & 0xFFFFFFF7;
  }
  v24 = *(_QWORD *)(v9 + 48);
  v25 = *(_QWORD *)(v24 + 8);
  if ( !v25 )
  {
    v135 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v135);
    v25 = *(_QWORD *)(v24 + 8);
    v23 = (unsigned __int8 *)*v7;
  }
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 2552LL);
  if ( !*(_BYTE *)(v26 + 234) || (v27 = *(_BYTE *)(v26 + 233) == 0, v28 = 1, !v27) )
    v28 = 0;
  v29 = 0;
  v30 = 0x4000000000000LL;
  *((_DWORD *)v23 + 2) = *((_DWORD *)v23 + 2) & 0xD | (2 * v28) & 0xF;
  *v23 = 0;
  *((_DWORD *)v23 + 1) = a7;
  if ( *(_WORD *)(a3 + 20) )
  {
    while ( 1 )
    {
      v31 = 272LL * v29;
      v32 = v31 + a3 + 48;
      if ( (*(_QWORD *)v32 & 0x4000000000000LL) == 0 )
      {
        v136 = WdLogNewEntry5_WdAssertion(v31, 0x4000000000000LL);
        WdLogEvent5_WdAssertion(v136);
      }
      v33 = *((_QWORD *)v241 + 1);
      if ( !v33 )
      {
        v137 = WdLogNewEntry5_WdAssertion(v31, v30);
        WdLogEvent5_WdAssertion(v137);
        v33 = *((_QWORD *)v241 + 1);
      }
      v34 = *(_QWORD *)(v33 + 16);
      if ( *(_DWORD *)(v32 + 16) == *(_DWORD *)(v34 + 276) && *(_DWORD *)(v32 + 20) == *(_DWORD *)(v34 + 280) )
      {
        if ( (*(_QWORD *)v32 & 0x700000000000LL) != 0x700000000000LL )
        {
          v143 = WdLogNewEntry5_WdError(v34, v30, v14);
          *(_QWORD *)(v143 + 24) = v29;
          *(_QWORD *)(v143 + 32) = a3;
          WdLogEvent5_WdError(v143);
          return 3221225485LL;
        }
        v35 = *v7;
        v36 = 104LL * *(unsigned __int8 *)*v7;
        v37 = (void *)(v36 + *v7 + 72);
        *(_QWORD *)(v36 + v35 + 52) = 0LL;
        *(_QWORD *)(v36 + v35 + 16) = v32;
        *(_WORD *)(v36 + v35 + 32) = v29;
        *(_WORD *)(v36 + v35 + 64) = 0;
        *(_WORD *)(v36 + v35 + 68) = 0;
        *(_WORD *)(v36 + v35 + 66) = v10;
        *(_WORD *)(v36 + v35 + 70) = a5;
        *(_DWORD *)(v36 + v35 + 60) = 0;
        *(_DWORD *)(v36 + v35 + 116) = 0;
        memset(v37, 0, 0x24uLL);
        if ( a6 == 2 )
        {
          v138 = *(_QWORD *)(a2 + 48);
          v139 = *(_QWORD *)(v138 + 8);
          if ( !v139 )
          {
            v140 = WdLogNewEntry5_WdAssertion(v38, v30);
            WdLogEvent5_WdAssertion(v140);
            v139 = *(_QWORD *)(v138 + 8);
          }
          SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                               *(ADAPTER_DISPLAY **)(*(_QWORD *)(v139 + 16) + 2552LL),
                               *(_DWORD *)(v32 + 24));
          if ( SessionViewOwner && *((_DWORD *)SessionViewOwner + 10) > 1u )
            *(_DWORD *)(v36 + v35 + 116) |= 2u;
        }
        else
        {
          v39 = 0;
          if ( *(_WORD *)(a3 + 20) )
          {
            v30 = 0x4000000000000LL;
            do
            {
              v40 = 272LL * v39;
              v247 = v40;
              if ( (*(_QWORD *)(v40 + a3 + 48) & 0x4000000000000LL) == 0 )
              {
                v142 = WdLogNewEntry5_WdAssertion(v40, 0x4000000000000LL);
                WdLogEvent5_WdAssertion(v142);
                v40 = v247;
                v30 = 0x4000000000000LL;
              }
              if ( v39 != v29 && *(_DWORD *)(v40 + a3 + 232) == *(_DWORD *)(v32 + 184) )
                *(_DWORD *)(v36 + v35 + 116) |= 2u;
              ++v39;
            }
            while ( v39 < *(unsigned __int16 *)(a3 + 20) );
          }
        }
        v10 = a4;
        ++*(_BYTE *)*v7;
      }
      if ( ++v29 >= *(unsigned __int16 *)(a3 + 20) )
        break;
      v30 = 0x4000000000000LL;
    }
    v23 = (unsigned __int8 *)*v7;
    v9 = a2;
  }
  LOBYTE(v41) = *v23;
  v42 = (struct DMMVIDPNTOPOLOGY *)(v9 + 96);
  v250 = (DMMVIDPNTOPOLOGY *)(v9 + 96);
  v43 = 0;
  if ( (_BYTE)v41 )
  {
    do
    {
      v44 = v43 + 1;
      v45 = v43 + 1;
      if ( (int)(v43 + 1) > 32 )
      {
        v144 = WdLogNewEntry5_WdAssertion(v45, v30);
        *(_QWORD *)(v144 + 24) = *v7;
        *(_QWORD *)(v144 + 32) = v43;
        WdLogEvent5_WdAssertion(v144);
        v23 = (unsigned __int8 *)*v7;
        LODWORD(v45) = 32;
      }
      v46 = 104LL * v43;
      v47 = VIDPN_MGR::AddPathToVidPnTopology(
              v241,
              v42,
              *(_DWORD *)(*(_QWORD *)&v23[v46 + 16] + 24LL),
              *(_DWORD *)(*(_QWORD *)&v23[v46 + 16] + 28LL),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)v45,
              *(_WORD *)&v23[v46 + 32],
              1u,
              D3DKMDT_MCC_ENFORCE);
      v49 = v47;
      if ( v47 < 0 )
      {
        v145 = (_QWORD *)WdLogNewEntry5_WdTrace(v48, v30);
        v145[3] = *(unsigned int *)(*(_QWORD *)&v23[v46 + 16] + 24LL);
        v145[4] = *(unsigned int *)(*(_QWORD *)&v23[v46 + 16] + 28LL);
        v145[5] = v42;
        v145[6] = v49;
        return (unsigned int)v49;
      }
      v23 = (unsigned __int8 *)*v7;
      v43 = v44;
      v41 = *(unsigned __int8 *)*v7;
    }
    while ( v44 < v41 );
  }
  v236 = 0;
  v50 = 0;
  if ( (_BYTE)v41 )
  {
    while ( 1 )
    {
      v51 = v50;
      v52 = 104LL * v50;
      v239 = v50;
      v53 = *(_QWORD *)&v23[v52 + 16];
      if ( (*(_QWORD *)v53 & 0x4000000000000LL) == 0 )
      {
        v146 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v30);
        WdLogEvent5_WdAssertion(v146);
        v53 = *(_QWORD *)&v23[v52 + 16];
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(v250, *(_DWORD *)(v53 + 24), *(_DWORD *)(v53 + 28));
      if ( *(_BYTE *)(v53 + 129) )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v55, v54);
        v57[3] = *(unsigned int *)(*(_QWORD *)&v23[v52 + 16] + 24LL);
        v57[4] = *(unsigned int *)(*(_QWORD *)&v23[v52 + 16] + 28LL);
        v57[5] = *(int *)(*(_QWORD *)&v23[v52 + 16] + 20LL);
        v58 = *(_QWORD *)&v23[v52 + 16];
        v57[6] = *(unsigned int *)(v58 + 16);
        v59 = *(_DWORD **)&v23[v52 + 16];
        if ( (*v59 & 0x20108) == 0x20100LL )
        {
          v60 = *(_QWORD *)&v23[v52 + 16];
          if ( v59[29] != 21 )
          {
            v147 = WdLogNewEntry5_WdAssertion(v58, v59);
            *(_QWORD *)(v147 + 24) = 4020LL;
            WdLogEvent5_WdAssertion(v147);
            v60 = *(_QWORD *)&v23[v52 + 16];
          }
          v59 = (_DWORD *)v60;
          if ( *(_BYTE *)(v60 + 128) )
          {
            v148 = WdLogNewEntry5_WdAssertion(0LL, v60);
            *(_QWORD *)(v148 + 24) = 4021LL;
            WdLogEvent5_WdAssertion(v148);
            v59 = *(_DWORD **)&v23[v52 + 16];
          }
        }
        if ( (*v59 & 0x20000LL) == 0 )
        {
          v149 = ~(*v59 >> 8);
          if ( (((unsigned __int8)v149 ^ (unsigned __int8)~(v59[2] >> 8)) & 1) != 0 )
          {
            v150 = WdLogNewEntry5_WdAssertion(v149 ^ (unsigned int)~(v59[2] >> 8), v59);
            *(_QWORD *)(v150 + 24) = 4035LL;
            WdLogEvent5_WdAssertion(v150);
          }
        }
      }
      v61 = *((_QWORD *)Path + 11);
      v62 = *(_QWORD *)(v61 + 104);
      if ( v62 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v62 + 96));
        v63 = *(_QWORD *)(v61 + 104);
      }
      else
      {
        v63 = 0LL;
      }
      v64 = *v7;
      v252 = v63;
      v65 = BmlFillPreferredMonitorMode(v64, v50, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
      v68 = v65;
      if ( v65 < 0 )
      {
        v207 = (_QWORD *)WdLogNewEntry5_WdTrace(v67, v66);
        v207[3] = *(unsigned int *)(*(_QWORD *)&v23[v52 + 16] + 24LL);
        v208 = *(unsigned int *)(*(_QWORD *)&v23[v52 + 16] + 28LL);
        v207[5] = v250;
        v207[4] = v208;
        v207[6] = v68;
        *(_QWORD *)(104LL * v50 + *v7 + 52) = 0LL;
        goto LABEL_222;
      }
      v69 = *(_QWORD *)&v23[v52 + 16];
      if ( (*(_QWORD *)v69 & 0x40000000000LL) == 0 )
        goto LABEL_115;
      AdapterDefaultScaling = *(_DWORD *)(v69 + 136);
      if ( AdapterDefaultScaling <= D3DKMDT_VPPS_UNINITIALIZED )
        goto LABEL_150;
      if ( AdapterDefaultScaling > D3DKMDT_VPPS_CUSTOM )
        break;
      v71 = v241;
LABEL_56:
      *(_DWORD *)&v23[v52 + 24] = AdapterDefaultScaling;
LABEL_57:
      v72 = *(_QWORD *)&v23[v52 + 16];
      if ( (*(_QWORD *)v72 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v72 + 88))
        && (*(_DWORD *)(v73 + 8) & 0x200LL) == 0 )
      {
        PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v71, *(_DWORD *)(v73 + 28));
        v246 = PathFromTargetInClientVidPn;
        v161 = *(_QWORD *)(a2 + 48);
        v162 = *(_QWORD *)(v161 + 8);
        if ( !v162 )
        {
          v163 = WdLogNewEntry5_WdAssertion(v158, v157);
          WdLogEvent5_WdAssertion(v163);
          v162 = *(_QWORD *)(v161 + 8);
        }
        v164 = *(DXGADAPTER **)(v162 + 16);
        if ( !v164 || (v165 = *(unsigned int *)(*(_QWORD *)&v23[v52 + 16] + 28LL), (_DWORD)v165 == -1) )
        {
          LODWORD(v68) = -1073741811;
        }
        else
        {
          DXGADAPTER::IsCoreResourceSharedOwner(v164);
          v169 = *((_QWORD *)v164 + 319);
          if ( !v169 )
          {
            v205 = WdLogNewEntry5_WdError(v167, v166, v168);
            *(_QWORD *)(v205 + 24) = 8960LL;
            WdLogEvent5_WdError(v205);
            LODWORD(v68) = -1073741811;
LABEL_220:
            v206 = (_QWORD *)WdLogNewEntry5_WdError(v158, v157, v159);
            v206[3] = *(unsigned int *)(*(_QWORD *)&v23[v52 + 16] + 28LL);
            v206[4] = *(int *)(*(_QWORD *)&v23[v52 + 16] + 20LL);
            v206[5] = *(unsigned int *)(*(_QWORD *)&v23[v52 + 16] + 16LL);
            WdLogEvent5_WdError(v206);
LABEL_222:
            v209 = &v252;
            goto LABEL_225;
          }
          DXGADAPTER::IsCoreResourceSharedOwner(v164);
          v173 = *((_QWORD *)v164 + 319);
          if ( !v173 )
          {
            v174 = WdLogNewEntry5_WdAssertion(v171, v170);
            WdLogEvent5_WdAssertion(v174);
            v173 = *((_QWORD *)v164 + 319);
          }
          v175 = *(MONITOR_MGR **)(v173 + 96);
          if ( !v175 )
          {
            v176 = WdLogNewEntry5_WdError(0LL, v170, v172);
            *(_QWORD *)(v176 + 24) = v164;
            WdLogEvent5_WdError(v176);
            LODWORD(v68) = -1073741811;
            goto LABEL_167;
          }
          v251 = 0LL;
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v175, v165, 1u, &v251);
          LODWORD(v68) = MonitorInstance;
          if ( MonitorInstance == -1073741275 )
          {
            v178 = WdLogNewEntry5_WdDmmEvent();
            *(_QWORD *)(v178 + 24) = v165;
            *(_QWORD *)(v178 + 32) = v164;
            WdLogEvent5_WdDmmEvent(v178);
            goto LABEL_165;
          }
          if ( MonitorInstance >= 0 )
          {
            v180 = v251;
            if ( !v251 || *((_DWORD *)v251 + 108) != 1 )
            {
              v181 = WdLogNewEntry5_WdAssertion(v158, v157);
              WdLogEvent5_WdAssertion(v181);
            }
            if ( !v180 )
            {
              v182 = WdLogNewEntry5_WdAssertion(v158, v157);
              WdLogEvent5_WdAssertion(v182);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v180 + 296), 1u);
            IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v180);
            ExReleaseResourceLite((PERESOURCE)((char *)v180 + 296));
            KeLeaveCriticalRegion();
            LODWORD(v68) = 0;
          }
          else
          {
            if ( MonitorInstance == -1073741632 )
            {
LABEL_165:
              IsVirtualModeSuportDisabled = 0;
              LODWORD(v68) = 0;
            }
            if ( (int)v68 < 0 )
            {
LABEL_167:
              v179 = WdLogNewEntry5_WdAssertion(v158, v157);
              *(_QWORD *)(v179 + 24) = (int)v68;
              WdLogEvent5_WdAssertion(v179);
              goto LABEL_178;
            }
          }
          v183 = IsVirtualModeSuportDisabled || *(_BYTE *)(v169 + 233) == 0;
          v238 = v183;
LABEL_178:
          PathFromTargetInClientVidPn = v246;
        }
        if ( (int)v68 < 0 )
          goto LABEL_220;
        if ( PathFromTargetInClientVidPn )
        {
          if ( !v238 )
          {
            v184 = *((_DWORD *)PathFromTargetInClientVidPn + 29);
LABEL_186:
            if ( v184 )
            {
              v187 = *(__int64 **)&v23[v52 + 16];
              v188 = *v187;
              if ( (*v187 & 0x200) != 0 )
              {
                if ( (((unsigned __int8)v184 ^ *((_BYTE *)v187 + 132)) & 1) != 0 && (v188 & 0x20000) != 0 )
                {
                  v189 = *((_DWORD *)v187 + 38);
                  v190 = *((_DWORD *)v187 + 39);
                  *v187 &= ~0x800000uLL;
                  *((_DWORD *)v187 + 38) = v190;
                  *((_DWORD *)v187 + 39) = v189;
                }
              }
              else if ( (v188 & 0x20000) != 0 )
              {
                v191 = WdLogNewEntry5_WdAssertion(v158, v188);
                WdLogEvent5_WdAssertion(v191);
              }
              *v187 |= 0x200uLL;
              *((_DWORD *)v187 + 33) = v184;
              *(_DWORD *)&v23[v52 + 28] = v184;
              goto LABEL_65;
            }
          }
        }
        else if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v158, v157) + 246) )
        {
          v184 = *((_DWORD *)DXGGLOBAL::GetGlobal(v186, v185) + 246);
          goto LABEL_186;
        }
        v51 = v239;
        v50 = v236;
      }
      v74 = *(_DWORD **)&v23[v52 + 16];
      if ( (*v74 & 0x200LL) == 0 )
      {
        v112 = *v7;
        if ( !(unsigned __int8)BmlIsSecondaryClonePath(*v7, v50, &v249) )
        {
          v75 = 1;
          goto LABEL_119;
        }
        v199 = 104LL * v249;
        v75 = *(_DWORD *)(v199 + v112 + 28);
        if ( !v75 )
        {
          v200 = WdLogNewEntry5_WdAssertion(v114, v113);
          WdLogEvent5_WdAssertion(v200);
        }
        if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v75) != 1 )
        {
          v201 = WdLogNewEntry5_WdAssertion(v114, v113);
          WdLogEvent5_WdAssertion(v201);
        }
        if ( !v257 )
          goto LABEL_119;
        v113 = *(unsigned int *)(v52 + v112 + 52);
        v202 = *(_DWORD *)(v52 + v112 + 56);
        LOBYTE(v114) = *(_DWORD *)(v199 + v112 + 52) < *(_DWORD *)(v199 + v112 + 56);
        if ( (_BYTE)v114 == (unsigned int)v113 < v202 )
          goto LABEL_119;
        v203 = v75 - 1;
        if ( (unsigned int)v113 >= v202 )
        {
          if ( v203 > 3 )
            goto LABEL_217;
          v75 += 4;
        }
        else
        {
          if ( v203 <= 3 )
          {
            v75 += 12;
            goto LABEL_119;
          }
LABEL_217:
          v75 = 255;
        }
LABEL_119:
        if ( !v75 )
        {
          v204 = WdLogNewEntry5_WdAssertion(v114, v113);
          WdLogEvent5_WdAssertion(v204);
        }
        goto LABEL_64;
      }
      v75 = v74[33];
      if ( (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v75) - 1 <= 3 )
      {
        if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v75) == 1 )
        {
          if ( v257 && (unsigned __int8)BmlIsSecondaryClonePath(*v7, v50, &v248) )
          {
            v192 = *(_DWORD *)(*(_QWORD *)(104LL * v248 + *v7 + 16) + 132LL);
            if ( (unsigned int)(v192 - 1) > 0xF
              || v75 - 1 > 0xF
              || (v193 = (int)(v75 - v192 + 4) % 4, v194 = v193 + 1, v192 > 4)
              || v194 < 1
              || v193 >= 4 )
            {
              v75 = 255;
            }
            else
            {
              v75 = v192 - 4 + 4 * v194;
            }
          }
LABEL_64:
          *(_DWORD *)&v23[v52 + 28] = v75;
          goto LABEL_65;
        }
        if ( v257 )
        {
          if ( (unsigned __int8)BmlIsSecondaryClonePath(*v7, v50, 0LL) )
          {
            *(_DWORD *)&v23[v52 + 28] = *(_DWORD *)(*(_QWORD *)&v23[v52 + 16] + 132LL);
          }
          else
          {
            v197 = (_QWORD *)WdLogNewEntry5_WdAssertion(v196, v195);
            v197[3] = *v7;
            v197[4] = v51;
            v197[5] = *(int *)(*(_QWORD *)&v23[v52 + 16] + 132LL);
            WdLogEvent5_WdAssertion(v197);
            *(_DWORD *)&v23[v52 + 28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)(*(_QWORD *)&v23[v52 + 16] + 132LL));
          }
          goto LABEL_65;
        }
      }
      v198 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v76, v78);
      v198[3] = *v7;
      v198[4] = v51;
      v198[5] = *(int *)(*(_QWORD *)&v23[v52 + 16] + 132LL);
      WdLogEvent5_WdWarning(v198);
      *(_DWORD *)&v23[v52 + 28] = 1;
LABEL_65:
      v79 = *(_QWORD *)&v23[v52 + 16];
      if ( *(_BYTE *)(v79 + 129) && (*(_DWORD *)v79 & 0x20000) != 0 )
      {
        if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)&v23[v52 + 28]) - 2) & 0xFFFFFFFD) != 0 )
        {
          *(_DWORD *)&v23[v52 + 108] = *(_DWORD *)(v80 + 152);
          v81 = *(_DWORD *)(v80 + 156);
        }
        else
        {
          *(_DWORD *)&v23[v52 + 108] = *(_DWORD *)(v80 + 156);
          v81 = *(_DWORD *)(v80 + 152);
        }
        *(_DWORD *)&v23[v52 + 112] = v81;
        *(_DWORD *)&v23[v52 + 116] |= 1u;
      }
      if ( (unsigned __int8)BmlIsSecondaryClonePath(*v7, v236, 0LL) )
        *(_WORD *)&v23[v52 + 66] = 0;
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v252, 0LL);
      v23 = (unsigned __int8 *)*v7;
      v50 = v236 + 1;
      v236 = v50;
      v41 = *(unsigned __int8 *)*v7;
      if ( v50 >= v41 )
        goto LABEL_73;
    }
    if ( AdapterDefaultScaling == D3DKMDT_VPPS_RESERVED1 )
    {
LABEL_115:
      v71 = v241;
    }
    else
    {
      if ( AdapterDefaultScaling != D3DKMDT_VPPS_NOTSPECIFIED )
      {
LABEL_150:
        v71 = v241;
        *(_DWORD *)&v23[v52 + 24] = VIDPN_MGR::GetAdapterDefaultScaling(v241);
        v156 = (_QWORD *)WdLogNewEntry5_WdWarning(v154, v153, v155);
        v156[3] = *(int *)&v23[v52 + 24];
        v156[4] = *v7;
        v156[5] = v50;
        v156[6] = *(int *)(*(_QWORD *)&v23[v52 + 16] + 136LL);
        WdLogEvent5_WdWarning(v156);
        goto LABEL_57;
      }
      v71 = v241;
      v151 = *((_QWORD *)v241 + 1);
      if ( !v151 )
      {
        v152 = WdLogNewEntry5_WdAssertion(v69, 0x40000000000LL);
        WdLogEvent5_WdAssertion(v152);
        v151 = *((_QWORD *)v241 + 1);
      }
      if ( *(int *)(*(_QWORD *)(v151 + 16) + 2452LL) < 1105 )
      {
        AdapterDefaultScaling = D3DKMDT_VPPS_NOTSPECIFIED;
        goto LABEL_56;
      }
    }
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v71);
    goto LABEL_56;
  }
LABEL_73:
  v244 = 0;
  v82 = 0;
  if ( (_BYTE)v41 )
  {
    do
    {
      v83 = 104LL * v82;
      v246 = (const struct DMMVIDPNPRESENTPATH *)v83;
      if ( !(unsigned __int8)BmlIsSecondaryClonePath(v23, v82, 0LL) )
      {
        v85 = *v7;
        v86 = 0;
        v240 = 0LL;
        v87 = 0;
        v88 = v82;
        v237 = v82;
        if ( v82 < *(unsigned __int8 *)*v7 )
        {
          do
          {
            v89 = 104LL * v88;
            v84 = *(_QWORD *)(v89 + v85 + 16);
            v90 = *(unsigned int *)(*(_QWORD *)&v23[v83 + 16] + 24LL);
            if ( *(_DWORD *)(v84 + 24) == (_DWORD)v90 )
            {
              v91 = *(_QWORD *)(v89 + v85 + 44);
              v243 = v91;
              if ( v257
                && (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(v89 + v85 + 28)) - 2) & 0xFFFFFFFD) == 0 )
              {
                v92 = v243;
                v93 = HIDWORD(v243);
                v243 = __PAIR64__(v243, HIDWORD(v243));
                v91 = v243;
              }
              else
              {
                v92 = HIDWORD(v243);
                v93 = v243;
              }
              if ( !v93 || !v92 )
              {
                v111 = WdLogNewEntry5_WdAssertion(v90, v84);
                WdLogEvent5_WdAssertion(v111);
                v88 = v237;
              }
              if ( v86 && v87 )
              {
                if ( v86 > v93 )
                  v86 = v93;
                LODWORD(v240) = v86;
                if ( v87 > v92 )
                  v87 = v92;
                HIDWORD(v240) = v87;
              }
              else
              {
                v240 = v91;
                v86 = v91;
                v87 = HIDWORD(v91);
              }
              v83 = (__int64)v246;
              v7 = a1;
            }
            v85 = *v7;
            v237 = ++v88;
          }
          while ( v88 < *(unsigned __int8 *)*v7 );
          v82 = v244;
        }
        *(_QWORD *)&v23[v83 + 36] = v240;
        *(_DWORD *)&v23[v83 + 60] = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)&v23[v83 + 52], v84);
      }
      v23 = (unsigned __int8 *)*v7;
      v244 = ++v82;
      v41 = *v23;
    }
    while ( v82 < v41 );
  }
  v94 = 0;
  if ( !(_BYTE)v41 )
    return 0LL;
  while ( 1 )
  {
    v95 = 104LL * v94;
    v96 = *(_QWORD *)&v23[v95 + 16];
    v255 = DMMVIDPNTOPOLOGY::FindPath(v250, *(_DWORD *)(v96 + 24), *(_DWORD *)(v96 + 28));
    v99 = *((_QWORD *)v255 + 11);
    v100 = *(_QWORD *)(v99 + 104);
    if ( v100 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v100 + 96));
      v101 = *(struct DMMVIDPNSOURCEMODESET **)(v99 + 104);
      v96 = *(_QWORD *)&v23[v95 + 16];
    }
    else
    {
      v101 = 0LL;
    }
    v102 = *(_QWORD *)(v96 + 8);
    v247 = (__int64)v101;
    if ( (v102 & 0x18000820B8FLL) == 0 )
    {
      v104 = v255;
      goto LABEL_107;
    }
    if ( (v102 & *(_QWORD *)v96 & 0x100) == 0 || (unsigned __int8)BmlIsSecondaryClonePath(*v7, v94, 0LL) )
    {
      v215 = WdLogNewEntry5_WdWarning(v102, v97, v98);
      *(_QWORD *)(v215 + 24) = *v7;
      *(_QWORD *)(v215 + 32) = v94;
      WdLogEvent5_WdWarning(v215);
      v104 = v255;
LABEL_107:
      if ( DMMVIDPNPRESENTPATH::IsFunctional(v104) )
      {
        v216 = (unsigned __int8 *)*v7;
        for ( i = 0; i < *v216; ++i )
        {
          v218 = 104LL * i;
          if ( *(_DWORD *)(*(_QWORD *)&v216[v218 + 16] + 24LL) == *(_DWORD *)(*(_QWORD *)&v23[v95 + 16] + 24LL) )
            *(_WORD *)&v216[v218 + 66] = 0;
        }
        *(_WORD *)&v23[v95 + 70] = 0;
      }
      goto LABEL_108;
    }
    v242 = -1;
    if ( (int)BmlGetNextBestSourceMode(*v7, a2, v94, (__int64)v101, 0xFFFFFFFF, &v242) >= 0 )
      break;
    v214 = *(_QWORD *)&v23[v95 + 16];
    if ( (*(_QWORD *)v214 & 0x40000000000000LL) == 0 )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v214 + 96),
        *(_DWORD *)(v214 + 100),
        *(_DWORD *)(v214 + 116),
        *(_QWORD *)(v214 + 16));
      v222 = (_QWORD *)WdLogNewEntry5_WdWarning(v220, v219, v221);
      v222[3] = *v7;
      v222[5] = v94;
      v222[6] = v242;
      v222[4] = a2;
      WdLogEvent5_WdWarning(v222);
      LODWORD(v68) = -1071774970;
      goto LABEL_224;
    }
    *(_QWORD *)(v214 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
LABEL_108:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v247, 0LL);
    v23 = (unsigned __int8 *)*v7;
    if ( ++v94 >= *(unsigned __int8 *)*v7 )
      return 0LL;
  }
  v103 = VIDPN_MGR::PinVidPnSourceMode(v241, v101, v242, 1);
  v68 = v103;
  if ( v103 < 0 )
  {
    DxgkLogCodePointPacket(
      0x15u,
      *(_DWORD *)(*(_QWORD *)&v23[v95 + 16] + 96LL),
      *(_DWORD *)(*(_QWORD *)&v23[v95 + 16] + 100LL),
      *(_DWORD *)(*(_QWORD *)&v23[v95 + 16] + 116LL),
      *(_QWORD *)(*(_QWORD *)&v23[v95 + 16] + 16LL));
    v213 = (_QWORD *)WdLogNewEntry5_WdWarning(v211, v210, v212);
    v213[4] = *v7;
    v213[6] = v94;
    v213[3] = v68;
    v213[5] = a2;
    WdLogEvent5_WdWarning(v213);
    goto LABEL_224;
  }
  v104 = v255;
  *(_WORD *)&v23[v95 + 66] = 0;
  v105 = *((_QWORD *)v255 + 12);
  v106 = *(_QWORD *)(v105 + 104);
  if ( v106 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v106 + 96));
    v107 = *(struct DMMVIDPNTARGETMODESET **)(v105 + 104);
  }
  else
  {
    v107 = 0LL;
  }
  v108 = *(_QWORD *)&v23[v95 + 16];
  v253[0] = (__int64)v107;
  if ( (*(_BYTE *)v108 & 0x87) != 0x87
    || (*(_BYTE *)(v108 + 8) & 0x87) != 0x87
    || !*(_DWORD *)(v108 + 56)
    || !*(_DWORD *)(v108 + 52) )
  {
    v109 = -1;
LABEL_106:
    *(_WORD *)&v23[v95 + 70] = v109;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(v253, 0LL);
    goto LABEL_107;
  }
  v245 = -1;
  if ( (int)BmlGetNextBestTargetMode(*v7, a2, v94, v107, (__int64)v101, 0xFFFFFFFF, &v245) >= 0 )
  {
    v68 = VIDPN_MGR::PinVidPnTargetMode(v241, v107, v245, 1);
    v109 = 0;
    if ( (int)v68 < 0 )
    {
      v223 = DMMVIDEOSIGNALMODE::DivideAndRound(
               *(unsigned int *)(*(_QWORD *)&v23[v95 + 16] + 52LL),
               *(unsigned int *)(*(_QWORD *)&v23[v95 + 16] + 56LL));
      DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v224 + 44), *(_DWORD *)(v224 + 48), v223, *(_QWORD *)(v224 + 16));
      v228 = (_QWORD *)WdLogNewEntry5_WdWarning(v226, v225, v227);
      v228[4] = *v7;
      v228[6] = v94;
      v228[3] = v68;
      v228[5] = a2;
      WdLogEvent5_WdWarning(v228);
      goto LABEL_245;
    }
    goto LABEL_106;
  }
  v229 = DMMVIDEOSIGNALMODE::DivideAndRound(
           *(unsigned int *)(*(_QWORD *)&v23[v95 + 16] + 52LL),
           *(unsigned int *)(*(_QWORD *)&v23[v95 + 16] + 56LL));
  DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v230 + 44), *(_DWORD *)(v230 + 48), v229, *(_QWORD *)(v230 + 16));
  v234 = (_QWORD *)WdLogNewEntry5_WdWarning(v232, v231, v233);
  v234[3] = *v7;
  v234[5] = v94;
  v234[4] = a2;
  WdLogEvent5_WdWarning(v234);
  LODWORD(v68) = -1071774970;
LABEL_245:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v253, 0LL);
LABEL_224:
  v209 = &v247;
LABEL_225:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v209, 0LL);
  return (unsigned int)v68;
}
