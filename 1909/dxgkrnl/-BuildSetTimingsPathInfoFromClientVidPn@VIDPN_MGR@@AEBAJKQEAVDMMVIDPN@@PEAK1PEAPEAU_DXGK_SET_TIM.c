/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C012B8B4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0002BA0 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002E40 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003C14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000D7FC (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000D834 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C000D860 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000D9F4 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00D38B4 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00DB2E4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00E72EC (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C012CB18 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012CC00 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C012CDA0 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02BEF90 (-GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C02BF00C (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
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
  DMMVIDPNPRESENTPATH *v84; // rdx
  int v85; // ecx
  int v86; // r8d
  int InputFlags; // eax
  unsigned __int8 v88; // cl
  int v89; // ecx
  unsigned int v90; // edx
  char v91; // al
  int v92; // eax
  int v93; // edx
  unsigned int v94; // ecx
  int NumPathsFromSource; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  unsigned int *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  unsigned int *v104; // rdi
  __int64 i; // rcx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rax
  _QWORD *v109; // rbx
  DMMVIDPNPRESENTPATH *v110; // rbx
  __int64 v111; // r12
  __int64 v112; // rdi
  __int64 v113; // rdx
  __int64 v114; // rcx
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  unsigned int v117; // r14d
  int v118; // r15d
  int v119; // eax
  int v120; // edx
  int v121; // ecx
  __int64 v122; // rax
  struct _DXGK_SET_TIMING_PATH_INFO *v123; // r14
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v124; // edi
  __int64 v125; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v126; // rax
  unsigned int v127; // edx
  char v128; // al
  DMMVIDPNTOPOLOGY *v129; // rax
  unsigned int v130; // edi
  unsigned int v131; // ebx
  __int64 v132; // rax
  int v133; // esi
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  int v137; // r14d
  __int64 v138; // rax
  unsigned __int8 IsVidPnSourceActive; // al
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v141; // edi
  __int64 v142; // rcx
  int v143; // r9d
  int v144; // r10d
  __int64 v145; // rcx
  unsigned int *v146; // r9
  UINT *p_InputFlags; // r8
  __int64 v148; // r10
  unsigned int v149; // ecx
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rax
  unsigned int *v165; // rcx
  __int64 v166; // rax
  int v167; // eax
  unsigned int v168; // edx
  __int64 v169; // rax
  int v170; // r8d
  int v171; // edx
  int v172; // ecx
  int v173; // [rsp+30h] [rbp-D0h]
  int v174; // [rsp+34h] [rbp-CCh]
  unsigned __int8 v175; // [rsp+38h] [rbp-C8h]
  unsigned int v176; // [rsp+3Ch] [rbp-C4h]
  unsigned int v177; // [rsp+40h] [rbp-C0h]
  unsigned int v178; // [rsp+44h] [rbp-BCh]
  bool v179; // [rsp+48h] [rbp-B8h]
  int v180; // [rsp+4Ch] [rbp-B4h]
  int v181; // [rsp+50h] [rbp-B0h]
  int v182; // [rsp+54h] [rbp-ACh]
  unsigned int v183; // [rsp+54h] [rbp-ACh]
  int v184; // [rsp+58h] [rbp-A8h]
  int v185; // [rsp+5Ch] [rbp-A4h]
  unsigned int v186; // [rsp+60h] [rbp-A0h]
  int v187; // [rsp+64h] [rbp-9Ch]
  int v188; // [rsp+64h] [rbp-9Ch]
  int v189; // [rsp+68h] [rbp-98h]
  int v190; // [rsp+68h] [rbp-98h]
  int v191; // [rsp+6Ch] [rbp-94h]
  int v192; // [rsp+70h] [rbp-90h]
  DMMVIDPNTOPOLOGY *v193; // [rsp+78h] [rbp-88h]
  DMMVIDPNTOPOLOGY *v194; // [rsp+78h] [rbp-88h]
  int v195; // [rsp+80h] [rbp-80h]
  int v196; // [rsp+84h] [rbp-7Ch]
  DMMVIDPNTOPOLOGY *v197; // [rsp+88h] [rbp-78h]
  unsigned int v198; // [rsp+90h] [rbp-70h]
  int v199; // [rsp+94h] [rbp-6Ch]
  int v200; // [rsp+98h] [rbp-68h]
  DMMVIDEOPRESENTTARGET *v201; // [rsp+A0h] [rbp-60h]
  DMMVIDPNPRESENTPATH *v202; // [rsp+A8h] [rbp-58h]
  DMMVIDEOPRESENTTARGET *v203; // [rsp+B0h] [rbp-50h]
  DMMVIDEOPRESENTTARGET *v204; // [rsp+B0h] [rbp-50h]
  __int64 v205; // [rsp+B8h] [rbp-48h]
  unsigned int *v206; // [rsp+C0h] [rbp-40h]
  unsigned int *v207; // [rsp+C8h] [rbp-38h]
  DMMVIDPNPRESENTPATH *v208; // [rsp+D0h] [rbp-30h]
  int v209; // [rsp+D8h] [rbp-28h]
  unsigned int v210; // [rsp+DCh] [rbp-24h] BYREF
  unsigned int v211; // [rsp+E0h] [rbp-20h]
  struct _D3DDDI_RATIONAL v212; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v213; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v214; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v215; // [rsp+100h] [rbp+0h] BYREF
  __int64 v216; // [rsp+108h] [rbp+8h] BYREF
  __int64 v217; // [rsp+110h] [rbp+10h] BYREF
  char *v218; // [rsp+118h] [rbp+18h]
  __int64 v219[2]; // [rsp+120h] [rbp+20h] BYREF
  DMMVIDPNPRESENTPATH *v220; // [rsp+130h] [rbp+30h]
  int Value; // [rsp+190h] [rbp+90h]
  unsigned int v223; // [rsp+190h] [rbp+90h]
  int v224; // [rsp+198h] [rbp+98h]
  unsigned int *v226; // [rsp+1A8h] [rbp+A8h]

  v226 = a4;
  v224 = a2;
  v9 = a8;
  v178 = 0;
  v219[1] = 0LL;
  v220 = 0LL;
  v12 = *((_QWORD *)this + 1);
  v13 = 0;
  v207 = 0LL;
  v14 = 0LL;
  v176 = 0;
  v15 = 0;
  v198 = 0;
  v182 = 0;
  v173 = 0;
  v181 = 0;
  v187 = 0;
  v177 = 0;
  v199 = 0;
  v196 = 0;
  v174 = 0;
  v189 = 0;
  v200 = 0;
  v192 = 0;
  v195 = 0;
  v191 = 0;
  if ( !v12 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v16);
    v12 = *((_QWORD *)this + 1);
    a4 = v226;
  }
  v205 = *(_QWORD *)(v12 + 16);
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
    v215 = 0LL;
LABEL_9:
    v21 = 0LL;
    goto LABEL_11;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 32));
  v20 = *((_QWORD *)this + 11);
  v215 = v20;
  if ( !v20 )
    goto LABEL_9;
  v21 = (DMMVIDPNTOPOLOGY *)(v20 + 96);
LABEL_11:
  v193 = v21;
  v22 = (DMMVIDPNTOPOLOGY *)((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL));
  LODWORD(v23) = 0;
  v197 = v22;
  if ( v21 )
    v23 = *((_QWORD *)v21 + 5);
  LODWORD(v24) = 0;
  if ( v22 )
    v24 = *((_QWORD *)v22 + 5);
  v25 = (_DWORD)v23 + (_DWORD)v24 == 0;
  v26 = v23 + v24;
  v211 = v26;
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
  v206 = (unsigned int *)operator new[](v36, 0x4E506456u, PagedPool);
  v41 = v206;
  if ( !v206 )
  {
    v13 = -1073741801;
    v42 = (_QWORD *)WdLogNewEntry5_WdLowResource(v38, v37, v39, v40);
    v42[3] = v27;
    v42[4] = -1073741801LL;
    goto LABEL_26;
  }
  memset(v34, 0, 56 * v27);
  memset(v206, 0, 4 * v27);
  v44 = v193;
  v45 = 0LL;
  if ( !v193
    || (v46 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v193 + 3),
        v218 = (char *)v193 + 24,
        v46 == (DMMVIDPNTOPOLOGY *)((char *)v193 + 24))
    || (v43 = (char *)v46 - 8, v202 = (DMMVIDPNTOPOLOGY *)((char *)v46 - 8), v46 == (DMMVIDPNTOPOLOGY *)8) )
  {
LABEL_128:
    if ( !v22 || (v109 = (_QWORD *)*((_QWORD *)v22 + 3), v109 == (_QWORD *)((char *)v22 + 24)) )
      v110 = 0LL;
    else
      v110 = (DMMVIDPNPRESENTPATH *)(v109 - 1);
    while ( v110 )
    {
      v111 = *((_QWORD *)v110 + 12);
      v112 = *(unsigned int *)(*((_QWORD *)v110 + 11) + 24LL);
      v204 = *(DMMVIDEOPRESENTTARGET **)(v111 + 96);
      if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v22, *(_DWORD *)(*((_QWORD *)v110 + 11) + 24LL), &v214)
        || (v115 = v214) == 0 )
      {
        v116 = WdLogNewEntry5_WdAssertion(v114, v113);
        WdLogEvent5_WdAssertion(v116);
        v115 = v214;
      }
      v117 = v115 != 1;
      v118 = 1 << v112;
      v119 = 1 << v112;
      v198 |= 1 << v112;
      v120 = *((_DWORD *)v204 + 139);
      if ( (v120 & 0x40) != 0 )
        v119 = 0;
      v192 |= v119;
      v121 = v177 | v118;
      v191 |= *(_BYTE *)(*((_QWORD *)v204 + 67) + 172LL) != 0 ? v118 : 0;
      if ( (v176 & v118) != 0 )
        v121 = v177;
      v177 = v121;
      if ( (v120 & 0x100) != 0 && (v195 & 2) == 0 )
      {
        if ( !v220 || DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(v220, v110) )
        {
          if ( !*((_DWORD *)a8 + 59) )
          {
            v220 = v110;
            *((_DWORD *)a8 + 60) = v112;
            *((_DWORD *)a8 + 61) = 1;
            v212 = 0LL;
            DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(v110, &v212);
            *((_DWORD *)a8 + 62) = 1000000 * (unsigned __int64)v212.Denominator / v212.Numerator;
          }
          *((_DWORD *)a8 + v112 + 39) = *((_DWORD *)a8 + v112 + 39) & 0xFFFFFFF8 | 1;
          *((_DWORD *)a8 + 59) |= v118;
        }
        else
        {
          v195 |= 2u;
          DxgkLogCodePointPacket(0x65u, v112, 1u, v117, *(_QWORD *)(v205 + 276));
        }
      }
      v44 = v193;
      v45 = 0LL;
      if ( !v193 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v193, *(_DWORD *)(v111 + 24)) )
      {
        v206[v178] = v112;
        v122 = *(_QWORD *)(v111 + 104);
        v123 = &v34[v178++];
        v124.Value = (unsigned int)v45;
        Value = 4;
        if ( v122 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v122 + 96));
          v125 = *(_QWORD *)(v111 + 104);
        }
        else
        {
          v125 = (__int64)v45;
        }
        v219[0] = v125;
        v126 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v125 + 144);
        if ( v126 )
        {
          v124.0 = v126[33].0;
          Value = v126[34].Value;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(v219, 0LL);
        v123->VidPnTargetId = *(_DWORD *)(v111 + 24);
        v123->InputFlags = v123->InputFlags & 0xFFFFFFFC | 1;
        v123->InputFlags ^= (v123->InputFlags ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v204))) & 4;
        v173 |= v118;
        v181 |= v118;
        v127 = v123->InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v204 + 414) == 0 ? 8 : 0);
        v123->InputFlags = v127;
        v128 = v127 ^ (16 * *((_BYTE *)v204 + 415));
        v123->SelectedWireFormat = v124;
        v123->InputFlags = v127 ^ v128 & 0x10;
        v123->OutputColorSpace = Value;
        DMMVIDPNPRESENTPATH::UpdateGammaRamp(v110);
        v44 = v193;
        v45 = 0LL;
        *((_BYTE *)v204 + 413) = 0;
      }
      v129 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v110 + 1);
      v22 = v197;
      v110 = (DMMVIDPNTOPOLOGY *)((char *)v129 - 8);
      if ( v129 == (DMMVIDPNTOPOLOGY *)((char *)v197 + 24) )
        v110 = v45;
    }
    v130 = v176;
    v131 = (unsigned int)v45;
    if ( v22 )
    {
      v130 = v198;
      v44 = v22;
    }
    v194 = v44;
    v223 = v130;
    v132 = *(_QWORD *)(v205 + 2552);
    if ( *(_DWORD *)(v132 + 80) <= (unsigned int)v45 )
    {
LABEL_175:
      if ( a3 != (VIDPN_MGR **)v45 )
      {
        v43 = (char *)(unsigned int)v45;
        if ( *(_DWORD *)(v132 + 80) > (unsigned int)v45 )
        {
          v141 = v195;
          do
          {
            v142 = *((_DWORD *)v9 + (unsigned int)v43 + 39) & 7;
            if ( (*((_DWORD *)v9 + (unsigned int)v43 + 39) & 7) != 0 )
            {
              v143 = 1 << (*((_BYTE *)v9 + 4 * (unsigned int)v43 + 156) & 7);
              if ( (v143 & v141) != 0
                || (v144 = *((_DWORD *)v9 + 4 * (unsigned int)v142 + 55)) != 0 && ((v144 - 1) & v144) == 0 )
              {
                v145 = 2 * v142;
                *((_DWORD *)v9 + (unsigned int)v43 + 39) &= 0xFFFFFFF8;
                v141 |= v143;
                *((_DWORD *)v9 + 2 * v145 + 55) = 0;
                *((_DWORD *)v9 + 2 * v145 + 57) = 0;
              }
            }
            v43 = (char *)(unsigned int)((_DWORD)v43 + 1);
          }
          while ( (unsigned int)v43 < *(_DWORD *)(*(_QWORD *)(v205 + 2552) + 80LL) );
          v130 = v223;
        }
        if ( v178 )
        {
          v146 = v206;
          p_InputFlags = &v34->InputFlags;
          v148 = v178;
          do
          {
            v149 = *((_DWORD *)v9 + *v146 + 39) & 7;
            if ( v149 )
            {
              v43 = (char *)((32 * v149) | *p_InputFlags & 0xFFFFFF1F);
              *p_InputFlags = (unsigned int)v43;
              *p_InputFlags = (unsigned int)v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v9 + 4 * v149 + 57) << 8)) & 0xF00;
            }
            ++v146;
            p_InputFlags += 14;
            --v148;
          }
          while ( v148 );
        }
      }
      v183 = ~v199 & v182;
      v150 = v183;
      if ( ((unsigned int)v150 & v173) != (_DWORD)v150 )
      {
        v151 = WdLogNewEntry5_WdAssertion(v183, v43);
        WdLogEvent5_WdAssertion(v151);
      }
      if ( (v199 & v173) != 0 )
      {
        v152 = WdLogNewEntry5_WdAssertion(v150, v43);
        WdLogEvent5_WdAssertion(v152);
      }
      v188 = ~v173 & v187;
      if ( (v199 & v188) != 0 )
      {
        v153 = WdLogNewEntry5_WdAssertion(v150, v43);
        WdLogEvent5_WdAssertion(v153);
      }
      if ( (v181 & v199) != v199 )
      {
        v154 = WdLogNewEntry5_WdAssertion(v150, v43);
        WdLogEvent5_WdAssertion(v154);
      }
      if ( (v183 & v181) != v183 )
      {
        v155 = WdLogNewEntry5_WdAssertion(v150, v43);
        WdLogEvent5_WdAssertion(v155);
      }
      if ( (v181 & (v173 | v199)) != v181 )
      {
        v156 = WdLogNewEntry5_WdAssertion(v150, v43);
        WdLogEvent5_WdAssertion(v156);
      }
      v157 = v177;
      if ( (v173 & v177) != v177 )
      {
        v158 = WdLogNewEntry5_WdAssertion(v177, v43);
        WdLogEvent5_WdAssertion(v158);
        v157 = v177;
      }
      if ( (v181 & (unsigned int)v157) != (_DWORD)v157 )
      {
        v159 = WdLogNewEntry5_WdAssertion(v157, v43);
        WdLogEvent5_WdAssertion(v159);
        v157 = v177;
      }
      if ( ((unsigned int)v157 & v176) != 0 )
      {
        v160 = WdLogNewEntry5_WdAssertion(v157, v43);
        WdLogEvent5_WdAssertion(v160);
      }
      if ( (v130 & v199) != 0 )
      {
        v161 = WdLogNewEntry5_WdAssertion(v157, v43);
        WdLogEvent5_WdAssertion(v161);
      }
      v162 = v176;
      v163 = v199 | v130;
      if ( (v176 | v177) != (_DWORD)v163 )
      {
        v164 = WdLogNewEntry5_WdAssertion(v163, v176);
        WdLogEvent5_WdAssertion(v164);
        v162 = v176;
      }
      v190 = ~v173 & v189;
      v13 = 0;
      *v226 = v211;
      v165 = v206;
      *a5 = v178;
      *a6 = v34;
      v34 = 0LL;
      *a7 = v206;
      if ( *(_DWORD *)v9 && *(_DWORD *)v9 != (_DWORD)v162 )
      {
        v166 = WdLogNewEntry5_WdAssertion(v206, v162);
        WdLogEvent5_WdAssertion(v166);
      }
      v167 = *((_DWORD *)v9 + 1);
      v168 = v176;
      *(_DWORD *)v9 = v176;
      if ( v167 && v167 != v130 )
      {
        v169 = WdLogNewEntry5_WdAssertion(v165, v176);
        WdLogEvent5_WdAssertion(v169);
        v168 = v176;
      }
      *((_DWORD *)v9 + 10) = v188;
      *((_DWORD *)v9 + 4) = v177;
      *((_DWORD *)v9 + 13) = v183;
      *((_DWORD *)v9 + 5) = v196;
      *((_DWORD *)v9 + 6) = v174;
      *((_DWORD *)v9 + 12) = v190;
      *((_DWORD *)v9 + 38) = v191;
      *((_DWORD *)v9 + 1) = v130;
      *((_DWORD *)v9 + 2) = v173;
      *((_DWORD *)v9 + 7) = v181;
      *((_DWORD *)v9 + 3) = v199;
      *((_DWORD *)v9 + 16) = v200;
      *((_DWORD *)v9 + 20) = 0;
      *((_DWORD *)v9 + 17) = 0;
      if ( (v224 & 0x10000) != 0 )
      {
        *((_DWORD *)v9 + 14) = -1;
      }
      else
      {
        v170 = ~(v168 | v130) | v192;
        v171 = v173 & v170;
        v172 = v200 | *((_DWORD *)v9 + 14) | v181 | ((v181 & v170) != 0 ? v170 : 0);
        *((_DWORD *)v9 + 14) = v172;
        if ( (((v173 & v170) - 1) & v173 & v170) != 0 )
        {
          *((_DWORD *)v9 + 14) = v170 | v172;
        }
        else if ( v171 )
        {
          *((_DWORD *)v9 + 14) = v172 | v170 & ~v171;
        }
      }
      FillFailedStatus(v9, 0);
      if ( a9 )
      {
        v14 = 0LL;
        *a9 = v207;
      }
      else
      {
        v14 = v207;
      }
      goto LABEL_227;
    }
    v133 = 0;
    while ( 1 )
    {
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v44, v131, &v210);
      v137 = MostImportantVidPnPathTargetsFromSource;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        v43 = (char *)v210;
        if ( v210 != -1 )
        {
          v44 = v194;
          PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v194, v210);
          IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)PathFromTarget
                                                                                                  + 12)
                                                                                                + 96LL));
