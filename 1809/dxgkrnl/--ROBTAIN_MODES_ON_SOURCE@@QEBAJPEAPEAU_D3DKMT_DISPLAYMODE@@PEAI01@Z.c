/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00E2DB0
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C012033C (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000292C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C000F5FC (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000F618 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000F75C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C00181D4 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C00396F0 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     _UpgradeDispModeFlags @ 0x1C00B23E0 (_UpgradeDispModeFlags.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00BAC28 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00C25BC (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C00E3A30 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C00E3B50 (_PopulateDisplayModeFromPresentPath.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00E3DF8 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00E3EF4 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0120730 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v6; // ebx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v7; // r12d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r8
  DXGADAPTER *v16; // rdi
  int VideoOutputTechnology; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64, __int64, __int64 *, __int64 *); // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, __int64 *); // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned int *v33; // r15
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 (__fastcall *v42)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *); // rax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 (__fastcall *v46)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **); // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 i; // rdx
  __int64 v50; // rbx
  char v51; // al
  int *v52; // rdx
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int *v58; // r13
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rbx
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v72; // edi
  char v73; // al
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rcx
  unsigned int v81; // ebx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v82; // eax
  __int32 v83; // eax
  __int64 v84; // rcx
  __int32 v85; // eax
  __int32 v86; // eax
  unsigned int v87; // eax
  char v88; // al
  __int32 v89; // eax
  int v90; // r8d
  unsigned int v91; // eax
  char v92; // cl
  char v93; // dl
  struct _D3DKMT_DISPLAYMODE *Mode; // rax
  void **v95; // r11
  struct _D3DKMT_DISPLAYMODE *v96; // r10
  __int64 v97; // rcx
  int v98; // eax
  int v99; // eax
  __int64 v100; // rcx
  int v101; // eax
  int v102; // eax
  __int64 v103; // rcx
  struct _D3DKMT_DISPLAYMODE **v104; // rbx
  struct _D3DKMT_DISPLAYMODE *v105; // r8
  unsigned int v106; // eax
  SIZE_T v107; // rax
  unsigned __int64 v108; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v109; // rax
  int UniqueModes; // eax
  __int64 v111; // rcx
  __int64 v112; // rbx
  struct _D3DKMT_DISPLAYMODE **v113; // rbx
  int v115; // eax
  char v116; // cl
  __int64 v117; // rdx
  int v118; // eax
  __int64 v119; // rcx
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int32 v130; // eax
  __int32 v131; // eax
  int v132; // eax
  __int64 v133; // rcx
  int v134; // eax
  __int64 v135; // rcx
  _QWORD *v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rax
  _QWORD *v139; // rcx
  _QWORD *v140; // rdx
  __int64 v141; // rax
  __int64 v142; // rcx
  _QWORD *v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rcx
  SIZE_T v147; // rax
  struct _D3DKMT_DISPLAYMODE *v148; // rax
  __int64 v149; // rax
  int v150; // eax
  __int64 v151; // rcx
  __int64 v152; // rbx
  __int64 v153; // rax
  _QWORD *v154; // rax
  int v155; // [rsp+20h] [rbp-E0h]
  char v156; // [rsp+50h] [rbp-B0h] BYREF
  char v157; // [rsp+51h] [rbp-AFh]
  bool v158; // [rsp+52h] [rbp-AEh]
  char v159; // [rsp+53h] [rbp-ADh] BYREF
  unsigned __int8 v160[4]; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v161[2]; // [rsp+58h] [rbp-A8h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v162; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v163; // [rsp+60h] [rbp-A0h] BYREF
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v165; // [rsp+70h] [rbp-90h] BYREF
  __int64 v166; // [rsp+78h] [rbp-88h] BYREF
  int v167; // [rsp+80h] [rbp-80h] BYREF
  char v168[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v169; // [rsp+90h] [rbp-70h]
  void (__fastcall *v170)(__int64, __int64); // [rsp+98h] [rbp-68h]
  __int64 v171; // [rsp+A0h] [rbp-60h]
  int v172; // [rsp+A8h] [rbp-58h]
  void **v173; // [rsp+B0h] [rbp-50h]
  char *v174; // [rsp+B8h] [rbp-48h]
  __int64 v175; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v176; // [rsp+C8h] [rbp-38h] BYREF
  char v177[8]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v178; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v179)(__int64, unsigned int *); // [rsp+E0h] [rbp-20h]
  __int64 v180; // [rsp+E8h] [rbp-18h]
  int v181; // [rsp+F0h] [rbp-10h]
  char v182[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v183; // [rsp+100h] [rbp+0h]
  void (__fastcall *v184)(__int64, __int64); // [rsp+108h] [rbp+8h]
  __int64 v185; // [rsp+110h] [rbp+10h]
  int v186; // [rsp+118h] [rbp+18h]
  char v187[8]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v188; // [rsp+128h] [rbp+28h]
  void (__fastcall *v189)(__int64, unsigned int *); // [rsp+130h] [rbp+30h]
  __int64 v190; // [rsp+138h] [rbp+38h]
  int v191; // [rsp+140h] [rbp+40h]
  _D3DKMT_DISPLAYMODE v192; // [rsp+148h] [rbp+48h] BYREF
  DXGADAPTER *v193; // [rsp+178h] [rbp+78h]
  struct _D3DKMT_DISPLAYMODE *v194; // [rsp+180h] [rbp+80h]
  struct _D3DKMT_DISPLAYMODE **v195; // [rsp+188h] [rbp+88h]
  unsigned int *v196; // [rsp+190h] [rbp+90h]
  unsigned int *v197; // [rsp+198h] [rbp+98h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v198; // [rsp+1A0h] [rbp+A0h] BYREF

  v197 = a5;
  v173 = a4;
  v6 = 0;
  v196 = a3;
  v195 = a2;
  v7 = -1;
  v8 = D3DKMDT_VOT_BNC|D3DKMDT_VOT_INDIRECT_WIRED|D3DKMDT_VOT_UDI_EXTERNAL|0xE0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = *(unsigned int *)(a1 + 40);
    v11 = *(_QWORD *)(a1 + 24);
    Rotation[0] = -1;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *))(v9 + 8))(
            v11,
            v10,
            v6,
            Rotation);
    v14 = v12;
    if ( v12 < 0 )
    {
      v154 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13);
      v154[3] = v14;
      v154[4] = *(unsigned int *)(a1 + 40);
      v154[5] = v6;
      WdLogEvent5_WdAssertion(v154);
      return (unsigned int)v14;
    }
    v15 = (unsigned int)Rotation[0];
    if ( Rotation[0] == -1 )
      break;
    ++*(_DWORD *)(a1 + 52);
    v117 = *(unsigned int *)(a1 + 40);
    v162 = D3DKMDT_VOT_HD15;
    v161[0] = -1;
    v118 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int16 *))(*(_QWORD *)(a1 + 32) + 112LL))(
             *(_QWORD *)(a1 + 24),
             v117,
             v15,
             &v162,
             v161);
    v14 = v118;
    if ( v118 < 0 )
    {
      v120 = (_QWORD *)WdLogNewEntry5_WdError(v119);
      v120[4] = (unsigned int)v7;
      v120[3] = v14;
      v120[5] = *(unsigned int *)(a1 + 40);
      WdLogEvent5_WdError(v120);
      return (unsigned int)v14;
    }
    if ( v7 == -1 || v162 < v8 )
    {
      v7 = Rotation[0];
      v8 = v162;
      *(_DWORD *)(a1 + 48) = v6;
    }
    ++v6;
  }
  if ( v7 == -1 && *(_DWORD *)(a1 + 52) )
  {
    v121 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v121 + 24) = 541LL;
    WdLogEvent5_WdAssertion(v121);
  }
  v16 = *(DXGADAPTER **)a1;
  v193 = *(DXGADAPTER **)a1;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v193, v7, 0LL, &v162);
  v19 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    v122 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v122 + 24) = v19;
    WdLogEvent5_WdError(v122);
    return (unsigned int)v19;
  }
  else
  {
    v158 = (unsigned int)v162 >= D3DKMDT_VOT_MIRACAST
        && (unsigned int)v162 <= (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED);
    if ( *((_QWORD *)v16 + 316)
      || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*((ADAPTER_DISPLAY **)v16 + 315)),
          v157 = 1,
          !DisplayOnlyDriverUseRawModes) )
    {
      v157 = 0;
    }
    if ( (int)DmmGetPreferredMonitorSourceModeOnTarget(*(DXGADAPTER **)a1, v7, &v198) < 0 )
      memset(&v198, 0, sizeof(v198));
    v20 = *(_QWORD *)(a1 + 16);
    v21 = *(unsigned int *)(a1 + 40);
    v22 = *(_QWORD *)(a1 + 8);
    v166 = 0LL;
    v163 = 0LL;
    v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v20 + 8);
    v183 = 0LL;
    v184 = 0LL;
    v185 = 0LL;
    v186 = 0;
    v182[0] = 0;
    v24 = v23(v22, v21, &v163, &v166);
    v26 = v24;
    if ( v24 < 0 )
    {
      v124 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v124 + 24) = v26;
      WdLogEvent5_WdError(v124);
    }
    else
    {
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v182,
        v163,
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
        *(_QWORD *)(a1 + 8));
      v27 = v183;
      v163 = 0LL;
      v188 = 0LL;
      v28 = *(__int64 (__fastcall **)(__int64, __int64 *))(v166 + 8);
      v189 = 0LL;
      v190 = 0LL;
      v191 = 0;
      v187[0] = 0;
      v29 = v28(v183, &v163);
      v26 = v29;
      if ( v29 < 0 )
      {
        v125 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v125 + 24) = v26;
        WdLogEvent5_WdError(v125);
      }
      else
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v187,
          v163,
          *(_QWORD *)(v166 + 32),
          v27);
        v31 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8));
        v33 = v188;
        *(_BYTE *)(v31 + 296) = 1;
        if ( v33 )
        {
          do
          {
            v34 = v33[1];
            if ( ((v34 - 1) & 0xFFFFFFFC) == 0 && v34 != 2 && v33[2] == v33[4] && v33[3] == v33[5] )
            {
              LOBYTE(v32) = 1;
              v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v166 + 40))(v27, *v33, v32);
              v39 = v35;
              if ( v35 < 0 )
              {
                v126 = WdLogNewEntry5_WdWarning(v37, v36, v38);
                *(_QWORD *)(v126 + 24) = v39;
                *(_QWORD *)(v126 + 32) = *v33;
                WdLogEvent5_WdWarning(v126);
              }
              else
              {
                v40 = *(_QWORD *)(a1 + 16);
                v41 = *(_QWORD *)(a1 + 8);
                v163 = 0LL;
                v165 = 0LL;
                v42 = *(__int64 (__fastcall **)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *))(v40 + 24);
                v169 = 0LL;
                v170 = 0LL;
                v171 = 0LL;
                v172 = 0;
                v168[0] = 0;
                v43 = v42(v41, (unsigned int)v7, &v165, &v163);
                v26 = v43;
                if ( v43 < 0 )
                  goto LABEL_163;
                DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
                  (__int64)v168,
                  (__int64)v165,
                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
                  *(_QWORD *)(a1 + 8));
                v45 = v169;
                v165 = 0LL;
                v178 = 0LL;
                v46 = *(__int64 (__fastcall **)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v163 + 8);
                v179 = 0LL;
                v180 = 0LL;
                v181 = 0;
                v177[0] = 0;
                v47 = v46(v169, &v165);
                v26 = v47;
                if ( v47 < 0 )
                {
                  v141 = WdLogNewEntry5_WdError(v48);
                  *(_QWORD *)(v141 + 24) = v26;
                  WdLogEvent5_WdError(v141);
                  goto LABEL_160;
                }
                for ( i = (__int64)v165; ; i = v175 )
                {
                  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                    (__int64)v177,
                    i,
                    *(_QWORD *)(v163 + 32),
                    v45);
                  v58 = v178;
                  if ( !v178 )
                    break;
                  LOBYTE(v57) = 1;
                  v59 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v163 + 48))(v45, *v178, v57);
                  v63 = v59;
                  if ( v59 >= 0 )
                  {
                    if ( v33[1] - 3 <= 1 || v157 )
                    {
                      v159 = 1;
                      v167 = 0;
                      goto LABEL_36;
                    }
                    v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v163 + 64))(
                            v45,
                            *v58,
                            &v159,
                            &v167);
                    v26 = v64;
                    if ( v64 == -1071774920 )
                    {
                      v128 = WdLogNewEntry5_WdTrace(v66, v65, v62, v67);
                      *(_QWORD *)(v128 + 24) = (unsigned int)v7;
                      *(_QWORD *)(v128 + 32) = *(unsigned int *)(a1 + 40);
                      goto LABEL_36;
                    }
                    if ( v64 < 0 )
                    {
                      v138 = WdLogNewEntry5_WdError(v66);
                      *(_QWORD *)(v138 + 32) = v58;
                    }
                    else
                    {
LABEL_36:
                      v156 = 0;
                      if ( v198.VideoSignalInfo.ActiveSize.cx == v33[2] && v198.VideoSignalInfo.ActiveSize.cy == v33[3] )
                      {
                        LOBYTE(v62) = v158;
                        v115 = (*(__int64 (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v163 + 80))(
                                 v58,
                                 &v198,
                                 v62,
                                 &v156);
                        v116 = v156;
                        if ( v115 < 0 )
                          v116 = 0;
                        v156 = v116;
                      }
                      v68 = *(_QWORD *)(a1 + 32);
                      v69 = *(unsigned int *)(a1 + 40);
                      v70 = *(_QWORD *)(a1 + 24);
                      v165 = 0LL;
                      v71 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v68 + 24))(
                              v70,
                              v69,
                              (unsigned int)v7,
                              &v165);
                      v26 = v71;
                      if ( v71 >= 0 )
                      {
                        v72 = v165[4];
                        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
                        if ( v33[2] == v58[5] && v33[3] == v58[6] )
                          v73 = (char)v72;
                        else
                          v73 = -((*(_BYTE *)&v72 & 0x1E) != 0);
                        v51 = v73 & 1;
                        LODWORD(v165) = 0;
                        v52 = (int *)&unk_1C0068BB0;
                        LOBYTE(v161[0]) = v51;
                        v174 = (char *)&unk_1C0068BB0;
                        while ( 1 )
                        {
                          if ( !v51 )
                            goto LABEL_26;
                          v50 = *v52;
                          v162 = (int)v50;
                          if ( !BmlIsSupportedPathScaling((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v50, v72) )
                            goto LABEL_25;
                          LOBYTE(v155) = 1;
                          v74 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32)
                                                                                               + 64LL))(
                                  *(_QWORD *)(a1 + 24),
                                  *(unsigned int *)(a1 + 40),
                                  (unsigned int)v7,
                                  (unsigned int)v50,
                                  v155);
                          v26 = v74;
                          if ( v74 < 0 )
                          {
                            v136 = (_QWORD *)WdLogNewEntry5_WdError(v75);
                            v136[3] = v26;
                            v136[4] = *(unsigned int *)(a1 + 40);
                            v136[5] = (unsigned int)v7;
                            v136[6] = *(_QWORD *)(a1 + 24);
                            v136[7] = v50;
                            goto LABEL_151;
                          }
                          v76 = *(_QWORD *)(a1 + 32);
                          v77 = *(unsigned int *)(a1 + 40);
                          v78 = *(_QWORD *)(a1 + 24);
                          *(_QWORD *)Rotation = 0LL;
                          v79 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *))(v76 + 24))(
                                  v78,
                                  v77,
                                  (unsigned int)v7,
                                  Rotation);
                          v26 = v79;
                          if ( v79 < 0 )
                          {
                            v136 = (_QWORD *)WdLogNewEntry5_WdError(v80);
                            v136[3] = v26;
                            goto LABEL_151;
                          }
                          v81 = *(_DWORD *)(*(_QWORD *)Rotation + 24LL);
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
                          v82 = D3DKMDT_VPPR_IDENTITY;
                          Rotation[0] = D3DKMDT_VPPR_IDENTITY;
                          do
                          {
                            v83 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v82) - 1;
                            if ( v83 )
                            {
                              v85 = v83 - 1;
                              if ( v85 )
                              {
                                v86 = v85 - 1;
                                if ( v86 )
                                {
                                  if ( v86 != 1 )
                                    goto LABEL_129;
                                  v87 = v81 >> 3;
                                }
                                else
                                {
                                  v87 = v81 >> 2;
                                }
                              }
                              else
                              {
                                v87 = v81 >> 1;
                              }
                              v88 = v87 & 1;
                            }
                            else
                            {
                              if ( (v81 & 1) != 0 )
                                goto LABEL_50;
                              v88 = 0;
                            }
                            if ( !v88 )
                              goto LABEL_65;
