/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C012DC88
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C012DAC0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003D9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000D078 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000DC0C (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x1C000DD78 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x1C000DE1C (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C000DF50 (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C000E030 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0047B30 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01291C0 (MonitorGetDpiInfoFromDescriptor.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C012E694 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C012E748 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C012EAA8 (MonitorGetMonitorDeviceInterfaceName.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C012EBC0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C012F02C (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C012F134 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C012F244 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C012F480 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C012F568 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C012F62C (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C012F948 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C0146204 (DpiReadPnpRegistryValue.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C0284E84 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        struct _GDIINFO *a5,
        struct _DPI_INFORMATION *a6)
{
  struct _DPI_INFORMATION *v7; // r12
  __int64 v9; // r14
  DXGPROCESS *Current; // rax
  struct _LUID *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char IsAddapterSessionized; // bl
  char v15; // r10
  __int64 (__fastcall *v16)(char *, struct tagSIZE *, struct D3DKMDT_HVIDPN__ **); // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  DpiInternal *v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  const struct tagRECT *v33; // r15
  int v34; // edi
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned int v40; // ebx
  struct _GDIINFO *v41; // rdx
  int v42; // eax
  unsigned int v43; // edi
  int v44; // eax
  unsigned __int64 v45; // r15
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 (__fastcall *v50)(__int64, _QWORD, _QWORD, tagSIZE *); // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  int v56; // r15d
  bool v57; // r12
  int VideoOutputTechnology; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rbx
  int v63; // edi
  int DpiInfoFromDescriptor; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rbx
  LONG v69; // esi
  LONG v70; // r14d
  LONG v71; // r12d
  LONG v72; // r15d
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rbx
  UINT v78; // edx
  UINT cy; // ecx
  LONG v80; // eax
  unsigned int v81; // ebx
  unsigned int v82; // r12d
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // r8d
  const struct _DXGDMM_VIDPN_INTERFACE *v86; // r15
  int v87; // eax
  unsigned int v88; // ecx
  int v89; // r8d
  unsigned int v90; // r9d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v91; // r10d
  unsigned int v92; // r8d
  struct tagSIZE v93; // rdx
  char v94; // r14
  unsigned __int8 v95; // cl
  struct tagSIZE *p_ActiveSize; // r9
  __int64 v97; // rcx
  unsigned int v98; // eax
  bool v99; // al
  unsigned int v100; // esi
  bool v101; // r12
  int v102; // eax
  bool PreferredScaleFactorForMonitor; // al
  unsigned int v104; // ebx
  struct tagSIZE v105; // rdx
  __int64 v106; // rcx
  struct tagSIZE v107; // rdx
  int v108; // eax
  int v109; // r8d
  int MonitorDeviceInterfaceName; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  unsigned int *v113; // r8
  __int64 v114; // rbx
  __m128i v115; // xmm1
  struct _GDIINFO *v116; // rcx
  unsigned int v117; // eax
  __int128 v118; // xmm1
  __int128 v119; // xmm0
  _QWORD *v121; // rax
  __int64 v122; // rax
  int CurrentProcessSessionId; // eax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rax
  DpiInternal *v128; // rdx
  _QWORD *v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // rax
  __int64 v137; // rax
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  int PhysicalDisplaySizeOverride; // eax
  struct tagSIZE v141; // rcx
  unsigned int v142; // eax
  char v143; // al
  __int64 v144; // rax
  unsigned __int32 v145; // r8d
  unsigned int v146; // ecx
  unsigned __int32 v147; // eax
  __int64 v148; // rax
  __int64 v149; // rax
  _QWORD *v150; // rax
  bool v151; // zf
  _QWORD *v152; // rax
  __int64 cx; // rcx
  ULONG v154; // eax
  ULONG v155; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v156; // r9
  __int64 v157; // rax
  struct _D3DKMDT_2DREGION *v158; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v159; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v160; // [rsp+28h] [rbp-D8h]
  bool v161; // [rsp+40h] [rbp-C0h]
  char v162; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v163; // [rsp+42h] [rbp-BEh] BYREF
  bool v164; // [rsp+43h] [rbp-BDh]
  int v165; // [rsp+44h] [rbp-BCh] BYREF
  struct _D3DKMDT_2DREGION v166; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v167; // [rsp+50h] [rbp-B0h] BYREF
  struct tagSIZE v168; // [rsp+58h] [rbp-A8h] BYREF
  tagSIZE v169; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v170; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v171; // [rsp+6Ch] [rbp-94h] BYREF
  D3DKMDT_2DREGION ActiveSize; // [rsp+70h] [rbp-90h] BYREF
  struct tagSIZE v173; // [rsp+78h] [rbp-88h] BYREF
  char v174[8]; // [rsp+80h] [rbp-80h] BYREF
  DpiInternal *v175; // [rsp+88h] [rbp-78h]
  void (__fastcall *v176)(__int64, DpiInternal *); // [rsp+90h] [rbp-70h]
  __int64 v177; // [rsp+98h] [rbp-68h]
  int v178; // [rsp+A0h] [rbp-60h]
  struct tagRECT v179; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v180; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v181; // [rsp+C0h] [rbp-40h] BYREF
  LONG v182; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v183; // [rsp+CCh] [rbp-34h] BYREF
  int v184; // [rsp+D0h] [rbp-30h]
  __int64 v185; // [rsp+D8h] [rbp-28h] BYREF
  int v186; // [rsp+E0h] [rbp-20h]
  struct D3DKMDT_HVIDPN__ *v187; // [rsp+E8h] [rbp-18h] BYREF
  char v188; // [rsp+F0h] [rbp-10h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v189; // [rsp+F8h] [rbp-8h]
  void (__fastcall *v190)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *); // [rsp+100h] [rbp+0h]
  __int64 v191; // [rsp+108h] [rbp+8h]
  int v192; // [rsp+110h] [rbp+10h]
  unsigned int v193; // [rsp+118h] [rbp+18h]
  LONG v194; // [rsp+11Ch] [rbp+1Ch] BYREF
  unsigned __int64 v195; // [rsp+120h] [rbp+20h] BYREF
  struct _GDIINFO *v196; // [rsp+128h] [rbp+28h]
  BOOL v197; // [rsp+130h] [rbp+30h]
  __int64 v198; // [rsp+138h] [rbp+38h] BYREF
  int v199; // [rsp+140h] [rbp+40h]
  const struct tagRECT *v200; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v201; // [rsp+150h] [rbp+50h]
  _BYTE v202[96]; // [rsp+160h] [rbp+60h] BYREF
  __m128i v203; // [rsp+1C0h] [rbp+C0h]
  struct _DPI_INFORMATION *v204; // [rsp+1D0h] [rbp+D0h]
  __int128 v205; // [rsp+1D8h] [rbp+D8h]
  struct tagSIZE v206[5]; // [rsp+1E8h] [rbp+E8h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v207; // [rsp+210h] [rbp+110h] BYREF
  _OWORD v208[6]; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int16 v209[128]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v7 = a6;
  v9 = a3;
  v193 = a3;
  v196 = a5;
  v204 = a6;
  v184 = a4;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
  v161 = Current && DXGPROCESS::IsRemoteConnection(Current);
  IsAddapterSessionized = DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)a2, v11, &v171, 0LL);
  if ( v15 != IsAddapterSessionized )
  {
    v122 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v122 + 24) = 1661LL;
    WdLogEvent5_WdAssertion(v122);
  }
  if ( IsAddapterSessionized )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12);
    if ( v171 != CurrentProcessSessionId )
    {
      v126 = WdLogNewEntry5_WdAssertion(v125, v124);
      *(_QWORD *)(v126 + 24) = 1662LL;
      WdLogEvent5_WdAssertion(v126);
    }
  }
  v16 = (__int64 (__fastcall *)(char *, struct tagSIZE *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)a1 + 6);
  v187 = 0LL;
  v175 = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  v178 = 0;
  v174[0] = 0;
  v173 = 0LL;
  v17 = v16(a2, &v173, &v187);
  v21 = v17;
  if ( v17 < 0 )
  {
    v127 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v127 + 24) = a2;
    *(_QWORD *)(v127 + 32) = v21;
    WdLogEvent5_WdError(v127);
    return (unsigned int)v21;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v174,
    *(_QWORD *)&v173,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v22 = v175;
  v181 = 0LL;
  v185 = 0LL;
  v23 = (*(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v187)(v175, &v181, &v185);
  v21 = v23;
  if ( v23 < 0 )
  {
    v129 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26);
    v129[3] = v22;
    v129[4] = v21;
LABEL_113:
    WdLogEvent5_WdError(v129);
    goto LABEL_114;
  }
  v195 = 0LL;
  v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v185)(v181, (unsigned int)v9, &v195);
  v21 = v27;
  if ( v27 < 0 )
  {
    v129 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
    v129[3] = v9;
    v129[4] = v181;
    v129[5] = v21;
    goto LABEL_113;
  }
  *(_QWORD *)&v179.left = 0LL;
  *(_QWORD *)&v179.right = 0LL;
  LODWORD(v21) = GetCurrentContentResolution(a2, v9, &v200, &v179, &v183);
  if ( (int)v21 < 0 )
  {
LABEL_114:
    if ( v174[0] )
    {
      v128 = v22;
      goto LABEL_109;
    }
    return (unsigned int)v21;
  }
  v33 = v200;
  v34 = 0;
  if ( !v200 )
  {
    v130 = WdLogNewEntry5_WdAssertion(v32, v31);
    *(_QWORD *)(v130 + 24) = 1719LL;
    WdLogEvent5_WdAssertion(v130);
  }
  v35 = (unsigned int)(v33->right - v33->left);
  if ( v33->right - v33->left <= 0 || (v35 = (unsigned int)(v33->bottom - v33->top), v33->bottom - v33->top <= 0) )
  {
    v131 = WdLogNewEntry5_WdAssertion(v35, v31);
    *(_QWORD *)(v131 + 24) = 1722LL;
    WdLogEvent5_WdAssertion(v131);
  }
  v170 = 0;
  memset(v206, 0, 0x20uLL);
  v36 = QueryWin32DpiValues(&v170, (struct _DPI_SCALE_FACTOR_COLLECTION *)v206);
  v39 = v36;
  if ( v36 < 0 )
  {
    v132 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v132 + 24) = 1728LL;
    WdLogEvent5_WdAssertion(v132);
    v136 = WdLogNewEntry5_WdError(v134, v133, v135);
    *(_QWORD *)(v136 + 24) = v39;
    WdLogEvent5_WdError(v136);
  }
  v40 = 0;
  v171 = 0;
  memset(v202, 0, 0x5CuLL);
  if ( v195 > 1 || (v42 = 0, v183 > 1) )
    v42 = 1;
  if ( !v33->left && !v33->top )
    v34 = 32;
  v43 = v42 | v34;
  v44 = dword_1C00A26DC;
  *(_DWORD *)&v202[92] = v43;
  if ( v43 >= 0x20 )
    v44 = v184;
  dword_1C00A26DC = v44;
  v201 = 0LL;
  v45 = 0LL;
  v205 = *(_OWORD *)&v202[64];
  if ( v195 )
  {
    v203 = *(__m128i *)&v202[16];
    while ( 1 )
    {
      v166.cx = -1;
      BYTE1(v166.cy) = 0;
      v46 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, struct _D3DKMDT_2DREGION *))(v185 + 8))(
              v181,
              (unsigned int)v9,
              v45,
              &v166);
      v21 = v46;
      if ( v46 < 0 )
      {
        v152 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47, v49);
        cx = (unsigned int)v9;
        v152[3] = v45;
        goto LABEL_165;
      }
      v169 = 0LL;
      v50 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, tagSIZE *))(v185 + 24);
      v189 = 0LL;
      v190 = 0LL;
      v191 = 0LL;
      v192 = 0;
      v188 = 0;
      v51 = v50(v181, (unsigned int)v9, v166.cx, &v169);
      v21 = v51;
      if ( v51 < 0 )
      {
        v152 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52, v54);
        v152[3] = (unsigned int)v9;
        cx = v166.cx;
