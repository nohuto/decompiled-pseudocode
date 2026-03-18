/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00D1EA8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0005DD4 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0005E08 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0005E40 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0005EC4 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0005FEC (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00063C0 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SetColorSpaceTansform@DMMVIDEOPRESENTTARGET@@QEAAEPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C004DD68 (-SetColorSpaceTansform@DMMVIDEOPRESENTTARGET@@QEAAEPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00D2C28 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00D386C (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00D4CF8 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x1C0286B60 (-GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C0286BDC (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
        VIDPN_MGR *this,
        int a2,
        VIDPN_MGR **a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _DXGK_SET_TIMING_PATH_INFO **a6,
        unsigned int **a7,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a8,
        unsigned int **a9)
{
  struct D3DKMT_VIDPN_SOURCE_MASKS *v9; // rbx
  __int64 v12; // rax
  unsigned int v13; // r14d
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rax
  DMMVIDPNTOPOLOGY *v17; // rdi
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  unsigned int v22; // eax
  unsigned __int64 v23; // r15
  SIZE_T v24; // rax
  unsigned __int64 v25; // kr00_8
  __int64 v26; // rcx
  struct _DXGK_SET_TIMING_PATH_INFO *v27; // rsi
  SIZE_T v28; // rax
  __int64 v29; // rcx
  unsigned int *v30; // r14
  struct DMMVIDPN *v31; // r11
  _QWORD *v32; // rax
  DMMVIDPNPRESENTPATH *v33; // rcx
  unsigned int v34; // eax
  int v35; // edx
  __int64 v36; // rdi
  unsigned int v37; // r15d
  DMMVIDEOPRESENTTARGET *v38; // rdx
  int v39; // r14d
  int v40; // eax
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v44; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v46; // r11d
  struct DMMVIDPNPRESENTPATH *v47; // r15
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v51; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v52; // eax
  unsigned int v53; // edx
  char v54; // al
  int v55; // r8d
  DXGADAPTER ***v56; // r13
  unsigned __int8 v57; // al
  DMMVIDPNPRESENTPATH *v58; // r13
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v59; // r8d
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v60; // r9d
  int v61; // r10d
  int v62; // edx
  DMMVIDEOPRESENTTARGET *v63; // rcx
  __int64 v64; // rax
  DMMVIDPNPRESENTPATH *v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // r13
  __int64 v68; // rcx
  unsigned __int64 v69; // rax
  bool v70; // r14
  int v71; // r15d
  int v72; // edx
  int v73; // eax
  int v74; // eax
  int v75; // ecx
  __int64 v76; // rax
  DMMVIDPNTOPOLOGY *v77; // rax
  unsigned int v78; // edi
  unsigned int v79; // r14d
  __int64 v80; // rax
  int v81; // edi
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v83; // rcx
  int v84; // r15d
  char IsVidPnSourceActive; // al
  unsigned int v86; // edx
  int v87; // edi
  unsigned int v88; // ecx
  unsigned int *v89; // r9
  UINT *p_InputFlags; // r8
  __int64 v91; // r10
  unsigned int v92; // ecx
  __int64 v93; // rcx
  __int64 v94; // rcx
  unsigned int v95; // edx
  __int64 v96; // rcx
  unsigned int *v97; // rcx
  int v98; // eax
  unsigned int v99; // edx
  int v100; // r8d
  int v101; // edx
  int v102; // ecx
  unsigned int *v103; // r15
  struct DMMVIDPNPRESENTPATH *v105; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v106; // eax
  unsigned int v107; // edx
  char v108; // al
  char v109; // al
  unsigned __int8 v110; // al
  unsigned int v111; // eax
  __int64 v112; // r14
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v113; // r13d
  struct _DXGK_SET_TIMING_PATH_INFO *v114; // r14
  __int64 v115; // rax
  __int64 v116; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v117; // rax
  unsigned int v118; // edx
  char v119; // al
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  unsigned int InputFlags; // eax
  char v125; // cl
  int v126; // ecx
  unsigned int v127; // edx
  int v128; // edx
  unsigned int v129; // ecx
  unsigned int v130; // edi
  int NumPathsFromSource; // eax
  __int64 v132; // rcx
  __int64 v133; // rax
  unsigned int *v134; // rax
  __int64 v135; // rcx
  unsigned int *v136; // rdi
  __int64 i; // rcx
  __int64 v138; // rcx
  int v139; // edi
  __int64 v140; // rdx
  __int64 v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rax
  int v144; // eax
  __int64 v145; // rax
  __int64 v146; // r10
  int v147; // r9d
  int v148; // ecx
  unsigned int v149; // edx
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  int v163; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v164; // [rsp+34h] [rbp-CCh]
  unsigned int v165; // [rsp+38h] [rbp-C8h]
  unsigned int v166; // [rsp+3Ch] [rbp-C4h]
  unsigned int v167; // [rsp+40h] [rbp-C0h]
  int v168; // [rsp+48h] [rbp-B8h]
  int v169; // [rsp+4Ch] [rbp-B4h]
  unsigned int v170; // [rsp+4Ch] [rbp-B4h]
  int Value; // [rsp+50h] [rbp-B0h]
  int v172; // [rsp+54h] [rbp-ACh]
  unsigned int v173; // [rsp+58h] [rbp-A8h]
  int v174; // [rsp+5Ch] [rbp-A4h]
  int v175; // [rsp+5Ch] [rbp-A4h]
  int v176; // [rsp+60h] [rbp-A0h]
  int v177; // [rsp+60h] [rbp-A0h]
  int v178; // [rsp+64h] [rbp-9Ch]
  DMMVIDPNTOPOLOGY *v179; // [rsp+68h] [rbp-98h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v180; // [rsp+70h] [rbp-90h]
  __int64 v181; // [rsp+70h] [rbp-90h]
  int v182; // [rsp+78h] [rbp-88h]
  int v183; // [rsp+7Ch] [rbp-84h]
  int v184; // [rsp+80h] [rbp-80h]
  DMMVIDEOPRESENTTARGET *v185; // [rsp+88h] [rbp-78h]
  DMMVIDEOPRESENTTARGET *v186; // [rsp+88h] [rbp-78h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v187; // [rsp+90h] [rbp-70h]
  unsigned int v188; // [rsp+94h] [rbp-6Ch]
  int v189; // [rsp+98h] [rbp-68h]
  int v190; // [rsp+9Ch] [rbp-64h]
  int v191; // [rsp+A0h] [rbp-60h]
  DMMVIDPNPRESENTPATH *v192; // [rsp+A8h] [rbp-58h]
  unsigned int *v193; // [rsp+B0h] [rbp-50h]
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v194; // [rsp+B8h] [rbp-48h]
  __int64 v195; // [rsp+C8h] [rbp-38h]
  DMMVIDPNTOPOLOGY *v196; // [rsp+D0h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v197; // [rsp+D0h] [rbp-30h]
  unsigned int *v198; // [rsp+D8h] [rbp-28h]
  int v199; // [rsp+E0h] [rbp-20h]
  int v200; // [rsp+E4h] [rbp-1Ch]
  unsigned int v201; // [rsp+ECh] [rbp-14h] BYREF
  unsigned int v202; // [rsp+F0h] [rbp-10h]
  struct _D3DDDI_RATIONAL v203; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v204; // [rsp+100h] [rbp+0h]
  unsigned __int64 v205; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v206; // [rsp+110h] [rbp+10h] BYREF
  __int64 v207; // [rsp+118h] [rbp+18h] BYREF
  __int64 v208; // [rsp+120h] [rbp+20h] BYREF
  __int64 v209; // [rsp+128h] [rbp+28h] BYREF
  DMMVIDEOPRESENTTARGET *v210; // [rsp+130h] [rbp+30h]
  __int64 v211; // [rsp+138h] [rbp+38h] BYREF
  struct _DXGK_SET_TIMING_PATH_INFO *v212; // [rsp+140h] [rbp+40h]
  __int64 v213; // [rsp+148h] [rbp+48h]
  DMMVIDPNPRESENTPATH *v214; // [rsp+150h] [rbp+50h]
  unsigned int v216; // [rsp+1B0h] [rbp+B0h]
  int v217; // [rsp+1B0h] [rbp+B0h]
  unsigned int *v220; // [rsp+1C8h] [rbp+C8h]

  v220 = a4;
  v9 = a8;
  v167 = 0;
  v213 = 0LL;
  v214 = 0LL;
  v12 = *((_QWORD *)this + 1);
  v13 = 0;
  v193 = 0LL;
  v14 = 0;
  v165 = 0;
  v188 = 0;
  v169 = 0;
  v168 = 0;
  v174 = 0;
  v166 = 0;
  v189 = 0;
  v184 = 0;
  v163 = 0;
  v176 = 0;
  v190 = 0;
  v178 = 0;
  v191 = 0;
  v183 = 0;
  if ( !v12 )
  {
    v120 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v120);
    v12 = *((_QWORD *)this + 1);
    a4 = v220;
  }
  v195 = *(_QWORD *)(v12 + 16);
  if ( a3 && a3[6] != this )
  {
    v121 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v121 + 24) = a3;
    *(_QWORD *)(v121 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v121);
    return 3221225485LL;
  }
  v15 = *((_QWORD *)this + 11);
  if ( !v15 )
  {
    v207 = 0LL;
    goto LABEL_165;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
  v16 = *((_QWORD *)this + 11);
  v207 = v16;
  if ( !v16 )
  {
LABEL_165:
    v17 = 0LL;
    goto LABEL_8;
  }
  v17 = (DMMVIDPNTOPOLOGY *)(v16 + 96);
LABEL_8:
  v196 = v17;
  v18 = (unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL);
  LODWORD(v19) = 0;
  v179 = (DMMVIDPNTOPOLOGY *)v18;
  if ( v17 )
    v19 = *((_QWORD *)v17 + 5);
  LODWORD(v20) = 0;
  if ( v18 )
    v20 = *(_QWORD *)(((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL)) + 0x28);
  v21 = (_DWORD)v19 + (_DWORD)v20 == 0;
  v22 = v19 + v20;
  v202 = v22;
  if ( v21 )
  {
    *a4 = 0;
    *a5 = 0;
    *a6 = 0LL;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
  }
  else
  {
    v23 = v22;
    v25 = v22;
    v24 = 56LL * v22;
    if ( !is_mul_ok(v25, 0x38uLL) )
      v24 = -1LL;
    v212 = (struct _DXGK_SET_TIMING_PATH_INFO *)operator new(v24, 0x4E506456u, PagedPool);
    v27 = v212;
    if ( v212 )
    {
      v28 = 4 * v23;
      if ( !is_mul_ok(v23, 4uLL) )
        v28 = -1LL;
      v198 = (unsigned int *)operator new(v28, 0x4E506456u, PagedPool);
      v30 = v198;
      if ( !v198 )
      {
        v13 = -1073741801;
        v123 = WdLogNewEntry5_WdLowResource(v29);
        *(_QWORD *)(v123 + 24) = v23;
        *(_QWORD *)(v123 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v123);
        v103 = 0LL;
        goto LABEL_145;
      }
      memset(v212, 0, 56 * v23);
      memset(v198, 0, 4LL * (unsigned int)v23);
      v31 = 0LL;
      if ( v17 )
      {
        v32 = (_QWORD *)*((_QWORD *)v17 + 3);
        v204 = (unsigned __int64)v17 + 24;
        if ( v32 != (_QWORD *)((char *)v17 + 24) )
        {
          v33 = (DMMVIDPNPRESENTPATH *)(v32 - 1);
          v192 = (DMMVIDPNPRESENTPATH *)(v32 - 1);
          if ( v32 != (_QWORD *)8 )
          {
            v34 = 0;
            v35 = 0;
            while ( 1 )
            {
              v200 = v35;
              v36 = v34;
              v37 = *(_DWORD *)(*((_QWORD *)v33 + 11) + 24LL);
              v30[v34] = v37;
              v38 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v33 + 12);
              v39 = 1 << v37;
              v165 |= 1 << v37;
              v40 = 1 << v37;
              v199 = v14;
              v41 = *((_QWORD *)v38 + 12);
              v173 = v37;
              v185 = v38;
              v210 = (DMMVIDEOPRESENTTARGET *)v41;
              Value = 4;
              if ( (*(_BYTE *)(v41 + 548) & 0x40) != 0 )
                v40 = 0;
              v178 |= v40;
              v194.Value = 0;
              v187.Value = 0;
              v182 = *(_DWORD *)(*(_QWORD *)(v41 + 520) + 24LL);
              v42 = *((_QWORD *)v38 + 13);
              if ( v42 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v42 + 96));
                v43 = *((_QWORD *)v38 + 13);
                v194.Value = 0;
              }
              else
              {
                v43 = 0LL;
              }
              v208 = v43;
              v44 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v43 + 144);
              if ( v44 )
              {
                Value = v44[34].Value;
                v194.0 = v44[33].0;
                v187.0 = v194.0;
              }
              auto_rc<DMMVIDPNTARGETMODESET>::reset(&v208, 0LL);
              if ( !v179 )
              {
                v106 = *((_DWORD *)v185 + 6);
                v27[v36].InputFlags &= 0xFFFFFFFC;
                v27[v36].VidPnTargetId = v106;
                v27[v36].InputFlags ^= (v27[v36].InputFlags ^ (4
                                                             * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v41))) & 4;
                v107 = v27[v36].InputFlags & 0xFFFFFFF7 | (*(_BYTE *)(v41 + 414) == 0 ? 8 : 0);
                v27[v36].InputFlags = v107;
                v108 = v107 ^ (16 * *(_BYTE *)(v41 + 415));
                v27[v36].SelectedWireFormat = v194;
                v27[v36].OutputColorSpace = Value;
                v27[v36].InputFlags = v107 ^ v108 & 0x10;
                v109 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v41);
                v31 = 0LL;
                if ( (v109 == 0) == (*(_BYTE *)(v41 + 417) == 0) )
                {
                  if ( v182 == 13
                    || (a2 & 0x4000) != 0
                    || (v110 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v195 + 2520), v37),
                        v31 = 0LL,
                        v110) )
                  {
                    v27[v36].InputFlags = v27[v36].InputFlags & 0xFFFFFFFC | ((v182 != 13) + 1);
                    v14 |= v39;
                  }
                  v18 = 0LL;
                  goto LABEL_61;
                }
                v18 = 0LL;
                v35 = v39 | v163;
                v163 |= v39;
                if ( v182 == 13 )
                  v27[v36].InputFlags = v27[v36].InputFlags & 0xFFFFFFFC | 1;
                goto LABEL_62;
              }
              PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v179, *(_DWORD *)(*((_QWORD *)v192 + 12) + 24LL));
              v172 = 4;
              v180.Value = 0;
              v47 = PathFromTarget;
              if ( !PathFromTarget )
                goto LABEL_185;
              v48 = *((_QWORD *)PathFromTarget + 12);
              v49 = *(_QWORD *)(v48 + 104);
              if ( v49 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v49 + 96));
                v50 = *(_QWORD *)(v48 + 104);
                v194.0 = v187.0;
                v180.Value = 0;
              }
              else
              {
                v50 = 0LL;
              }
              v209 = v50;
              v51 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v50 + 144);
              if ( v51 )
              {
                v172 = v51[34].Value;
                v180.0 = v51[33].0;
              }
              auto_rc<DMMVIDPNTARGETMODESET>::reset(&v209, 0LL);
              if ( *(_DWORD *)(*((_QWORD *)v47 + 11) + 24LL) != v173 )
              {
                v46 = (v182 != 13) + 1;
LABEL_185:
                v27[v36].VidPnTargetId = *((_DWORD *)v185 + 6);
                if ( !v47 )
                  v46 = 3;
                InputFlags = v46 | v27[v36].InputFlags & 0xFFFFFFFC;
                v27[v36].InputFlags = InputFlags;
                if ( v47 )
                {
                  v125 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v41);
                  InputFlags = v27[v36].InputFlags;
                }
                else
                {
                  v125 = 0;
                }
                v126 = InputFlags ^ ((unsigned __int8)InputFlags ^ (unsigned __int8)(4 * v125)) & 4;
                v27[v36].InputFlags = v126;
                v127 = v126 & 0xFFFFFFF7 | (*(_BYTE *)(v41 + 414) == 0 ? 8 : 0);
                v27[v36].InputFlags = v127;
                v27[v36].InputFlags = v127 ^ ((unsigned __int8)v127 ^ (unsigned __int8)(16 * *(_BYTE *)(v41 + 415))) & 0x10;
                v128 = v39 | v168;
                v27[v36].SelectedWireFormat = v180;
                v27[v36].OutputColorSpace = v172;
                v168 |= v39;
                if ( v47 )
                {
                  v129 = *(_DWORD *)(*((_QWORD *)v47 + 11) + 24LL);
                  v14 |= 1 << v129;
                  v168 = (1 << v129) | v128;
                  v198[v167] = v129;
                  DMMVIDPNPRESENTPATH::UpdateGammaRamp(v47);
                }
                v18 = (unsigned __int64)v179;
                v130 = v173;
                NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v179, v173, &v205);
                v31 = 0LL;
                if ( NumPathsFromSource < 0 )
                {
                  if ( NumPathsFromSource != -1071774919 || v205 )
                  {
                    v133 = WdLogNewEntry5_WdAssertion(v132);
                    WdLogEvent5_WdAssertion(v133);
                    v31 = 0LL;
                    goto LABEL_196;
                  }
LABEL_209:
                  v189 |= v39;
LABEL_61:
                  v35 = v163;
                  goto LABEL_62;
                }
