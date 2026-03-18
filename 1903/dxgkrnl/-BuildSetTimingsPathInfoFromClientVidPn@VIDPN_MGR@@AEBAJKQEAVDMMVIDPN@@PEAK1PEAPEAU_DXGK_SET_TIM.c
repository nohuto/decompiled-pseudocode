/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01261FC
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C000D1C4 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000D4C0 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000D4F8 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C000D524 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000D838 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00DACA4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00E6CCC (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0124574 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0127460 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0127FCC (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C0128800 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02BEED0 (-GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C02BEF4C (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
        VIDPN_MGR *this,
        __int64 a2,
        VIDPN_MGR **a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _DXGK_SET_TIMING_PATH_INFO **a6,
        unsigned int **a7,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a8,
        unsigned int **a9)
{
  struct D3DKMT_VIDPN_SOURCE_MASKS *v9; // rsi
  __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned int *v14; // r12
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  DMMVIDPNTOPOLOGY *v21; // rdx
  DMMVIDPNTOPOLOGY *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // zf
  unsigned int v26; // eax
  unsigned __int64 v27; // r14
  SIZE_T v28; // rax
  unsigned __int64 v29; // kr00_8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _DXGK_SET_TIMING_PATH_INFO *v34; // r13
  __int64 v35; // rax
  SIZE_T v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int *v41; // rbx
  _QWORD *v42; // rcx
  char *v43; // rdx
  const struct DMMVIDPNTOPOLOGY *v44; // r14
  struct DMMVIDPN *v45; // r11
  DMMVIDPNTOPOLOGY *v46; // rax
  unsigned int v47; // eax
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // r14
  unsigned int v51; // eax
  int v52; // r12d
  int v53; // eax
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r9
  __int64 v57; // r11
  __int64 v58; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v59; // ebx
  bool v60; // r15
  __int64 v61; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v62; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v63; // eax
  unsigned int v64; // edx
  char v65; // al
  char *v66; // rax
  struct DMMVIDPNPRESENTPATH *v67; // rax
  int v68; // r11d
  DMMVIDPNPRESENTPATH *v69; // r15
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v70; // edi
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v74; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v75; // eax
  unsigned int v76; // edx
  char v77; // al
  unsigned __int8 v78; // al
  int v79; // r8d
  DXGADAPTER ***v80; // r15
  unsigned __int8 v81; // al
  DMMVIDPNPRESENTPATH *v82; // r15
  int v83; // r9d
  __int64 v84; // rdx
  int v85; // ecx
  __int64 v86; // r8
  int InputFlags; // eax
  unsigned __int8 v88; // cl
  int v89; // ecx
  unsigned int v90; // edx
  char v91; // al
  int v92; // eax
  int v93; // edx
  unsigned int v94; // ecx
  __int64 v95; // rdx
  int NumPathsFromSource; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  unsigned int *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  unsigned int *v105; // rdi
  __int64 i; // rcx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rax
  _QWORD *v110; // rbx
  DMMVIDPNPRESENTPATH *v111; // rbx
  __int64 v112; // r12
  __int64 v113; // rdi
  __int64 v114; // rdx
  __int64 v115; // rcx
  unsigned __int64 v116; // rax
  __int64 v117; // rax
  unsigned int v118; // r14d
  int v119; // r15d
  int v120; // eax
  int v121; // edx
  int v122; // ecx
  __int64 v123; // rax
  struct _DXGK_SET_TIMING_PATH_INFO *v124; // r14
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v125; // edi
  __int64 v126; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v127; // rax
  __int64 v128; // rdx
  char v129; // al
  __int64 v130; // r8
  DMMVIDPNTOPOLOGY *v131; // rax
  unsigned int v132; // edi
  unsigned int v133; // ebx
  __int64 v134; // rax
  int v135; // esi
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v137; // rdx
  __int64 v138; // rcx
  int v139; // r14d
  __int64 v140; // rax
  unsigned __int8 IsVidPnSourceActive; // al
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v143; // edi
  __int64 v144; // rcx
  int v145; // r9d
  int v146; // r10d
  __int64 v147; // rcx
  unsigned int *v148; // r9
  UINT *p_InputFlags; // r8
  __int64 v150; // r10
  unsigned int v151; // ecx
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  unsigned int *v167; // rcx
  __int64 v168; // rax
  int v169; // eax
  unsigned int v170; // edx
  __int64 v171; // rax
  int v172; // r8d
  int v173; // edx
  int v174; // ecx
  int v175; // [rsp+30h] [rbp-D0h]
  int v176; // [rsp+34h] [rbp-CCh]
  unsigned __int8 v177; // [rsp+38h] [rbp-C8h]
  unsigned int v178; // [rsp+3Ch] [rbp-C4h]
  unsigned int v179; // [rsp+40h] [rbp-C0h]
  unsigned int v180; // [rsp+44h] [rbp-BCh]
  bool v181; // [rsp+48h] [rbp-B8h]
  unsigned int v182; // [rsp+4Ch] [rbp-B4h]
  int v183; // [rsp+50h] [rbp-B0h]
  int v184; // [rsp+54h] [rbp-ACh]
  unsigned int v185; // [rsp+54h] [rbp-ACh]
  int v186; // [rsp+58h] [rbp-A8h]
  int v187; // [rsp+5Ch] [rbp-A4h]
  unsigned int v188; // [rsp+60h] [rbp-A0h]
  int v189; // [rsp+64h] [rbp-9Ch]
  int v190; // [rsp+64h] [rbp-9Ch]
  int v191; // [rsp+68h] [rbp-98h]
  int v192; // [rsp+68h] [rbp-98h]
  int v193; // [rsp+6Ch] [rbp-94h]
  int v194; // [rsp+70h] [rbp-90h]
  DMMVIDPNTOPOLOGY *v195; // [rsp+78h] [rbp-88h]
  DMMVIDPNTOPOLOGY *v196; // [rsp+78h] [rbp-88h]
  int v197; // [rsp+80h] [rbp-80h]
  int v198; // [rsp+84h] [rbp-7Ch]
  DMMVIDPNTOPOLOGY *v199; // [rsp+88h] [rbp-78h]
  unsigned int v200; // [rsp+90h] [rbp-70h]
  int v201; // [rsp+94h] [rbp-6Ch]
  int v202; // [rsp+98h] [rbp-68h]
  DMMVIDEOPRESENTTARGET *v203; // [rsp+A0h] [rbp-60h]
  DMMVIDPNPRESENTPATH *v204; // [rsp+A8h] [rbp-58h]
  DMMVIDEOPRESENTTARGET *v205; // [rsp+B0h] [rbp-50h]
  DMMVIDEOPRESENTTARGET *v206; // [rsp+B0h] [rbp-50h]
  __int64 v207; // [rsp+B8h] [rbp-48h]
  unsigned int *v208; // [rsp+C0h] [rbp-40h]
  unsigned int *v209; // [rsp+C8h] [rbp-38h]
  DMMVIDPNPRESENTPATH *v210; // [rsp+D0h] [rbp-30h]
  int v211; // [rsp+D8h] [rbp-28h]
  unsigned int v212; // [rsp+DCh] [rbp-24h] BYREF
  unsigned int v213; // [rsp+E0h] [rbp-20h]
  struct _D3DDDI_RATIONAL v214; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v215; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v216; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v217; // [rsp+100h] [rbp+0h] BYREF
  __int64 v218; // [rsp+108h] [rbp+8h] BYREF
  __int64 v219; // [rsp+110h] [rbp+10h] BYREF
  char *v220; // [rsp+118h] [rbp+18h]
  __int64 v221[2]; // [rsp+120h] [rbp+20h] BYREF
  DMMVIDPNPRESENTPATH *v222; // [rsp+130h] [rbp+30h]
  int Value; // [rsp+190h] [rbp+90h]
  unsigned int v225; // [rsp+190h] [rbp+90h]
  int v226; // [rsp+198h] [rbp+98h]
  unsigned int *v228; // [rsp+1A8h] [rbp+A8h]

  v228 = a4;
  v226 = a2;
  v9 = a8;
  v180 = 0;
  v221[1] = 0LL;
  v222 = 0LL;
  v12 = *((_QWORD *)this + 1);
  v13 = 0;
  v209 = 0LL;
  v14 = 0LL;
  v178 = 0;
  v15 = 0;
  v200 = 0;
  v184 = 0;
  v175 = 0;
  v183 = 0;
  v189 = 0;
  v179 = 0;
  v201 = 0;
  v198 = 0;
  v176 = 0;
  v191 = 0;
  v202 = 0;
  v194 = 0;
  v197 = 0;
  v193 = 0;
  if ( !v12 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v16);
    v12 = *((_QWORD *)this + 1);
    a4 = v228;
  }
  v207 = *(_QWORD *)(v12 + 16);
  if ( a3 && a3[6] != this )
  {
    v17 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v17 + 24) = a3;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v19 = *((_QWORD *)this + 11);
  if ( !v19 )
  {
    v217 = 0LL;
LABEL_9:
    v21 = 0LL;
    goto LABEL_11;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 32));
  v20 = *((_QWORD *)this + 11);
  v217 = v20;
  if ( !v20 )
    goto LABEL_9;
  v21 = (DMMVIDPNTOPOLOGY *)(v20 + 96);
LABEL_11:
  v195 = v21;
  v22 = (DMMVIDPNTOPOLOGY *)((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL));
  LODWORD(v23) = 0;
  v199 = v22;
  if ( v21 )
    v23 = *((_QWORD *)v21 + 5);
  LODWORD(v24) = 0;
  if ( v22 )
    v24 = *((_QWORD *)v22 + 5);
  v25 = (_DWORD)v23 + (_DWORD)v24 == 0;
  v26 = v23 + v24;
  v213 = v26;
  if ( v25 )
  {
    *a4 = 0;
    *a5 = 0;
    *a6 = 0LL;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
    goto LABEL_231;
  }
  v27 = v26;
  v29 = v26;
  v28 = 56LL * v26;
  if ( !is_mul_ok(v29, 0x38uLL) )
    v28 = -1LL;
  v34 = (struct _DXGK_SET_TIMING_PATH_INFO *)operator new[](v28, 0x4E506456u, PagedPool);
  if ( !v34 )
  {
    v13 = -1073741801;
    v35 = WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
    *(_QWORD *)(v35 + 24) = v27;
    *(_QWORD *)(v35 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
    goto LABEL_231;
  }
  v36 = 4 * v27;
  if ( !is_mul_ok(v27, 4uLL) )
    v36 = -1LL;
  v208 = (unsigned int *)operator new[](v36, 0x4E506456u, PagedPool);
  v41 = v208;
  if ( !v208 )
  {
    v13 = -1073741801;
    v42 = (_QWORD *)WdLogNewEntry5_WdLowResource(v38, v37, v39, v40);
    v42[3] = v27;
    v42[4] = -1073741801LL;
    goto LABEL_26;
  }
  memset(v34, 0, 56 * v27);
  memset(v208, 0, 4 * v27);
  v44 = v195;
  v45 = 0LL;
  if ( !v195
    || (v46 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v195 + 3),
        v220 = (char *)v195 + 24,
        v46 == (DMMVIDPNTOPOLOGY *)((char *)v195 + 24))
    || (v43 = (char *)v46 - 8, v204 = (DMMVIDPNTOPOLOGY *)((char *)v46 - 8), v46 == (DMMVIDPNTOPOLOGY *)8) )
  {
LABEL_128:
    if ( !v22 || (v110 = (_QWORD *)*((_QWORD *)v22 + 3), v110 == (_QWORD *)((char *)v22 + 24)) )
      v111 = 0LL;
    else
      v111 = (DMMVIDPNPRESENTPATH *)(v110 - 1);
    while ( v111 )
    {
      v112 = *((_QWORD *)v111 + 12);
      v113 = *(unsigned int *)(*((_QWORD *)v111 + 11) + 24LL);
      v206 = *(DMMVIDEOPRESENTTARGET **)(v112 + 96);
      if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v22, *(_DWORD *)(*((_QWORD *)v111 + 11) + 24LL), &v216)
        || (v116 = v216) == 0 )
      {
        v117 = WdLogNewEntry5_WdAssertion(v115, v114);
        WdLogEvent5_WdAssertion(v117);
        v116 = v216;
      }
      v118 = v116 != 1;
      v119 = 1 << v113;
      v120 = 1 << v113;
      v200 |= 1 << v113;
      v121 = *((_DWORD *)v206 + 139);
      if ( (v121 & 0x40) != 0 )
        v120 = 0;
      v194 |= v120;
      v122 = v179 | v119;
      v193 |= *(_BYTE *)(*((_QWORD *)v206 + 67) + 172LL) != 0 ? v119 : 0;
      if ( (v178 & v119) != 0 )
        v122 = v179;
      v179 = v122;
      if ( (v121 & 0x100) != 0 && (v197 & 2) == 0 )
      {
        if ( !v222 || DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(v222, v111) )
        {
          if ( !*((_DWORD *)a8 + 59) )
          {
            v222 = v111;
            *((_DWORD *)a8 + 60) = v113;
            *((_DWORD *)a8 + 61) = 1;
            v214 = 0LL;
            DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(v111, &v214);
            *((_DWORD *)a8 + 62) = 1000000 * (unsigned __int64)v214.Denominator / v214.Numerator;
          }
          *((_DWORD *)a8 + v113 + 39) = *((_DWORD *)a8 + v113 + 39) & 0xFFFFFFF8 | 1;
          *((_DWORD *)a8 + 59) |= v119;
        }
        else
        {
          v197 |= 2u;
          DxgkLogCodePointPacket(0x65u, v113, 1u, v118, *(_QWORD *)(v207 + 276));
        }
      }
      v44 = v195;
      v45 = 0LL;
      if ( !v195 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v195, *(_DWORD *)(v112 + 24)) )
      {
        v208[v180] = v113;
        v123 = *(_QWORD *)(v112 + 104);
        v124 = &v34[v180++];
        v125.Value = (unsigned int)v45;
        Value = 4;
        if ( v123 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v123 + 96));
          v126 = *(_QWORD *)(v112 + 104);
        }
        else
        {
          v126 = (__int64)v45;
        }
        v221[0] = v126;
        v127 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v126 + 144);
        if ( v127 )
        {
          v125.0 = v127[33].0;
          Value = v127[34].Value;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(v221, 0LL);
        v124->VidPnTargetId = *(_DWORD *)(v112 + 24);
        v124->InputFlags = v124->InputFlags & 0xFFFFFFFC | 1;
        v124->InputFlags ^= (v124->InputFlags ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v206))) & 4;
        v175 |= v119;
        v183 |= v119;
        v128 = v124->InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v206 + 414) == 0 ? 8 : 0);
        v124->InputFlags = v128;
        v129 = v128 ^ (16 * *((_BYTE *)v206 + 415));
        v124->SelectedWireFormat = v125;
        v124->InputFlags = v128 ^ v129 & 0x10;
        v124->OutputColorSpace = Value;
        DMMVIDPNPRESENTPATH::UpdateGammaRamp(v111, v128, v130);
        v44 = v195;
        v45 = 0LL;
        *((_BYTE *)v206 + 413) = 0;
      }
      v131 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v111 + 1);
      v22 = v199;
      v111 = (DMMVIDPNTOPOLOGY *)((char *)v131 - 8);
      if ( v131 == (DMMVIDPNTOPOLOGY *)((char *)v199 + 24) )
        v111 = v45;
    }
    v132 = v178;
    v133 = (unsigned int)v45;
    if ( v22 )
    {
      v132 = v200;
      v44 = v22;
    }
    v196 = v44;
    v225 = v132;
    v134 = *(_QWORD *)(v207 + 2552);
    if ( *(_DWORD *)(v134 + 80) <= (unsigned int)v45 )
    {
LABEL_175:
      if ( a3 != (VIDPN_MGR **)v45 )
      {
        v43 = (char *)(unsigned int)v45;
        if ( *(_DWORD *)(v134 + 80) > (unsigned int)v45 )
        {
          v143 = v197;
          do
          {
            v144 = *((_DWORD *)v9 + (unsigned int)v43 + 39) & 7;
            if ( (*((_DWORD *)v9 + (unsigned int)v43 + 39) & 7) != 0 )
            {
              v145 = 1 << (*((_BYTE *)v9 + 4 * (unsigned int)v43 + 156) & 7);
              if ( (v145 & v143) != 0
                || (v146 = *((_DWORD *)v9 + 4 * (unsigned int)v144 + 55)) != 0 && ((v146 - 1) & v146) == 0 )
              {
                v147 = 2 * v144;
                *((_DWORD *)v9 + (unsigned int)v43 + 39) &= 0xFFFFFFF8;
                v143 |= v145;
                *((_DWORD *)v9 + 2 * v147 + 55) = 0;
                *((_DWORD *)v9 + 2 * v147 + 57) = 0;
              }
            }
            v43 = (char *)(unsigned int)((_DWORD)v43 + 1);
          }
          while ( (unsigned int)v43 < *(_DWORD *)(*(_QWORD *)(v207 + 2552) + 80LL) );
          v132 = v225;
        }
        if ( v180 )
        {
          v148 = v208;
          p_InputFlags = &v34->InputFlags;
          v150 = v180;
          do
          {
            v151 = *((_DWORD *)v9 + *v148 + 39) & 7;
            if ( v151 )
            {
              v43 = (char *)((32 * v151) | *p_InputFlags & 0xFFFFFF1F);
              *p_InputFlags = (unsigned int)v43;
              *p_InputFlags = (unsigned int)v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v9 + 4 * v151 + 57) << 8)) & 0xF00;
            }
            ++v148;
            p_InputFlags += 14;
            --v150;
          }
          while ( v150 );
        }
      }
      v185 = ~v201 & v184;
      v152 = v185;
      if ( ((unsigned int)v152 & v175) != (_DWORD)v152 )
      {
        v153 = WdLogNewEntry5_WdAssertion(v185, v43);
        WdLogEvent5_WdAssertion(v153);
      }
      if ( (v201 & v175) != 0 )
      {
        v154 = WdLogNewEntry5_WdAssertion(v152, v43);
        WdLogEvent5_WdAssertion(v154);
      }
      v190 = ~v175 & v189;
      if ( (v201 & v190) != 0 )
      {
        v155 = WdLogNewEntry5_WdAssertion(v152, v43);
        WdLogEvent5_WdAssertion(v155);
      }
      if ( (v183 & v201) != v201 )
      {
        v156 = WdLogNewEntry5_WdAssertion(v152, v43);
        WdLogEvent5_WdAssertion(v156);
      }
      if ( (v185 & v183) != v185 )
      {
        v157 = WdLogNewEntry5_WdAssertion(v152, v43);
        WdLogEvent5_WdAssertion(v157);
      }
      if ( (v183 & (v175 | v201)) != v183 )
      {
        v158 = WdLogNewEntry5_WdAssertion(v152, v43);
        WdLogEvent5_WdAssertion(v158);
      }
      v159 = v179;
      if ( (v175 & v179) != v179 )
      {
        v160 = WdLogNewEntry5_WdAssertion(v179, v43);
        WdLogEvent5_WdAssertion(v160);
        v159 = v179;
      }
      if ( (v183 & (unsigned int)v159) != (_DWORD)v159 )
      {
        v161 = WdLogNewEntry5_WdAssertion(v159, v43);
        WdLogEvent5_WdAssertion(v161);
        v159 = v179;
      }
      if ( ((unsigned int)v159 & v178) != 0 )
      {
        v162 = WdLogNewEntry5_WdAssertion(v159, v43);
        WdLogEvent5_WdAssertion(v162);
      }
      if ( (v132 & v201) != 0 )
      {
        v163 = WdLogNewEntry5_WdAssertion(v159, v43);
        WdLogEvent5_WdAssertion(v163);
      }
      v164 = v178;
      v165 = v201 | v132;
      if ( (v178 | v179) != (_DWORD)v165 )
      {
        v166 = WdLogNewEntry5_WdAssertion(v165, v178);
        WdLogEvent5_WdAssertion(v166);
        v164 = v178;
      }
      v192 = ~v175 & v191;
      v13 = 0;
      *v228 = v213;
      v167 = v208;
      *a5 = v180;
      *a6 = v34;
      v34 = 0LL;
      *a7 = v208;
      if ( *(_DWORD *)v9 && *(_DWORD *)v9 != (_DWORD)v164 )
      {
        v168 = WdLogNewEntry5_WdAssertion(v208, v164);
        WdLogEvent5_WdAssertion(v168);
      }
      v169 = *((_DWORD *)v9 + 1);
      v170 = v178;
      *(_DWORD *)v9 = v178;
      if ( v169 && v169 != v132 )
      {
        v171 = WdLogNewEntry5_WdAssertion(v167, v178);
        WdLogEvent5_WdAssertion(v171);
        v170 = v178;
      }
      *((_DWORD *)v9 + 10) = v190;
      *((_DWORD *)v9 + 4) = v179;
      *((_DWORD *)v9 + 13) = v185;
      *((_DWORD *)v9 + 5) = v198;
      *((_DWORD *)v9 + 6) = v176;
      *((_DWORD *)v9 + 12) = v192;
      *((_DWORD *)v9 + 38) = v193;
      *((_DWORD *)v9 + 1) = v132;
      *((_DWORD *)v9 + 2) = v175;
      *((_DWORD *)v9 + 7) = v183;
      *((_DWORD *)v9 + 3) = v201;
      *((_DWORD *)v9 + 16) = v202;
      *((_DWORD *)v9 + 20) = 0;
      *((_DWORD *)v9 + 17) = 0;
      if ( (v226 & 0x10000) != 0 )
      {
        *((_DWORD *)v9 + 14) = -1;
      }
      else
      {
        v172 = ~(v170 | v132) | v194;
        v173 = v175 & v172;
        v174 = v202 | *((_DWORD *)v9 + 14) | v183 | ((v183 & v172) != 0 ? v172 : 0);
        *((_DWORD *)v9 + 14) = v174;
        if ( (((v175 & v172) - 1) & v175 & v172) != 0 )
        {
          *((_DWORD *)v9 + 14) = v172 | v174;
        }
        else if ( v173 )
        {
          *((_DWORD *)v9 + 14) = v174 | v172 & ~v173;
        }
      }
      FillFailedStatus(v9, 0);
      if ( a9 )
      {
        v14 = 0LL;
        *a9 = v209;
      }
      else
      {
        v14 = v209;
      }
      goto LABEL_227;
    }
    v135 = 0;
    while ( 1 )
    {
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v44, v133, &v212);
      v139 = MostImportantVidPnPathTargetsFromSource;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        v43 = (char *)v212;
        if ( v212 != -1 )
        {
          v44 = v196;
          PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v196, v212);
          IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)PathFromTarget
                                                                                                  + 12)
                                                                                                + 96LL));
