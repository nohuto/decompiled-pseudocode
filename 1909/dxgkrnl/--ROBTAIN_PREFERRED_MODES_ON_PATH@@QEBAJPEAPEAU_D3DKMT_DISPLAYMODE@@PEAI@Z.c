/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C023540C
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0170DE0 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000D078 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C001FCC8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkQueryDmmInterface @ 0x1C01269D4 (DxgkQueryDmmInterface.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0127AE0 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C012F244 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C012F480 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0171B2C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C0171D14 (_PopulateDisplayModeFromPresentPath.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C017211C (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 */

__int64 __fastcall OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3)
{
  struct _D3DKMT_DISPLAYMODE **v3; // r13
  unsigned int *v4; // r14
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax
  DXGADAPTER *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  DXGADAPTER *v21; // rcx
  __int64 v22; // r12
  __int64 (__fastcall *v23)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  DXGADAPTER *v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int VideoOutputTechnology; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 (__fastcall *v44)(__int64, __int64, __int64 *, __int64 *); // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 (__fastcall *v50)(__int64, __int64 *); // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned int *v57; // r15
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // edx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdi
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 (__fastcall *v68)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r14
  __int64 (__fastcall *v74)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *); // rax
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r8
  unsigned int *v80; // r13
  __int64 v81; // r8
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rbx
  _QWORD *v87; // rax
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  int v92; // ebx
  int v93; // eax
  int v94; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v95; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v96; // eax
  int v97; // eax
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  int v102; // eax
  int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rcx
  SIZE_T v108; // rax
  struct _D3DKMT_DISPLAYMODE *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rax
  _QWORD *v116; // rax
  int UniqueModes; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rbx
  __int64 v121; // rax
  int v122; // [rsp+20h] [rbp-E0h]
  _BYTE v123[8]; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v124[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v125; // [rsp+60h] [rbp-A0h] BYREF
  bool v126; // [rsp+68h] [rbp-98h]
  unsigned __int8 v127[7]; // [rsp+69h] [rbp-97h] BYREF
  __int64 v128; // [rsp+70h] [rbp-90h] BYREF
  __int64 v129; // [rsp+78h] [rbp-88h] BYREF
  __int64 v130; // [rsp+80h] [rbp-80h] BYREF
  __int64 v131; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v132[8]; // [rsp+90h] [rbp-70h] BYREF
  int v133[2]; // [rsp+98h] [rbp-68h]
  void (__fastcall *v134)(__int64, unsigned int *); // [rsp+A0h] [rbp-60h]
  __int64 v135; // [rsp+A8h] [rbp-58h]
  int v136; // [rsp+B0h] [rbp-50h]
  _BYTE v137[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v138; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v139)(__int64, __int64); // [rsp+C8h] [rbp-38h]
  __int64 v140; // [rsp+D0h] [rbp-30h]
  int v141; // [rsp+D8h] [rbp-28h]
  _BYTE v142[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v143; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v144)(__int64, __int64); // [rsp+F0h] [rbp-10h]
  __int64 v145; // [rsp+F8h] [rbp-8h]
  int v146; // [rsp+100h] [rbp+0h]
  _BYTE v147[8]; // [rsp+108h] [rbp+8h] BYREF
  int v148[2]; // [rsp+110h] [rbp+10h]
  void (__fastcall *v149)(__int64, unsigned int *); // [rsp+118h] [rbp+18h]
  __int64 v150; // [rsp+120h] [rbp+20h]
  int v151; // [rsp+128h] [rbp+28h]
  unsigned int *v152; // [rsp+130h] [rbp+30h]
  struct _D3DKMT_DISPLAYMODE **v153; // [rsp+138h] [rbp+38h]
  _BYTE v154[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v155; // [rsp+148h] [rbp+48h]
  void (__fastcall *v156)(__int64, __int64); // [rsp+150h] [rbp+50h]
  __int64 v157; // [rsp+158h] [rbp+58h]
  int v158; // [rsp+160h] [rbp+60h]
  struct _D3DKMT_DISPLAYMODE v159; // [rsp+168h] [rbp+68h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v160; // [rsp+1A0h] [rbp+A0h] BYREF

  v3 = a2;
  v153 = a2;
  v152 = a3;
  v4 = a3;
  memset(&v160, 0, sizeof(v160));
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(
                                         *(DXGADAPTER **)a1,
                                         *(_DWORD *)(a1 + 12),
                                         &v160);
  v10 = PreferredMonitorSourceModeOnTarget;
  if ( PreferredMonitorSourceModeOnTarget < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v11[3] = *(_QWORD *)a1;
    v11[4] = *(unsigned int *)(a1 + 12);
    v11[5] = v10;
    WdLogEvent5_WdWarning(v11);
    return 0LL;
  }
  v13 = *(DXGADAPTER **)a1;
  v125 = 0LL;
  v14 = DxgkQueryDmmInterface(v13, v7, &v125);
  v18 = v14;
  if ( v14 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)a1;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v18;
  }
  v20 = v125;
  v21 = *(DXGADAPTER **)a1;
  v130 = 0LL;
  v22 = 0LL;
  *(_QWORD *)v124 = 0LL;
  v23 = *(__int64 (__fastcall **)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))(v125 + 40);
  v155 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v158 = 0;
  v154[0] = 0;
  v24 = v23(v21, v124, &v130);
  v28 = v24;
  if ( v24 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
    v29[3] = *(_QWORD *)a1;
    v29[4] = v28;
LABEL_13:
    WdLogEvent5_WdError(v29);
    goto LABEL_83;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v154,
    *(__int64 *)v124,
    *(_QWORD *)(v20 + 64),
    *(_QWORD *)a1);
  v22 = v155;
  v129 = 0LL;
  v128 = 0LL;
  v30 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v130)(v155, &v129, &v128);
  v28 = v30;
  if ( v30 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31, v33);
    v29[3] = v22;
    v34 = *(DXGADAPTER **)a1;
LABEL_16:
    v29[4] = v34;
    v29[5] = v28;
    goto LABEL_13;
  }
  v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v128 + 40))(
          v129,
          *(unsigned int *)(a1 + 8),
          *(unsigned int *)(a1 + 12),
          1LL,
          0,
          2);
  v28 = v35;
  if ( v35 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36, v38);
    v29[3] = *(unsigned int *)(a1 + 8);
    v29[4] = *(unsigned int *)(a1 + 12);
    v29[5] = v22;
    v29[6] = v28;
    goto LABEL_13;
  }
  VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)a1, *(unsigned int *)(a1 + 12), 0LL, v124);
  v28 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40, v42);
    v29[3] = v28;
    goto LABEL_13;
  }
  v43 = *(unsigned int *)(a1 + 8);
  v131 = 0LL;
  v125 = 0LL;
  v126 = (unsigned int)(v124[0] - 15) <= 2;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v44 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v130 + 8);
  v141 = 0;
  v137[0] = 0;
  v45 = v44(v22, v43, &v125, &v131);
  v28 = v45;
  if ( v45 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46, v48);
    v29[3] = v22;
    v34 = (DXGADAPTER *)*(unsigned int *)(a1 + 8);
    goto LABEL_16;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v137,
    v125,
    *(_QWORD *)(v130 + 16),
    v22);
  v49 = v138;
  v125 = 0LL;
  *(_QWORD *)v148 = 0LL;
  v50 = *(__int64 (__fastcall **)(__int64, __int64 *))(v131 + 8);
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0;
  v147[0] = 0;
  v51 = v50(v138, &v125);
  v28 = v51;
  if ( v51 < 0 )
  {
    v55 = WdLogNewEntry5_WdError(v53, v52, v54);
    *(_QWORD *)(v55 + 24) = v49;
    *(_QWORD *)(v55 + 32) = v28;
    WdLogEvent5_WdError(v55);
    goto LABEL_81;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
    (__int64)v147,
    v125,
    *(_QWORD *)(v131 + 32),
    v49);
  v57 = *(unsigned int **)v148;
  if ( !*(_QWORD *)v148 )
  {
LABEL_58:
    v107 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v107 )
    {
      v108 = 44 * v107;
      if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 0x2CuLL) )
        v108 = -1LL;
      v109 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v108, 0x4B677844u, PagedPool);
      *v3 = v109;
      if ( !v109 )
      {
        v113 = WdLogNewEntry5_WdLowResource(0LL, v110, v111, v112);
        *(_QWORD *)(v113 + 24) = 1722LL;
        WdLogEvent5_WdLowResource(v113);
        LODWORD(v28) = -1073741801;
        goto LABEL_79;
      }
      memset(v109, 0, 44LL * *(unsigned int *)(a1 + 40));
      UniqueModes = MODE_UNION_LIST::GetUniqueModes((const void **)(a1 + 24), *(unsigned int *)(a1 + 40), *v3, v4);
      v120 = UniqueModes;
      if ( UniqueModes < 0 )
      {
        v121 = WdLogNewEntry5_WdAssertion(v119, v118);
        *(_QWORD *)(v121 + 24) = v120;
        WdLogEvent5_WdAssertion(v121);
      }
      v49 = v138;
    }
    else
    {
      *v4 = 0;
    }
    LODWORD(v28) = 0;
    goto LABEL_79;
  }
  while ( 1 )
  {
    v58 = v57[1];
    if ( ((v58 - 1) & 0xFFFFFFFC) != 0 )
      goto LABEL_55;
    if ( v58 == 2 )
      goto LABEL_55;
    v59 = v57[2];
    if ( v59 != v57[4] )
      goto LABEL_55;
    v60 = v57[3];
    if ( v60 != v57[5]
      || v57[7] - 21 > 1
      || v59 != v160.VideoSignalInfo.ActiveSize.cx
      || v60 != v160.VideoSignalInfo.ActiveSize.cy )
    {
      goto LABEL_55;
    }
    LOBYTE(v56) = 1;
    v61 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v131 + 40))(v49, *v57, v56);
    v65 = v61;
    if ( v61 < 0 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v63, v62, v64);
      v66[3] = *v57;
      v66[4] = v49;
      v66[5] = v65;
      WdLogEvent5_WdWarning(v66);
      goto LABEL_55;
    }
    v67 = *(unsigned int *)(a1 + 12);
    v125 = 0LL;
    *(_QWORD *)v124 = 0LL;
    v68 = *(__int64 (__fastcall **)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))(v130 + 24);
    v143 = 0LL;
    v144 = 0LL;
    v145 = 0LL;
    v146 = 0;
    v142[0] = 0;
    v69 = v68(v22, v67, v124, &v125);
    v28 = v69;
    if ( v69 < 0 )
    {
      v116 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70, v72);
      v116[3] = v22;
      v116[4] = *(unsigned int *)(a1 + 12);
      v116[5] = v28;
