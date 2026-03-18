/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C015434C
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C01564B0 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C001F0AC (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x1C001F464 (-InitializeBootSettings@DXGVALIDATION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C012A2D0 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1C0155368 (-Initialize@DXGBLACKBOX@@QEAAJXZ.c)
 *     ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C01553B8 (-InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ.c)
 *     ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1C0155504 (-CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C015557C (--0QDC_CACHE@@QEAA@_N@Z.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C0155600 (--0EDIDCACHE@@QEAA@XZ.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C0155744 (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C0155888 (CreateDxgkSharedObjectTypes.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C0155FA8 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?DeAllocate@DripsBlockerInfoList@@QEAAXXZ @ 0x1C020E788 (-DeAllocate@DripsBlockerInfoList@@QEAAXXZ.c)
 *     ?Initialize@DripsBlockerInfoList@@QEAAJXZ @ 0x1C020FE3C (-Initialize@DripsBlockerInfoList@@QEAAJXZ.c)
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C02125C4 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  char *v1; // rbx
  __int128 v2; // xmm0
  __int64 v3; // rcx
  struct _ERESOURCE *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  NTSTATUS v17; // eax
  bool v18; // zf
  bool v19; // al
  bool v20; // cf
  int v21; // eax
  int v22; // eax
  bool v23; // al
  bool v24; // al
  bool v25; // al
  bool v26; // al
  bool v27; // al
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  int v34; // eax
  int DxgkSharedObjectTypes; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // edi
  unsigned int v40; // esi
  POOL_TYPE v41; // r14d
  DXGDIAGNOSTICS *v42; // rax
  DXGDIAGNOSTICS *v43; // rax
  DXGDIAGNOSTICS *v44; // rax
  __int64 v45; // rcx
  DXGDIAGNOSTICS *v46; // rax
  DXGSESSIONMGR *v47; // rax
  __int64 v48; // rcx
  DXGSESSIONMGR *v49; // rax
  SIZE_T v50; // rax
  PVOID v51; // rax
  EDIDCACHE *v52; // rax
  __int64 v53; // rcx
  EDIDCACHE *v54; // rax
  __int64 v55; // rcx
  struct _KPROCESS *v56; // rcx
  QDC_CACHE *v57; // rax
  bool v58; // dl
  __int64 v59; // rcx
  QDC_CACHE *v60; // rax
  NTSTATUS v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rdi
  NTSTATUS v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  int OutputBuffer; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v78; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v79; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v80; // [rsp+54h] [rbp-B4h] BYREF
  int v81; // [rsp+58h] [rbp-B0h] BYREF
  int v82; // [rsp+5Ch] [rbp-ACh] BYREF
  int v83; // [rsp+60h] [rbp-A8h] BYREF
  int v84; // [rsp+64h] [rbp-A4h] BYREF
  int v85; // [rsp+68h] [rbp-A0h] BYREF
  int v86; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v87; // [rsp+70h] [rbp-98h] BYREF
  int v88; // [rsp+74h] [rbp-94h] BYREF
  int v89; // [rsp+78h] [rbp-90h] BYREF
  int v90; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v91; // [rsp+80h] [rbp-88h] BYREF
  int v92; // [rsp+84h] [rbp-84h] BYREF
  int v93; // [rsp+88h] [rbp-80h] BYREF
  int v94; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v95; // [rsp+90h] [rbp-78h] BYREF
  int v96; // [rsp+94h] [rbp-74h] BYREF
  int v97; // [rsp+98h] [rbp-70h] BYREF
  int v98; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v99; // [rsp+A0h] [rbp-68h] BYREF
  int v100; // [rsp+A4h] [rbp-64h] BYREF
  int v101; // [rsp+A8h] [rbp-60h] BYREF
  int v102; // [rsp+ACh] [rbp-5Ch] BYREF
  int v103; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING v105; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v106; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v107[11]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v108; // [rsp+148h] [rbp+40h] BYREF
  int v109; // [rsp+150h] [rbp+48h]
  const wchar_t *v110; // [rsp+158h] [rbp+50h]
  unsigned int *v111; // [rsp+160h] [rbp+58h]
  int v112; // [rsp+168h] [rbp+60h]
  __int64 *v113; // [rsp+170h] [rbp+68h]
  int v114; // [rsp+178h] [rbp+70h]
  __int64 v115; // [rsp+180h] [rbp+78h]
  int v116; // [rsp+188h] [rbp+80h]
  const wchar_t *v117; // [rsp+190h] [rbp+88h]
  int *v118; // [rsp+198h] [rbp+90h]
  int v119; // [rsp+1A0h] [rbp+98h]
  int *v120; // [rsp+1A8h] [rbp+A0h]
  int v121; // [rsp+1B0h] [rbp+A8h]
  __int64 v122; // [rsp+1B8h] [rbp+B0h]
  int v123; // [rsp+1C0h] [rbp+B8h]
  const wchar_t *v124; // [rsp+1C8h] [rbp+C0h]
  unsigned int *v125; // [rsp+1D0h] [rbp+C8h]
  int v126; // [rsp+1D8h] [rbp+D0h]
  int *v127; // [rsp+1E0h] [rbp+D8h]
  int v128; // [rsp+1E8h] [rbp+E0h]
  __int64 v129; // [rsp+1F0h] [rbp+E8h]
  int v130; // [rsp+1F8h] [rbp+F0h]
  const wchar_t *v131; // [rsp+200h] [rbp+F8h]
  unsigned int *v132; // [rsp+208h] [rbp+100h]
  int v133; // [rsp+210h] [rbp+108h]
  int *v134; // [rsp+218h] [rbp+110h]
  int v135; // [rsp+220h] [rbp+118h]
  __int64 v136; // [rsp+228h] [rbp+120h]
  int v137; // [rsp+230h] [rbp+128h]
  const wchar_t *v138; // [rsp+238h] [rbp+130h]
  int *v139; // [rsp+240h] [rbp+138h]
  int v140; // [rsp+248h] [rbp+140h]
  int *v141; // [rsp+250h] [rbp+148h]
  int v142; // [rsp+258h] [rbp+150h]
  __int64 v143; // [rsp+260h] [rbp+158h]
  int v144; // [rsp+268h] [rbp+160h]
  const wchar_t *v145; // [rsp+270h] [rbp+168h]
  int *v146; // [rsp+278h] [rbp+170h]
  int v147; // [rsp+280h] [rbp+178h]
  int *v148; // [rsp+288h] [rbp+180h]
  int v149; // [rsp+290h] [rbp+188h]
  __int64 v150; // [rsp+298h] [rbp+190h]
  int v151; // [rsp+2A0h] [rbp+198h]
  const wchar_t *v152; // [rsp+2A8h] [rbp+1A0h]
  int *v153; // [rsp+2B0h] [rbp+1A8h]
  int v154; // [rsp+2B8h] [rbp+1B0h]
  int *v155; // [rsp+2C0h] [rbp+1B8h]
  int v156; // [rsp+2C8h] [rbp+1C0h]
  __int64 v157; // [rsp+2D0h] [rbp+1C8h]
  int v158; // [rsp+2D8h] [rbp+1D0h]
  const wchar_t *v159; // [rsp+2E0h] [rbp+1D8h]
  int *v160; // [rsp+2E8h] [rbp+1E0h]
  int v161; // [rsp+2F0h] [rbp+1E8h]
  int *v162; // [rsp+2F8h] [rbp+1F0h]
  int v163; // [rsp+300h] [rbp+1F8h]
  __int64 v164; // [rsp+308h] [rbp+200h]
  int v165; // [rsp+310h] [rbp+208h]
  const wchar_t *v166; // [rsp+318h] [rbp+210h]
  int *v167; // [rsp+320h] [rbp+218h]
  int v168; // [rsp+328h] [rbp+220h]
  int *v169; // [rsp+330h] [rbp+228h]
  int v170; // [rsp+338h] [rbp+230h]
  __int64 v171; // [rsp+340h] [rbp+238h]
  int v172; // [rsp+348h] [rbp+240h]
  const wchar_t *v173; // [rsp+350h] [rbp+248h]
  int *v174; // [rsp+358h] [rbp+250h]
  int v175; // [rsp+360h] [rbp+258h]
  int *v176; // [rsp+368h] [rbp+260h]
  int v177; // [rsp+370h] [rbp+268h]
  __int64 v178; // [rsp+378h] [rbp+270h]
  int v179; // [rsp+380h] [rbp+278h]
  const wchar_t *v180; // [rsp+388h] [rbp+280h]
  int *v181; // [rsp+390h] [rbp+288h]
  int v182; // [rsp+398h] [rbp+290h]
  int *v183; // [rsp+3A0h] [rbp+298h]
  int v184; // [rsp+3A8h] [rbp+2A0h]
  __int64 v185; // [rsp+3B0h] [rbp+2A8h]
  int v186; // [rsp+3B8h] [rbp+2B0h]
  const wchar_t *v187; // [rsp+3C0h] [rbp+2B8h]
  int *v188; // [rsp+3C8h] [rbp+2C0h]
  int v189; // [rsp+3D0h] [rbp+2C8h]
  int *v190; // [rsp+3D8h] [rbp+2D0h]
  int v191; // [rsp+3E0h] [rbp+2D8h]
  __int64 v192; // [rsp+3E8h] [rbp+2E0h]
  int v193; // [rsp+3F0h] [rbp+2E8h]
  const wchar_t *v194; // [rsp+3F8h] [rbp+2F0h]
  int *v195; // [rsp+400h] [rbp+2F8h]
  int v196; // [rsp+408h] [rbp+300h]
  int *v197; // [rsp+410h] [rbp+308h]
  int v198; // [rsp+418h] [rbp+310h]
  __int64 v199; // [rsp+420h] [rbp+318h]
  int v200; // [rsp+428h] [rbp+320h]
  _BYTE v201[40]; // [rsp+430h] [rbp+328h] BYREF
  _OWORD v202[2]; // [rsp+458h] [rbp+350h] BYREF
  wchar_t v203; // [rsp+478h] [rbp+370h]
  _OWORD v204[9]; // [rsp+488h] [rbp+380h] BYREF
  int v205; // [rsp+518h] [rbp+410h]
  wchar_t v206; // [rsp+51Ch] [rbp+414h]

  v1 = (char *)DXGGLOBAL::m_pGlobal;
  memset(v107, 0, sizeof(v107));
  *((_QWORD *)DXGGLOBAL::m_pGlobal + 1) = v107[0];
  *((_QWORD *)v1 + 2) = v107[1];
  *((_QWORD *)v1 + 3) = v107[2];
  *((_QWORD *)v1 + 4) = v107[3];
  *((_QWORD *)v1 + 5) = v107[4];
  *((_QWORD *)v1 + 6) = v107[5];
  *((_QWORD *)v1 + 7) = v107[6];
  *((_QWORD *)v1 + 8) = v107[7];
  *((_DWORD *)v1 + 18) = v107[8];
  v2 = *(_OWORD *)&v107[9];
  *((_DWORD *)v1 + 19) = HIDWORD(v107[8]);
  *((_OWORD *)v1 + 5) = v2;
  if ( !HMGRTABLE::ExpandTable((HMGRTABLE *)(v1 + 176)) )
  {
    v68 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v68 + 24) = -1073741801LL;
LABEL_44:
    WdLogEvent5_WdLowResource(v68);
    return 3221225495LL;
  }
  v4 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)v1 + 43) = v4;
  if ( !v4 )
  {
    v69 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v69 + 24) = v1;
    *(_QWORD *)(v69 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v69);
    return 3221225495LL;
  }
  v8 = ExInitializeResourceLite(v4);
  v12 = v8;
  if ( v8 < 0 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v70[3] = v1;
    v70[4] = v12;
LABEL_49:
    WdLogEvent5_WdWarning(v70);
    return (unsigned int)v12;
  }
  v13 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 800), 0LL, 0LL, PagedPool, 0, 0x5F8uLL, 0x4B677844u, 0);
  v12 = v13;
  if ( v13 < 0
    || (v1[1009] = 1,
        v17 = ExInitializeLookasideListEx(
                (PLOOKASIDE_LIST_EX)(v1 + 896),
                0LL,
                0LL,
                PagedPool,
                0,
                0x5E0uLL,
                0x4B677844u,
                0),
        v12 = v17,
        v17 < 0) )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v70[3] = v1;
    v70[4] = v12;
    v70[5] = 0LL;
    goto LABEL_49;
  }
  v1[1010] = 1;
  v80 = 0;
  v110 = L"TerminationListSizeLimit";
  v92 = 0;
  v81 = 0;
  v111 = &v80;
  v104 = 0x4000000LL;
  v113 = &v104;
  v117 = L"ValidateWDDMCaps";
  v118 = &v81;
  v93 = 1;
  v120 = &v92;
  v124 = L"WDDM2LockManagement";
  v125 = &v79;
  v127 = &v93;
  v131 = L"MaximumAdapterCount";
  v132 = &v78;
  v134 = &v94;
  v138 = L"InvestigationDebugParameter";
  v139 = &v83;
  v141 = &v95;
  v79 = 0;
  v94 = 32;
  v78 = 0;
  v83 = 0;
  v95 = 0;
  v96 = 0;
  v84 = 0;
  v90 = 0;
  v102 = 0;
  v85 = 0;
  v97 = 0;
  v98 = 0;
  v86 = 0;
  v99 = 0;
  v87 = 0;
  v100 = 0;
  v88 = 0;
  v101 = 0;
  v89 = 0;
  v103 = 0;
  v82 = 0;
  v108 = 0LL;
  v109 = 288;
  v112 = 67108868;
  v114 = 4;
  v115 = 0LL;
  v116 = 288;
  v119 = 67108868;
  v121 = 4;
  v122 = 0LL;
  v123 = 288;
  v126 = 67108868;
  v128 = 4;
  v129 = 0LL;
  v130 = 288;
  v133 = 67108868;
  v135 = 4;
  v136 = 0LL;
  v137 = 288;
  v140 = 67108868;
  v142 = 4;
  v145 = L"EnableIgnoreWin32ProcessStatus";
  v146 = &v84;
  v148 = &v96;
  v152 = L"EnableHMDTestMode";
  v153 = &v85;
  v155 = &v97;
  v159 = L"DisableCcdDatabase";
  v160 = &v86;
  v162 = &v98;
  v166 = L"DisableHpdHandling";
  v167 = &v87;
  v169 = &v99;
  v173 = L"PreserveFirmwareMode";
  v174 = &v88;
  v176 = &v100;
  v180 = L"PreventFullscreenWireFormatChange";
  v181 = &v89;
  v183 = &v101;
  v187 = L"DisableGetMpoBugcheck";
  v188 = &v90;
  v190 = &v102;
  v194 = L"EnableFuzzing";
  v195 = &v82;
  v197 = &v103;
  v143 = 0LL;
  v144 = 288;
  v147 = 67108868;
  v149 = 4;
  v150 = 0LL;
  v151 = 288;
  v154 = 67108868;
  v156 = 4;
  v157 = 0LL;
  v158 = 288;
  v161 = 67108868;
  v163 = 4;
  v164 = 0LL;
  v165 = 288;
  v168 = 67108868;
  v170 = 4;
  v171 = 0LL;
  v172 = 288;
  v175 = 67108868;
  v177 = 4;
  v178 = 0LL;
  v179 = 288;
  v182 = 67108868;
  v184 = 4;
  v185 = 0LL;
  v186 = 288;
  v189 = 67108868;
  v191 = 4;
  v192 = 0LL;
  v193 = 288;
  v196 = 67108868;
  v198 = 4;
  v199 = 0LL;
  v200 = 0;
  memset(v201, 0, sizeof(v201));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v108, 0LL, 0LL) < 0 )
  {
    *((_QWORD *)v1 + 67) = 0x4000000LL;
    v1[544] = 0;
    *((_DWORD *)v1 + 255) = 1;
    *((_DWORD *)v1 + 256) = 32;
    *((_DWORD *)v1 + 328) = 0;
    *((_DWORD *)v1 + 332) = 0;
  }
  else
  {
    v18 = v81 == 0;
    *((_QWORD *)v1 + 67) = v80;
    v19 = !v18;
    v18 = v82 == 0;
    v1[544] = v19;
    v20 = v79 < 2;
    v1[20266] = !v18;
    v21 = 1;
    if ( v20 )
      v21 = v79;
    *((_DWORD *)v1 + 255) = v21;
    v22 = v78;
    if ( v78 < 4 )
    {
      v22 = 4;
    }
    else if ( v78 > 0x400 )
    {
      v22 = 1024;
    }
    v18 = v85 == 1;
    v78 = v22;
    *((_DWORD *)v1 + 256) = v22;
    *((_DWORD *)v1 + 328) = v83;
    *((_DWORD *)v1 + 332) = v84;
    v23 = v18;
    v18 = v86 == 0;
    v1[20265] = v23;
    v24 = !v18;
    v18 = v87 == 0;
    v1[20312] = v24;
    v25 = !v18;
    v18 = v88 == 0;
    v1[20313] = v25;
    v26 = !v18;
    v18 = v89 == 0;
    v1[20314] = v26;
    v27 = !v18;
    v18 = v90 == 0;
    v1[20315] = v27;
    v1[20456] = !v18;
  }
  *((_DWORD *)v1 + 133) = 0;
  v28 = *(_OWORD *)L"Y\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v91 = 0;
  v204[0] = *(_OWORD *)L"\\REGISTRY\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_DWORD *)&v106.Length = 9830548;
  v29 = *(_OWORD *)L"E\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_DWORD *)&v105.Length = 2228256;
  v204[1] = v28;
  v30 = *(_OWORD *)L"\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v204[2] = v29;
  v31 = *(_OWORD *)L"Set001\\Control\\Terminal Server\\WinStations";
  v204[3] = v30;
  v32 = *(_OWORD *)L"ontrol\\Terminal Server\\WinStations";
  v204[4] = v31;
  v33 = *(_OWORD *)L"erminal Server\\WinStations";
  v204[5] = v32;
  v204[6] = v33;
  v204[7] = *(_OWORD *)L"Server\\WinStations";
  v34 = *(_DWORD *)L"ns";
  v204[8] = *(_OWORD *)L"inStations";
  v205 = v34;
  v206 = aRegistryMachin_14[74];
  v106.Buffer = (wchar_t *)v204;
  v203 = aDwmframeinterv[16];
  v105.Buffer = (wchar_t *)v202;
  v202[0] = *(_OWORD *)L"DWMFRAMEINTERVAL";
  v202[1] = *(_OWORD *)L"INTERVAL";
  if ( ReadRegistryDwordKeyValue(&v106, &v105, &v91) >= 0 && v91 )
    *((_DWORD *)v1 + 5110) = v91;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v12 = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes < 0 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
    v70[3] = v12;
    goto LABEL_49;
  }
  v39 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  v40 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x4000;
  v41 = g_IsInternalReleaseOrDbg != 0 ? 512 : PagedPool;
  v42 = (DXGDIAGNOSTICS *)operator new(0x28uLL, 0x4B677844u, PagedPool);
  if ( v42 )
    v43 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v42, v39, v41);
  else
    v43 = 0LL;
  *((_QWORD *)v1 + 75) = v43;
  v44 = (DXGDIAGNOSTICS *)operator new(0x28uLL, 0x4B677844u, PagedPool);
  if ( v44 )
    v46 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v44, v40, v41);
  else
    v46 = 0LL;
  *((_QWORD *)v1 + 76) = v46;
  if ( !*((_QWORD *)v1 + 75) )
  {
    v68 = WdLogNewEntry5_WdLowResource(v45);
    v71 = v39;
LABEL_59:
    *(_QWORD *)(v68 + 24) = v71;
    goto LABEL_44;
  }
  if ( !v46 )
  {
    v68 = WdLogNewEntry5_WdLowResource(v45);
    v71 = v40;
    goto LABEL_59;
  }
  v47 = (DXGSESSIONMGR *)operator new(0xF8uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v47 )
    v49 = DXGSESSIONMGR::DXGSESSIONMGR(v47);
  else
    v49 = 0LL;
  *((_QWORD *)v1 + 77) = v49;
  if ( !v49 )
  {
    v68 = WdLogNewEntry5_WdLowResource(v48);
    *(_QWORD *)(v68 + 24) = 1774LL;
    goto LABEL_44;
  }
  v50 = 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 256) + 31) >> 5);
  if ( !is_mul_ok((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 256) + 31) >> 5, 4uLL) )
    v50 = -1LL;
  v51 = operator new(v50, 0x4B677844u, PagedPool);
  *((_QWORD *)v1 + 65) = v51;
  if ( !v51 )
  {
    v68 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v68 + 24) = 1781LL;
    goto LABEL_44;
  }
  memset(v51, 0, 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 256) + 31) >> 5));
  RtlInitializeBitMap((PRTL_BITMAP)(v1 + 504), *((PULONG *)v1 + 65), *((_DWORD *)v1 + 256));
  v52 = (EDIDCACHE *)operator new(0x278uLL, 0x4B677844u, PagedPool);
  if ( v52 )
    v54 = EDIDCACHE::EDIDCACHE(v52);
  else
    v54 = 0LL;
  *((_QWORD *)v1 + 98) = v54;
  if ( !v54 )
  {
    v72 = WdLogNewEntry5_WdLowResource(v53);
    *(_QWORD *)(v72 + 24) = 1791LL;
    WdLogEvent5_WdLowResource(v72);
  }
  if ( (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)v1 + 129, 0LL, 0LL, 0, 0LL, 0LL) < 0 )
  {
    v68 = WdLogNewEntry5_WdLowResource(v55);
    *(_QWORD *)(v68 + 24) = 1802LL;
    goto LABEL_44;
  }
  v56 = *(struct _KPROCESS **)(*((_QWORD *)v1 + 129) + 56LL);
  if ( PsInitialSystemProcess != v56 )
  {
    v73 = WdLogNewEntry5_WdAssertion(v56);
    *(_QWORD *)(v73 + 24) = 1805LL;
    WdLogEvent5_WdAssertion(v73);
  }
  v57 = (QDC_CACHE *)operator new(0x258uLL, 0x4B677844u, PagedPool);
  if ( v57 )
    v60 = QDC_CACHE::QDC_CACHE(v57, v58);
  else
    v60 = 0LL;
  *((_QWORD *)v1 + 143) = v60;
  if ( !v60 )
  {
    v68 = WdLogNewEntry5_WdLowResource(v59);
    *(_QWORD *)(v68 + 24) = 1810LL;
    goto LABEL_44;
  }
  KeInitializeSpinLock(&SpinLock);
  DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1316));
  DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
  KeInitializeTimer((PKTIMER)v1 + 24);
  KeInitializeDpc((PRKDPC)v1 + 25, (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, v1);
  LOBYTE(OutputBuffer) = 0;
  v61 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v63 = v61;
  if ( v61 < 0 )
  {
    v74 = WdLogNewEntry5_WdError(v62);
    *(_QWORD *)(v74 + 24) = v63;
    goto LABEL_70;
  }
  if ( (_BYTE)OutputBuffer )
  {
    if ( (int)DripsBlockerInfoList::Initialize((DripsBlockerInfoList *)(v1 + 1784)) >= 0 )
    {
      DXGGLOBAL::SubscribeWNFForCSAccounting((DXGGLOBAL *)v1);
      goto LABEL_39;
    }
    DripsBlockerInfoList::DeAllocate((DripsBlockerInfoList *)(v1 + 1784));
    v74 = WdLogNewEntry5_WdError(v75);
    *(_QWORD *)(v74 + 24) = 1862LL;
LABEL_70:
    WdLogEvent5_WdError(v74);
  }
LABEL_39:
  *((_QWORD *)v1 + 211) = v1;
  *((_QWORD *)v1 + 210) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
  *((_QWORD *)v1 + 208) = 0LL;
  DXGGLOBAL::InitializeResourceManagerSid((DXGGLOBAL *)v1);
  *((_DWORD *)v1 + 5063) &= ~1u;
  *((_DWORD *)v1 + 5060) = 10;
  *((_DWORD *)v1 + 5061) = 50;
  *((_DWORD *)v1 + 5062) = 30;
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 175);
  DXGBLACKBOX::Initialize((DXGBLACKBOX *)(v1 + 20376));
  v64 = PoRegisterPowerSettingCallback(
          0LL,
          &GUID_ADVANCED_COLOR_QUALITY_BIAS,
          DXGGLOBAL::AdvancedColorPowerSettingsCallback,
          v1,
          0LL);
  v66 = v64;
  if ( v64 < 0 )
  {
    v76 = WdLogNewEntry5_WdError(v65);
    *(_QWORD *)(v76 + 24) = v66;
    WdLogEvent5_WdError(v76);
  }
  return (unsigned int)v66;
}