LABEL_170:
          v45 = 0LL;
          if ( IsVidPnSourceActive )
            v135 |= 1 << v133;
          goto LABEL_173;
        }
      }
      else
      {
        if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
          goto LABEL_167;
        v140 = WdLogNewEntry5_WdAssertion(v138, v137);
        WdLogEvent5_WdAssertion(v140);
      }
      if ( v139 == -1071774919 )
      {
LABEL_167:
        IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v207 + 2552), v133);
        v44 = v196;
        goto LABEL_170;
      }
      v44 = v196;
      v45 = 0LL;
LABEL_173:
      v134 = *(_QWORD *)(v207 + 2552);
      if ( ++v133 >= *(_DWORD *)(v134 + 80) )
      {
        v198 = v135;
        v9 = a8;
        goto LABEL_175;
      }
    }
  }
  v47 = 0;
  v48 = 0;
  while ( 1 )
  {
    v211 = v48;
    v49 = v47;
    v50 = v47;
    v51 = *(_DWORD *)(*((_QWORD *)v43 + 11) + 24LL);
    v41[v49] = v51;
    v52 = 1 << v51;
    v178 |= 1 << v51;
    v188 = v51;
    v53 = 1 << v51;
    v54 = *(_QWORD *)(*((_QWORD *)v43 + 12) + 96LL);
    v205 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v43 + 12);
    v203 = (DMMVIDEOPRESENTTARGET *)v54;
    if ( (*(_BYTE *)(v54 + 556) & 0x40) != 0 )
      v53 = 0;
    v194 |= v53;
    v193 |= *(_BYTE *)(*(_QWORD *)(v54 + 536) + 172LL) != 0 ? v52 : 0;
    v25 = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v54, 0LL) == 13;
    v186 = 4;
    v58 = *(_QWORD *)(v56 + 104);
    v59.Value = v57;
    v60 = v25;
    v181 = v25;
    if ( v58 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v58 + 96));
      v61 = *(_QWORD *)(v56 + 104);
    }
    else
    {
      v61 = v57;
    }
    v218 = v61;
    v62 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v61 + 144);
    if ( v62 )
    {
      v59.0 = v62[33].0;
      v186 = v62[34].Value;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v218, v55);
    if ( !v199 )
    {
      v63 = *((_DWORD *)v205 + 6);
      v34[v50].InputFlags &= 0xFFFFFFFC;
      v34[v50].VidPnTargetId = v63;
      v34[v50].InputFlags ^= (v34[v50].InputFlags ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v203))) & 4;
      v64 = v34[v50].InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v203 + 414) == 0 ? 8 : 0);
      v34[v50].InputFlags = v64;
      v65 = v64 ^ (16 * *((_BYTE *)v203 + 415));
      v34[v50].SelectedWireFormat = v59;
      v34[v50].OutputColorSpace = v186;
      v34[v50].InputFlags = v64 ^ v65 & 0x10;
      if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive(v203) == 0) != (*((_BYTE *)v203 + 417) == 0) )
      {
        v48 = v52 | v176;
        v25 = !v60;
        v176 |= v52;
        v22 = 0LL;
        if ( !v25 )
          v34[v50].InputFlags = v34[v50].InputFlags & 0xFFFFFFFC | 1;
        goto LABEL_96;
      }
      if ( v60
        || (v226 & 0x4000) != 0
        || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v207 + 2552), v188) )
      {
        v34[v50].InputFlags ^= (v34[v50].InputFlags ^ (!v60 + 1)) & 3;
        v15 |= v52;
        v175 = v15;
      }
      goto LABEL_46;
    }
    v182 = !v60 + 1;
    v67 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v199, *(_DWORD *)(*((_QWORD *)v204 + 12) + 24LL));
    v210 = v67;
    v187 = 4;
    v69 = v67;
    v70.Value = 0;
    if ( !v67 )
      goto LABEL_98;
    v71 = *((_QWORD *)v67 + 12);
    v72 = *(_QWORD *)(v71 + 104);
    if ( v72 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v72 + 96));
      v73 = *(_QWORD *)(v71 + 104);
    }
    else
    {
      v73 = 0LL;
    }
    v219 = v73;
    v74 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v73 + 144);
    if ( v74 )
    {
      v70.0 = v74[33].0;
      v187 = v74[34].Value;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v219, 0LL);
    if ( *(_DWORD *)(*((_QWORD *)v69 + 11) + 24LL) != v188 )
      break;
    v75 = *((_DWORD *)v205 + 6);
    v34[v50].InputFlags &= 0xFFFFFFFC;
    v34[v50].VidPnTargetId = v75;
    v34[v50].InputFlags ^= (v34[v50].InputFlags ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v203))) & 4;
    v76 = v34[v50].InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v203 + 414) == 0 ? 8 : 0);
    v34[v50].InputFlags = v76;
    v77 = v76 ^ (16 * *((_BYTE *)v203 + 415));
    v34[v50].SelectedWireFormat = v70;
    v34[v50].InputFlags = v76 ^ v77 & 0x10;
    v34[v50].OutputColorSpace = v187;
    if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v203, 0LL) != 14 )
      v175 |= v52;
    v78 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v203);
    v79 = v211 | v52;
    if ( (v78 == 0) == (*((_BYTE *)v203 + 417) == 0) )
      v79 = v211;
    v176 = v79;
    if ( *(_BYTE *)(v207 + 2385) && (v226 & 0x400000) != 0 )
    {
      v80 = (DXGADAPTER ***)(v207 + 2552);
    }
    else
    {
      v80 = (DXGADAPTER ***)(v207 + 2552);
      if ( !*(_BYTE *)(*(_QWORD *)(v207 + 2552) + 233LL) )
        goto LABEL_69;
    }
    v177 = 1;
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*v80, v188) )
LABEL_69:
      v177 = 0;
    if ( v181 || (v226 & 0x4000) != 0 )
    {
      v82 = v210;
LABEL_94:
      v86 = v182;
      v84 = (__int64)v204;
      v34[v50].InputFlags ^= (v182 ^ v34[v50].InputFlags) & 3;
      v83 = v186;
      v85 = v52 | v175;
      v175 |= v52;
      goto LABEL_80;
    }
    v81 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v80, v188);
    v82 = v210;
    if ( v81 || !DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(v204, v210, v177) )
      goto LABEL_94;
    v83 = v186;
    if ( v59.Value != v70.Value || v186 != v187 )
    {
      v84 = (__int64)v204;
      v85 = v52 | v175;
      v175 |= v52;
      goto LABEL_79;
    }
    v84 = (__int64)v204;
    if ( *((_DWORD *)v204 + 29) == *((_DWORD *)v210 + 29) )
    {
      if ( *((_BYTE *)this + 464) )
      {
        v85 = v52 | v175;
        v175 |= v52;
        goto LABEL_79;
      }
    }
    else
    {
      v189 |= v52;
    }
    v85 = v175;