LABEL_50:
                            v89 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(Rotation[0]) - 1;
                            if ( v89 )
                            {
                              v130 = v89 - 1;
                              if ( v130 )
                              {
                                v131 = v130 - 1;
                                if ( v131 )
                                {
                                  if ( v131 != 1 )
                                  {
LABEL_129:
                                    v129 = WdLogNewEntry5_WdAssertion(v84);
                                    *(_QWORD *)(v129 + 24) = Rotation[0];
                                    WdLogEvent5_WdAssertion(v129);
                                    goto LABEL_65;
                                  }
                                  v91 = v81 >> 7;
                                }
                                else
                                {
                                  v91 = v81 >> 6;
                                }
                              }
                              else
                              {
                                v91 = v81 >> 5;
                              }
                            }
                            else
                            {
                              v91 = v81 >> 4;
                            }
                            if ( (v91 & 1) != 0 )
                            {
                              v92 = 0;
                              if ( *((_QWORD *)v193 + 316)
                                || !*(_BYTE *)(*((_QWORD *)v193 + 315) + 132LL)
                                || (v93 = 0, v90 == 1) )
                              {
                                v93 = 1;
                              }
                              if ( v156 && v162 == D3DKMDT_VOT_SVIDEO )
                                v92 = 1;
                              PopulateDisplayModeFromPresentPath(
                                (int)v33,
                                (int)v58,
                                v162,
                                v90,
                                v159,
                                v92,
                                v93,
                                v167,
                                (__int64)&v192,
                                v160);
                              Mode = MODE_UNION_LIST::FindMode((MODE_UNION_LIST *)(a1 + 64), &v192);
                              v95 = 0LL;
                              v194 = Mode;
                              v96 = Mode;
                              if ( !Mode || (UpgradeDispModeFlags((__int64)Mode, (__int64)&v192), v160[0] != (_BYTE)v95) )
                              {
                                if ( *(_DWORD *)(a1 + 52) > 1u )
                                {
                                  LOBYTE(v155) = (_BYTE)v95;
                                  v132 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32) + 80LL))(
                                           *(_QWORD *)(a1 + 24),
                                           *(unsigned int *)(a1 + 40),
                                           (unsigned int)v7,
                                           (unsigned int)Rotation[0],
                                           v155);
                                  v95 = 0LL;
                                  v26 = v132;
                                  if ( v132 < 0 )
                                  {
                                    v136 = (_QWORD *)WdLogNewEntry5_WdError(v133);
                                    v136[3] = v26;
                                    v136[4] = *(unsigned int *)(a1 + 40);
                                    v136[5] = (unsigned int)v7;
                                    v136[6] = *(_QWORD *)(a1 + 24);
                                    v136[7] = Rotation[0];
                                    goto LABEL_151;
                                  }
                                  v96 = v194;
                                }
                                if ( v192.Format != D3DDDIFMT_A8R8G8B8 && *(_BYTE *)(a1 + 44) != (_BYTE)v95
                                  || v192.Format <= (unsigned int)D3DDDIFMT_P8
                                  && (v97 = 0x20003900000LL, _bittest64(&v97, v192.Format)) )
                                {
                                  if ( v173 == v95 )
                                    goto LABEL_65;
                                  MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 96), &v192);
                                  goto LABEL_107;
                                }
                                if ( !v96 )
                                {
                                  v98 = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v192);
                                  LOBYTE(v95) = 0;
                                  LODWORD(v26) = v98;
                                  if ( v98 < 0 )
                                    goto LABEL_152;
                                }
                                if ( v160[0] != (_BYTE)v95 )
                                {
                                  ++v192.IntegerRefreshRate;
                                  *(_DWORD *)&v192.Flags |= 2u;
                                  LODWORD(v26) = MODE_UNION_LIST::AddMode((MODE_UNION_LIST *)(a1 + 64), &v192);
LABEL_107:
                                  if ( (int)v26 < 0 )
                                    goto LABEL_152;
                                }
                              }
                            }