LABEL_170:
          v45 = 0LL;
          if ( IsVidPnSourceActive )
            v133 |= 1 << v131;
          goto LABEL_173;
        }
      }
      else
      {
        if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
          goto LABEL_167;
        v138 = WdLogNewEntry5_WdAssertion(v136, v135);
        WdLogEvent5_WdAssertion(v138);
      }
      if ( v137 == -1071774919 )
      {
LABEL_167:
        IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v205 + 2552), v131);
        v44 = v194;
        goto LABEL_170;
      }
      v44 = v194;
      v45 = 0LL;
LABEL_173:
      v132 = *(_QWORD *)(v205 + 2552);
      if ( ++v131 >= *(_DWORD *)(v132 + 80) )
      {
        v196 = v133;
        v9 = a8;
        goto LABEL_175;
      }
    }
  }
  v47 = 0;
  v48 = 0;
  while ( 1 )
  {
    v209 = v48;
    v49 = v47;
    v50 = v47;
    v51 = *(_DWORD *)(*((_QWORD *)v43 + 11) + 24LL);
    v41[v49] = v51;
    v52 = 1 << v51;
    v176 |= 1 << v51;
    v186 = v51;
    v53 = 1 << v51;
    v54 = *(_QWORD *)(*((_QWORD *)v43 + 12) + 96LL);
    v203 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v43 + 12);
    v201 = (DMMVIDEOPRESENTTARGET *)v54;
    if ( (*(_BYTE *)(v54 + 556) & 0x40) != 0 )
      v53 = 0;
    v192 |= v53;
    v191 |= *(_BYTE *)(*(_QWORD *)(v54 + 536) + 172LL) != 0 ? v52 : 0;
    v25 = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v54, 0LL) == 13;
    v184 = 4;
    v58 = *(_QWORD *)(v56 + 104);
    v59.Value = v57;
    v60 = v25;
    v179 = v25;
    if ( v58 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v58 + 96));
      v61 = *(_QWORD *)(v56 + 104);
    }
    else
    {
      v61 = v57;
    }
    v216 = v61;
    v62 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v61 + 144);
    if ( v62 )
    {
      v59.0 = v62[33].0;
      v184 = v62[34].Value;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v216, v55);
    if ( !v197 )
    {
      v63 = *((_DWORD *)v203 + 6);
      v34[v50].InputFlags &= 0xFFFFFFFC;
      v34[v50].VidPnTargetId = v63;
      v34[v50].InputFlags ^= (v34[v50].InputFlags ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v201))) & 4;
      v64 = v34[v50].InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v201 + 414) == 0 ? 8 : 0);
      v34[v50].InputFlags = v64;
      v65 = v64 ^ (16 * *((_BYTE *)v201 + 415));
      v34[v50].SelectedWireFormat = v59;
      v34[v50].OutputColorSpace = v184;
      v34[v50].InputFlags = v64 ^ v65 & 0x10;
      if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive(v201) == 0) != (*((_BYTE *)v201 + 417) == 0) )
      {
        v48 = v52 | v174;
        v25 = !v60;
        v174 |= v52;
        v22 = 0LL;
        if ( !v25 )
          v34[v50].InputFlags = v34[v50].InputFlags & 0xFFFFFFFC | 1;
        goto LABEL_96;
      }
      if ( v60
        || (v224 & 0x4000) != 0
        || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v205 + 2552), v186) )
      {
        v34[v50].InputFlags ^= (v34[v50].InputFlags ^ (!v60 + 1)) & 3;
        v15 |= v52;
        v173 = v15;
      }
      goto LABEL_46;
    }
    v180 = !v60 + 1;
    v67 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v197, *(_DWORD *)(*((_QWORD *)v202 + 12) + 24LL));
    v208 = v67;
    v185 = 4;
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
    v217 = v73;
    v74 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v73 + 144);
    if ( v74 )
    {
      v70.0 = v74[33].0;
      v185 = v74[34].Value;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v217, 0LL);
    if ( *(_DWORD *)(*((_QWORD *)v69 + 11) + 24LL) != v186 )
      break;
    v75 = *((_DWORD *)v203 + 6);
    v34[v50].InputFlags &= 0xFFFFFFFC;
    v34[v50].VidPnTargetId = v75;
    v34[v50].InputFlags ^= (v34[v50].InputFlags ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v201))) & 4;
    v76 = v34[v50].InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v201 + 414) == 0 ? 8 : 0);
    v34[v50].InputFlags = v76;
    v77 = v76 ^ (16 * *((_BYTE *)v201 + 415));
    v34[v50].SelectedWireFormat = v70;
    v34[v50].InputFlags = v76 ^ v77 & 0x10;
    v34[v50].OutputColorSpace = v185;
    if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v201, 0LL) != 14 )
      v173 |= v52;
    v78 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v201);
    v79 = v209 | v52;
    if ( (v78 == 0) == (*((_BYTE *)v201 + 417) == 0) )
      v79 = v209;
    v174 = v79;
    if ( *(_BYTE *)(v205 + 2385) && (v224 & 0x400000) != 0 )
    {
      v80 = (DXGADAPTER ***)(v205 + 2552);
    }
    else
    {
      v80 = (DXGADAPTER ***)(v205 + 2552);
      if ( !*(_BYTE *)(*(_QWORD *)(v205 + 2552) + 233LL) )
        goto LABEL_69;
    }
    v175 = 1;
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*v80, v186) )
LABEL_69:
      v175 = 0;
    if ( v179 || (v224 & 0x4000) != 0 )
    {
      v82 = v208;
LABEL_94:
      v86 = v180;
      v84 = v202;
      v34[v50].InputFlags ^= (v180 ^ v34[v50].InputFlags) & 3;
      v83 = v184;
      v85 = v52 | v173;
      v173 |= v52;
      goto LABEL_80;
    }
    v81 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v80, v186);
    v82 = v208;
    if ( v81 || !DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(v202, v208, v175) )
      goto LABEL_94;
    v83 = v184;
    if ( v59.Value != v70.Value || v184 != v185 )
    {
      v84 = v202;
      v85 = v52 | v173;
      v173 |= v52;
      goto LABEL_79;
    }
    v84 = v202;
    if ( *((_DWORD *)v202 + 29) == *((_DWORD *)v208 + 29) )
    {
      if ( *((_BYTE *)this + 464) )
      {
        v85 = v52 | v173;
        v173 |= v52;
        goto LABEL_79;
      }
    }
    else
    {
      v187 |= v52;
    }
    v85 = v173;