LABEL_79:
    v86 = v182;
LABEL_80:
    if ( (v52 & v85) == 0
      && (*(_DWORD *)(v84 + 104) != *((_DWORD *)v82 + 26) || *(_WORD *)(v84 + 108) != *((_WORD *)v82 + 54)) )
    {
      v191 |= v52;
    }
    if ( *((_BYTE *)v203 + 413) )
    {
      v202 |= v52;
      *((_BYTE *)v203 + 413) = 0;
      if ( (unsigned int)(*((_DWORD *)v203 + 20) - 10) <= 1 )
      {
        v175 = v52 | v85;
        v34[v50].InputFlags ^= (v86 ^ v34[v50].InputFlags) & 3;
      }
    }
    if ( v59.Value == v70.Value && v83 == v187 )
    {
      DMMVIDPNPRESENTPATH::SetGammaRamp(v82, *(const struct DXGK_GAMMA_RAMP **)(v84 + 184), v86);
      v15 = v175;
LABEL_46:
      v22 = v199;
LABEL_47:
      v45 = 0LL;
      goto LABEL_48;
    }
    DMMVIDPNPRESENTPATH::UpdateGammaRamp(v82, v84, v86);
    v48 = v176;
    v15 = v175;
    v22 = v199;
LABEL_96:
    v45 = 0LL;