LABEL_196:
                if ( !v205 )
                  goto LABEL_209;
                v169 |= v39;
                v14 |= v39;
                v103 = v193;
                if ( a9 )
                {
                  if ( !v193 )
                  {
                    v134 = (unsigned int *)operator new(0x400uLL, 0x4E506456u, PagedPool);
                    v31 = 0LL;
                    v193 = v134;
                    v103 = v134;
                    if ( !v134 )
                    {
                      v13 = -1073741801;
                      v142 = (_QWORD *)WdLogNewEntry5_WdLowResource(v135);
                      v142[3] = *(int *)(v195 + 280);
                      v142[4] = *(unsigned int *)(v195 + 276);
                      v142[5] = -1073741801LL;
                      WdLogEvent5_WdLowResource(v142);
                      goto LABEL_145;
                    }
                    v136 = v134;
                    for ( i = 256LL; i; --i )
                      *v136++ = -1;
                    v130 = v173;
                    goto LABEL_204;
                  }
                }
                else
                {
LABEL_204:
                  if ( !v103 )
                    goto LABEL_61;
                }
                v138 = 0LL;
                v139 = 2 * v130;
                while ( 1 )
                {
                  v140 = (unsigned int)(v138 + 8 * v139);
                  if ( v103[v140] == -1 )
                    break;
                  v138 = (unsigned int)(v138 + 1);
                  if ( (unsigned int)v138 >= 0x10 )
                    goto LABEL_211;
                }
                v103[v140] = *((_DWORD *)v185 + 6);