LABEL_74:
      WdLogEvent5_WdError(v116);
      goto LABEL_79;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v142,
      *(__int64 *)v124,
      *(_QWORD *)(v130 + 32),
      v22);
    v73 = v143;
    *(_QWORD *)v124 = 0LL;
    *(_QWORD *)v133 = 0LL;
    v74 = *(__int64 (__fastcall **)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v125 + 8);
    v134 = 0LL;
    v135 = 0LL;
    v136 = 0;
    v132[0] = 0;
    v75 = v74(v143, v124);
    v28 = v75;
    if ( v75 < 0 )
    {
      v115 = WdLogNewEntry5_WdError(v77, v76, v78);
      *(_QWORD *)(v115 + 24) = v73;
      *(_QWORD *)(v115 + 32) = v28;
      WdLogEvent5_WdError(v115);
      goto LABEL_69;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v132,
      *(__int64 *)v124,
      *(_QWORD *)(v125 + 32),
      v73);
    v80 = *(unsigned int **)v133;
    if ( *(_QWORD *)v133 )
      break;
LABEL_50:
    v102 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v125 + 56))(v73, 0LL);
    v28 = v102;
    if ( v102 < 0 )
    {
LABEL_64:
      v114 = (_QWORD *)WdLogNewEntry5_WdError(v100, v99, v101);
      v114[4] = v28;
      v114[3] = v73;
LABEL_65:
      WdLogEvent5_WdError(v114);
      goto LABEL_66;
    }
    if ( v132[0] )
      v134(v135, v80);
    if ( v142[0] )
      v144(v145, v73);