LABEL_49:
    v66 = (char *)*((_QWORD *)v204 + 1);
    v43 = v66 - 8;
    if ( v66 == v220 )
      v43 = 0LL;
    v47 = v180 + 1;
    v204 = (DMMVIDPNPRESENTPATH *)v43;
    ++v180;
    if ( !v43 )
    {
      v44 = v195;
      goto LABEL_128;
    }
    v41 = v208;
  }
  v68 = v182;
LABEL_98:
  if ( !v69 )
    v68 = 3;
  v34[v50].VidPnTargetId = *((_DWORD *)v205 + 6);
  InputFlags = v34[v50].InputFlags ^ (v68 ^ v34[v50].InputFlags) & 3;
  v34[v50].InputFlags = InputFlags;
  if ( v69 )
  {
    v88 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v203);
    InputFlags = v34[v50].InputFlags;
  }
  else
  {
    v88 = 0;
  }
  v89 = InputFlags ^ ((unsigned __int8)InputFlags ^ (unsigned __int8)(4 * v88)) & 4;
  v34[v50].InputFlags = v89;
  v90 = v89 & 0xFFFFFFF7 | (*((_BYTE *)v203 + 414) == 0 ? 8 : 0);
  v34[v50].InputFlags = v90;
  v91 = v90 ^ (16 * *((_BYTE *)v203 + 415));
  v34[v50].SelectedWireFormat = v70;
  v15 = v175;
  v92 = v90 ^ v91 & 0x10;
  v93 = v52 | v183;
  v34[v50].InputFlags = v92;
  v34[v50].OutputColorSpace = v187;
  v183 |= v52;
  if ( v69 )
  {
    v94 = *(_DWORD *)(*((_QWORD *)v69 + 11) + 24LL);
    v15 = (1 << v94) | v175;
    v208[v180] = v94;
    v95 = (1 << v94) | (unsigned int)v93;
    v175 = v15;
    v183 = v95;
    DMMVIDPNPRESENTPATH::UpdateGammaRamp(v69, v95, v180);
  }
  v22 = v199;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v199, v188, &v215);
  v45 = 0LL;
  if ( NumPathsFromSource < 0 )
  {
    if ( NumPathsFromSource != -1071774919 || v215 )
    {
      v99 = WdLogNewEntry5_WdAssertion(v98, v97);
      WdLogEvent5_WdAssertion(v99);
      v45 = 0LL;
      goto LABEL_109;
    }
LABEL_110:
    v201 |= v52;
LABEL_48:
    v48 = v176;
    goto LABEL_49;
  }