LABEL_211:
                if ( (unsigned int)v138 < 0x10 )
                  goto LABEL_61;
                v141 = WdLogNewEntry5_WdAssertion(v138);
                WdLogEvent5_WdAssertion(v141);
LABEL_60:
                v31 = 0LL;
                goto LABEL_61;
              }
              v52 = *((_DWORD *)v185 + 6);
              v27[v36].InputFlags &= 0xFFFFFFFC;
              v27[v36].VidPnTargetId = v52;
              v27[v36].InputFlags ^= (v27[v36].InputFlags ^ (4
                                                           * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v41))) & 4;
              v14 |= v39;
              v53 = v27[v36].InputFlags & 0xFFFFFFF7 | (*(_BYTE *)(v41 + 414) == 0 ? 8 : 0);
              v27[v36].InputFlags = v53;
              v27[v36].InputFlags = v53 ^ ((unsigned __int8)v53 ^ (unsigned __int8)(16 * *(_BYTE *)(v41 + 415))) & 0x10;
              v27[v36].SelectedWireFormat = v180;
              v27[v36].OutputColorSpace = v172;
              if ( *(_DWORD *)(*(_QWORD *)(v41 + 520) + 24LL) == 14 )
                v14 = v199;
              v54 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v41);
              v55 = v39 | v200;
              if ( (v54 == 0) == (*(_BYTE *)(v41 + 417) == 0) )
                v55 = v200;
              v163 = v55;
              if ( *(_BYTE *)(v195 + 2361) && (a2 & 0x400000) != 0 )
              {
                v56 = (DXGADAPTER ***)(v195 + 2520);
              }
              else
              {
                v56 = (DXGADAPTER ***)(v195 + 2520);
                if ( !*(_BYTE *)(*(_QWORD *)(v195 + 2520) + 132LL) )
                  goto LABEL_159;
              }
              v164 = 1;
              if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*v56, v173) )