LABEL_55:
    v125 = 0LL;
    v103 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v131 + 16))(v49, v57, &v125);
    v28 = v103;
    if ( v103 < 0 )
    {
      v116 = (_QWORD *)WdLogNewEntry5_WdError(v105, v104, v106);
      v116[3] = v49;
      v116[4] = v28;
      goto LABEL_74;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v147,
      v125,
      *(_QWORD *)(v131 + 32),
      v49);
    v57 = *(unsigned int **)v148;
    if ( !*(_QWORD *)v148 )
    {
      v4 = v152;
      v3 = v153;
      goto LABEL_58;
    }
  }
  while ( 1 )
  {
    LOBYTE(v79) = v126;
    v123[0] = 0;
    if ( (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, _BYTE *))(v125 + 80))(
           v80,
           &v160,
           v79,
           v123) < 0
      || !v123[0] )
    {
      goto LABEL_47;
    }
    LOBYTE(v81) = 1;
    v82 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v125 + 48))(v73, *v80, v81);
    v86 = v82;
    if ( v82 >= 0 )
      break;
    v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, v83, v85);
    v87[3] = *v80;
    v87[4] = v73;
    v87[5] = v86;
    WdLogEvent5_WdWarning(v87);
LABEL_47:
    *(_QWORD *)v124 = 0LL;
    v98 = (*(__int64 (__fastcall **)(__int64, unsigned int *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v125 + 16))(
            v73,
            v80,
            v124);
    v28 = v98;
    if ( v98 < 0 )
      goto LABEL_64;
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v132,
      *(__int64 *)v124,
      *(_QWORD *)(v125 + 32),
      v73);
    v80 = *(unsigned int **)v133;
    if ( !*(_QWORD *)v133 )
    {
      v49 = v138;
      goto LABEL_50;
    }
  }
  *(_QWORD *)v124 = 0LL;
  v88 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v128 + 24))(
          v129,
          *(unsigned int *)(a1 + 8),
          *(unsigned int *)(a1 + 12),
          v124);
  v28 = v88;
  if ( v88 < 0 )
    goto LABEL_63;
  v92 = *(_DWORD *)(*(_QWORD *)v124 + 16LL);
  (*(void (__fastcall **)(__int64))(v128 + 32))(v129);
  if ( (v92 & 1) == 0 )
    goto LABEL_47;
  LOBYTE(v122) = 1;
  v93 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v128 + 64))(
          v129,
          *(unsigned int *)(a1 + 8),
          *(unsigned int *)(a1 + 12),
          1LL,
          v122);
  v28 = v93;
  if ( v93 < 0
    || (*(_QWORD *)v124 = 0LL,
        v94 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v128 + 24))(
                v129,
                *(unsigned int *)(a1 + 8),
                *(unsigned int *)(a1 + 12),
                v124),
        v28 = v94,
        v94 < 0) )
  {
LABEL_63:
    v114 = (_QWORD *)WdLogNewEntry5_WdError(v90, v89, v91);
    v114[3] = *(unsigned int *)(a1 + 8);
    v114[4] = *(unsigned int *)(a1 + 12);
    v114[5] = v28;
    goto LABEL_65;
  }
  v95 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(*(_QWORD *)v124 + 24LL);
  (*(void (__fastcall **)(__int64))(v128 + 32))(v129);
  v96 = D3DKMDT_VOT_SVIDEO;
  v124[0] = D3DKMDT_VOT_SVIDEO;
  while ( 1 )
  {
    if ( BmlIsSupportedPathRotation(v96, v95) )
    {
      memset(&v159, 0, sizeof(v159));
      PopulateDisplayModeFromPresentPath(v57, v80, 1u, v124[0], 1, 1, 0, 2, (struct _D3DDDI_RATIONAL *)&v159, v127);
      LODWORD(v28) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 24), &v159);
      if ( (int)v28 < 0 )
        break;
      if ( v127[0] )
      {
        ++v159.IntegerRefreshRate;
        *(_DWORD *)&v159.Flags |= 2u;
        LODWORD(v28) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 24), &v159);
        if ( (int)v28 < 0 )
          break;
      }
    }
    v96 = v124[0] + 1;
    v124[0] = v96;
    if ( v96 > D3DKMDT_VOT_DVI )
    {
      v97 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v128 + 72))(
              v129,
              *(unsigned int *)(a1 + 8),
              *(unsigned int *)(a1 + 12),
              0LL);
      v28 = v97;
      if ( v97 < 0 )
        goto LABEL_63;
      goto LABEL_47;
    }
  }
LABEL_66:
  if ( v132[0] )
    v134(v135, v80);
  v49 = v138;
LABEL_69:
  if ( v142[0] )
    v144(v145, v73);
LABEL_79:
  if ( v147[0] )
    v149(v150, v57);
LABEL_81:
  if ( v137[0] )
    v139(v140, v49);
LABEL_83:
  if ( v154[0] )
    v156(v157, v22);
  return (unsigned int)v28;
}