LABEL_79:
    v86 = v180;
LABEL_80:
    if ( (v52 & v85) == 0
      && (*((_DWORD *)v84 + 26) != *((_DWORD *)v82 + 26) || *((_WORD *)v84 + 54) != *((_WORD *)v82 + 54)) )
    {
      v189 |= v52;
    }
    if ( *((_BYTE *)v201 + 413) )
    {
      v200 |= v52;
      *((_BYTE *)v201 + 413) = 0;
      if ( (unsigned int)(*((_DWORD *)v201 + 20) - 10) <= 1 )
      {
        v173 = v52 | v85;
        v34[v50].InputFlags ^= (v86 ^ v34[v50].InputFlags) & 3;
      }
    }
    if ( v59.Value == v70.Value && v83 == v185 )
    {
      DMMVIDPNPRESENTPATH::SetGammaRamp(v82, *((const struct DXGK_GAMMA_RAMP **)v84 + 23));
      v15 = v173;
LABEL_46:
      v22 = v197;
LABEL_47:
      v45 = 0LL;
      goto LABEL_48;
    }
    DMMVIDPNPRESENTPATH::UpdateGammaRamp(v82);
    v48 = v174;
    v15 = v173;
    v22 = v197;
LABEL_96:
    v45 = 0LL;
LABEL_49:
    v66 = (char *)*((_QWORD *)v202 + 1);
    v43 = v66 - 8;
    if ( v66 == v218 )
      v43 = 0LL;
    v47 = v178 + 1;
    v202 = (DMMVIDPNPRESENTPATH *)v43;
    ++v178;
    if ( !v43 )
    {
      v44 = v193;
      goto LABEL_128;
    }
    v41 = v206;
  }
  v68 = v180;
