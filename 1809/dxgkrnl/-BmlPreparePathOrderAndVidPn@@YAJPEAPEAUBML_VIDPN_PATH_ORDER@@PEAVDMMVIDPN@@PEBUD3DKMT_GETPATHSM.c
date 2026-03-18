/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D5B44 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C0289EA8 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C0005F0C (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000619C (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C000F5FC (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000F618 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000F658 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C00396F0 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C004EE58 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00B5C6C (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00BF2F4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     BmlFillPreferredMonitorMode @ 0x1C00C482C (BmlFillPreferredMonitorMode.c)
 *     BmlGetNextBestTargetMode @ 0x1C00C5D14 (BmlGetNextBestTargetMode.c)
 *     BmlIsSecondaryClonePath @ 0x1C00D6A50 (BmlIsSecondaryClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C00D7494 (BmlGetNextBestSourceMode.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00D7AC0 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00D887C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00D8EBC (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C027D3F4 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0290BB0 (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        unsigned __int8 **a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        int a6,
        int a7)
{
  __int16 v10; // r13
  unsigned __int8 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  VIDPN_MGR *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  char v23; // cl
  unsigned __int8 *v24; // rdi
  unsigned int v25; // r14d
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  _DWORD *v31; // rbx
  __int64 v32; // rdi
  __int16 v33; // ax
  struct DXGADAPTER *v34; // rax
  struct SESSION_VIEW *SessionViewOwner; // rax
  unsigned int i; // r13d
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // esi
  unsigned int v41; // ebx
  struct DMMVIDPNTOPOLOGY *v42; // r12
  unsigned int v43; // eax
  unsigned int v44; // r14d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rbx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  DXGADAPTER *v53; // rsi
  unsigned int v54; // r13d
  __int64 v55; // r12
  __int64 v56; // rbx
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v64; // rax
  __int64 v65; // rcx
  _DWORD *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  _DWORD *v76; // rcx
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  VIDPN_MGR *v84; // rsi
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  _QWORD *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rdx
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // r13
  unsigned int v94; // r14d
  DXGADAPTER *v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // r12
  char v99; // al
  bool v100; // al
  __int64 v101; // rax
  int v102; // r14d
  __int64 v103; // rcx
  __int64 *v104; // rsi
  __int64 v105; // rcx
  int v106; // ecx
  int v107; // eax
  __int64 v108; // rax
  _DWORD *v109; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v110; // esi
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  int v114; // edx
  int v115; // esi
  int v116; // eax
  __int64 v117; // rcx
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  _DWORD *v120; // r14
  __int64 v121; // rcx
  __int64 v122; // r12
  __int64 v123; // rax
  __int64 v124; // rax
  unsigned int v125; // edx
  unsigned int v126; // r8d
  unsigned int v127; // eax
  __int64 v128; // rax
  __int64 v129; // r10
  __int64 v130; // r10
  int v131; // eax
  unsigned int v132; // r12d
  __int64 v133; // rbx
  unsigned __int64 v134; // r8
  __int64 v135; // r8
  unsigned int v136; // r14d
  unsigned int v137; // r10d
  __int64 v138; // r11
  __int64 v139; // rcx
  unsigned __int64 v140; // rbx
  unsigned __int64 v141; // r9
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v142; // eax
  unsigned int v143; // r13d
  __int64 v144; // rax
  _QWORD *v145; // rax
  _QWORD *v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rax
  unsigned int v149; // r14d
  __int64 v150; // rsi
  __int64 v151; // rbx
  __int64 v152; // r8
  __int64 v153; // r12
  __int64 v154; // rcx
  struct DMMVIDPNSOURCEMODESET *v155; // r12
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // rcx
  int v159; // eax
  __int64 v160; // rbx
  DMMVIDPNPRESENTPATH *v161; // r13
  __int64 v162; // rbx
  __int64 v163; // rax
  struct DMMVIDPNTARGETMODESET *v164; // rbx
  __int64 v165; // rcx
  __int16 v166; // ax
  unsigned int v167; // eax
  __int64 v168; // r10
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  _QWORD *v172; // rax
  __int64 v173; // rax
  unsigned __int8 *v174; // r8
  unsigned int j; // r9d
  __int64 v176; // r10
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  _QWORD *v180; // rax
  unsigned int v181; // eax
  __int64 v182; // r10
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  _QWORD *v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  _QWORD *v190; // rax
  unsigned int v191; // [rsp+40h] [rbp-61h]
  unsigned int v192; // [rsp+40h] [rbp-61h]
  bool v193; // [rsp+44h] [rbp-5Dh]
  VIDPN_MGR *v194; // [rsp+48h] [rbp-59h]
  unsigned int v195; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int64 v196; // [rsp+58h] [rbp-49h]
  unsigned __int64 v197; // [rsp+60h] [rbp-41h]
  unsigned int v198; // [rsp+68h] [rbp-39h]
  unsigned int v199; // [rsp+6Ch] [rbp-35h] BYREF
  __int64 v200; // [rsp+70h] [rbp-31h]
  int v201; // [rsp+78h] [rbp-29h] BYREF
  unsigned int v202; // [rsp+7Ch] [rbp-25h] BYREF
  DMMVIDPNTOPOLOGY *v203; // [rsp+80h] [rbp-21h]
  __int64 v204; // [rsp+88h] [rbp-19h] BYREF
  struct DMMVIDPNTARGETMODESET *v205; // [rsp+90h] [rbp-11h] BYREF
  __int64 v206[9]; // [rsp+98h] [rbp-9h] BYREF
  char v207; // [rsp+F0h] [rbp+4Fh]
  struct DMMVIDPNPRESENTPATH *v208; // [rsp+F0h] [rbp+4Fh]
  __int64 v210; // [rsp+100h] [rbp+5Fh] BYREF
  __int16 v211; // [rsp+108h] [rbp+67h]

  v211 = a4;
  v10 = a4;
  v11 = (unsigned __int8 *)operator new(104LL * *(unsigned __int16 *)(a3 + 20) + 16, 0x63644356u, PagedPool);
  *a1 = v11;
  if ( !v11 )
  {
    v13 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v13 + 24) = a3;
    *(_QWORD *)(v13 + 32) = *(unsigned __int16 *)(a3 + 20);
    WdLogEvent5_WdLowResource(v13);
    return 3221225626LL;
  }
  v15 = *(VIDPN_MGR **)(a2 + 48);
  v194 = v15;
  if ( *(_BYTE *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(v15) + 315) + 132LL)
    && *(_BYTE *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(v15) + 315) + 133LL)
    || (v207 = 0,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(v15) + 24) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
  {
    v207 = 1;
  }
  if ( *((_QWORD *)VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a2 + 48)) + 316) )
  {
    *((_DWORD *)*a1 + 2) &= 0xFFFFFFF2;
  }
  else
  {
    v17 = *((_QWORD *)VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a2 + 48)) + 315);
    if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 2528LL) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v18 + 24) = 6152LL;
      WdLogEvent5_WdAssertion(v18);
    }
    *((_DWORD *)*a1 + 2) ^= (*((_DWORD *)*a1 + 2) ^ *(_DWORD *)(v17 + 248)) & 1;
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a2 + 48));
    *((_DWORD *)*a1 + 2) = ((unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*((ADAPTER_DISPLAY **)ContainingAdapter
                                                                                           + 315)) != 0
                          ? 4
                          : 0) | *((_DWORD *)*a1 + 2) & 0xFFFFFFFB;
    v20 = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a2 + 48));
    v15 = v194;
    *((_DWORD *)*a1 + 2) = (ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(*((DXGADAPTER ***)v20 + 315))
                          ? 8
                          : 0) | *((_DWORD *)*a1 + 2) & 0xFFFFFFF7;
  }
  v21 = *((_QWORD *)VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a2 + 48)) + 315);
  if ( !*(_BYTE *)(v21 + 133) || (v22 = *(_BYTE *)(v21 + 132) == 0, v23 = 2, !v22) )
    v23 = 0;
  v24 = *a1;
  v25 = 0;
  *((_DWORD *)v24 + 2) = v23 & 0xF | *((_DWORD *)*a1 + 2) & 0xD;
  v26 = a7;
  *v24 = 0;
  *((_DWORD *)v24 + 1) = v26;
  if ( *(_WORD *)(a3 + 20) )
  {
    do
    {
      v27 = 272LL * v25;
      v28 = v27 + a3 + 48;
      if ( (*(_QWORD *)v28 & 0x4000000000000LL) == 0 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v29);
      }
      if ( *(_DWORD *)(v28 + 16) == *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v15) + 69) )
      {
        v30 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v15) + 70);
        if ( *(_DWORD *)(v28 + 20) == (_DWORD)v30 )
        {
          if ( (*(_QWORD *)v28 & 0x700000000000LL) != 0x700000000000LL )
          {
            v39 = WdLogNewEntry5_WdError(v30);
            *(_QWORD *)(v39 + 24) = v25;
            *(_QWORD *)(v39 + 32) = a3;
            WdLogEvent5_WdError(v39);
            return 3221225485LL;
          }
          v31 = *a1;
          v32 = 26LL * **a1;
          v33 = a5;
          LOWORD(v31[v32 + 16]) = 0;
          LOWORD(v31[v32 + 17]) = 0;
          *(_QWORD *)&v31[v32 + 13] = 0LL;
          v31[v32 + 15] = 0;
          v31[v32 + 29] = 0;
          *(_QWORD *)&v31[v32 + 4] = v28;
          LOWORD(v31[v32 + 8]) = v25;
          HIWORD(v31[v32 + 16]) = v10;
          HIWORD(v31[v32 + 17]) = v33;
          memset(&v31[v32 + 18], 0, 0x24uLL);
          if ( a6 == 2 )
          {
            v34 = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a2 + 48));
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                                 *((ADAPTER_DISPLAY **)v34 + 315),
                                 *(_DWORD *)(v28 + 24));
            if ( SessionViewOwner && *((_DWORD *)SessionViewOwner + 10) > 1u )
              v31[v32 + 29] |= 2u;
          }
          else
          {
            for ( i = 0; i < *(unsigned __int16 *)(a3 + 20); ++i )
            {
              v37 = 272LL * i;
              v210 = v37;
              if ( (*(_QWORD *)(v37 + a3 + 48) & 0x4000000000000LL) == 0 )
              {
                v38 = WdLogNewEntry5_WdAssertion(v37);
                WdLogEvent5_WdAssertion(v38);
                v37 = v210;
              }
              if ( i != v25 && *(_DWORD *)(v37 + a3 + 232) == *(_DWORD *)(v28 + 184) )
                v31[v32 + 29] |= 2u;
            }
            v10 = v211;
          }
          v15 = v194;
          ++**a1;
        }
      }
      ++v25;
    }
    while ( v25 < *(unsigned __int16 *)(a3 + 20) );
    v24 = *a1;
  }
  v40 = 0;
  v41 = 0;
  v42 = (struct DMMVIDPNTOPOLOGY *)(a2 + 96);
  LOBYTE(v43) = *v24;
  v203 = (DMMVIDPNTOPOLOGY *)(a2 + 96);
  if ( (_BYTE)v43 )
  {
    do
    {
      v44 = v41 + 1;
      v45 = v41 + 1;
      if ( (int)(v41 + 1) > 32 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v44);
        *(_QWORD *)(v46 + 24) = *a1;
        *(_QWORD *)(v46 + 32) = v41;
        WdLogEvent5_WdAssertion(v46);
        v24 = *a1;
        v45 = 32;
      }
      v47 = 104LL * v41;
      v48 = VIDPN_MGR::AddPathToVidPnTopology(
              v194,
              v42,
              *(_DWORD *)(*(_QWORD *)&v24[v47 + 16] + 24LL),
              *(_DWORD *)(*(_QWORD *)&v24[v47 + 16] + 28LL),
              v45,
              *(_WORD *)&v24[v47 + 32],
              1u,
              D3DKMDT_MCC_ENFORCE);
      v53 = (DXGADAPTER *)v48;
      if ( v48 < 0 )
      {
        v75 = (_QWORD *)WdLogNewEntry5_WdTrace(v50, v49, v51, v52);
        v75[3] = *(unsigned int *)(*(_QWORD *)&v24[v47 + 16] + 24LL);
        v75[4] = *(unsigned int *)(*(_QWORD *)&v24[v47 + 16] + 28LL);
        v75[5] = v42;
        v75[6] = v53;
        return (unsigned int)v53;
      }
      v24 = *a1;
      v41 = v44;
      v43 = **a1;
    }
    while ( v44 < v43 );
    v40 = 0;
  }
  v191 = 0;
  v54 = 0;
  if ( (_BYTE)v43 )
  {
    while ( 1 )
    {
      v55 = v54;
      v56 = 104LL * v54;
      v200 = v54;
      v57 = *(_QWORD *)&v24[v56 + 16];
      if ( (*(_QWORD *)v57 & 0x4000000000000LL) == 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(0x4000000000000LL);
        WdLogEvent5_WdAssertion(v58);
        v57 = *(_QWORD *)&v24[v56 + 16];
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(v203, *(_DWORD *)(v57 + 24), *(_DWORD *)(v57 + 28));
      if ( *(_BYTE *)(v57 + 129) )
      {
        v64 = (_QWORD *)WdLogNewEntry5_WdTrace(v60, v59, v61, v62);
        v64[3] = *(unsigned int *)(*(_QWORD *)&v24[v56 + 16] + 24LL);
        v64[4] = *(unsigned int *)(*(_QWORD *)&v24[v56 + 16] + 28LL);
        v64[5] = *(int *)(*(_QWORD *)&v24[v56 + 16] + 20LL);
        v65 = *(_QWORD *)&v24[v56 + 16];
        v64[6] = *(unsigned int *)(v65 + 16);
        v66 = *(_DWORD **)&v24[v56 + 16];
        if ( (*v66 & 0x20108) == 0x20100LL )
        {
          v67 = *(_QWORD *)&v24[v56 + 16];
          if ( v66[29] != 21 )
          {
            v68 = WdLogNewEntry5_WdAssertion(v65);
            *(_QWORD *)(v68 + 24) = 4020LL;
            WdLogEvent5_WdAssertion(v68);
            v67 = *(_QWORD *)&v24[v56 + 16];
          }
          v66 = (_DWORD *)v67;
          if ( *(_BYTE *)(v67 + 128) )
          {
            v69 = WdLogNewEntry5_WdAssertion(0LL);
            *(_QWORD *)(v69 + 24) = 4021LL;
            WdLogEvent5_WdAssertion(v69);
            v66 = *(_DWORD **)&v24[v56 + 16];
          }
        }
        if ( (*v66 & 0x20000LL) == 0 )
        {
          v70 = ~(*v66 >> 8);
          if ( (((unsigned __int8)v70 ^ (unsigned __int8)~(v66[2] >> 8)) & 1) != 0 )
          {
            v71 = WdLogNewEntry5_WdAssertion(v70 ^ (unsigned int)~(v66[2] >> 8));
            *(_QWORD *)(v71 + 24) = 4035LL;
            WdLogEvent5_WdAssertion(v71);
          }
        }
      }
      v72 = *((_QWORD *)Path + 11);
      v73 = *(_QWORD *)(v72 + 104);
      if ( v73 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v73 + 96));
        v74 = *(_QWORD *)(v72 + 104);
      }
      else
      {
        v74 = 0LL;
      }
      v76 = *a1;
      v204 = v74;
      v77 = BmlFillPreferredMonitorMode(v76, v54, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
      v53 = (DXGADAPTER *)v77;
      if ( v77 < 0 )
      {
        v146 = (_QWORD *)WdLogNewEntry5_WdTrace(v79, v78, v80, v81);
        v146[3] = *(unsigned int *)(*(_QWORD *)&v24[v56 + 16] + 24LL);
        v147 = *(unsigned int *)(*(_QWORD *)&v24[v56 + 16] + 28LL);
        v146[5] = v203;
        v146[4] = v147;
        v146[6] = v53;
        *(_QWORD *)&(*a1)[104 * v54 + 52] = 0LL;
        goto LABEL_162;
      }
      v82 = *(_QWORD *)&v24[v56 + 16];
      if ( (*(_QWORD *)v82 & 0x40000000000LL) == 0 )
        break;
      AdapterDefaultScaling = *(_DWORD *)(v82 + 136);
      if ( AdapterDefaultScaling > D3DKMDT_VPPS_UNINITIALIZED )
      {
        if ( AdapterDefaultScaling <= D3DKMDT_VPPS_CUSTOM )
        {
          v84 = v194;
          goto LABEL_75;
        }
        if ( AdapterDefaultScaling == D3DKMDT_VPPS_RESERVED1 )
          break;
        if ( AdapterDefaultScaling == D3DKMDT_VPPS_NOTSPECIFIED )
        {
          v84 = v194;
          v85 = *((_QWORD *)v194 + 1);
          if ( !v85 )
          {
            v86 = WdLogNewEntry5_WdAssertion(0LL);
            WdLogEvent5_WdAssertion(v86);
            v85 = *((_QWORD *)v194 + 1);
          }
          if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v85 + 16)) < 1105 )
          {
            AdapterDefaultScaling = D3DKMDT_VPPS_NOTSPECIFIED;
LABEL_75:
            *(_DWORD *)&v24[v56 + 24] = AdapterDefaultScaling;
            goto LABEL_76;
          }
LABEL_74:
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v84);
          goto LABEL_75;
        }
      }
      v84 = v194;
      *(_DWORD *)&v24[v56 + 24] = VIDPN_MGR::GetAdapterDefaultScaling(v194);
      v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v88, v87, v89);
      v90[3] = *(int *)&v24[v56 + 24];
      v90[4] = *a1;
      v90[5] = v54;
      v90[6] = *(int *)(*(_QWORD *)&v24[v56 + 16] + 136LL);
      WdLogEvent5_WdWarning(v90);