LABEL_165:
        v152[4] = cx;
        v152[5] = v21;
        WdLogEvent5_WdError(v152);
        v151 = v174[0] == 0;
        goto LABEL_166;
      }
      v55 = (__int64)v169;
      if ( !*(_QWORD *)&v169 )
      {
        v137 = WdLogNewEntry5_WdAssertion(v53, 0LL);
        *(_QWORD *)(v137 + 24) = 1784LL;
        WdLogEvent5_WdAssertion(v137);
        v55 = (__int64)v169;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)&v188,
        v55,
        *(_QWORD *)(v185 + 32),
        v181);
      v165 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v189 + 5));
      v164 = 0;
      v56 = v165;
      v167 = D3DKMDT_VOT_UNINITIALIZED;
      v57 = 0;
      VideoOutputTechnology = DmmGetVideoOutputTechnology(a2, v166.cx, &v167, 0LL);
      v62 = VideoOutputTechnology;
      if ( VideoOutputTechnology < 0 )
      {
        v138 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
        v138[3] = a2;
        v138[4] = v166.cx;
        v138[5] = v62;
        WdLogEvent5_WdError(v138);
      }
      else
      {
        v57 = IsInternalVideoOutput(v167);
        v164 = v57;
      }
      v197 = v57;
      v198 = 0LL;
      v199 = 0;
      v168 = 0LL;
      v186 = 0;
      v63 = ((unsigned __int8)v43 ^ (unsigned __int8)(v43 | (4 * v57))) & 4 ^ v43;
      v163 = 0;
      BYTE2(v166.cy) = 0;
      DpiInfoFromDescriptor = MonitorGetDpiInfoFromDescriptor(
                                (DXGADAPTER *)a2,
                                v166.cx,
                                (struct DISPLAY_PREFERRED_MODE_INFO *)&v198,
                                (unsigned int *)&v182,
                                (unsigned int *)&v194,
                                (bool *)&v163,
                                (_BYTE *)&v166.cy + 2);
      v68 = DpiInfoFromDescriptor;
      if ( DpiInfoFromDescriptor < 0 )
        break;
      if ( !v163 )
      {
        v139 = (_QWORD *)WdLogNewEntry5_WdError(v66, v65, v67);
        v139[3] = a2;
        v139[4] = v166.cx;
        v139[5] = v68;
        WdLogEvent5_WdError(v139);
      }
      v69 = v182;
      v70 = v194;
      v168.cx = v182;
      v168.cy = v194;
      if ( ((v56 - 2) & 0xFFFFFFFD) == 0 )
      {
        v69 = v194;
        v168.cx = v194;
        v70 = v182;
        v168.cy = v182;
      }
      if ( !v69 || !v70 )
      {
        v70 = 0;
        v168 = 0LL;
        v69 = 0;
        goto LABEL_39;
      }
      if ( v69 * v70 > 16000 || v57 )
        goto LABEL_39;
      v63 |= 0x40u;
      v186 = 1;
      v70 = 0;
      v168 = 0LL;
      v69 = 0;