LABEL_98:
  if ( !v69 )
    v68 = 3;
  v34[v50].VidPnTargetId = *((_DWORD *)v203 + 6);
  InputFlags = v34[v50].InputFlags ^ (v68 ^ v34[v50].InputFlags) & 3;
  v34[v50].InputFlags = InputFlags;
  if ( v69 )
  {
    v88 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v201);
    InputFlags = v34[v50].InputFlags;
  }
  else
  {
    v88 = 0;
  }
  v89 = InputFlags ^ ((unsigned __int8)InputFlags ^ (unsigned __int8)(4 * v88)) & 4;
  v34[v50].InputFlags = v89;
  v90 = v89 & 0xFFFFFFF7 | (*((_BYTE *)v201 + 414) == 0 ? 8 : 0);
  v34[v50].InputFlags = v90;
  v91 = v90 ^ (16 * *((_BYTE *)v201 + 415));
  v34[v50].SelectedWireFormat = v70;
  v15 = v173;
  v92 = v90 ^ v91 & 0x10;
  v93 = v52 | v181;
  v34[v50].InputFlags = v92;
  v34[v50].OutputColorSpace = v185;
  v181 |= v52;
  if ( v69 )
  {
    v94 = *(_DWORD *)(*((_QWORD *)v69 + 11) + 24LL);
    v15 = (1 << v94) | v173;
    v206[v178] = v94;
    v173 = v15;
    v181 = (1 << v94) | v93;
    DMMVIDPNPRESENTPATH::UpdateGammaRamp(v69);
  }
  v22 = v197;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v197, v186, &v213);
  v45 = 0LL;
  if ( NumPathsFromSource < 0 )
  {
    if ( NumPathsFromSource != -1071774919 || v213 )
    {
      v98 = WdLogNewEntry5_WdAssertion(v97, v96);
      WdLogEvent5_WdAssertion(v98);
      v45 = 0LL;
      goto LABEL_109;
    }
LABEL_110:
    v199 |= v52;
LABEL_48:
    v48 = v174;
    goto LABEL_49;
  }