LABEL_159:
                v164 = 0;
              if ( v182 == 13 || (a2 & 0x4000) != 0 )
              {
                v58 = v192;
              }
              else
              {
                v57 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v56, v173);
                v58 = v192;
                if ( !v57 && DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(v192, v47, v164) )
                {
                  v59.0 = v180.0;
                  v60.0 = v194.0;
                  v61 = Value;
                  if ( v194.Value == v180.Value && Value == v172 )
                  {
                    if ( *((_DWORD *)v192 + 29) != *((_DWORD *)v47 + 29) )
                    {
                      v174 |= v39;
                      goto LABEL_52;
                    }
                    if ( !*((_BYTE *)this + 464) )
                    {
LABEL_52:
                      v62 = (v182 != 13) + 1;
                      goto LABEL_53;
                    }
                  }
                  v14 |= v39;
                  goto LABEL_52;
                }
              }
              v62 = (v182 != 13) + 1;
              v59.0 = v180.0;
              v60.0 = v194.0;
              v14 |= v39;
              v61 = Value;
              v27[v36].InputFlags = v62 | v27[v36].InputFlags & 0xFFFFFFFC;
LABEL_53:
              if ( (v39 & v14) == 0
                && (*((_DWORD *)v58 + 26) != *((_DWORD *)v47 + 26) || *((_WORD *)v58 + 54) != *((_WORD *)v47 + 54)) )
              {
                v176 |= v39;
              }
              v63 = v210;
              if ( *((_BYTE *)v210 + 413) )
              {
                v190 |= v39;
                v111 = *((_DWORD *)v210 + 20) - 10;
                *((_BYTE *)v210 + 413) = 0;
                if ( v111 <= 1 )
                {
                  v14 |= v39;
                  v27[v36].InputFlags = v62 | v27[v36].InputFlags & 0xFFFFFFFC;
                }
              }
              if ( v60.Value == v59.Value && v61 == v172 )
              {
                DMMVIDPNPRESENTPATH::SetGammaRamp(v47, *((const struct DXGK_GAMMA_RAMP **)v58 + 23));
                v18 = (unsigned __int64)v179;
                goto LABEL_60;
              }
              DMMVIDEOPRESENTTARGET::SetColorSpaceTansform(v63, 0LL);
              DMMVIDPNPRESENTPATH::UpdateGammaRamp(v47);
              v35 = v163;
              v31 = 0LL;
              v18 = (unsigned __int64)v179;