LABEL_65:
                            v82 = Rotation[0] + 1;
                            Rotation[0] = v82;
                          }
                          while ( v82 <= D3DKMDT_VPPR_ROTATE270 );
                          if ( *(_DWORD *)(a1 + 52) > 1u )
                          {
                            v134 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32)
                                                                                             + 88LL))(
                                     *(_QWORD *)(a1 + 24),
                                     *(unsigned int *)(a1 + 40),
                                     (unsigned int)v7,
                                     0LL);
                            v26 = v134;
                            if ( v134 < 0 )
                            {
                              v136 = (_QWORD *)WdLogNewEntry5_WdError(v135);
                              v136[3] = v26;
                              v136[4] = *(_QWORD *)(a1 + 24);
                              v137 = *(unsigned int *)(a1 + 40);
                              goto LABEL_149;
                            }
                          }
LABEL_25:
                          v51 = v161[0];
                          v52 = (int *)(v174 + 4);
                          LODWORD(v165) = (_DWORD)v165 + 1;
                          v174 += 4;
                          if ( (unsigned int)v165 >= 5 )
                          {
LABEL_26:
                            v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 72LL))(
                                    *(_QWORD *)(a1 + 24),
                                    *(unsigned int *)(a1 + 40),
                                    (unsigned int)v7,
                                    0LL);
                            v26 = v53;
                            if ( v53 >= 0 )
                            {
                              v45 = v169;
                              goto LABEL_28;
                            }
                            v136 = (_QWORD *)WdLogNewEntry5_WdError(v54);
                            v136[3] = v26;
                            v136[4] = *(unsigned int *)(a1 + 40);
                            v137 = *(_QWORD *)(a1 + 24);
