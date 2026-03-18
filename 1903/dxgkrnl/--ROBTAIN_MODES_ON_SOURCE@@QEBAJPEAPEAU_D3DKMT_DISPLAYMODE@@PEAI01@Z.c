/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C016D40C
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C016CFF0 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002118 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003CE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045F8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C001FC78 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C003F98C (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00D2D84 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0128718 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C012AAFC (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C016DD3C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C016DF24 (_PopulateDisplayModeFromPresentPath.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C016E32C (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r12d
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  unsigned int v17; // r15d
  DXGADAPTER *v18; // rdi
  int VideoOutputTechnology; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 (__fastcall *v27)(__int64, __int64, __int64 *, __int64 *); // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 (__fastcall *v34)(__int64, __int64 *); // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned int *v41; // r12
  unsigned int v42; // ecx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 (__fastcall *v50)(__int64, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdi
  __int64 (__fastcall *v56)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *); // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 i; // rdx
  __int64 v62; // rbx
  char v63; // al
  int *v64; // rdx
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r8
  unsigned int *v74; // r13
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rbx
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  int v86; // eax
  unsigned int v87; // edi
  char v88; // al
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  unsigned int v100; // ebx
  int v101; // esi
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  int v105; // eax
  int v106; // eax
  unsigned int v107; // eax
  char v108; // al
  int v109; // eax
  unsigned int v110; // eax
  char v111; // cl
  char v112; // dl
  __int64 v113; // rcx
  int v114; // eax
  __int64 v115; // r8
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  int v120; // eax
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  struct _D3DKMT_DISPLAYMODE **v125; // rbx
  struct _D3DKMT_DISPLAYMODE *v126; // r8
  unsigned int v127; // eax
  SIZE_T v128; // rax
  unsigned __int64 v129; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  int UniqueModes; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rbx
  struct _D3DKMT_DISPLAYMODE **v138; // rbx
  int v140; // eax
  char v141; // cl
  __int64 v142; // rdx
  int v143; // eax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  _QWORD *v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  int v157; // eax
  int v158; // eax
  int v159; // eax
  __int64 v160; // rdx
  __int64 v161; // rcx
  int v162; // eax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  _QWORD *v166; // rax
  __int64 v167; // rcx
  __int64 v168; // rax
  _QWORD *v169; // rcx
  _QWORD *v170; // rdx
  __int64 v171; // rax
  __int64 v172; // rcx
  _QWORD *v173; // rdx
  __int64 v174; // rax
  __int64 v175; // rax
  unsigned __int64 v176; // rcx
  SIZE_T v177; // rax
  struct _D3DKMT_DISPLAYMODE *v178; // rax
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rax
  int v183; // eax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rbx
  __int64 v187; // rax
  _QWORD *v188; // rax
  int v189; // [rsp+20h] [rbp-E0h]
  char v190; // [rsp+50h] [rbp-B0h] BYREF
  char v191; // [rsp+51h] [rbp-AFh]
  char v192; // [rsp+52h] [rbp-AEh] BYREF
  char v193; // [rsp+53h] [rbp-ADh]
  bool v194; // [rsp+54h] [rbp-ACh]
  unsigned __int8 v195[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v196; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v197; // [rsp+68h] [rbp-98h] BYREF
  int v198; // [rsp+70h] [rbp-90h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v199[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v200; // [rsp+80h] [rbp-80h]
  __int64 v201; // [rsp+88h] [rbp-78h] BYREF
  int v202; // [rsp+90h] [rbp-70h] BYREF
  char v203[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v204; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v205)(__int64, __int64, __int64); // [rsp+A8h] [rbp-58h]
  __int64 v206; // [rsp+B0h] [rbp-50h]
  int v207; // [rsp+B8h] [rbp-48h]
  char *v208; // [rsp+C0h] [rbp-40h]
  __int64 v209; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v210; // [rsp+D0h] [rbp-30h] BYREF
  void **v211; // [rsp+D8h] [rbp-28h]
  char v212[8]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v213; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v214)(__int64, unsigned int *, __int64); // [rsp+F0h] [rbp-10h]
  __int64 v215; // [rsp+F8h] [rbp-8h]
  int v216; // [rsp+100h] [rbp+0h]
  char v217[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v218; // [rsp+110h] [rbp+10h]
  void (__fastcall *v219)(__int64, __int64); // [rsp+118h] [rbp+18h]
  __int64 v220; // [rsp+120h] [rbp+20h]
  int v221; // [rsp+128h] [rbp+28h]
  char v222[8]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v223; // [rsp+138h] [rbp+38h]
  void (__fastcall *v224)(__int64, unsigned int *); // [rsp+140h] [rbp+40h]
  __int64 v225; // [rsp+148h] [rbp+48h]
  int v226; // [rsp+150h] [rbp+50h]
  DXGADAPTER *v227; // [rsp+158h] [rbp+58h]
  struct _D3DKMT_DISPLAYMODE **v228; // [rsp+160h] [rbp+60h]
  unsigned int *v229; // [rsp+168h] [rbp+68h]
  unsigned int *v230; // [rsp+170h] [rbp+70h]
  struct _D3DKMT_DISPLAYMODE v231; // [rsp+178h] [rbp+78h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v232; // [rsp+1B0h] [rbp+B0h] BYREF

  v230 = a5;
  v211 = a4;
  v6 = 0;
  v229 = a3;
  v228 = a2;
  v7 = -1;
  v200 = -1;
  v8 = 255;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = *(unsigned int *)(a1 + 40);
    v11 = *(_QWORD *)(a1 + 24);
    LODWORD(v197) = -1;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(v9 + 8))(v11, v10, v6, &v197);
    v15 = v12;
    if ( v12 < 0 )
    {
      v188 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v13);
      v188[3] = v15;
      v188[4] = *(unsigned int *)(a1 + 40);
      v188[5] = v6;
      WdLogEvent5_WdAssertion(v188);
      return (unsigned int)v15;
    }
    v16 = (unsigned int)v197;
    if ( (_DWORD)v197 == -1 )
      break;
    ++*(_DWORD *)(a1 + 52);
    v142 = *(unsigned int *)(a1 + 40);
    v198 = 0;
    *(_WORD *)v195 = -1;
    v143 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, unsigned __int8 *))(*(_QWORD *)(a1 + 32) + 112LL))(
             *(_QWORD *)(a1 + 24),
             v142,
             v16,
             &v198,
             v195);
    v15 = v143;
    if ( v143 < 0 )
    {
      v147 = (_QWORD *)WdLogNewEntry5_WdError(v145, v144, v146);
      v147[4] = v7;
      v147[3] = v15;
      v147[5] = *(unsigned int *)(a1 + 40);
      WdLogEvent5_WdError(v147);
      return (unsigned int)v15;
    }
    if ( v7 == -1 || v198 < v8 )
    {
      v7 = v197;
      v8 = v198;
      v200 = v197;
      *(_DWORD *)(a1 + 48) = v6;
    }
    ++v6;
  }
  v17 = v200;
  if ( v200 == -1 && *(_DWORD *)(a1 + 52) )
  {
    v148 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v148 + 24) = 610LL;
    WdLogEvent5_WdAssertion(v148);
  }
  v18 = *(DXGADAPTER **)a1;
  v227 = *(DXGADAPTER **)a1;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v227, v17, 0LL, v199);
  v23 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    v149 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v149 + 24) = v23;
    WdLogEvent5_WdError(v149);
    return (unsigned int)v23;
  }
  else
  {
    v194 = (unsigned int)(v199[0] - 15) <= 2;
    if ( *((_QWORD *)v18 + 320)
      || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(
                                           *((ADAPTER_DISPLAY **)v18 + 319),
                                           v20),
          v191 = 1,
          !DisplayOnlyDriverUseRawModes) )
    {
      v191 = 0;
    }
    memset(&v232, 0, sizeof(v232));
    if ( (int)DmmGetPreferredMonitorSourceModeOnTarget(*(DXGADAPTER **)a1, v17, &v232) < 0 )
      memset(&v232, 0, sizeof(v232));
    v24 = *(_QWORD *)(a1 + 16);
    v25 = *(unsigned int *)(a1 + 40);
    v26 = *(_QWORD *)(a1 + 8);
    v201 = 0LL;
    v196 = 0LL;
    v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v24 + 8);
    v218 = 0LL;
    v219 = 0LL;
    v220 = 0LL;
    v221 = 0;
    v217[0] = 0;
    v28 = v27(v26, v25, &v196, &v201);
    v32 = v28;
    if ( v28 < 0 )
    {
      v151 = WdLogNewEntry5_WdError(v30, v29, v31);
      *(_QWORD *)(v151 + 24) = v32;
      WdLogEvent5_WdError(v151);
    }
    else
    {
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v217,
        v196,
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
        *(_QWORD *)(a1 + 8));
      v33 = v218;
      v196 = 0LL;
      v223 = 0LL;
      v34 = *(__int64 (__fastcall **)(__int64, __int64 *))(v201 + 8);
      v224 = 0LL;
      v225 = 0LL;
      v226 = 0;
      v222[0] = 0;
      v35 = v34(v218, &v196);
      v32 = v35;
      if ( v35 < 0 )
      {
        v152 = WdLogNewEntry5_WdError(v37, v36, v38);
        *(_QWORD *)(v152 + 24) = v32;
        WdLogEvent5_WdError(v152);
      }
      else
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v222,
          v196,
          *(_QWORD *)(v201 + 32),
          v33);
        v39 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8));
        v41 = v223;
        *(_BYTE *)(v39 + 296) = 1;
        if ( v41 )
        {
          do
          {
            v42 = v41[1];
            if ( ((v42 - 1) & 0xFFFFFFFC) == 0 && v42 != 2 && v41[2] == v41[4] && v41[3] == v41[5] )
            {
              LOBYTE(v40) = 1;
              v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v201 + 40))(v33, *v41, v40);
              v47 = v43;
              if ( v43 < 0 )
              {
                v153 = WdLogNewEntry5_WdWarning(v45, v44, v46);
                *(_QWORD *)(v153 + 24) = v47;
                *(_QWORD *)(v153 + 32) = *v41;
                WdLogEvent5_WdWarning(v153);
              }
              else
              {
                v48 = *(_QWORD *)(a1 + 16);
                v49 = *(_QWORD *)(a1 + 8);
                v196 = 0LL;
                *(_QWORD *)v199 = 0LL;
                v50 = *(__int64 (__fastcall **)(__int64, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))(v48 + 24);
                v204 = 0LL;
                v205 = 0LL;
                v206 = 0LL;
                v207 = 0;
                v203[0] = 0;
                v51 = v50(v49, v17, v199, &v196);
                v32 = v51;
                if ( v51 < 0 )
                  goto LABEL_156;
                DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
                  (__int64)v203,
                  *(__int64 *)v199,
                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
                  *(_QWORD *)(a1 + 8));
                v55 = v204;
                *(_QWORD *)v199 = 0LL;
                v213 = 0LL;
                v56 = *(__int64 (__fastcall **)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v196 + 8);
                v214 = 0LL;
                v215 = 0LL;
                v216 = 0;
                v212[0] = 0;
                v57 = v56(v204, v199);
                v32 = v57;
                if ( v57 < 0 )
                {
                  v171 = WdLogNewEntry5_WdError(v59, v58, v60);
                  *(_QWORD *)(v171 + 24) = v32;
                  WdLogEvent5_WdError(v171);
                  goto LABEL_153;
                }
                for ( i = *(_QWORD *)v199; ; i = v209 )
                {
                  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                    (__int64)v212,
                    i,
                    *(_QWORD *)(v196 + 32),
                    v55);
                  v74 = v213;
                  if ( !v213 )
                    break;
                  LOBYTE(v73) = 1;
                  v75 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v196 + 48))(v55, *v213, v73);
                  v79 = v75;
                  if ( v75 >= 0 )
                  {
                    if ( v41[1] - 3 <= 1 || v191 )
                    {
                      v192 = 1;
                      v202 = 0;
                      goto LABEL_34;
                    }
                    v80 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v196 + 64))(
                            v55,
                            *v74,
                            &v192,
                            &v202);
                    v32 = v80;
                    if ( v80 == -1071774920 )
                    {
                      v155 = WdLogNewEntry5_WdTrace(v82, v81);
                      *(_QWORD *)(v155 + 24) = v17;
                      *(_QWORD *)(v155 + 32) = *(unsigned int *)(a1 + 40);
                      goto LABEL_34;
                    }
                    if ( v80 < 0 )
                    {
                      v168 = WdLogNewEntry5_WdError(v82, v81, v78);
                      *(_QWORD *)(v168 + 32) = v74;
                    }
                    else
                    {
LABEL_34:
                      v190 = 0;
                      if ( v232.VideoSignalInfo.ActiveSize.cx == v41[2] && v232.VideoSignalInfo.ActiveSize.cy == v41[3] )
                      {
                        LOBYTE(v78) = v194;
                        v140 = (*(__int64 (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v196 + 80))(
                                 v74,
                                 &v232,
                                 v78,
                                 &v190);
                        v141 = v190;
                        if ( v140 < 0 )
                          v141 = 0;
                        v190 = v141;
                      }
                      v83 = *(_QWORD *)(a1 + 32);
                      v84 = *(unsigned int *)(a1 + 40);
                      v85 = *(_QWORD *)(a1 + 24);
                      *(_QWORD *)v199 = 0LL;
                      v86 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v83 + 24))(
                              v85,
                              v84,
                              v17,
                              v199);
                      v32 = v86;
                      if ( v86 >= 0 )
                      {
                        v87 = *(_DWORD *)(*(_QWORD *)v199 + 16LL);
                        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
                        if ( v41[2] == v74[5] && v41[3] == v74[6] )
                          v88 = v87;
                        else
                          v88 = -((v87 & 0x1E) != 0);
                        v63 = v88 & 1;
                        v199[0] = D3DKMDT_VOT_HD15;
                        v64 = (int *)&unk_1C0070C48;
                        v193 = v63;
                        v208 = (char *)&unk_1C0070C48;
                        while ( 1 )
                        {
                          if ( !v63 )
                            goto LABEL_24;
                          v62 = *v64;
                          v198 = v62;
                          if ( !BmlIsSupportedPathScaling((unsigned int)v62, v87) )
                            goto LABEL_23;
                          LOBYTE(v189) = 1;
                          v89 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32)
                                                                                               + 64LL))(
                                  *(_QWORD *)(a1 + 24),
                                  *(unsigned int *)(a1 + 40),
                                  v17,
                                  (unsigned int)v62,
                                  v189);
                          v32 = v89;
                          if ( v89 < 0 )
                          {
                            v166 = (_QWORD *)WdLogNewEntry5_WdError(v91, v90, v92);
                            v166[3] = v32;
                            v166[4] = *(unsigned int *)(a1 + 40);
                            v166[5] = v17;
                            v166[6] = *(_QWORD *)(a1 + 24);
                            v166[7] = v62;
                            goto LABEL_147;
                          }
                          v93 = *(_QWORD *)(a1 + 32);
                          v94 = *(unsigned int *)(a1 + 40);
                          v95 = *(_QWORD *)(a1 + 24);
                          v197 = 0LL;
                          v96 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(v93 + 24))(
                                  v95,
                                  v94,
                                  v17,
                                  &v197);
                          v32 = v96;
                          if ( v96 < 0 )
                          {
                            v166 = (_QWORD *)WdLogNewEntry5_WdError(v98, v97, v99);
                            v166[3] = v32;
                            goto LABEL_147;
                          }
                          v100 = *(_DWORD *)(v197 + 24);
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 24));
                          v101 = 1;
                          LODWORD(v197) = 1;
                          do
                          {
                            v102 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v101) - 1;
                            if ( v102 )
                            {
                              v105 = v102 - 1;
                              if ( v105 )
                              {
                                v106 = v105 - 1;
                                if ( v106 )
                                {
                                  if ( v106 != 1 )
                                    goto LABEL_122;
                                  v107 = v100 >> 3;
                                }
                                else
                                {
                                  v107 = v100 >> 2;
                                }
                              }
                              else
                              {
                                v107 = v100 >> 1;
                              }
                              v108 = v107 & 1;
                            }
                            else
                            {
                              if ( (v100 & 1) != 0 )
                                goto LABEL_48;
                              v108 = 0;
                            }
                            if ( !v108 )
                              goto LABEL_63;
