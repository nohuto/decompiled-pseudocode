/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00B98C8
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00B9710 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0002530 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0002654 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C0002728 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C000284C (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000292C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C0002994 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000EC9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0040C48 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C00BA274 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C00BA33C (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00BA69C (MonitorGetMonitorDeviceInterfaceName.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00BA7BC (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00BAA10 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00BAB18 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00BAC28 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00BACE0 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C00BADAC (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C00BB09C (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00C25BC (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C00C58D4 (MonitorGetDpiInfoFromDescriptor.c)
 *     DpiReadPnpRegistryValue @ 0x1C0134C54 (DpiReadPnpRegistryValue.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C024F154 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        struct _GDIINFO *a5,
        struct _DPI_INFORMATION *a6)
{
  __int64 (__fastcall *v6)(char *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **); // rax
  struct _GDIINFO *v7; // r13
  char *v8; // r12
  struct _DPI_INFORMATION *v9; // r15
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  DpiInternal *v15; // r14
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  const struct tagRECT *v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned int v26; // ebx
  BOOL v27; // eax
  int v28; // edi
  unsigned int v29; // edi
  int v30; // eax
  unsigned __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  __int64 (__fastcall *v34)(__int64, _QWORD, _QWORD, struct tagSIZE *); // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // r13d
  bool v39; // si
  int VideoOutputTechnology; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // edi
  int DpiInfoFromDescriptor; // eax
  __int64 v45; // rcx
  __int64 v46; // rbx
  LONG v47; // esi
  LONG cy; // r15d
  int v49; // r13d
  unsigned int v50; // r12d
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v52; // rcx
  __int64 v53; // rbx
  UINT v54; // r8d
  UINT v55; // edx
  unsigned int v56; // ebx
  unsigned int v57; // r13d
  const struct _DXGDMM_VIDPN_INTERFACE *v58; // r12
  int v59; // edx
  unsigned int v60; // edi
  __int64 v61; // rcx
  int v62; // r8d
  int v63; // eax
  unsigned int v64; // ecx
  int v65; // r8d
  unsigned int v66; // r9d
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v67; // r10d
  unsigned int v68; // r15d
  struct tagSIZE v69; // rdx
  char v70; // r15
  unsigned __int8 v71; // cl
  const struct tagSIZE *p_ActiveSize; // r9
  __int64 v73; // rcx
  bool v74; // r13
  unsigned int v75; // esi
  int v76; // eax
  unsigned int v77; // ebx
  bool PreferredScaleFactorForMonitor; // al
  struct tagSIZE v79; // rdx
  __int64 v80; // rcx
  struct tagSIZE v81; // rdx
  int v82; // eax
  int v83; // r8d
  int MonitorDeviceInterfaceName; // eax
  __int64 v85; // rcx
  unsigned int *v86; // r8
  __int64 v87; // rbx
  __m128i v88; // xmm1
  __int64 v89; // rcx
  unsigned int v90; // eax
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  bool v98; // zf
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  int v107; // ecx
  int PhysicalDisplaySizeOverride; // eax
  struct tagSIZE v109; // rcx
  unsigned int v110; // eax
  char v111; // al
  __int64 v112; // rax
  unsigned __int32 v113; // r8d
  unsigned int v114; // ecx
  unsigned __int32 v115; // eax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 cx; // rcx
  int v121; // edx
  int v122; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v123; // r9
  __int64 v124; // rax
  struct _D3DKMDT_2DREGION *v125; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v126; // [rsp+20h] [rbp-E0h]
  unsigned int v127; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v128; // [rsp+28h] [rbp-D8h]
  int v129; // [rsp+30h] [rbp-D0h]
  char v130; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v131; // [rsp+41h] [rbp-BFh] BYREF
  bool v132; // [rsp+42h] [rbp-BEh]
  int v133; // [rsp+44h] [rbp-BCh] BYREF
  struct _D3DKMDT_2DREGION v134; // [rsp+48h] [rbp-B8h] BYREF
  struct tagSIZE v135; // [rsp+50h] [rbp-B0h] BYREF
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v136; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v137; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v138; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v139; // [rsp+64h] [rbp-9Ch]
  __int64 v140; // [rsp+68h] [rbp-98h] BYREF
  __int32 v141; // [rsp+70h] [rbp-90h] BYREF
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v142; // [rsp+74h] [rbp-8Ch]
  D3DKMDT_2DREGION ActiveSize; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v144; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v145; // [rsp+88h] [rbp-78h] BYREF
  char v146; // [rsp+98h] [rbp-68h] BYREF
  DpiInternal *v147; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v148)(__int64, DpiInternal *); // [rsp+A8h] [rbp-58h]
  __int64 v149; // [rsp+B0h] [rbp-50h]
  int v150; // [rsp+B8h] [rbp-48h]
  LONG v151; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v152; // [rsp+C4h] [rbp-3Ch] BYREF
  int v153; // [rsp+C8h] [rbp-38h]
  int v154; // [rsp+CCh] [rbp-34h]
  unsigned int v155; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v156; // [rsp+D8h] [rbp-28h] BYREF
  char *v157; // [rsp+E0h] [rbp-20h]
  struct D3DKMDT_HVIDPN__ *v158; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v159; // [rsp+F0h] [rbp-10h] BYREF
  char v160; // [rsp+F8h] [rbp-8h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v161; // [rsp+100h] [rbp+0h]
  void (__fastcall *v162)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *); // [rsp+108h] [rbp+8h]
  __int64 v163; // [rsp+110h] [rbp+10h]
  int v164; // [rsp+118h] [rbp+18h]
  BOOL v165; // [rsp+120h] [rbp+20h]
  unsigned int v166; // [rsp+124h] [rbp+24h]
  LONG v167; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v168; // [rsp+130h] [rbp+30h] BYREF
  int v169; // [rsp+138h] [rbp+38h]
  unsigned __int64 v170; // [rsp+140h] [rbp+40h] BYREF
  struct tagSIZE v171; // [rsp+148h] [rbp+48h] BYREF
  const struct tagRECT *v172; // [rsp+150h] [rbp+50h] BYREF
  struct _GDIINFO *v173; // [rsp+158h] [rbp+58h]
  __m128i v174; // [rsp+160h] [rbp+60h]
  _OWORD v175[6]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v176; // [rsp+1D0h] [rbp+D0h]
  struct _DPI_INFORMATION *v177; // [rsp+1E0h] [rbp+E0h]
  struct tagSIZE v178[5]; // [rsp+1E8h] [rbp+E8h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v179; // [rsp+210h] [rbp+110h] BYREF
  _OWORD v180[6]; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int16 v181[128]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v6 = (__int64 (__fastcall *)(char *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)a1 + 6);
  v7 = a5;
  v8 = a2;
  v9 = a6;
  v11 = a3;
  v157 = a2;
  v153 = a4;
  v166 = a3;
  v173 = a5;
  v177 = a6;
  v158 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0;
  v146 = 0;
  v144 = 0LL;
  v12 = v6(a2, &v144, &v158);
  v14 = v12;
  if ( v12 < 0 )
  {
    v96 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v96 + 24) = v8;
    *(_QWORD *)(v96 + 32) = v14;
    WdLogEvent5_WdError(v96);
    return (unsigned int)v14;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v146,
    v144,
    *((_QWORD *)a1 + 8),
    (__int64)v8);
  v140 = 0LL;
  v156 = 0LL;
  v15 = v147;
  v16 = (*(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v158)(v147, &v140, &v156);
  v14 = v16;
  if ( v16 < 0 )
  {
    v97 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v97[3] = v15;
    v97[4] = v14;
LABEL_102:
    WdLogEvent5_WdError(v97);
    goto LABEL_103;
  }
  v170 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v156)(v140, (unsigned int)v11, &v170);
  v14 = v18;
  if ( v18 < 0 )
  {
    v97 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v97[3] = v11;
    v97[4] = v140;
    v97[5] = v14;
    goto LABEL_102;
  }
  LODWORD(v14) = GetCurrentContentResolution(v8, v11, &v172, &v145, &v152);
  if ( (int)v14 < 0 )
  {
LABEL_103:
    v98 = v146 == 0;
    goto LABEL_105;
  }
  v21 = v172;
  if ( !v172 )
  {
    v99 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v99 + 24) = 1724LL;
    WdLogEvent5_WdAssertion(v99);
  }
  v22 = (unsigned int)(v21->right - v21->left);
  if ( v21->right - v21->left <= 0 || (v22 = (unsigned int)(v21->bottom - v21->top), v21->bottom - v21->top <= 0) )
  {
    v100 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v100 + 24) = 1727LL;
    WdLogEvent5_WdAssertion(v100);
  }
  v137 = 0;
  memset(v178, 0, 0x20uLL);
  v23 = QueryWin32DpiValues(&v137, (struct _DPI_SCALE_FACTOR_COLLECTION *)v178);
  v25 = v23;
  if ( v23 < 0 )
  {
    v101 = WdLogNewEntry5_WdAssertion(v24);
    *(_QWORD *)(v101 + 24) = 1733LL;
    WdLogEvent5_WdAssertion(v101);
    v103 = WdLogNewEntry5_WdError(v102);
    *(_QWORD *)(v103 + 24) = v25;
    WdLogEvent5_WdError(v103);
  }
  v26 = 0;
  v155 = 0;
  memset(v175, 0, sizeof(v175));
  v27 = v170 > 1 || v152 > 1;
  if ( v21->left || (v98 = v21->top == 0, v28 = 32, !v98) )
    v28 = 0;
  v29 = v27 | v28;
  v30 = dword_1C008E6D4;
  v31 = 0LL;
  HIDWORD(v175[5]) = v29;
  if ( v29 >= 0x20 )
    v30 = v153;
  dword_1C008E6D4 = v30;
  v144 = 0LL;
  v176 = v175[4];
  if ( !v170 )
  {
    v88 = (__m128i)v175[1];
    v174 = (__m128i)v175[1];
LABEL_83:
    v89 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v88, 8));
    if ( (_DWORD)v89 )
    {
      v121 = _mm_cvtsi128_si32(_mm_srli_si128(v88, 12));
      if ( v121 )
      {
        if ( (v29 & 0x80u) == 0 )
        {
          v7->ulHorzSize = 1000 * v89;
          v122 = 1000 * v121;
        }
        else
        {
          v7->ulHorzSize = 1000 * v121;
          v122 = 1000 * v89;
        }
        v7->ulVertSize = v122;
      }
    }
    if ( (v29 & 2) == 0
      || (v123 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                              _mm_srli_si128(
                                                                                _mm_load_si128((const __m128i *)&v175[5]),
                                                                                4)),
          (_DWORD)v123 == 1234568) )
    {
      v90 = DWORD2(v175[0]);
    }
    else
    {
      v90 = DpiInternal::AdjustDesktopScaleFactorForOverride((DpiInternal *)0x64, v175[2], (struct tagSIZE)v178, v123);
      DWORD2(v175[0]) = v90;
    }
    if ( v26 )
    {
      v90 = v26;
      DWORD2(v175[0]) = v26;
      DWORD1(v175[5]) = 1234567;
    }
    if ( !v90 )
    {
      v124 = WdLogNewEntry5_WdAssertion(v89);
      *(_QWORD *)(v124 + 24) = 2158LL;
      WdLogEvent5_WdAssertion(v124);
    }
    v91 = v175[3];
    *(_QWORD *)&v175[0] = 0x6400000064LL;
    *(_OWORD *)v9 = v175[0];
    *((__m128i *)v9 + 1) = v174;
    *((_OWORD *)v9 + 2) = v175[2];
    v92 = v176;
    *((_OWORD *)v9 + 3) = v91;
    *((_OWORD *)v9 + 4) = v92;
    *((_OWORD *)v9 + 5) = v175[5];
    if ( v146 )
      ((void (__fastcall *)(__int64, DpiInternal *, _QWORD))v148)(v149, v15, 0LL);
    return 0LL;
  }
  v174 = (__m128i)v175[1];
  while ( 1 )
  {
    v134.cx = -1;
    BYTE1(v134.cy) = 0;
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, struct _D3DKMDT_2DREGION *))(v156 + 8))(
            v140,
            (unsigned int)v11,
            v31,
            &v134);
    v14 = v32;
    if ( v32 < 0 )
    {
      v119 = (_QWORD *)WdLogNewEntry5_WdError(v33);
      v119[3] = v144;
      cx = (unsigned int)v11;
      goto LABEL_153;
    }
    v135 = 0LL;
    v34 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct tagSIZE *))(v156 + 24);
    v161 = 0LL;
    v162 = 0LL;
    v163 = 0LL;
    v164 = 0;
    v160 = 0;
    v35 = v34(v140, (unsigned int)v11, v134.cx, &v135);
    v14 = v35;
    if ( v35 < 0 )
    {
      v119 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v119[3] = (unsigned int)v11;
      cx = v134.cx;
LABEL_153:
      v119[4] = cx;
      v119[5] = v14;
      WdLogEvent5_WdError(v119);
      v98 = v146 == 0;
      goto LABEL_105;
    }
    v37 = (__int64)v135;
    if ( !*(_QWORD *)&v135 )
    {
      v104 = WdLogNewEntry5_WdAssertion(v36);
      *(_QWORD *)(v104 + 24) = 1789LL;
      WdLogEvent5_WdAssertion(v104);
      v37 = (__int64)v135;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v160,
      v37,
      *(_QWORD *)(v156 + 32),
      v140);
    v133 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v161 + 5));
    v132 = 0;
    v38 = v133;
    v136 = D3DKMDT_VOT_UNINITIALIZED;
    v39 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v8, v134.cx, &v136, 0LL);
    v42 = VideoOutputTechnology;
    if ( VideoOutputTechnology < 0 )
    {
      v105 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v105[3] = v8;
      v105[4] = v134.cx;
      v105[5] = v42;
      WdLogEvent5_WdError(v105);
    }
    else
    {
      v39 = IsInternalVideoOutput(v136);
      v132 = v39;
    }
    v165 = v39;
    v135 = 0LL;
    v168 = 0LL;
    v169 = 0;
    v154 = 0;
    v43 = ((unsigned __int8)v29 ^ (unsigned __int8)(v29 | (4 * v39))) & 4 ^ v29;
    v131 = 0;
    BYTE2(v134.cy) = 0;
    DpiInfoFromDescriptor = MonitorGetDpiInfoFromDescriptor(
                              (DXGADAPTER *)v8,
                              v134.cx,
                              (struct DISPLAY_PREFERRED_MODE_INFO *)&v168,
                              (unsigned int *)&v151,
                              (unsigned int *)&v167,
                              (__int64)&v131);
    v46 = DpiInfoFromDescriptor;
    if ( DpiInfoFromDescriptor < 0 )
    {
      v43 |= 8u;
      cy = v135.cy;
      v47 = v135.cx;
      *(_QWORD *)&v175[2] = *(_QWORD *)&v173->ulHorzRes;
LABEL_33:
      if ( v47 )
        goto LABEL_35;
      goto LABEL_34;
    }
    BYTE2(v134.cy) = 1;
    if ( !v131 )
    {
      v106 = (_QWORD *)WdLogNewEntry5_WdError(v45);
      v106[3] = v8;
      v106[4] = v134.cx;
      v106[5] = v46;
      WdLogEvent5_WdError(v106);
    }
    v47 = v151;
    cy = v167;
    v135.cx = v151;
    v135.cy = v167;
    if ( ((v38 - 2) & 0xFFFFFFFD) == 0 )
    {
      v47 = v167;
      v135.cx = v167;
      cy = v151;
      v135.cy = v151;
    }
    if ( !v47 || !cy )
    {
      cy = 0;
      v135 = 0LL;
      v47 = 0;
      goto LABEL_33;
    }
    if ( v47 * cy > 16000 || v132 )
      goto LABEL_33;
    v43 |= 0x40u;
    v154 = 1;
    cy = 0;
    v135 = 0LL;
    v47 = 0;