LABEL_62:
              v64 = *((_QWORD *)v192 + 1);
              v33 = (DMMVIDPNPRESENTPATH *)(v64 - 8);
              if ( v64 == v204 )
                v33 = 0LL;
              v34 = v167 + 1;
              v192 = v33;
              ++v167;
              if ( !v33 )
                break;
              v30 = v198;
            }
          }
        }
      }
      v65 = 0LL;
      if ( v18 )
      {
        v66 = *(_QWORD *)(v18 + 24);
        if ( v66 != v18 + 24 )
          v65 = (DMMVIDPNPRESENTPATH *)(v66 - 8);
      }
      if ( v65 )
      {
        v204 = v18 + 24;
        while ( 1 )
        {
          v67 = *(unsigned int *)(*((_QWORD *)v65 + 11) + 24LL);
          v181 = *((_QWORD *)v65 + 12);
          v186 = *(DMMVIDEOPRESENTTARGET **)(v181 + 96);
          if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(
                               v179,
                               *(_DWORD *)(*((_QWORD *)v65 + 11) + 24LL),
                               &v206)
            || (v69 = v206) == 0 )
          {
            v143 = WdLogNewEntry5_WdAssertion(v68);
            WdLogEvent5_WdAssertion(v143);
            v69 = v206;
          }
          v70 = v69 != 1;
          v71 = 1 << v67;
          v188 |= 1 << v67;
          v72 = *((_DWORD *)v186 + 137);
          v73 = 1 << v67;
          if ( (v72 & 0x40) != 0 )
            v73 = 0;
          v178 |= v73;
          if ( (v72 & 0x80) == 0 || (v74 = 1 << v67, v70) )
            v74 = 0;
          v191 |= v74;
          v75 = v166 | v71;
          if ( (v165 & v71) != 0 )
            v75 = v166;
          v166 = v75;
          if ( !a8 )
            goto LABEL_80;
          if ( (v72 & 0x100) == 0 )
            goto LABEL_80;
          v144 = v183;
          if ( (v183 & 2) != 0 )
            goto LABEL_80;
          if ( !v70 && (v72 & 0x80) != 0 )
          {
            if ( !v214 || DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(v214, v65) )
            {
              if ( !*((_DWORD *)a8 + 58) )
              {
                v214 = v65;
                v203 = 0LL;
                *((_DWORD *)a8 + 59) = v67;
                *((_DWORD *)a8 + 60) = 1;
                DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(v65, &v203);
                *((_DWORD *)a8 + 61) = 1000000 * (unsigned __int64)v203.Denominator / v203.Numerator;
              }
              *((_DWORD *)a8 + v67 + 38) = *((_DWORD *)a8 + v67 + 38) & 0xFFFFFFF8 | 1;
              *((_DWORD *)a8 + 58) |= v71;
              goto LABEL_80;
            }
            v144 = v183;
          }
          v183 = v144 | 2;
          DxgkLogCodePointPacket(0x65u, v67, 1u, v70, *(_QWORD *)(v195 + 276));
LABEL_80:
          v31 = 0LL;
          if ( !v196 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v196, *(_DWORD *)(v181 + 24)) )
          {
            v112 = v167;
            v198[v167] = v67;
            v113.Value = 0;
            ++v167;
            v114 = &v27[v112];
            v217 = 4;
            v115 = *(_QWORD *)(v181 + 104);
            if ( v115 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v115 + 96));
              v116 = *(_QWORD *)(v181 + 104);
              v113.Value = 0;
            }
            else
            {
              v116 = (__int64)v31;
            }
            v211 = v116;
            v117 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v116 + 144);
            if ( v117 )
            {
              v113.0 = v117[33].0;
              v217 = v117[34].Value;
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v211, 0LL);
            v114->VidPnTargetId = *(_DWORD *)(v181 + 24);
            v114->InputFlags = v114->InputFlags & 0xFFFFFFFC | 1;
            v114->InputFlags ^= (v114->InputFlags ^ (4 * (unsigned __int8)DMMVIDEOPRESENTTARGET::NeedToBeActive(v186))) & 4;
            v168 |= v71;
            v14 |= v71;
            v118 = v114->InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v186 + 414) == 0 ? 8 : 0);
            v114->InputFlags = v118;
            v119 = v118 ^ (16 * *((_BYTE *)v186 + 415));
            v114->SelectedWireFormat = v113;
            v114->InputFlags = v118 ^ v119 & 0x10;
            v114->OutputColorSpace = v217;
            DMMVIDPNPRESENTPATH::UpdateGammaRamp(v65);
            v31 = 0LL;
            *((_BYTE *)v186 + 413) = 0;
          }
          v76 = *((_QWORD *)v65 + 1);
          v65 = (DMMVIDPNPRESENTPATH *)(v76 - 8);
          if ( v76 == v204 )
            v65 = v31;
          if ( !v65 )
          {
            v18 = (unsigned __int64)v179;
            break;
          }
        }
      }
      v77 = v196;
      v78 = v165;
      v79 = (unsigned int)v31;
      if ( v18 )
      {
        v78 = v188;
        v77 = (DMMVIDPNTOPOLOGY *)v18;
      }
      v197 = v77;
      v216 = v78;
      v80 = *(_QWORD *)(v195 + 2520);
      if ( *(_DWORD *)(v80 + 80) > (unsigned int)v31 )
      {
        v81 = 0;
        while ( 1 )
        {
          MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v197, v79, &v201);
          v84 = MostImportantVidPnPathTargetsFromSource;
          if ( MostImportantVidPnPathTargetsFromSource >= 0 )
          {
            if ( v201 != -1 )
            {
              v105 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v197, v201);
              IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v105 + 12) + 96LL));