LABEL_109:
  if ( !v215 )
    goto LABEL_110;
  v184 |= v52;
  v15 |= v52;
  v14 = v209;
  v175 = v15;
  if ( !a9 )
  {
LABEL_118:
    if ( !v14 )
      goto LABEL_48;
    goto LABEL_119;
  }
  if ( v209 )
  {
LABEL_119:
    v107 = 0LL;
    while ( 1 )
    {
      v108 = (unsigned int)v107 + 16 * v188;
      if ( v14[v108] == -1 )
        break;
      v107 = (unsigned int)(v107 + 1);
      if ( (unsigned int)v107 >= 0x10 )
        goto LABEL_124;
    }
    v14[v108] = *((_DWORD *)v205 + 6);
LABEL_124:
    if ( (unsigned int)v107 < 0x10 )
      goto LABEL_48;
    v109 = WdLogNewEntry5_WdAssertion(v107, v108);
    WdLogEvent5_WdAssertion(v109);
    goto LABEL_47;
  }
  v100 = (unsigned int *)operator new[](0x400uLL, 0x4E506456u, PagedPool);
  v45 = 0LL;
  v209 = v100;
  v14 = v100;
  if ( v100 )
  {
    v105 = v100;
    for ( i = 256LL; i; --i )
      *v105++ = -1;
    v15 = v175;
    goto LABEL_118;
  }
  v13 = -1073741801;
  v42 = (_QWORD *)WdLogNewEntry5_WdLowResource(v102, v101, v103, v104);
  v42[3] = *(int *)(v207 + 280);
  v42[4] = *(unsigned int *)(v207 + 276);
  v42[5] = -1073741801LL;
LABEL_26:
  WdLogEvent5_WdLowResource(v42);
LABEL_227:
  if ( v34 )
    operator delete[](v34);
  if ( v14 )
    operator delete[](v14);
LABEL_231:
  auto_rc<DMMVIDPN const>::reset(&v217, 0LL, (__int64)a3);
  return v13;
}