LABEL_34:
    BYTE1(v134.cy) = (v8[308] & 0x20) != 0;
LABEL_35:
    v49 = v168;
    v50 = HIDWORD(v168);
    v130 = 0;
    v159 = v168;
    PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v157, v134.cx, &v179);
    v53 = PreferredMonitorSourceModeOnTarget;
    if ( PreferredMonitorSourceModeOnTarget < 0 )
    {
      v94 = (_QWORD *)WdLogNewEntry5_WdError(v52);
      v94[3] = v157;
      v94[4] = v134.cx;
      v94[5] = v53;
      WdLogEvent5_WdError(v94);
      v55 = ActiveSize.cy;
      v54 = ActiveSize.cx;
    }
    else
    {
      v54 = v179.VideoSignalInfo.ActiveSize.cx;
      v55 = v179.VideoSignalInfo.ActiveSize.cy;
      ActiveSize = v179.VideoSignalInfo.ActiveSize;
      v130 = 1;
    }
    if ( ((v133 - 2) & 0xFFFFFFFD) == 0 )
    {
      v49 = v50;
      v159 = __PAIR64__(v168, v50);
      v50 = v168;
      ActiveSize.cx = v55;
      ActiveSize.cy = v54;
    }
    LODWORD(v14) = DpiInternal::GetCurrentSourceResolution(
                     v15,
                     v158,
                     v161,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v138,
                     v125);
    if ( (int)v14 < 0 )
      break;
    LOBYTE(v134.cy) = 0;
    LODWORD(v14) = DpiInternal::GetCurrentTargetResolution(
                     v15,
                     v158,
                     v161,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v141,
                     (struct _D3DKMDT_2DREGION *)&v134.cy,
                     v128);
    if ( (int)v14 < 0 )
    {
      if ( v160 )
        v162(v163, v161);
      v98 = v146 == 0;
      goto LABEL_105;
    }
    if ( ((v133 - 2) & 0xFFFFFFFD) != 0 )
    {
      v136 = v142;
      v133 = v141;
    }
    else
    {
      v107 = v142;
      v136 = v141;
      v142 = v141;
      v133 = v107;
      v141 = v107;
    }
    if ( *((_DWORD *)v157 + 76) == 4 )
    {
      v171 = 0LL;
      PhysicalDisplaySizeOverride = GetPhysicalDisplaySizeOverride(&v171);
      v109 = v135;
      if ( PhysicalDisplaySizeOverride >= 0 )
        v109 = v171;
      v135 = v109;
      v47 = v109.cx;
      cy = v109.cy;
    }
    if ( (v43 & 1) != 0 && v152 <= 1 && v49 && v50 )
    {
      v56 = v139;
      if ( LOBYTE(v134.cy) )
      {
        v56 = v139 >> 1;
        v139 >>= 1;
      }
      v110 = 2 * v49;
      v57 = v138;
      if ( v138 >= v110 || (v111 = 0, v56 >= 2 * v50) )
        v111 = 2;
      v43 ^= ((unsigned __int8)v43 ^ (unsigned __int8)(v43 | v111)) & 2;
      if ( LOBYTE(v134.cy) )
      {
        v56 *= 2;
        v139 = v56;
      }
    }
    else
    {
      v56 = v139;
      v57 = v138;
    }
    memset(v180, 0, sizeof(v180));
    v58 = v161;
    DWORD1(v180[5]) = v153;
    v59 = *((_DWORD *)v161 + 5);
    if ( (unsigned int)(v59 - 5) <= 0xB )
      v59 = (v59 - 1) % 4 + 1;
    v60 = (((v59 - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v43 & 0xFFFFFF7F;
    v61 = (unsigned int)(v172->right - v172->left);
    LODWORD(v180[2]) = v172->right - v172->left;
    v62 = v172->bottom - v172->top;
    DWORD1(v180[2]) = v62;
    if ( ((v59 - 2) & 0xFFFFFFFD) == 0 )
      *(_QWORD *)&v180[2] = __PAIR64__(v61, v62);
    v63 = *((_DWORD *)v161 + 3);
    if ( v63 <= 0 )
      goto LABEL_133;
    if ( v63 <= 2 )
      goto LABEL_52;
    if ( v63 == 3 )
    {
      v66 = v133;
      v67 = v136;
      v64 = v133 * (v145.right - v145.left) / v57;
      v115 = v136 * (v145.bottom - v145.top);
    }
    else
    {
      if ( v63 != 4 )
      {
        if ( v63 != 5 )
        {
          if ( v63 == 255 )
          {
LABEL_52:
            v64 = v145.right - v145.left;
            v65 = v145.bottom - v145.top;
            v66 = v133;
            v67 = v136;
            goto LABEL_53;
          }
LABEL_133:
          v112 = WdLogNewEntry5_WdAssertion(v61);
          *(_QWORD *)(v112 + 24) = *((int *)v58 + 3);
          WdLogEvent5_WdAssertion(v112);
        }
        v60 |= 0x100u;
        goto LABEL_52;
      }
      v67 = v136;
      v66 = v133;
      if ( v56 * v133 <= v57 * v136 )
      {
        v114 = v133;
        v113 = v56 * v133 / v57;
      }
      else
      {
        v113 = v136;
        v114 = v57 * v136 / v56;
      }
      v64 = v114 * (v145.right - v145.left) / v57;
      v115 = v113 * (v145.bottom - v145.top);
    }
    v65 = v115 / v56;
LABEL_53:
    v68 = v65 * cy;
    DWORD2(v180[1]) = v64 * v47 / v66;
    v69 = (struct tagSIZE)(v68 % v67);
    HIDWORD(v180[1]) = v68 / v67;
    if ( (v60 & 2) != 0 || (LOBYTE(v69.cx) = 0, !v130) )
      LOBYTE(v69.cx) = 1;
    v70 = BYTE1(v134.cy);
    if ( BYTE1(v134.cy) || !BYTE2(v134.cy) || v154 )
      goto LABEL_96;
    v71 = v130;
    if ( LOBYTE(v69.cx) )
      v71 = v131;
    if ( !v71 )
    {
LABEL_96:
      v8 = v157;
      LODWORD(v180[4]) = 0;
    }
    else
    {
      v8 = v157;
      p_ActiveSize = (const struct tagSIZE *)&ActiveSize;
      if ( LOBYTE(v69.cx) )
        p_ActiveSize = (const struct tagSIZE *)&v159;
      v73 = 16 * (unsigned int)DetermineViewDistance(v157, &v135, v165, p_ActiveSize, (unsigned int *)&v180[4]);
      v60 = v60 & 0xFFFFFFEF | v73;
      if ( !LODWORD(v180[4]) )
      {
        v116 = WdLogNewEntry5_WdAssertion(v73);
        *(_QWORD *)(v116 + 24) = 2059LL;
        WdLogEvent5_WdAssertion(v116);
      }
    }
    v74 = v132;
    v133 = 0;
    if ( v132 && (int)DpiReadPnpRegistryValue(*((_QWORD *)v8 + 24), L"PreferredScaleFactor", &v133, 4LL, 2) >= 0 )
    {
      v75 = v133;
      v76 = 4096;
    }
    else
    {
      v75 = 0;
      v133 = 0;
      v76 = 0;
    }
    v29 = v76 | v60 & 0xFFFFEFFF;
    HIDWORD(v175[5]) = v29;
    v77 = v29;
    if ( (v29 & 0x1000) == 0 )
    {
      PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                         (DpiInternal *)v8,
                                         (void *const)v134.cx,
                                         (v29 >> 5) & 1,
                                         (int)&v133,
                                         (unsigned int *)v126);
      v75 = v133;
      v29 = v29 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
      HIDWORD(v175[5]) = v77 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
      v77 = HIDWORD(v175[5]);
    }
    if ( v70 && v74 && !v75 )
    {
      DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(DpiInternal **)&v180[2],
        v69,
        (__int64)v178,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v180);
      DpiInternal::FillOverridesAndAdjustedScaleFactor(
        (DpiInternal *)v137,
        v117,
        (int *)v178,
        (const struct _DPI_SCALE_FACTOR_COLLECTION *)v180);
      v29 = v77 | 0x400;
      HIDWORD(v175[5]) = v77 | 0x400;
    }
    else
    {
      LODWORD(v126) = v137;
      FillDpiInfo(
        (const struct tagSIZE *)&v180[1] + 1,
        (struct tagSIZE *)&v180[2],
        v178,
        v180[4],
        (DpiInternal *)v126,
        v75,
        v129,
        (struct _DPI_INFORMATION *)v180);
    }
    if ( HIDWORD(v180[5]) )
    {
      v118 = WdLogNewEntry5_WdAssertion(v80);
      *(_QWORD *)(v118 + 24) = 2090LL;
      WdLogEvent5_WdAssertion(v118);
    }
    HIDWORD(v180[5]) = v29;
    if ( v74
      || (v29 & 4) == 0
      && (DpiInternal::AvgXY(*((DpiInternal **)&v180[3] + 1), v79),
          v82 = DpiInternal::AvgXY(*((DpiInternal **)&v175[3] + 1), v81),
          v82 <= v83) )
    {
      v175[0] = v180[0];
      v174 = (__m128i)v180[1];
      v175[2] = v180[2];
      v176 = v180[4];
      v175[5] = v180[5];
      v29 = HIDWORD(v180[5]);
      v175[3] = v180[3];
    }
    memset(v181, 0, sizeof(v181));
    MonitorDeviceInterfaceName = MonitorGetMonitorDeviceInterfaceName((DXGADAPTER *)v8, v134.cx, 0x80uLL, v181);
    v87 = MonitorDeviceInterfaceName;
    if ( MonitorDeviceInterfaceName < 0 )
    {
      v95 = (_QWORD *)WdLogNewEntry5_WdError(v85);
      v95[3] = v8;
      v95[4] = v134.cx;
      v95[5] = v87;
      WdLogEvent5_WdError(v95);
      v181[0] = 0;
    }
    else
    {
      ScaleOverrideTestHook((DpiInternal *)v181, (const unsigned __int16 *)&v155, v86);
    }
    v127 = v75;
    LODWORD(v11) = v166;
    TraceLogDpiInfo((struct _DPI_INFORMATION *)v180, v181, (const struct _LUID *)(v8 + 276), v166, v127);
    LogScaleFactor(*(struct _LUID *)(v8 + 276), v11, v137, (struct _DPI_INFORMATION *)v180);
    if ( v160 )
      v162(v163, v161);
    v31 = v144 + 1;
    v144 = v31;
    if ( v31 >= v170 )
    {
      v26 = v155;
      v88 = v174;
      v9 = v177;
      v7 = v173;
      goto LABEL_83;
    }
  }
  if ( v160 )
    v162(v163, v161);
  v98 = v146 == 0;
LABEL_105:
  if ( !v98 )
    v148(v149, v15);
  return (unsigned int)v14;
}