LABEL_48:
                            v109 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v101) - 1;
                            if ( v109 )
                            {
                              v157 = v109 - 1;
                              if ( v157 )
                              {
                                v158 = v157 - 1;
                                if ( v158 )
                                {
                                  if ( v158 != 1 )
                                  {
LABEL_122:
                                    v156 = WdLogNewEntry5_WdAssertion(v104, v103);
                                    *(_QWORD *)(v156 + 24) = v101;
                                    WdLogEvent5_WdAssertion(v156);
                                    goto LABEL_63;
                                  }
                                  v110 = v100 >> 7;
                                }
                                else
                                {
                                  v110 = v100 >> 6;
                                }
                              }
                              else
                              {
                                v110 = v100 >> 5;
                              }
                            }
                            else
                            {
                              v110 = v100 >> 4;
                            }
                            if ( (v110 & 1) == 0 )
                              goto LABEL_63;
                            memset(&v231, 0, sizeof(v231));
                            v111 = 0;
                            if ( *((_QWORD *)v227 + 320)
                              || !*(_BYTE *)(*((_QWORD *)v227 + 319) + 233LL)
                              || (v112 = 0, v101 == 1) )
                            {
                              v112 = 1;
                            }
                            if ( v190 && v198 == 1 )
                              v111 = 1;
                            PopulateDisplayModeFromPresentPath(
                              (int)v41,
                              (int)v74,
                              v198,
                              v101,
                              v192,
                              v111,
                              v112,
                              v202,
                              (__int64)&v231,
                              v195);
                            if ( *(_DWORD *)(a1 + 52) > 1u )
                            {
                              LOBYTE(v189) = 0;
                              v159 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(a1 + 32) + 80LL))(
                                       *(_QWORD *)(a1 + 24),
                                       *(unsigned int *)(a1 + 40),
                                       v17,
                                       (unsigned int)v101,
                                       v189);
                              v32 = v159;
                              if ( v159 < 0 )
                              {
                                v166 = (_QWORD *)WdLogNewEntry5_WdError(v161, v160, 0LL);
                                v166[3] = v32;
                                v166[4] = *(unsigned int *)(a1 + 40);
                                v166[5] = v17;
                                v166[6] = *(_QWORD *)(a1 + 24);
                                v166[7] = (int)v197;
                                goto LABEL_147;
                              }
                              v101 = v197;
                            }
                            if ( v231.Format == D3DDDIFMT_A8R8G8B8 || !*(_BYTE *)(a1 + 44) )
                            {
                              if ( v231.Format > (unsigned int)D3DDDIFMT_P8
                                || (v113 = 0x20003900000LL, !_bittest64(&v113, v231.Format)) )
                              {
                                v114 = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 64), &v231);
                                v115 = 0LL;
                                LODWORD(v32) = v114;
                                if ( v114 < 0 )
                                  goto LABEL_136;
                                if ( v195[0] )
                                {
                                  ++v231.IntegerRefreshRate;
                                  *(_DWORD *)&v231.Flags |= 2u;
                                  LODWORD(v32) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 64), &v231);
                                  if ( (int)v32 < 0 )
                                    goto LABEL_136;
                                }
                                v17 = v200;
                                goto LABEL_62;
                              }
                            }
                            if ( v211 )
                            {
                              LODWORD(v32) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 104), &v231);
                              if ( (int)v32 < 0 )
                                goto LABEL_136;