LABEL_76:
      v91 = *(_QWORD *)&v24[v56 + 16];
      if ( (*(_QWORD *)v91 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v91 + 88))
        && (*(_DWORD *)(v92 + 8) & 0x200LL) == 0 )
      {
        PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v84, *(_DWORD *)(v92 + 28));
        v94 = *(_DWORD *)(*(_QWORD *)&v24[v56 + 16] + 28LL);
        v95 = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a2 + 48));
        v53 = v95;
        if ( !v95 || v94 == -1 )
        {
          LODWORD(v53) = -1073741811;
        }
        else
        {
          DXGADAPTER::IsCoreResourceSharedOwner(v95);
          v98 = *((_QWORD *)v53 + 315);
          if ( !v98 )
          {
            v144 = WdLogNewEntry5_WdError(v97);
            *(_QWORD *)(v144 + 24) = 8248LL;
            WdLogEvent5_WdError(v144);
            LODWORD(v53) = -1073741811;
LABEL_160:
            v145 = (_QWORD *)WdLogNewEntry5_WdError(v96);
            v145[3] = *(unsigned int *)(*(_QWORD *)&v24[v56 + 16] + 28LL);
            v145[4] = *(int *)(*(_QWORD *)&v24[v56 + 16] + 20LL);
            v145[5] = *(unsigned int *)(*(_QWORD *)&v24[v56 + 16] + 16LL);
            WdLogEvent5_WdError(v145);
LABEL_162:
            auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v204, 0LL);
            return (unsigned int)v53;
          }
          LODWORD(v53) = MonitorIsMonitorVirtualModeDisabled(v53, v94, &v210);
          if ( (_DWORD)v53 == -1073741632 )
          {
            v99 = 0;
            LODWORD(v53) = 0;
            LOBYTE(v210) = 0;
          }
          else
          {
            v99 = v210;
          }
          if ( (int)v53 < 0 )
          {
            v101 = WdLogNewEntry5_WdAssertion(v96);
            *(_QWORD *)(v101 + 24) = (int)v53;
            WdLogEvent5_WdAssertion(v101);
          }
          else
          {
            if ( v99 )
              v100 = 1;
            else
              v100 = *(_BYTE *)(v98 + 132) == 0;
            v193 = v100;
          }
          v55 = v200;
        }
        if ( (int)v53 < 0 )
          goto LABEL_160;
        if ( PathFromTargetInClientVidPn )
        {
          if ( !v193 )
          {
            v102 = *((_DWORD *)PathFromTargetInClientVidPn + 29);
LABEL_99:
            if ( v102 )
            {
              v104 = *(__int64 **)&v24[v56 + 16];
              v105 = *v104;
              if ( (*v104 & 0x200) != 0 )
              {
                if ( (((unsigned __int8)v102 ^ *((_BYTE *)v104 + 132)) & 1) != 0 && (v105 & 0x20000) != 0 )
                {
                  v106 = *((_DWORD *)v104 + 38);
                  v107 = *((_DWORD *)v104 + 39);
                  *v104 &= ~0x800000uLL;
                  *((_DWORD *)v104 + 38) = v107;
                  *((_DWORD *)v104 + 39) = v106;
                }
              }
              else if ( (v105 & 0x20000) != 0 )
              {
                v108 = WdLogNewEntry5_WdAssertion(v105);
                WdLogEvent5_WdAssertion(v108);
              }
              *v104 |= 0x200uLL;
              *((_DWORD *)v104 + 33) = v102;
              *(_DWORD *)&v24[v56 + 28] = v102;
              goto LABEL_142;
            }
          }
        }
        else if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v96) + 254) )
        {
          v102 = *((_DWORD *)DXGGLOBAL::GetGlobal(v103) + 254);
          goto LABEL_99;
        }
        v54 = v191;
      }
      v109 = *(_DWORD **)&v24[v56 + 16];
      if ( (*v109 & 0x200LL) == 0 )
      {
        v120 = *a1;
        if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v54, &v202) )
        {
          v122 = 26LL * v202;
          v110 = v120[v122 + 7];
          if ( v110 == D3DKMDT_VPPR_UNINITIALIZED )
          {
            v123 = WdLogNewEntry5_WdAssertion(v121);
            WdLogEvent5_WdAssertion(v123);
          }
          if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v110) != D3DKMDT_VPPR_IDENTITY )
          {
            v124 = WdLogNewEntry5_WdAssertion(v121);
            WdLogEvent5_WdAssertion(v124);
          }
          if ( !v207 )
            goto LABEL_139;
          v125 = v120[(unsigned __int64)v56 / 4 + 13];
          v126 = v120[(unsigned __int64)v56 / 4 + 14];
          LOBYTE(v121) = v120[v122 + 13] < v120[v122 + 14];
          if ( (_BYTE)v121 == v125 < v126 )
            goto LABEL_139;
          v127 = v110 - 1;
          if ( v125 >= v126 )
          {
            if ( v127 > 3 )
              goto LABEL_137;
            v110 += 4;
          }
          else
          {
            if ( v127 <= 3 )
            {
              v110 += 12;
              goto LABEL_139;
            }
LABEL_137:
            v110 = D3DKMDT_VPPR_NOTSPECIFIED;
          }
        }
        else
        {
          v110 = D3DKMDT_VPPR_IDENTITY;
        }