LABEL_149:
                            v136[5] = v137;
                            v136[6] = (unsigned int)v7;
LABEL_151:
                            WdLogEvent5_WdError(v136);
LABEL_152:
                            v45 = v169;
LABEL_153:
                            if ( v177[0] )
                              v179(v180, v58);
LABEL_160:
                            if ( v168[0] )
                              v170(v171, v45);
                            v27 = v183;
                            goto LABEL_91;
                          }
                        }
                      }
LABEL_155:
                      v138 = WdLogNewEntry5_WdError(v56);
                    }
                    *(_QWORD *)(v138 + 24) = v26;
                    v139 = (_QWORD *)v138;
LABEL_157:
                    WdLogEvent5_WdError(v139);
                    goto LABEL_153;
                  }
                  v127 = WdLogNewEntry5_WdWarning(v61, v60, v62);
                  *(_QWORD *)(v127 + 24) = v63;
                  *(_QWORD *)(v127 + 32) = *v58;
                  WdLogEvent5_WdWarning(v127);
LABEL_28:
                  v175 = 0LL;
                  v55 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v163 + 16))(v45, v58, &v175);
                  v26 = v55;
                  if ( v55 < 0 )
                    goto LABEL_155;
                }
                v99 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v163 + 56))(v45, 0LL);
                v26 = v99;
                if ( v99 < 0 )
                {
                  v140 = (_QWORD *)WdLogNewEntry5_WdError(v100);
                  v140[3] = v26;
                  v140[4] = v45;
                  v140[5] = 0xFFFFFFFFLL;
                  v139 = v140;
                  goto LABEL_157;
                }
                if ( v177[0] )
                  v179(v180, 0LL);
                if ( v168[0] )
                  v170(v171, v45);
                v27 = v183;
              }
            }
            v176 = 0LL;
            v101 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v166 + 16))(v27, v33, &v176);
            v26 = v101;
            if ( v101 < 0 )
            {
LABEL_163:
              v142 = WdLogNewEntry5_WdError(v44);
              *(_QWORD *)(v142 + 24) = v26;
LABEL_164:
              WdLogEvent5_WdError(v142);
              goto LABEL_91;
            }
            DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
              (__int64)v187,
              v176,
              *(_QWORD *)(v166 + 32),
              v27);
            v33 = v188;
          }
          while ( v188 );
        }
        v102 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v166 + 48))(v27, 0LL);
        v26 = v102;
        if ( v102 < 0 )
        {
          v143 = (_QWORD *)WdLogNewEntry5_WdError(v103);
          v143[3] = v26;
          v143[4] = v27;
          v142 = (__int64)v143;
          v143[5] = 0xFFFFFFFFLL;
          goto LABEL_164;
        }
        LODWORD(v26) = 0;
        *(_BYTE *)(ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8)) + 296) = 0;
        v104 = v195;
        v105 = *v195;
        if ( !*v195 )
        {
          v106 = *(_DWORD *)(a1 + 80);
          v105 = 0LL;
          if ( v106 )
          {
            v108 = v106;
            v107 = 44LL * v106;
            if ( !is_mul_ok(v108, 0x2CuLL) )
              v107 = -1LL;
            v109 = (struct _D3DKMT_DISPLAYMODE *)operator new(v107, 0x4B677844u, PagedPool);
            *v104 = v109;
            if ( !v109 )
            {
              v144 = WdLogNewEntry5_WdLowResource(0LL);
              *(_QWORD *)(v144 + 24) = 1061LL;
              WdLogEvent5_WdLowResource(v144);
              LODWORD(v26) = -1073741801;
              goto LABEL_91;
            }
            memset(v109, 0, 44LL * *(unsigned int *)(a1 + 80));
            v105 = *v104;
          }
        }
        UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                        (MODE_UNION_LIST *)(a1 + 64),
                        *(unsigned int *)(a1 + 80),
                        v105,
                        v196);
        v112 = UniqueModes;
        if ( UniqueModes < 0 )
        {
          v145 = WdLogNewEntry5_WdAssertion(v111);
          *(_QWORD *)(v145 + 24) = v112;
          WdLogEvent5_WdAssertion(v145);
        }
        v113 = (struct _D3DKMT_DISPLAYMODE **)v173;
        if ( v173 )
        {
          if ( *v173 )
          {
            operator delete[](*v173);
            *v113 = 0LL;
          }
          v146 = *(unsigned int *)(a1 + 112);
          if ( (_DWORD)v146 )
          {
            v147 = 44 * v146;
            if ( !is_mul_ok(*(unsigned int *)(a1 + 112), 0x2CuLL) )
              v147 = -1LL;
            v148 = (struct _D3DKMT_DISPLAYMODE *)operator new(v147, 0x4B677844u, PagedPool);
            *v113 = v148;
            if ( v148 )
            {
              memset(v148, 0, 44LL * *(unsigned int *)(a1 + 112));
              v150 = MODE_UNION_LIST::GetUniqueModes(
                       (MODE_UNION_LIST *)(a1 + 96),
                       *(unsigned int *)(a1 + 112),
                       *v113,
                       v197);
              v152 = v150;
              if ( v150 < 0 )
              {
                v153 = WdLogNewEntry5_WdAssertion(v151);
                *(_QWORD *)(v153 + 24) = v152;
                WdLogEvent5_WdAssertion(v153);
              }
            }
            else
            {
              v149 = WdLogNewEntry5_WdLowResource(0LL);
              *(_QWORD *)(v149 + 24) = 1093LL;
              WdLogEvent5_WdLowResource(v149);
            }
          }
        }
LABEL_91:
        if ( v187[0] )
          v189(v190, v33);
      }
      if ( v182[0] )
        v184(v185, v27);
    }
    return (unsigned int)v26;
  }
}