LABEL_62:
                              v101 = v197;
                            }
LABEL_63:
                            LODWORD(v197) = ++v101;
                          }
                          while ( v101 <= 4 );
                          if ( *(_DWORD *)(a1 + 52) > 1u )
                          {
                            v162 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32)
                                                                                             + 88LL))(
                                     *(_QWORD *)(a1 + 24),
                                     *(unsigned int *)(a1 + 40),
                                     v17,
                                     0LL);
                            v32 = v162;
                            if ( v162 < 0 )
                            {
                              v166 = (_QWORD *)WdLogNewEntry5_WdError(v164, v163, v165);
                              v166[3] = v32;
                              v166[4] = *(_QWORD *)(a1 + 24);
                              v167 = *(unsigned int *)(a1 + 40);
                              goto LABEL_145;
                            }
                          }
LABEL_23:
                          v63 = v193;
                          v64 = (int *)(v208 + 4);
                          ++v199[0];
                          v208 += 4;
                          if ( v199[0] >= (unsigned int)D3DKMDT_VOT_HDMI )
                          {
LABEL_24:
                            v65 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 72LL))(
                                    *(_QWORD *)(a1 + 24),
                                    *(unsigned int *)(a1 + 40),
                                    v17,
                                    0LL);
                            v32 = v65;
                            if ( v65 >= 0 )
                            {
                              v55 = v204;
                              goto LABEL_26;
                            }
                            v166 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66, v68);
                            v166[3] = v32;
                            v166[4] = *(unsigned int *)(a1 + 40);
                            v167 = *(_QWORD *)(a1 + 24);