LABEL_93:
              v31 = 0LL;
              if ( IsVidPnSourceActive )
                v81 |= 1 << v79;
              goto LABEL_95;
            }
          }
          else
          {
            if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
              goto LABEL_92;
            v145 = WdLogNewEntry5_WdAssertion(v83);
            WdLogEvent5_WdAssertion(v145);
          }
          if ( v84 == -1071774919 )
          {
LABEL_92:
            IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v195 + 2520), v79);
            goto LABEL_93;
          }
          v31 = 0LL;
LABEL_95:
          v80 = *(_QWORD *)(v195 + 2520);
          if ( ++v79 >= *(_DWORD *)(v80 + 80) )
          {
            v9 = a8;
            v27 = v212;
            v184 = v81;
            v78 = v216;
            break;
          }
        }
      }
      if ( v9 && a3 != (VIDPN_MGR **)v31 )
      {
        v86 = (unsigned int)v31;
        if ( *(_DWORD *)(v80 + 80) > (unsigned int)v31 )
        {
          v87 = v183;
          do
          {
            v88 = *((_DWORD *)v9 + v86 + 38) & 7;
            if ( v88 )
            {
              v146 = v88;
              v147 = 1 << v88;
              if ( ((1 << v88) & v87) != 0 || (v148 = *((_DWORD *)v9 + 4 * v88 + 54)) != 0 && ((v148 - 1) & v148) == 0 )
              {
                *((_DWORD *)v9 + v86 + 38) &= 0xFFFFFFF8;
                v87 |= v147;
                *((_DWORD *)v9 + 4 * v146 + 54) = 0;
                *((_DWORD *)v9 + 4 * v146 + 56) = 0;
              }
            }
            ++v86;
          }
          while ( v86 < *(_DWORD *)(*(_QWORD *)(v195 + 2520) + 80LL) );
          v78 = v216;
        }
        if ( v167 )
        {
          v89 = v198;
          p_InputFlags = &v27->InputFlags;
          v91 = v167;
          do
          {
            v92 = *((_DWORD *)v9 + *v89 + 38) & 7;
            if ( v92 )
            {
              v149 = *p_InputFlags & 0xFFFFFF1F | (32 * v92);
              *p_InputFlags = v149;
              *p_InputFlags = v149 ^ ((unsigned __int16)v149 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v9 + 4 * v92 + 56) << 8)) & 0xF00;
            }
            ++v89;
            p_InputFlags += 14;
            --v91;
          }
          while ( v91 );
        }
      }
      v170 = ~v189 & v169;
      v93 = v170;
      if ( ((unsigned int)v93 & v14) != (_DWORD)v93 )
      {
        v150 = WdLogNewEntry5_WdAssertion(v170);
        WdLogEvent5_WdAssertion(v150);
      }
      if ( (v189 & v14) != 0 )
      {
        v151 = WdLogNewEntry5_WdAssertion(v93);
        WdLogEvent5_WdAssertion(v151);
      }
      v175 = ~v14 & v174;
      if ( (v189 & v175) != 0 )
      {
        v152 = WdLogNewEntry5_WdAssertion(v93);
        WdLogEvent5_WdAssertion(v152);
      }
      if ( (v168 & v189) != v189 )
      {
        v153 = WdLogNewEntry5_WdAssertion(v93);
        WdLogEvent5_WdAssertion(v153);
      }
      if ( (v170 & v168) != v170 )
      {
        v154 = WdLogNewEntry5_WdAssertion(v93);
        WdLogEvent5_WdAssertion(v154);
      }
      if ( (v168 & (v14 | v189)) != v168 )
      {
        v155 = WdLogNewEntry5_WdAssertion(v93);
        WdLogEvent5_WdAssertion(v155);
      }
      v94 = v166;
      if ( (v14 & v166) != v166 )
      {
        v156 = WdLogNewEntry5_WdAssertion(v166);
        WdLogEvent5_WdAssertion(v156);
        v94 = v166;
      }
      if ( (v168 & (unsigned int)v94) != (_DWORD)v94 )
      {
        v157 = WdLogNewEntry5_WdAssertion(v94);
        WdLogEvent5_WdAssertion(v157);
        v94 = v166;
      }
      if ( ((unsigned int)v94 & v165) != 0 )
      {
        v158 = WdLogNewEntry5_WdAssertion(v94);
        WdLogEvent5_WdAssertion(v158);
      }
      if ( (v78 & v189) != 0 )
      {
        v159 = WdLogNewEntry5_WdAssertion(v94);
        WdLogEvent5_WdAssertion(v159);
      }
      v95 = v165;
      v96 = v189 | v78;
      if ( (v165 | v166) != (_DWORD)v96 )
      {
        v160 = WdLogNewEntry5_WdAssertion(v96);
        WdLogEvent5_WdAssertion(v160);
        v95 = v165;
      }
      v177 = ~v14 & v176;
      v13 = 0;
      *v220 = v202;
      v97 = v198;
      *a5 = v167;
      *a6 = v27;
      v27 = 0LL;
      *a7 = v198;
      if ( v9 )
      {
        if ( *(_DWORD *)v9 && *(_DWORD *)v9 != v95 )
        {
          v161 = WdLogNewEntry5_WdAssertion(v198);
          WdLogEvent5_WdAssertion(v161);
        }
        v98 = *((_DWORD *)v9 + 1);
        v99 = v165;
        *(_DWORD *)v9 = v165;
        if ( v98 && v98 != v78 )
        {
          v162 = WdLogNewEntry5_WdAssertion(v97);
          WdLogEvent5_WdAssertion(v162);
          v99 = v165;
        }
        *((_DWORD *)v9 + 10) = v175;
        *((_DWORD *)v9 + 4) = v166;
        *((_DWORD *)v9 + 13) = v170;
        *((_DWORD *)v9 + 5) = v184;
        *((_DWORD *)v9 + 6) = v163;
        *((_DWORD *)v9 + 12) = v177;
        *((_DWORD *)v9 + 37) = v191;
        *((_DWORD *)v9 + 1) = v78;
        *((_DWORD *)v9 + 2) = v14;
        *((_DWORD *)v9 + 7) = v168;
        *((_DWORD *)v9 + 3) = v189;
        *((_DWORD *)v9 + 16) = v190;
        *((_DWORD *)v9 + 19) = 0;
        *((_DWORD *)v9 + 17) = 0;
        if ( (a2 & 0x10000) != 0 )
        {
          *((_DWORD *)v9 + 14) = -1;
        }
        else
        {
          v100 = ~(v99 | v78) | v178;
          v101 = v14 & v100;
          v102 = v190 | v168 | *((_DWORD *)v9 + 14) | ((v168 & v100) != 0 ? v100 : 0);
          *((_DWORD *)v9 + 14) = v102;
          if ( (((v14 & v100) - 1) & v14 & v100) != 0 )
          {
            *((_DWORD *)v9 + 14) = v100 | v102;
          }
          else if ( v101 )
          {
            *((_DWORD *)v9 + 14) = v102 | v100 & ~v101;
          }
        }
        FillFailedStatus(v9, 0);
      }
      if ( a9 )
      {
        v103 = 0LL;
        *a9 = v193;
      }
      else
      {
        v103 = v193;
      }
LABEL_145:
      if ( v27 )
        operator delete[](v27);
      if ( v103 )
        operator delete[](v103);
    }
    else
    {
      v13 = -1073741801;
      v122 = WdLogNewEntry5_WdLowResource(v26);
      *(_QWORD *)(v122 + 24) = v23;
      *(_QWORD *)(v122 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v122);
    }
  }
  auto_rc<DMMVIDPN const>::reset(&v207, 0LL);
  return v13;
}