LABEL_109:
  if ( !v213 )
    goto LABEL_110;
  v182 |= v52;
  v15 |= v52;
  v14 = v207;
  v173 = v15;
  if ( !a9 )
  {
LABEL_118:
    if ( !v14 )
      goto LABEL_48;
    goto LABEL_119;
  }
  if ( v207 )
  {
LABEL_119:
    v106 = 0LL;
    while ( 1 )
    {
      v107 = (unsigned int)v106 + 16 * v186;
      if ( v14[v107] == -1 )
        break;
      v106 = (unsigned int)(v106 + 1);
      if ( (unsigned int)v106 >= 0x10 )
        goto LABEL_124;
    }
    v14[v107] = *((_DWORD *)v203 + 6);
LABEL_124:
    if ( (unsigned int)v106 < 0x10 )
      goto LABEL_48;
    v108 = WdLogNewEntry5_WdAssertion(v106, v107);
    WdLogEvent5_WdAssertion(v108);
    goto LABEL_47;
  }
  v99 = (unsigned int *)operator new[](0x400uLL, 0x4E506456u, PagedPool);
  v45 = 0LL;
  v207 = v99;
  v14 = v99;
  if ( v99 )
  {
    v104 = v99;
    for ( i = 256LL; i; --i )
      *v104++ = -1;
    v15 = v173;
    goto LABEL_118;
  }
  v13 = -1073741801;
  v42 = (_QWORD *)WdLogNewEntry5_WdLowResource(v101, v100, v102, v103);
  v42[3] = *(int *)(v205 + 280);
  v42[4] = *(unsigned int *)(v205 + 276);
  v42[5] = -1073741801LL;
LABEL_26:
  WdLogEvent5_WdLowResource(v42);
LABEL_227:
  if ( v34 )
    operator delete[](v34);
  if ( v14 )
    operator delete[](v14);
LABEL_231:
  auto_rc<DMMVIDPN const>::reset(&v215, 0LL, (__int64)a3);
  return v13;
}
