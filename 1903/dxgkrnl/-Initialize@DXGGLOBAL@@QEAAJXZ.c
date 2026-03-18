/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0169FCC
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C0159960 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z @ 0x1C001F5AC (--0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z.c)
 *     ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x1C001F9C8 (-InitializeBootSettings@DXGVALIDATION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00F4554 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C0138BB4 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C015AE24 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1C016C3B4 (-Initialize@DXGBLACKBOX@@QEAAJXZ.c)
 *     ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C016C400 (-InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ.c)
 *     ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1C016C54C (-CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C016C5C4 (--0QDC_CACHE@@QEAA@_N@Z.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C016C648 (--0EDIDCACHE@@QEAA@XZ.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C016C78C (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C016C8D8 (CreateDxgkSharedObjectTypes.c)
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C0246220 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  char *v1; // rbx
  __int128 v2; // xmm0
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _ERESOURCE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  NTSTATUS v20; // eax
  unsigned __int8 v21; // r9
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // r8d
  unsigned int v26; // eax
  bool v27; // al
  bool v28; // cf
  int v29; // eax
  int v30; // eax
  bool v31; // al
  bool v32; // al
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  int v39; // eax
  int DxgkSharedObjectTypes; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // eax
  POOL_TYPE v47; // edi
  DXGDIAGNOSTICS *v48; // rax
  DXGDIAGNOSTICS *v49; // rax
  DXGDIAGNOSTICS *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  DXGDIAGNOSTICS *v55; // rax
  DXGSESSIONMGR *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  DXGSESSIONMGR *v61; // rax
  SIZE_T v62; // rax
  PVOID v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  EDIDCACHE *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  EDIDCACHE *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  struct _KPROCESS *v77; // rcx
  QDC_CACHE *v78; // rax
  _BOOL8 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  QDC_CACHE *v83; // rax
  NTSTATUS v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rdi
  NTSTATUS v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rbx
  __int64 v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  int OutputBuffer; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v104; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v105; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v106; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v107; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v108; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v109; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v110; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v111; // [rsp+68h] [rbp-A0h] BYREF
  int v112; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v113; // [rsp+70h] [rbp-98h] BYREF
  int v114; // [rsp+74h] [rbp-94h] BYREF
  int v115; // [rsp+78h] [rbp-90h] BYREF
  int v116; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v117; // [rsp+80h] [rbp-88h] BYREF
  int v118; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v119; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v120; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v121; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v122; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v123; // [rsp+98h] [rbp-70h] BYREF
  int v124; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v125; // [rsp+A0h] [rbp-68h] BYREF
  int v126; // [rsp+A4h] [rbp-64h] BYREF
  int v127; // [rsp+A8h] [rbp-60h] BYREF
  int v128; // [rsp+ACh] [rbp-5Ch] BYREF
  int v129; // [rsp+B0h] [rbp-58h] BYREF
  int v130; // [rsp+B4h] [rbp-54h] BYREF
  int v131; // [rsp+B8h] [rbp-50h] BYREF
  int v132; // [rsp+BCh] [rbp-4Ch] BYREF
  int v133; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v134; // [rsp+C8h] [rbp-40h] BYREF
  struct _UNICODE_STRING v135; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v136[14]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v137; // [rsp+158h] [rbp+50h] BYREF
  int v138; // [rsp+160h] [rbp+58h]
  const wchar_t *v139; // [rsp+168h] [rbp+60h]
  unsigned int *v140; // [rsp+170h] [rbp+68h]
  int v141; // [rsp+178h] [rbp+70h]
  _QWORD *v142; // [rsp+180h] [rbp+78h]
  int v143; // [rsp+188h] [rbp+80h]
  __int64 v144; // [rsp+190h] [rbp+88h]
  int v145; // [rsp+198h] [rbp+90h]
  const wchar_t *v146; // [rsp+1A0h] [rbp+98h]
  int *v147; // [rsp+1A8h] [rbp+A0h]
  int v148; // [rsp+1B0h] [rbp+A8h]
  int *v149; // [rsp+1B8h] [rbp+B0h]
  int v150; // [rsp+1C0h] [rbp+B8h]
  __int64 v151; // [rsp+1C8h] [rbp+C0h]
  int v152; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v153; // [rsp+1D8h] [rbp+D0h]
  unsigned int *v154; // [rsp+1E0h] [rbp+D8h]
  int v155; // [rsp+1E8h] [rbp+E0h]
  int *v156; // [rsp+1F0h] [rbp+E8h]
  int v157; // [rsp+1F8h] [rbp+F0h]
  __int64 v158; // [rsp+200h] [rbp+F8h]
  int v159; // [rsp+208h] [rbp+100h]
  const wchar_t *v160; // [rsp+210h] [rbp+108h]
  unsigned int *v161; // [rsp+218h] [rbp+110h]
  int v162; // [rsp+220h] [rbp+118h]
  int *v163; // [rsp+228h] [rbp+120h]
  int v164; // [rsp+230h] [rbp+128h]
  __int64 v165; // [rsp+238h] [rbp+130h]
  int v166; // [rsp+240h] [rbp+138h]
  const wchar_t *v167; // [rsp+248h] [rbp+140h]
  int *v168; // [rsp+250h] [rbp+148h]
  int v169; // [rsp+258h] [rbp+150h]
  int *v170; // [rsp+260h] [rbp+158h]
  int v171; // [rsp+268h] [rbp+160h]
  __int64 v172; // [rsp+270h] [rbp+168h]
  int v173; // [rsp+278h] [rbp+170h]
  const wchar_t *v174; // [rsp+280h] [rbp+178h]
  int *v175; // [rsp+288h] [rbp+180h]
  int v176; // [rsp+290h] [rbp+188h]
  int *v177; // [rsp+298h] [rbp+190h]
  int v178; // [rsp+2A0h] [rbp+198h]
  __int64 v179; // [rsp+2A8h] [rbp+1A0h]
  int v180; // [rsp+2B0h] [rbp+1A8h]
  const wchar_t *v181; // [rsp+2B8h] [rbp+1B0h]
  int *v182; // [rsp+2C0h] [rbp+1B8h]
  int v183; // [rsp+2C8h] [rbp+1C0h]
  int *v184; // [rsp+2D0h] [rbp+1C8h]
  int v185; // [rsp+2D8h] [rbp+1D0h]
  __int64 v186; // [rsp+2E0h] [rbp+1D8h]
  int v187; // [rsp+2E8h] [rbp+1E0h]
  const wchar_t *v188; // [rsp+2F0h] [rbp+1E8h]
  int *v189; // [rsp+2F8h] [rbp+1F0h]
  int v190; // [rsp+300h] [rbp+1F8h]
  int *v191; // [rsp+308h] [rbp+200h]
  int v192; // [rsp+310h] [rbp+208h]
  __int64 v193; // [rsp+318h] [rbp+210h]
  int v194; // [rsp+320h] [rbp+218h]
  const wchar_t *v195; // [rsp+328h] [rbp+220h]
  int *v196; // [rsp+330h] [rbp+228h]
  int v197; // [rsp+338h] [rbp+230h]
  int *v198; // [rsp+340h] [rbp+238h]
  int v199; // [rsp+348h] [rbp+240h]
  __int64 v200; // [rsp+350h] [rbp+248h]
  int v201; // [rsp+358h] [rbp+250h]
  const wchar_t *v202; // [rsp+360h] [rbp+258h]
  int *v203; // [rsp+368h] [rbp+260h]
  int v204; // [rsp+370h] [rbp+268h]
  int *v205; // [rsp+378h] [rbp+270h]
  int v206; // [rsp+380h] [rbp+278h]
  __int64 v207; // [rsp+388h] [rbp+280h]
  int v208; // [rsp+390h] [rbp+288h]
  const wchar_t *v209; // [rsp+398h] [rbp+290h]
  unsigned int *v210; // [rsp+3A0h] [rbp+298h]
  int v211; // [rsp+3A8h] [rbp+2A0h]
  unsigned int *v212; // [rsp+3B0h] [rbp+2A8h]
  int v213; // [rsp+3B8h] [rbp+2B0h]
  __int64 v214; // [rsp+3C0h] [rbp+2B8h]
  int v215; // [rsp+3C8h] [rbp+2C0h]
  const wchar_t *v216; // [rsp+3D0h] [rbp+2C8h]
  unsigned int *v217; // [rsp+3D8h] [rbp+2D0h]
  int v218; // [rsp+3E0h] [rbp+2D8h]
  unsigned int *v219; // [rsp+3E8h] [rbp+2E0h]
  int v220; // [rsp+3F0h] [rbp+2E8h]
  __int64 v221; // [rsp+3F8h] [rbp+2F0h]
  int v222; // [rsp+400h] [rbp+2F8h]
  const wchar_t *v223; // [rsp+408h] [rbp+300h]
  unsigned int *v224; // [rsp+410h] [rbp+308h]
  int v225; // [rsp+418h] [rbp+310h]
  unsigned int *v226; // [rsp+420h] [rbp+318h]
  int v227; // [rsp+428h] [rbp+320h]
  __int64 v228; // [rsp+430h] [rbp+328h]
  int v229; // [rsp+438h] [rbp+330h]
  const wchar_t *v230; // [rsp+440h] [rbp+338h]
  unsigned int *v231; // [rsp+448h] [rbp+340h]
  int v232; // [rsp+450h] [rbp+348h]
  unsigned int *v233; // [rsp+458h] [rbp+350h]
  int v234; // [rsp+460h] [rbp+358h]
  __int64 v235; // [rsp+468h] [rbp+360h]
  int v236; // [rsp+470h] [rbp+368h]
  const wchar_t *v237; // [rsp+478h] [rbp+370h]
  unsigned int *v238; // [rsp+480h] [rbp+378h]
  int v239; // [rsp+488h] [rbp+380h]
  int *v240; // [rsp+490h] [rbp+388h]
  int v241; // [rsp+498h] [rbp+390h]
  __int64 v242; // [rsp+4A0h] [rbp+398h]
  int v243; // [rsp+4A8h] [rbp+3A0h]
  _BYTE v244[40]; // [rsp+4B0h] [rbp+3A8h] BYREF
  _OWORD v245[2]; // [rsp+4D8h] [rbp+3D0h] BYREF
  wchar_t v246; // [rsp+4F8h] [rbp+3F0h]
  _OWORD v247[9]; // [rsp+508h] [rbp+400h] BYREF
  int v248; // [rsp+598h] [rbp+490h]
  wchar_t v249; // [rsp+59Ch] [rbp+494h]

  v1 = (char *)DXGGLOBAL::m_pGlobal;
  memset(&v136[2], 0, 0x58uLL);
  *((_QWORD *)DXGGLOBAL::m_pGlobal + 1) = v136[2];
  *((_QWORD *)v1 + 2) = v136[3];
  *((_QWORD *)v1 + 3) = v136[4];
  *((_QWORD *)v1 + 4) = v136[5];
  *((_QWORD *)v1 + 5) = v136[6];
  *((_QWORD *)v1 + 6) = v136[7];
  *((_QWORD *)v1 + 7) = v136[8];
  *((_QWORD *)v1 + 8) = v136[9];
  *((_DWORD *)v1 + 18) = v136[10];
  v2 = *(_OWORD *)&v136[11];
  *((_DWORD *)v1 + 19) = HIDWORD(v136[10]);
  *((_OWORD *)v1 + 5) = v2;
  if ( !HMGRTABLE::ExpandTable((HMGRTABLE *)(v1 + 176)) )
  {
    v95 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v95 + 24) = -1073741801LL;
LABEL_63:
    WdLogEvent5_WdLowResource(v95);
    return 3221225495LL;
  }
  v7 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)v1 + 43) = v7;
  if ( !v7 )
  {
    v96 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v96 + 24) = v1;
    *(_QWORD *)(v96 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v96);
    return 3221225495LL;
  }
  v11 = ExInitializeResourceLite(v7);
  v15 = v11;
  if ( v11 < 0 )
  {
    v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v97[3] = v1;
    v97[4] = v15;
LABEL_68:
    WdLogEvent5_WdWarning(v97);
    return (unsigned int)v15;
  }
  v16 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)v1 + 8, 0LL, 0LL, PagedPool, 0, 0x5F8uLL, 0x4B677844u, 0);
  v15 = v16;
  if ( v16 < 0
    || (v1[977] = 1,
        v20 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)v1 + 9, 0LL, 0LL, PagedPool, 0, 0x5E0uLL, 0x4B677844u, 0),
        v15 = v20,
        v20 < 0) )
  {
    v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v97[3] = v1;
    v97[4] = v15;
    v97[5] = 0LL;
    goto LABEL_68;
  }
  v21 = g_bSkuSupportMultipleUsers;
  v22 = g_bSkuSupportMultipleUsers == 0;
  v1[978] = 1;
  v23 = 32;
  v136[0] = 0x4000000LL;
  if ( !v22 )
    v23 = 1024;
  v111 = 0;
  v126 = v23;
  v124 = 0;
  v112 = 0;
  v125 = 1;
  v110 = 0;
  v109 = 0;
  v114 = 0;
  v127 = 0;
  v128 = 0;
  v115 = 0;
  v116 = 0;
  v129 = 0;
  v130 = 0;
  v117 = 0;
  v131 = 0;
  v118 = 0;
  v132 = 0;
  v113 = 0;
  if ( v22 )
    v24 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  else
    v24 = g_IsInternalReleaseOrDbg != 0 ? 0x100000 : 0x80000;
  v121 = v24;
  if ( v21 )
    v25 = g_IsInternalReleaseOrDbg != 0 ? 8 : 4;
  else
    v25 = 2;
  v120 = v25;
  if ( v21 )
    v26 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  else
    v26 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x4000;
  v123 = v26;
  v105 = v26;
  v139 = L"TerminationListSizeLimit";
  v140 = &v111;
  v142 = v136;
  v146 = L"ValidateWDDMCaps";
  v147 = &v112;
  v149 = &v124;
  v153 = L"WDDM2LockManagement";
  v154 = &v110;
  v156 = &v125;
  v160 = L"MaximumAdapterCount";
  v161 = &v109;
  v163 = &v126;
  v167 = L"InvestigationDebugParameter";
  v168 = &v114;
  v170 = &v127;
  v174 = L"EnableIgnoreWin32ProcessStatus";
  v175 = &v115;
  v177 = &v128;
  v181 = L"EnableHMDTestMode";
  v182 = &v116;
  v133 = 300;
  v104 = v24;
  v107 = 300;
  v184 = &v129;
  v122 = 1;
  v106 = v25;
  v108 = 1;
  v137 = 0LL;
  v138 = 288;
  v141 = 67108868;
  v143 = 4;
  v144 = 0LL;
  v145 = 288;
  v148 = 67108868;
  v150 = 4;
  v151 = 0LL;
  v152 = 288;
  v155 = 67108868;
  v157 = 4;
  v158 = 0LL;
  v159 = 288;
  v162 = 67108868;
  v164 = 4;
  v165 = 0LL;
  v166 = 288;
  v169 = 67108868;
  v171 = 4;
  v172 = 0LL;
  v173 = 288;
  v176 = 67108868;
  v178 = 4;
  v179 = 0LL;
  v180 = 288;
  v183 = 67108868;
  v185 = 4;
  v186 = 0LL;
  v188 = L"PreserveFirmwareMode";
  v189 = &v117;
  v191 = &v130;
  v195 = L"PreventFullscreenWireFormatChange";
  v196 = &v118;
  v198 = &v131;
  v202 = L"EnableFuzzing";
  v203 = &v113;
  v205 = &v132;
  v209 = L"InternalDiagnosticsBufferSize";
  v210 = &v104;
  v212 = &v121;
  v216 = L"InternalDiagnosticsBufferMultiplier";
  v217 = &v106;
  v219 = &v120;
  v223 = L"ExternalDiagnosticsBufferSize";
  v224 = &v105;
  v226 = &v123;
  v230 = L"ExternalDiagnosticsBufferMultiplier";
  v231 = &v108;
  v233 = &v122;
  v237 = L"DiagnosticsBufferExpansionTime";
  v238 = &v107;
  v240 = &v133;
  v187 = 288;
  v190 = 67108868;
  v192 = 4;
  v193 = 0LL;
  v194 = 288;
  v197 = 67108868;
  v199 = 4;
  v200 = 0LL;
  v201 = 288;
  v204 = 67108868;
  v206 = 4;
  v207 = 0LL;
  v208 = 288;
  v211 = 67108868;
  v213 = 4;
  v214 = 0LL;
  v215 = 288;
  v218 = 67108868;
  v220 = 4;
  v221 = 0LL;
  v222 = 288;
  v225 = 67108868;
  v227 = 4;
  v228 = 0LL;
  v229 = 288;
  v232 = 67108868;
  v234 = 4;
  v235 = 0LL;
  v236 = 288;
  v239 = 67108868;
  v241 = 4;
  v242 = 0LL;
  v243 = 0;
  memset(v244, 0, sizeof(v244));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v137, 0LL, 0LL) < 0 )
  {
    *((_QWORD *)v1 + 67) = 0x4000000LL;
    v1[544] = 0;
    *((_DWORD *)v1 + 247) = 1;
    *((_DWORD *)v1 + 248) = 32;
    *((_DWORD *)v1 + 320) = 0;
    *((_DWORD *)v1 + 324) = 0;
  }
  else
  {
    v22 = v112 == 0;
    *((_QWORD *)v1 + 67) = v111;
    v27 = !v22;
    v22 = v113 == 0;
    v1[544] = v27;
    v28 = v110 < 2;
    v1[303937] = !v22;
    v29 = 1;
    if ( v28 )
      v29 = v110;
    *((_DWORD *)v1 + 247) = v29;
    v30 = v109;
    if ( v109 < 4 )
    {
      v30 = 4;
    }
    else if ( v109 > 0x400 )
    {
      v30 = 1024;
    }
    v22 = v116 == 1;
    v109 = v30;
    *((_DWORD *)v1 + 248) = v30;
    *((_DWORD *)v1 + 320) = v114;
    *((_DWORD *)v1 + 324) = v115;
    v31 = v22;
    v22 = v117 == 0;
    v1[303936] = v31;
    v32 = !v22;
    v22 = v118 == 0;
    v1[303984] = v32;
    v1[303985] = !v22;
  }
  *((_DWORD *)v1 + 133) = 0;
  v33 = *(_OWORD *)L"Y\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v119 = 0;
  v247[0] = *(_OWORD *)L"\\REGISTRY\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v135.Length = 9830548LL;
  v34 = *(_OWORD *)L"E\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v134.Length = 2228256LL;
  v247[1] = v33;
  v35 = *(_OWORD *)L"\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v247[2] = v34;
  v36 = *(_OWORD *)L"Set001\\Control\\Terminal Server\\WinStations";
  v247[3] = v35;
  v37 = *(_OWORD *)L"ontrol\\Terminal Server\\WinStations";
  v247[4] = v36;
  v38 = *(_OWORD *)L"erminal Server\\WinStations";
  v247[5] = v37;
  v247[6] = v38;
  v247[7] = *(_OWORD *)L"Server\\WinStations";
  v39 = *(_DWORD *)L"ns";
  v247[8] = *(_OWORD *)L"inStations";
  v248 = v39;
  v249 = aRegistryMachin_12[74];
  v135.Buffer = (wchar_t *)v247;
  v246 = aDwmframeinterv[16];
  v134.Buffer = (wchar_t *)v245;
  v245[0] = *(_OWORD *)L"DWMFRAMEINTERVAL";
  v245[1] = *(_OWORD *)L"INTERVAL";
  if ( (int)ReadRegistryDwordKeyValue(&v135, &v134, &v119) >= 0 && v119 )
    *((_DWORD *)v1 + 76028) = v119;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v15 = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes < 0 )
  {
    v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
    v97[3] = v15;
    goto LABEL_68;
  }
  v44 = v106;
  if ( !v106 || ((v106 - 1) & v106) != 0 )
  {
    v44 = v120;
    v106 = v120;
  }
  if ( v104 < 0x1000 || v104 * v44 > 0x1000000 )
  {
    v104 = v121;
    v106 = v120;
  }
  v45 = v108;
  if ( !v108 || ((v108 - 1) & v108) != 0 )
  {
    v45 = v122;
    v108 = v122;
  }
  if ( v105 < 0x1000 || v105 * v45 > 0x1000000 )
  {
    v105 = v123;
    v108 = v122;
  }
  v46 = v107;
  if ( v107 > 0xE10 )
    v46 = 3600;
  v107 = v46;
  v47 = g_IsInternalReleaseOrDbg != 0 ? 512 : PagedPool;
  v48 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x4B677844u, v47);
  if ( v48 )
    v49 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v48, v104, v106, v47, v107);
  else
    v49 = 0LL;
  *((_QWORD *)v1 + 72) = v49;
  v50 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x4B677844u, v47);
  if ( v50 )
    v55 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v50, v105, v108, v47, v107);
  else
    v55 = 0LL;
  *((_QWORD *)v1 + 73) = v55;
  if ( !*((_QWORD *)v1 + 72) )
  {
    v95 = WdLogNewEntry5_WdLowResource(v52, v51, v53, v54);
    v98 = v104;
LABEL_85:
    *(_QWORD *)(v95 + 24) = v98;
    goto LABEL_63;
  }
  if ( !v55 )
  {
    v95 = WdLogNewEntry5_WdLowResource(v52, v51, v53, v54);
    v98 = v105;
    goto LABEL_85;
  }
  v56 = (DXGSESSIONMGR *)operator new[](0xF8uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v56 )
    v61 = DXGSESSIONMGR::DXGSESSIONMGR(v56);
  else
    v61 = 0LL;
  *((_QWORD *)v1 + 74) = v61;
  if ( !v61 )
  {
    v95 = WdLogNewEntry5_WdLowResource(v58, v57, v59, v60);
    *(_QWORD *)(v95 + 24) = 1878LL;
    goto LABEL_63;
  }
  v62 = 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 248) + 31) >> 5);
  if ( !is_mul_ok((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 248) + 31) >> 5, 4uLL) )
    v62 = -1LL;
  v63 = operator new[](v62, 0x4B677844u, PagedPool);
  *((_QWORD *)v1 + 65) = v63;
  if ( !v63 )
  {
    v95 = WdLogNewEntry5_WdLowResource(0LL, v64, v65, v66);
    *(_QWORD *)(v95 + 24) = 1885LL;
    goto LABEL_63;
  }
  memset(v63, 0, 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 248) + 31) >> 5));
  RtlInitializeBitMap((PRTL_BITMAP)(v1 + 504), *((PULONG *)v1 + 65), *((_DWORD *)v1 + 248));
  v67 = (EDIDCACHE *)operator new[](0x278uLL, 0x4B677844u, PagedPool);
  if ( v67 )
    v72 = EDIDCACHE::EDIDCACHE(v67);
  else
    v72 = 0LL;
  *((_QWORD *)v1 + 95) = v72;
  if ( !v72 )
  {
    v99 = WdLogNewEntry5_WdLowResource(v69, v68, v70, v71);
    *(_QWORD *)(v99 + 24) = 1895LL;
    WdLogEvent5_WdLowResource(v99);
  }
  if ( (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)v1 + 125, 0LL, 0LL, 0, 0LL, 0LL) < 0 )
  {
    v95 = WdLogNewEntry5_WdLowResource(v74, v73, v75, v76);
    *(_QWORD *)(v95 + 24) = 1906LL;
    goto LABEL_63;
  }
  v77 = *(struct _KPROCESS **)(*((_QWORD *)v1 + 125) + 56LL);
  if ( PsInitialSystemProcess != v77 )
  {
    v100 = WdLogNewEntry5_WdAssertion(v77, v73);
    *(_QWORD *)(v100 + 24) = 1909LL;
    WdLogEvent5_WdAssertion(v100);
  }
  v78 = (QDC_CACHE *)operator new[](0x258uLL, 0x4B677844u, PagedPool);
  if ( v78 )
    v83 = QDC_CACHE::QDC_CACHE(v78, v79);
  else
    v83 = 0LL;
  *((_QWORD *)v1 + 139) = v83;
  if ( !v83 )
  {
    v95 = WdLogNewEntry5_WdLowResource(v80, v79, v81, v82);
    *(_QWORD *)(v95 + 24) = 1914LL;
    goto LABEL_63;
  }
  KeInitializeSpinLock(&qword_1C00A2DD8);
  DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1284));
  DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
  KeInitializeTimer((PKTIMER)(v1 + 1504));
  KeInitializeDpc((PRKDPC)(v1 + 1568), (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, v1);
  LOBYTE(OutputBuffer) = 0;
  v84 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v88 = v84;
  if ( v84 < 0 )
  {
    v101 = WdLogNewEntry5_WdError(v86, v85, v87);
    *(_QWORD *)(v101 + 24) = v88;
    WdLogEvent5_WdError(v101);
  }
  else if ( (_BYTE)OutputBuffer )
  {
    DXGGLOBAL::SubscribeWNFForCSAccounting((DXGGLOBAL *)v1);
  }
  *((_QWORD *)v1 + 207) = v1;
  *((_QWORD *)v1 + 206) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
  *((_QWORD *)v1 + 204) = 0LL;
  DXGGLOBAL::InitializeResourceManagerSid((DXGGLOBAL *)v1);
  *((_DWORD *)v1 + 75979) &= ~1u;
  *((_DWORD *)v1 + 75976) = 10;
  *((_DWORD *)v1 + 75977) = 50;
  *((_DWORD *)v1 + 75978) = 30;
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 171);
  DXGBLACKBOX::Initialize((DXGBLACKBOX *)(v1 + 304048));
  v89 = PoRegisterPowerSettingCallback(
          0LL,
          &GUID_ADVANCED_COLOR_QUALITY_BIAS,
          DXGGLOBAL::AdvancedColorPowerSettingsCallback,
          v1,
          0LL);
  v93 = v89;
  if ( v89 < 0 )
  {
    v102 = WdLogNewEntry5_WdError(v91, v90, v92);
    *(_QWORD *)(v102 + 24) = v93;
    WdLogEvent5_WdError(v102);
  }
  return (unsigned int)v93;
}