LABEL_40:
      BYTE1(v166.cy) = (a2[308] & 0x20) != 0;
LABEL_41:
      v71 = v198;
      v72 = HIDWORD(v198);
      v173 = (struct tagSIZE)v198;
      ActiveSize = 0LL;
      memset(&v207, 0, sizeof(v207));
      v162 = 0;
      PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(a2, v166.cx, &v207);
      v77 = PreferredMonitorSourceModeOnTarget;
      if ( PreferredMonitorSourceModeOnTarget < 0 )
      {
        v121 = (_QWORD *)WdLogNewEntry5_WdError(v75, v74, v76);
        v121[3] = a2;
        v121[4] = v166.cx;
        v121[5] = v77;
        WdLogEvent5_WdError(v121);
        cy = ActiveSize.cy;
        v78 = ActiveSize.cx;
      }
      else
      {
        v78 = v207.VideoSignalInfo.ActiveSize.cx;
        cy = v207.VideoSignalInfo.ActiveSize.cy;
        ActiveSize = v207.VideoSignalInfo.ActiveSize;
        v162 = 1;
      }
      if ( ((v165 - 2) & 0xFFFFFFFD) == 0 )
      {
        v71 = v72;
        v173.cx = v72;
        v72 = v198;
        v173.cy = v198;
        ActiveSize = (D3DKMDT_2DREGION)__PAIR64__(v78, cy);
      }
      v180 = 0LL;
      LODWORD(v21) = DpiInternal::GetCurrentSourceResolution(
                       v175,
                       v187,
                       v189,
                       (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v180,
                       v158);
      if ( (int)v21 < 0 )
      {
        if ( v188 )
          v190(v191, v189);
        v151 = v174[0] == 0;
LABEL_166:
        if ( !v151 )
        {
          v128 = v175;
LABEL_109:
          v176(v177, v128);
        }
        return (unsigned int)v21;
      }
      v169 = 0LL;
      LOBYTE(v166.cy) = 0;
      LODWORD(v21) = DpiInternal::GetCurrentTargetResolution(
                       v175,
                       v187,
                       v189,
                       (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v169,
                       (struct _D3DKMDT_2DREGION *)&v166.cy,
                       v160);
      if ( (int)v21 < 0 )
      {
        if ( v188 )
          v190(v191, v189);
        v151 = v174[0] == 0;
        goto LABEL_166;
      }
      v80 = v169.cy;
      if ( ((v165 - 2) & 0xFFFFFFFD) != 0 )
      {
        v167 = v169.cy;
        v80 = v169.cx;
      }
      else
      {
        v167 = v169.cx;
      }
      v151 = *((_DWORD *)a2 + 76) == 4;
      v165 = v80;
      if ( v151 )
      {
        v169 = 0LL;
        PhysicalDisplaySizeOverride = GetPhysicalDisplaySizeOverride(&v169);
        v141 = v168;
        if ( PhysicalDisplaySizeOverride >= 0 )
          v141 = v169;
        v168 = v141;
        v69 = v141.cx;
        v70 = v141.cy;
      }
      if ( (v63 & 1) != 0 && v183 <= 1 && v71 && v72 )
      {
        v81 = HIDWORD(v180);
        if ( LOBYTE(v166.cy) )
          v81 = HIDWORD(v180) >> 1;
        v142 = 2 * v71;
        v82 = v180;
        if ( (unsigned int)v180 >= v142 || (v143 = 0, v81 >= 2 * v72) )
          v143 = 2;
        v63 ^= ((unsigned __int8)v63 ^ (unsigned __int8)(v63 | v143)) & 2;
        if ( LOBYTE(v166.cy) )
          v81 *= 2;
      }
      else
      {
        v81 = HIDWORD(v180);
        v82 = v180;
      }
      memset(v208, 0, sizeof(v208));
      DWORD1(v208[5]) = v184;
      v83 = *((unsigned int *)v189 + 5);
      if ( (unsigned int)(v83 - 5) <= 0xB )
        v83 = (unsigned int)(((int)v83 - 1) % 4 + 1);
      v43 = ((((_DWORD)v83 - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v63 & 0xFFFFFF7F;
      v84 = (unsigned int)(v200->right - v200->left);
      LODWORD(v208[2]) = v200->right - v200->left;
      v85 = v200->bottom - v200->top;
      *(_DWORD *)&v202[92] = v43;
      DWORD1(v208[2]) = v85;
      if ( (((_DWORD)v83 - 2) & 0xFFFFFFFD) == 0 )
        *(_QWORD *)&v208[2] = __PAIR64__(v84, v85);
      v86 = v189;
      v87 = *((_DWORD *)v189 + 3);
      if ( v87 <= 0 )
        goto LABEL_141;
      if ( v87 <= 2 )
        goto LABEL_58;
      switch ( v87 )
      {
        case 3:
          v90 = v165;
          v91 = v167;
          v88 = v165 * (v179.right - v179.left) / v82;
          v147 = v167 * (v179.bottom - v179.top);
          break;
        case 4:
          v91 = v167;
          v90 = v165;
          if ( v81 * v165 <= v82 * v167 )
          {
            v146 = v165;
            v145 = v81 * v165 / v82;
          }
          else
          {
            v145 = v167;
            v146 = v82 * v167 / v81;
          }
          v88 = v146 * (v179.right - v179.left) / v82;
          v147 = v145 * (v179.bottom - v179.top);
          break;
        case 5:
          goto LABEL_142;
        default:
          if ( v87 != 255 )
          {
LABEL_141:
            v144 = WdLogNewEntry5_WdAssertion(v84, v83);
            *(_QWORD *)(v144 + 24) = *((int *)v86 + 3);
            WdLogEvent5_WdAssertion(v144);
LABEL_142:
            v43 |= 0x100u;
            *(_DWORD *)&v202[92] = v43;
          }
LABEL_58:
          v88 = v179.right - v179.left;
          v89 = v179.bottom - v179.top;
          v90 = v165;
          v91 = v167;
          goto LABEL_59;
      }
      v89 = v147 / v81;
LABEL_59:
      v92 = v70 * v89;
      DWORD2(v208[1]) = v69 * v88 / v90;
      v93 = (struct tagSIZE)(v92 % v91);
      HIDWORD(v208[1]) = v92 / v91;
      if ( (v43 & 2) != 0 || (LOBYTE(v93.cx) = 0, !v162) )
        LOBYTE(v93.cx) = 1;
      v94 = BYTE1(v166.cy);
      if ( BYTE1(v166.cy) || !BYTE2(v166.cy) || v186 )
        goto LABEL_104;
      v95 = v162;
      if ( LOBYTE(v93.cx) )
        v95 = v163;
      if ( !v95 )
      {
LABEL_104:
        LODWORD(v208[4]) = 0;
      }
      else
      {
        p_ActiveSize = (struct tagSIZE *)&ActiveSize;
        if ( LOBYTE(v93.cx) )
          p_ActiveSize = &v173;
        v97 = 16 * (unsigned int)DetermineViewDistance(a2, &v168, v197, p_ActiveSize, (unsigned int *)&v208[4]);
        v98 = v43 & 0xFFFFFFEF;
        v43 = v43 & 0xFFFFFFEF | v97;
        *(_DWORD *)&v202[92] = v98 | v97;
        if ( !LODWORD(v208[4]) )
        {
          v148 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v97, v93);
          *(_QWORD *)(v148 + 24) = 2052LL;
          WdLogEvent5_WdAssertion(v148);
        }
      }
      v99 = v161;
      v100 = 0;
      v165 = 0;
      if ( v161 && v170 )
      {
        v101 = v164;
      }
      else
      {
        v101 = v164;
        if ( v164 && (int)DpiReadPnpRegistryValue(*((_QWORD *)a2 + 24), L"PreferredScaleFactor", &v165, 4LL, 2) >= 0 )
        {
          v100 = v165;
          v102 = 4096;
        }
        else
        {
          v165 = 0;
          v102 = 0;
        }
        v43 = v102 | v43 & 0xFFFFEFFF;
        *(_DWORD *)&v202[92] = v43;
        if ( (v43 & 0x1000) == 0 )
        {
          PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                             (DpiInternal *)a2,
                                             (void *const)v166.cx,
                                             (v43 >> 5) & 1,
                                             (int)&v165,
                                             (unsigned int *)v159);
          v100 = v165;
          v104 = v43 & 0xFFFFF7FF;
          v43 = v43 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
          *(_DWORD *)&v202[92] = v104 | (PreferredScaleFactorForMonitor << 11);
        }
        v99 = v161;
      }
      if ( v94 && v101 && !v100 )
      {
        DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
          *(DpiInternal **)&v208[2],
          v93,
          (__int64)v206,
          (const struct _DPI_SCALE_FACTOR_COLLECTION *)v208);
        LODWORD(v159) = 0;
        DpiInternal::FillOverridesAndAdjustedScaleFactor(
          (DpiInternal *)v170,
          0LL,
          (int *)v206,
          (const struct _DPI_SCALE_FACTOR_COLLECTION *)v208,
          (struct _DPI_INFORMATION *)v159);
        v43 |= 0x400u;
        *(_DWORD *)&v202[92] = v43;
      }
      else
      {
        LODWORD(v159) = v170;
        FillDpiInfo(
          (const struct tagSIZE *)&v208[1] + 1,
          (struct tagSIZE *)&v208[2],
          v206,
          v208[4],
          (DpiInternal *)v159,
          v100,
          v99,
          (struct _DPI_INFORMATION *)v208);
      }
      if ( HIDWORD(v208[5]) )
      {
        v149 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v106, v105);
        *(_QWORD *)(v149 + 24) = 2092LL;
        WdLogEvent5_WdAssertion(v149);
      }
      HIDWORD(v208[5]) = v43;
      if ( v101
        || (v43 & 4) == 0
        && (DpiInternal::AvgXY(*((DpiInternal **)&v208[3] + 1), v105),
            v108 = DpiInternal::AvgXY(*(DpiInternal **)&v202[56], v107),
            v108 <= v109) )
      {
        *(_OWORD *)v202 = v208[0];
        v203 = (__m128i)v208[1];
        *(_OWORD *)&v202[32] = v208[2];
        v205 = v208[4];
        *(_OWORD *)&v202[80] = v208[5];
        v43 = HIDWORD(v208[5]);
        *(_OWORD *)&v202[48] = v208[3];
      }
      memset(v209, 0, sizeof(v209));
      MonitorDeviceInterfaceName = MonitorGetMonitorDeviceInterfaceName((DXGADAPTER *)a2, v166.cx, 0x80uLL, v209);
      v114 = MonitorDeviceInterfaceName;
      if ( MonitorDeviceInterfaceName < 0 )
      {
        v150 = (_QWORD *)WdLogNewEntry5_WdError(v112, v111, v113);
        v150[3] = a2;
        v150[4] = v166.cx;
        v150[5] = v114;
        WdLogEvent5_WdError(v150);
        v209[0] = 0;
      }
      else
      {
        ScaleOverrideTestHook((DpiInternal *)v209, (const unsigned __int16 *)&v171, v113);
      }
      LODWORD(v9) = v193;
      TraceLogDpiInfo((struct _DPI_INFORMATION *)v208, v209, (const struct _LUID *)(a2 + 276), v193, v100);
      LogScaleFactor(*(struct _LUID *)(a2 + 276), v9, v170, (struct _DPI_INFORMATION *)v208);
      if ( v188 )
        v190(v191, v86);
      v45 = v201 + 1;
      v201 = v45;
      if ( v45 >= v195 )
      {
        v40 = v171;
        v115 = v203;
        v22 = v175;
        v7 = v204;
        goto LABEL_91;
      }
    }
    v63 |= 8u;
    v70 = v168.cy;
    v69 = v168.cx;
    *(_DWORD *)&v202[32] = v196->ulHorzRes;
    *(_DWORD *)&v202[36] = v196->ulVertRes;