LABEL_139:
        if ( v110 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v128 = WdLogNewEntry5_WdAssertion(v121);
          WdLogEvent5_WdAssertion(v128);
        }
        goto LABEL_141;
      }
      v110 = v109[33];
      if ( (unsigned int)(D3DKMDT_VPPR_GET_CONTENT_ROTATION(v110) - 1) > 3 )
        goto LABEL_124;
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v110) != D3DKMDT_VPPR_IDENTITY )
      {
        if ( v207 )
        {
          if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v54, 0LL) )
          {
            *(_DWORD *)&v24[v56 + 28] = *(_DWORD *)(*(_QWORD *)&v24[v56 + 16] + 132LL);
          }
          else
          {
            v118 = (_QWORD *)WdLogNewEntry5_WdAssertion(v117);
            v118[3] = *a1;
            v118[4] = v55;
            v118[5] = *(int *)(*(_QWORD *)&v24[v56 + 16] + 132LL);
            WdLogEvent5_WdAssertion(v118);
            *(_DWORD *)&v24[v56 + 28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v24[v56 + 16] + 132LL));
          }
          goto LABEL_142;
        }
LABEL_124:
        v119 = (_QWORD *)WdLogNewEntry5_WdWarning(v112, v111, v113);
        v119[3] = *a1;
        v119[4] = v55;
        v119[5] = *(int *)(*(_QWORD *)&v24[v56 + 16] + 132LL);
        WdLogEvent5_WdWarning(v119);
        *(_DWORD *)&v24[v56 + 28] = 1;
        goto LABEL_142;
      }
      if ( v207 && (unsigned __int8)BmlIsSecondaryClonePath(*a1, v54, &v201) )
      {
        v114 = *(_DWORD *)(*(_QWORD *)&(*a1)[104 * v201 + 16] + 132LL);
        if ( (unsigned int)(v114 - 1) > 0xF
          || (unsigned int)(v110 - 1) > 0xF
          || (v115 = (v110 - v114 + 4) % 4, v116 = v115 + 1, v114 > 4)
          || v116 < 1
          || v115 >= 4 )
        {
          v110 = D3DKMDT_VPPR_NOTSPECIFIED;
        }
        else
        {
          v110 = v114 - 4 + 4 * v116;
        }
      }