LABEL_145:
                            v166[5] = v167;
                            v166[6] = v17;
LABEL_147:
                            WdLogEvent5_WdError(v166);
LABEL_136:
                            v55 = v204;
LABEL_137:
                            if ( v212[0] )
                              v214(v215, v74, v115);
LABEL_153:
                            if ( v203[0] )
                              v205(v206, v55, v115);
                            v33 = v218;
                            goto LABEL_91;
                          }
                        }
                      }
LABEL_148:
                      v168 = WdLogNewEntry5_WdError(v71, v70, v72);
                    }
                    *(_QWORD *)(v168 + 24) = v32;
                    v169 = (_QWORD *)v168;
LABEL_150:
                    WdLogEvent5_WdError(v169);
                    goto LABEL_137;
                  }
                  v154 = WdLogNewEntry5_WdWarning(v77, v76, v78);
                  *(_QWORD *)(v154 + 24) = v79;
                  *(_QWORD *)(v154 + 32) = *v74;
                  WdLogEvent5_WdWarning(v154);
LABEL_26:
                  v209 = 0LL;
                  v69 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v196 + 16))(v55, v74, &v209);
                  v32 = v69;
                  if ( v69 < 0 )
                    goto LABEL_148;
                }
                v116 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v196 + 56))(v55, 0LL);
                v32 = v116;
                if ( v116 < 0 )
                {
                  v170 = (_QWORD *)WdLogNewEntry5_WdError(v118, v117, v119);
                  v170[3] = v32;
                  v170[4] = v55;
                  v170[5] = 0xFFFFFFFFLL;
                  v169 = v170;
                  goto LABEL_150;
                }
                if ( v212[0] )
                  ((void (__fastcall *)(__int64, _QWORD))v214)(v215, 0LL);
                if ( v203[0] )
                  ((void (__fastcall *)(__int64, __int64))v205)(v206, v55);
                v33 = v218;
              }
            }
            v210 = 0LL;
            v120 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v201 + 16))(v33, v41, &v210);
            v32 = v120;
            if ( v120 < 0 )
            {
LABEL_156:
              v172 = WdLogNewEntry5_WdError(v53, v52, v54);
              *(_QWORD *)(v172 + 24) = v32;
LABEL_157:
              WdLogEvent5_WdError(v172);
              goto LABEL_91;
            }
            DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
              (__int64)v222,
              v210,
              *(_QWORD *)(v201 + 32),
              v33);
            v41 = v223;
          }
          while ( v223 );
        }
        v121 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v201 + 48))(v33, 0LL);
        v32 = v121;
        if ( v121 < 0 )
        {
          v173 = (_QWORD *)WdLogNewEntry5_WdError(v123, v122, v124);
          v173[3] = v32;
          v173[4] = v33;
          v172 = (__int64)v173;
          v173[5] = 0xFFFFFFFFLL;
          goto LABEL_157;
        }
        LODWORD(v32) = 0;
        *(_BYTE *)(ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(a1 + 8)) + 296) = 0;
        v125 = v228;
        v126 = *v228;
        if ( !*v228 )
        {
          v127 = *(_DWORD *)(a1 + 80);
          v126 = 0LL;
          if ( v127 )
          {
            v129 = v127;
            v128 = 44LL * v127;
            if ( !is_mul_ok(v129, 0x2CuLL) )
              v128 = -1LL;
            v130 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v128, 0x4B677844u, PagedPool);
            *v125 = v130;
            if ( !v130 )
            {
              v174 = WdLogNewEntry5_WdLowResource(0LL, v131, v132, v133);
              *(_QWORD *)(v174 + 24) = 1163LL;
              WdLogEvent5_WdLowResource(v174);
              LODWORD(v32) = -1073741801;
              goto LABEL_91;
            }
            memset(v130, 0, 44LL * *(unsigned int *)(a1 + 80));
            v126 = *v125;
          }
        }
        UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                        (MODE_UNION_LIST *)(a1 + 64),
                        *(unsigned int *)(a1 + 80),
                        v126,
                        v229);
        v137 = UniqueModes;
        if ( UniqueModes < 0 )
        {
          v175 = WdLogNewEntry5_WdAssertion(v136, v135);
          *(_QWORD *)(v175 + 24) = v137;
          WdLogEvent5_WdAssertion(v175);
        }
        v138 = (struct _D3DKMT_DISPLAYMODE **)v211;
        if ( v211 )
        {
          if ( *v211 )
          {
            operator delete[](*v211);
            *v138 = 0LL;
          }
          v176 = *(unsigned int *)(a1 + 120);
          if ( (_DWORD)v176 )
          {
            v177 = 44 * v176;
            if ( !is_mul_ok(v176, 0x2CuLL) )
              v177 = -1LL;
            v178 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v177, 0x4B677844u, PagedPool);
            *v138 = v178;
            if ( v178 )
            {
              memset(v178, 0, 44LL * *(unsigned int *)(a1 + 120));
              v183 = MODE_UNION_LIST::GetUniqueModes(
                       (MODE_UNION_LIST *)(a1 + 104),
                       *(unsigned int *)(a1 + 120),
                       *v138,
                       v230);
              v186 = v183;
              if ( v183 < 0 )
              {
                v187 = WdLogNewEntry5_WdAssertion(v185, v184);
                *(_QWORD *)(v187 + 24) = v186;
                WdLogEvent5_WdAssertion(v187);
              }
            }
            else
            {
              v182 = WdLogNewEntry5_WdLowResource(0LL, v179, v180, v181);
              *(_QWORD *)(v182 + 24) = 1195LL;
              WdLogEvent5_WdLowResource(v182);
            }
          }
        }
LABEL_91:
        if ( v222[0] )
          v224(v225, v41);
      }
      if ( v217[0] )
        v219(v220, v33);
    }
    return (unsigned int)v32;
  }
}