LABEL_39:
    if ( v69 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v115 = *(__m128i *)&v202[16];
  v203 = *(__m128i *)&v202[16];
LABEL_91:
  v116 = (struct _GDIINFO *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v115, 8));
  if ( (_DWORD)v116 )
  {
    v41 = (struct _GDIINFO *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v115, 12));
    if ( (_DWORD)v41 )
    {
      if ( (v43 & 0x80u) == 0 )
      {
        v155 = 1000 * (_DWORD)v116;
        v116 = v196;
        v196->ulHorzSize = v155;
        v116->ulVertSize = 1000 * (_DWORD)v41;
      }
      else
      {
        v154 = 1000 * (_DWORD)v41;
        v41 = v196;
        v196->ulHorzSize = v154;
        v41->ulVertSize = 1000 * (_DWORD)v116;
      }
    }
  }
  if ( (v43 & 2) == 0
    || (v156 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                            _mm_srli_si128(
                                                                              _mm_load_si128((const __m128i *)&v202[80]),
                                                                              4)),
        (_DWORD)v156 == 1234568) )
  {
    v117 = *(_DWORD *)&v202[8];
  }
  else
  {
    v117 = DpiInternal::AdjustDesktopScaleFactorForOverride(
             (DpiInternal *)0x64,
             *(__int64 *)&v202[32],
             (struct tagSIZE)v206,
             v156,
             0);
    *(_DWORD *)&v202[8] = v117;
  }
  if ( v40 )
  {
    v117 = v40;
    *(_DWORD *)&v202[8] = v40;
    *(_DWORD *)&v202[84] = 1234567;
  }
  if ( !v117 )
  {
    v157 = WdLogNewEntry5_WdAssertion(v116, v41);
    *(_QWORD *)(v157 + 24) = 2160LL;
    WdLogEvent5_WdAssertion(v157);
  }
  v118 = *(_OWORD *)&v202[48];
  *(_DWORD *)v202 = 100;
  *(_DWORD *)&v202[4] = 100;
  *(_OWORD *)v7 = *(_OWORD *)v202;
  *((__m128i *)v7 + 1) = v203;
  *((_OWORD *)v7 + 2) = *(_OWORD *)&v202[32];
  v119 = v205;
  *((_OWORD *)v7 + 3) = v118;
  *((_OWORD *)v7 + 4) = v119;
  *((_OWORD *)v7 + 5) = *(_OWORD *)&v202[80];
  if ( v174[0] )
    v176(v177, v22);
  return 0LL;
}