LABEL_141:
      *(_DWORD *)&v24[v56 + 28] = v110;
LABEL_142:
      v129 = *(_QWORD *)&v24[v56 + 16];
      v40 = 0;
      if ( *(_BYTE *)(v129 + 129) && (*(_DWORD *)v129 & 0x20000LL) != 0 )
      {
        if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)&v24[v56 + 28]) - 2) & 0xFFFFFFFD) != 0 )
        {
          *(_DWORD *)&v24[v56 + 108] = *(_DWORD *)(v130 + 152);
          v131 = *(_DWORD *)(v130 + 156);
        }
        else
        {
          *(_DWORD *)&v24[v56 + 108] = *(_DWORD *)(v130 + 156);
          v131 = *(_DWORD *)(v130 + 152);
        }
        *(_DWORD *)&v24[v56 + 112] = v131;
        *(_DWORD *)&v24[v56 + 116] |= 1u;
      }
      if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v191, 0LL) )
        *(_WORD *)&v24[v56 + 66] = 0;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v204, 0LL);
      v24 = *a1;
      v54 = v191 + 1;
      v191 = v54;
      v43 = **a1;
      if ( v54 >= v43 )
        goto LABEL_151;
    }
    v84 = v194;
    goto LABEL_74;
  }
LABEL_151:
  v198 = 0;
  v132 = 0;
  if ( (_BYTE)v43 )
  {
    do
    {
      v133 = 104LL * v132;
      v200 = v133;
      if ( !(unsigned __int8)BmlIsSecondaryClonePath(v24, v132, 0LL) )
      {
        v196 = v134;
        v135 = (__int64)*a1;
        v136 = 0;
        v137 = v132;
        v192 = v132;
        if ( v132 < **a1 )
        {
          do
          {
            v138 = 104LL * v137;
            v139 = *(unsigned int *)(*(_QWORD *)&v24[v133 + 16] + 24LL);
            if ( *(_DWORD *)(*(_QWORD *)(v138 + v135 + 16) + 24LL) == (_DWORD)v139 )
            {
              v197 = *(_QWORD *)(v138 + v135 + 44);
              v140 = v197;
              v141 = HIDWORD(v197);
              if ( v207
                && ((v142 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(v138 + v135 + 28)),
                     v142 == D3DKMDT_VPPR_ROTATE90)
                 || v142 == D3DKMDT_VPPR_ROTATE270) )
              {
                v143 = HIDWORD(v197);
                LODWORD(v141) = v197;
                v197 = __PAIR64__(v197, HIDWORD(v197));
                v140 = v197;
              }
              else
              {
                v143 = v197;
              }
              if ( !v143 || !(_DWORD)v141 )
              {
                v148 = WdLogNewEntry5_WdAssertion(v139);
                WdLogEvent5_WdAssertion(v148);
                v137 = v192;
              }
              if ( v40 && v136 )
              {
                if ( v40 > v143 )
                  v40 = v143;
                LODWORD(v196) = v40;
                if ( v136 > HIDWORD(v197) )
                  v136 = HIDWORD(v197);
                HIDWORD(v196) = v136;
              }
              else
              {
                v196 = v140;
                v40 = v140;
                v136 = HIDWORD(v140);
              }
              v133 = v200;
            }
            v135 = (__int64)*a1;
            v192 = ++v137;
          }
          while ( v137 < **a1 );
          v132 = v198;
        }
        *(_QWORD *)&v24[v133 + 36] = v196;
        *(_DWORD *)&v24[v133 + 60] = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)&v24[v133 + 52]);
        v40 = 0;
      }
      v24 = *a1;
      v198 = ++v132;
      v43 = *v24;
    }
    while ( v132 < v43 );
  }
  v149 = 0;
  if ( !(_BYTE)v43 )
    return 0LL;
  while ( 1 )
  {
    v150 = 104LL * v149;
    v151 = *(_QWORD *)&v24[v150 + 16];
    v208 = DMMVIDPNTOPOLOGY::FindPath(v203, *(_DWORD *)(v151 + 24), *(_DWORD *)(v151 + 28));
    v153 = *((_QWORD *)v208 + 11);
    v154 = *(_QWORD *)(v153 + 104);
    if ( v154 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v154 + 96));
      v155 = *(struct DMMVIDPNSOURCEMODESET **)(v153 + 104);
      v151 = *(_QWORD *)&v24[v150 + 16];
    }
    else
    {
      v155 = 0LL;
    }
    v156 = *(_QWORD *)(v151 + 8);
    v206[0] = (__int64)v155;
    if ( (v156 & 0x18000820B8FLL) == 0 )
    {
      v161 = v208;
LABEL_206:
      if ( DMMVIDPNPRESENTPATH::IsFunctional(v161) )
      {
        v174 = *a1;
        for ( j = 0; j < *v174; ++j )
        {
          v176 = 104LL * j;
          if ( *(_DWORD *)(*(_QWORD *)&v174[v176 + 16] + 24LL) == *(_DWORD *)(*(_QWORD *)&v24[v150 + 16] + 24LL) )
            *(_WORD *)&v174[v176 + 66] = 0;
        }
        *(_WORD *)&v24[v150 + 70] = 0;
      }
      goto LABEL_212;
    }
    v157 = 256LL;
    if ( (*(_DWORD *)v151 & 0x100LL) == 0
      || (v156 & 0x100) == 0
      || (unsigned __int8)BmlIsSecondaryClonePath(*a1, v149, 0LL) )
    {
      v173 = WdLogNewEntry5_WdWarning(v156, v157, v152);
      *(_QWORD *)(v173 + 24) = *a1;
      *(_QWORD *)(v173 + 32) = v149;
      WdLogEvent5_WdWarning(v173);
      v161 = v208;
      goto LABEL_206;
    }
    v195 = -1;
    if ( (int)BmlGetNextBestSourceMode((unsigned int)*a1, a2, (unsigned __int16)v149, (_DWORD)v155, -1, (__int64)&v195) >= 0 )
      break;
    v158 = *(_QWORD *)&v24[v150 + 16];
    if ( (*(_QWORD *)v158 & 0x40000000000000LL) == 0 )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v158 + 96),
        *(_DWORD *)(v158 + 100),
        *(_DWORD *)(v158 + 116),
        *(_QWORD *)(v158 + 16));
      v180 = (_QWORD *)WdLogNewEntry5_WdWarning(v178, v177, v179);
      v180[3] = *a1;
      v180[5] = v149;
      v180[6] = v195;
      v180[4] = a2;
      WdLogEvent5_WdWarning(v180);
      LODWORD(v160) = -1071774970;
      goto LABEL_218;
    }
    *(_QWORD *)(v158 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
LABEL_212:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(v206, 0LL);
    v24 = *a1;
    if ( ++v149 >= **a1 )
      return 0LL;
  }
  v159 = VIDPN_MGR::PinVidPnSourceMode(v194, v155, v195, 1);
  v160 = v159;
  if ( v159 >= 0 )
  {
    v161 = v208;
    *(_WORD *)&v24[v150 + 66] = 0;
    v162 = *((_QWORD *)v208 + 12);
    v163 = *(_QWORD *)(v162 + 104);
    if ( v163 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v163 + 96));
      v164 = *(struct DMMVIDPNTARGETMODESET **)(v162 + 104);
    }
    else
    {
      v164 = 0LL;
    }
    v165 = *(_QWORD *)&v24[v150 + 16];
    v205 = v164;
    if ( (*(_BYTE *)v165 & 0x87) == 0x87
      && (*(_BYTE *)(v165 + 8) & 0x87) == 0x87
      && *(_DWORD *)(v165 + 56)
      && *(_DWORD *)(v165 + 52) )
    {
      v199 = -1;
      if ( (int)BmlGetNextBestTargetMode(*a1, a2, (unsigned __int16)v149, v164, v155, -1, &v199) < 0 )
      {
        v181 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v24[v150 + 16] + 52LL),
                 *(unsigned int *)(*(_QWORD *)&v24[v150 + 16] + 56LL));
        DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v182 + 44), *(_DWORD *)(v182 + 48), v181, *(_QWORD *)(v182 + 16));
        v186 = (_QWORD *)WdLogNewEntry5_WdWarning(v184, v183, v185);
        v186[3] = *a1;
        v186[5] = v149;
        v186[4] = a2;
        WdLogEvent5_WdWarning(v186);
        LODWORD(v160) = -1071774970;
        goto LABEL_216;
      }
      v160 = VIDPN_MGR::PinVidPnTargetMode(v194, v164, v199, 1);
      v166 = 0;
      if ( (int)v160 < 0 )
      {
        v167 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v24[v150 + 16] + 52LL),
                 *(unsigned int *)(*(_QWORD *)&v24[v150 + 16] + 56LL));
        DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v168 + 44), *(_DWORD *)(v168 + 48), v167, *(_QWORD *)(v168 + 16));
        v172 = (_QWORD *)WdLogNewEntry5_WdWarning(v170, v169, v171);
        v172[4] = *a1;
        v172[6] = v149;
        v172[3] = v160;
        v172[5] = a2;
        WdLogEvent5_WdWarning(v172);
LABEL_216:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v205, 0LL);
        goto LABEL_218;
      }
    }
    else
    {
      v166 = -1;
    }
    *(_WORD *)&v24[v150 + 70] = v166;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v205, 0LL);
    goto LABEL_206;
  }
  DxgkLogCodePointPacket(
    0x15u,
    *(_DWORD *)(*(_QWORD *)&v24[v150 + 16] + 96LL),
    *(_DWORD *)(*(_QWORD *)&v24[v150 + 16] + 100LL),
    *(_DWORD *)(*(_QWORD *)&v24[v150 + 16] + 116LL),
    *(_QWORD *)(*(_QWORD *)&v24[v150 + 16] + 16LL));
  v190 = (_QWORD *)WdLogNewEntry5_WdWarning(v188, v187, v189);
  v190[4] = *a1;
  v190[6] = v149;
  v190[3] = v160;
  v190[5] = a2;
  WdLogEvent5_WdWarning(v190);
LABEL_218:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v206, 0LL);
  return (unsigned int)v160;
}
