/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0131300
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001B30 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0002BA0 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002E40 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003BD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003C14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003DE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0003F38 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005530 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000D7FC (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x1C000EC8C (DxgkIncrementGlobalConnectionChangeId.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8E10 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00C9470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00CAFAC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD4B0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D339C (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E0048 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E3588 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E4244 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E43B0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00EDB7C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0130DCC (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0131B94 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0131E20 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0131EFC (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01322DC (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01326A8 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnOnAdapter(
        VIDPN_MGR *a1,
        unsigned int a2,
        int a3,
        char **a4,
        int a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10,
        unsigned int *a11,
        struct DXGDEVICE *a12,
        struct COREDEVICEACCESS *a13,
        unsigned __int8 a14)
{
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r14
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  char **v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v30; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int8 v35; // r9
  __int64 v36; // rbx
  unsigned __int64 *v37; // rbx
  unsigned int v38; // edi
  int v39; // r15d
  DMMVIDPNTOPOLOGY *v40; // rbx
  ADAPTER_DISPLAY *v41; // rcx
  __int64 v42; // r15
  int j; // r12d
  unsigned int v44; // r13d
  int k; // r12d
  __int64 v46; // rcx
  unsigned int v47; // eax
  char v48; // di
  __int64 v49; // r12
  int v50; // r15d
  int v51; // eax
  __int64 v53; // r8
  __int64 v54; // rbx
  int v55; // r9d
  int v56; // ecx
  unsigned int v57; // ecx
  signed __int64 v58; // rax
  __int64 v59; // r8
  int v60; // r9d
  char v61; // cl
  __int64 v62; // r10
  __int64 v63; // r11
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned int m; // r15d
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r12
  unsigned int v72; // r15d
  char **v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rdi
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  DMMVIDPNPRESENTPATH *v84; // r11
  const struct _DXGK_DISPLAYMODE_INFO *v85; // rax
  __int128 v86; // xmm1
  __int64 v87; // xmm0_8
  DMMVIDPNPRESENTPATH *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rcx
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v94; // r9d
  int v95; // eax
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v101; // rdi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  int v105; // ecx
  ADAPTER_DISPLAY *v106; // rcx
  bool v107; // zf
  VIDPN_MGR *v108; // r15
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rax
  __int64 v114; // rax
  void *v115; // r13
  struct DXGADAPTERALLOCATION *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  int v119; // edi
  unsigned __int8 v120; // al
  unsigned int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r13
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r13
  int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  _QWORD *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // r13
  __int64 v144; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  unsigned int v146; // ecx
  __int128 v147; // xmm1
  __int64 v148; // xmm0_8
  int updated; // eax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r12
  unsigned int i; // r12d
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rax
  DMMVIDPNPRESENTPATH *v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rax
  _QWORD *v162; // rax
  _QWORD *v163; // rax
  int v164; // eax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rax
  ADAPTER_DISPLAY *v168; // rcx
  bool v169; // zf
  DMMVIDPNTOPOLOGY *v170; // rbx
  unsigned int v171; // r13d
  unsigned int *v172; // rdi
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rax
  bool IsSourceInTopology; // al
  void *v177; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  ADAPTER_DISPLAY *v181; // rcx
  bool v182; // zf
  __int64 v183; // rdi
  int v184; // eax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r13
  _QWORD *v189; // rax
  _QWORD *v190; // rax
  unsigned __int8 v191; // r9
  VIDPN_MGR *v192; // r13
  int v193; // eax
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // rdi
  _QWORD *v198; // rax
  int v199; // eax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // rdi
  _QWORD *v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rax
  _QWORD *v211; // rax
  __int64 v212; // r15
  unsigned __int64 *v213; // rcx
  _QWORD *v214; // rax
  _QWORD *v215; // rax
  _QWORD *v216; // rax
  int v217; // eax
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // rax
  __int64 v221; // rax
  _QWORD *v222; // rax
  __int64 v223; // rax
  _QWORD *v224; // rax
  __int64 v225; // rax
  __int64 v226; // [rsp+20h] [rbp-E0h]
  int v227; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v228; // [rsp+50h] [rbp-B0h] BYREF
  char v229; // [rsp+51h] [rbp-AFh]
  char v230; // [rsp+52h] [rbp-AEh]
  unsigned int v231; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v232; // [rsp+58h] [rbp-A8h] BYREF
  int v233; // [rsp+60h] [rbp-A0h]
  int v234; // [rsp+68h] [rbp-98h]
  unsigned int v235; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *v236; // [rsp+70h] [rbp-90h]
  int v237; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v238; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v239; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v240; // [rsp+90h] [rbp-70h]
  struct DMMVIDPN *v241; // [rsp+98h] [rbp-68h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v242; // [rsp+A0h] [rbp-60h]
  struct DXGDEVICE *v243; // [rsp+A8h] [rbp-58h]
  _BYTE v244[24]; // [rsp+B0h] [rbp-50h] BYREF
  DMMVIDPN *v245; // [rsp+C8h] [rbp-38h]
  _DWORD *v246; // [rsp+D0h] [rbp-30h]
  struct _D3DKMT_DISPLAYMODE v247; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v248; // [rsp+108h] [rbp+8h]
  __int64 v249; // [rsp+110h] [rbp+10h]
  unsigned int *v250; // [rsp+118h] [rbp+18h]
  struct COREDEVICEACCESS *v251[2]; // [rsp+120h] [rbp+20h] BYREF

  v249 = a6;
  v246 = a9;
  v248 = a10;
  v250 = a11;
  v235 = a2;
  v243 = a12;
  v234 = a3;
  v238 = a1;
  v251[0] = a13;
  v245 = (DMMVIDPN *)a4;
  memset(&v247, 0, sizeof(v247));
  v18 = *((_QWORD *)a1 + 1);
  v232 = 0LL;
  v233 = 0;
  v228 = 0;
  v229 = 0;
  if ( !v18 )
  {
    v134 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v134);
    v18 = *((_QWORD *)a1 + 1);
  }
  v19 = a8[6];
  v20 = (unsigned int)(a8[13] | a8[3]);
  v21 = *(_QWORD *)(v18 + 16);
  v237 = v19;
  if ( ((unsigned int)v20 & v19) != 0 )
  {
    v135 = WdLogNewEntry5_WdAssertion(v20, v16);
    WdLogEvent5_WdAssertion(v135);
  }
  v22 = a8[2];
  v23 = v22 & a8[5];
  v24 = v19 & v22;
  if ( (v19 & v23) != (_DWORD)v24 )
  {
    v136 = WdLogNewEntry5_WdAssertion(v24, v16);
    WdLogEvent5_WdAssertion(v136);
  }
  v25 = a4 + 12;
  v240 = (DMMVIDPNTOPOLOGY *)(a4 + 12);
  v242 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)operator new[](0x1E8uLL, 0x4E506456u, PagedPool);
  v30 = v242;
  if ( v242 )
  {
    operator delete(0LL);
    v241 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               a1,
                                               (__int64 *)&v241);
    v36 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      v137 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
      v137[3] = *(int *)(v21 + 280);
      v137[4] = *(unsigned int *)(v21 + 276);
      v137[5] = v36;
      WdLogEvent5_WdError(v137);
    }
    else
    {
      v37 = (unsigned __int64 *)v241;
      v38 = 0;
      v239 = (struct DMMVIDPN *)((char *)v241 + 96);
      v39 = 1;
      if ( *(_DWORD *)(*(_QWORD *)(v21 + 2552) + 80LL) )
      {
        v40 = v239;
        do
        {
          if ( (v39 & a8[10]) != 0 )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v25, v38, 0LL, &v231) < 0 || v231 == -1 )
            {
              v140 = WdLogNewEntry5_WdAssertion(v139, v138);
              WdLogEvent5_WdAssertion(v140);
            }
            Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(
                                                                  (DMMVIDPNTOPOLOGY *)v25,
                                                                  v38,
                                                                  v231);
            if ( !Path )
            {
              v144 = WdLogNewEntry5_WdAssertion(v142, v141);
              WdLogEvent5_WdAssertion(v144);
            }
            DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v21 + 2552), v38);
            v146 = *((_DWORD *)Path + 29);
            v147 = *((_OWORD *)DisplayModeInfo + 1);
            *(_OWORD *)&v247.Width = *(_OWORD *)DisplayModeInfo;
            v148 = *((_QWORD *)DisplayModeInfo + 4);
            LODWORD(DisplayModeInfo) = *((_DWORD *)DisplayModeInfo + 10);
            *(_QWORD *)&v247.DisplayFixedOutput = v148;
            *((_DWORD *)&v247.Flags + 1) = (_DWORD)DisplayModeInfo;
            *(_OWORD *)&v247.RefreshRate.Numerator = v147;
            v247.DisplayOrientation = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v146);
            updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path, 0LL);
            v153 = updated;
            if ( updated < 0 )
            {
              v162 = (_QWORD *)WdLogNewEntry5_WdError(v151, v150, v152);
              v162[3] = v38;
              v162[4] = v40;
              v162[5] = v153;
              WdLogEvent5_WdError(v162);
              a8[10] &= ~v39;
              a8[2] |= v39;
            }
            else
            {
              for ( i = 0; ; ++i )
              {
                if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v239, v38, i, &v231) < 0 )
                {
                  v157 = WdLogNewEntry5_WdAssertion(v156, v155);
                  WdLogEvent5_WdAssertion(v157);
                }
                if ( v231 == -1 )
                  break;
                v158 = DMMVIDPNTOPOLOGY::FindPath(v239, v38, v231);
                v236 = v158;
                if ( !v158 )
                {
                  v161 = WdLogNewEntry5_WdAssertion(v160, v159);
                  WdLogEvent5_WdAssertion(v161);
                  v158 = v236;
                }
                DMMVIDPNPRESENTPATH::PinContentRotation(v158, Path[29]);
              }
              v40 = v239;
            }
            v25 = (char **)v240;
          }
          ++v38;
          v39 *= 2;
        }
        while ( v38 < *(_DWORD *)(*(_QWORD *)(v21 + 2552) + 80LL) );
        v37 = (unsigned __int64 *)v241;
      }
LABEL_14:
      v41 = *(ADAPTER_DISPLAY **)(v21 + 2552);
      v42 = 0LL;
      for ( j = 1; (unsigned int)v42 < *((_DWORD *)v41 + 20); j *= 2 )
      {
        if ( (j & a8[20]) == 0 )
        {
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v41, v42)
            && (((a8[13] | a8[3] | a8[2]) & j) != 0 || (j & a8[5]) == 0)
            && (v126 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                         *(ADAPTER_DISPLAY **)(v21 + 2552),
                         (unsigned int)v42,
                         0,
                         2048,
                         a14),
                v130 = v126,
                v126 < 0) )
          {
            v163 = (_QWORD *)WdLogNewEntry5_WdError(v128, v127, v129);
            v163[3] = (unsigned int)v42;
            v163[4] = *(int *)(v21 + 280);
            v163[5] = *(unsigned int *)(v21 + 276);
            v163[6] = v130;
            WdLogEvent5_WdError(v163);
            a8[20] |= j;
            a8[v42 + 21] = v130;
          }
          else
          {
            if ( (j & a8[3]) != 0 || v229 && (j & a8[2]) != 0 || *((_BYTE *)v238 + 464) )
            {
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v244,
                (unsigned __int64)(v37 + 19) & -(__int64)(v37 + 12 != 0LL),
                2u,
                v35,
                v226,
                v37[17]);
              v164 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v37 + 12), v42);
              goto LABEL_123;
            }
            if ( (j & a8[13]) != 0 )
            {
              v170 = v239;
              v171 = 0;
              v172 = (unsigned int *)(v248 + 4LL * (unsigned int)(16 * v42));
              do
              {
                if ( *v172 == -1 )
                  break;
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  (__int64)v244,
                  ((unsigned __int64)v170 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v170 >> 64),
                  2u,
                  v35,
                  v226,
                  1uLL);
                if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v170, v42, *v172, 0LL) < 0 )
                {
                  v175 = WdLogNewEntry5_WdAssertion(v174, v173);
                  WdLogEvent5_WdAssertion(v175);
                }
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                  (ApplyPermissionWithinThisScope *)v244,
                  v173);
                ++v171;
                ++v172;
              }
              while ( v171 < 0x10 );
              IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v170, v42);
              v37 = (unsigned __int64 *)v241;
              if ( !IsSourceInTopology )
                goto LABEL_127;
              v177 = 0LL;
              if ( *(_QWORD *)(v21 + 2560) )
              {
                DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                               *(DXGADAPTER ***)(v21 + 2552),
                                               v42);
                if ( !DisplayedPrimaryAllocation
                  || (v180 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v180 & 0x10) != 0) )
                {
                  v183 = (unsigned int)v42;
LABEL_145:
                  v190 = (_QWORD *)WdLogNewEntry5_WdTrace(v180, v179);
                  v190[3] = v183;
                  v190[4] = *(int *)(v21 + 280);
                  v190[5] = *(unsigned int *)(v21 + 276);
                  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                    (__int64)v244,
                    (unsigned __int64)(v37 + 19) & -(__int64)(v37 + 12 != 0LL),
                    2u,
                    v191,
                    v226,
                    v37[17]);
                  v164 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v37 + 12), v42);
LABEL_123:
                  v166 = v164 + 0x80000000;
                  if ( (v166 & 0x80000000) == 0 && v164 != -1071774919 )
                  {
                    v167 = WdLogNewEntry5_WdAssertion(v166, v165);
                    WdLogEvent5_WdAssertion(v167);
                  }
                  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                    (ApplyPermissionWithinThisScope *)v244,
                    v165);
LABEL_127:
                  v107 = (j & a8[3]) == 0;
                  LODWORD(v232) = v232 & 0xFFFFFF50 | v234 & 0xF | 0x50;
                  v168 = *(ADAPTER_DISPLAY **)(v21 + 2552);
                  v233 = *((_DWORD *)v168 + 86);
                  BYTE4(v232) = (BYTE4(v232) & 0xFC | ((j & a8[3]) == 0)) ^ ((v235 >> 14) ^ (BYTE4(v232) | v107)) & 4;
                  if ( (j & a8[6]) != 0 )
                    v169 = ADAPTER_DISPLAY::IsVidPnSourceActive(v168, v42) == 0;
                  else
                    v169 = (j & a8[5]) == 0;
                  v192 = v238;
                  LOBYTE(v227) = v169;
                  v193 = VIDPN_MGR::CommitVidPn(
                           (ADAPTER_DISPLAY **)v238,
                           (const struct DMMVIDPN *)v37,
                           0LL,
                           v42,
                           D3DKMDT_MCC_IGNORE,
                           0,
                           v227,
                           (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v232,
                           &v228);
                  v197 = v193;
                  if ( v193 < 0 )
                  {
                    v198 = (_QWORD *)WdLogNewEntry5_WdError(v195, v194, v196);
                    v198[3] = (unsigned int)v42;
                    v198[4] = *(int *)(v21 + 280);
                    v198[5] = *(unsigned int *)(v21 + 276);
                    v198[6] = v197;
                    WdLogEvent5_WdError(v198);
                  }
                  if ( v243 && ((j & a8[3]) != 0 || *((_BYTE *)v192 + 464)) )
                  {
                    v199 = ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v21 + 2552), v243, v42);
                    v203 = v199;
                    if ( v199 < 0 )
                    {
                      v204 = (_QWORD *)WdLogNewEntry5_WdError(v201, v200, v202);
                      v204[3] = (unsigned int)v42;
                      v204[4] = *(int *)(v21 + 280);
                      v204[5] = *(unsigned int *)(v21 + 276);
                      v204[6] = v203;
                      WdLogEvent5_WdError(v204);
                    }
                  }
                  goto LABEL_21;
                }
                v177 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
              }
              LODWORD(v232) = v232 & 0xFFFFFF40 | v234 & 0xF | 0x40;
              v181 = *(ADAPTER_DISPLAY **)(v21 + 2552);
              v233 = *((_DWORD *)v181 + 86);
              BYTE4(v232) = BYTE4(v232) & 0xF9 | (v235 >> 14) & 4 | 1;
              if ( (j & a8[6]) != 0 )
                v182 = ADAPTER_DISPLAY::IsVidPnSourceActive(v181, v42) == 0;
              else
                v182 = (j & a8[5]) == 0;
              LOBYTE(v227) = v182;
              v184 = VIDPN_MGR::CommitVidPn(
                       (ADAPTER_DISPLAY **)v238,
                       (const struct DMMVIDPN *)v37,
                       v177,
                       v42,
                       D3DKMDT_MCC_ENFORCE,
                       0,
                       v227,
                       (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v232,
                       &v228);
              v188 = v184;
              if ( v184 < 0 )
              {
                v189 = (_QWORD *)WdLogNewEntry5_WdError(v186, v185, v187);
                v183 = (unsigned int)v42;
                v189[3] = (unsigned int)v42;
                v189[4] = *(int *)(v21 + 280);
                v189[5] = *(unsigned int *)(v21 + 276);
                v189[6] = v188;
                WdLogEvent5_WdError(v189);
                goto LABEL_145;
              }
            }
          }
        }
LABEL_21:
        v41 = *(ADAPTER_DISPLAY **)(v21 + 2552);
        v42 = (unsigned int)(v42 + 1);
      }
      v44 = 0;
      for ( k = 1; ; k *= 2 )
      {
        v46 = *(_QWORD *)(v21 + 2552);
        LODWORD(v236) = k;
        v47 = *(_DWORD *)(v46 + 80);
        if ( v44 >= v47 )
          break;
        v48 = 1;
        v230 = 1;
        if ( (k & a8[20]) == 0 )
        {
          if ( (k & a8[2]) == 0 )
            goto LABEL_26;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v244,
            (unsigned __int64)(v37 + 19) & -(__int64)(v37 + 12 != 0LL),
            2u,
            v35,
            v226,
            v37[17]);
          v65 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v37 + 12), v44);
          v66 = 0x80000000LL;
          v67 = v65 + 0x80000000;
          if ( (int)v67 >= 0 && v65 != -1071774919 )
          {
            v205 = WdLogNewEntry5_WdAssertion(v67, 0x80000000LL);
            WdLogEvent5_WdAssertion(v205);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v244, v66);
          for ( m = 0; ; ++m )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v240, v44, m, &v231) < 0 )
            {
              v206 = WdLogNewEntry5_WdAssertion(v70, v69);
              WdLogEvent5_WdAssertion(v206);
            }
            v71 = v231;
            if ( v231 == -1 )
              break;
            if ( v48 )
            {
              v85 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v21 + 2552), v44);
              v86 = *((_OWORD *)v85 + 1);
              *(_OWORD *)&v247.Width = *(_OWORD *)v85;
              v87 = *((_QWORD *)v85 + 4);
              LODWORD(v85) = *((_DWORD *)v85 + 10);
              *(_QWORD *)&v247.DisplayFixedOutput = v87;
              *((_DWORD *)&v247.Flags + 1) = (_DWORD)v85;
              *(_OWORD *)&v247.RefreshRate.Numerator = v86;
              v88 = DMMVIDPNTOPOLOGY::FindPath(v240, v44, v71);
              if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v88, &v247) < 0 )
              {
                v207 = WdLogNewEntry5_WdAssertion(v90, v89);
                WdLogEvent5_WdAssertion(v207);
              }
              v230 = 0;
            }
            v91 = v242;
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v245,
                   v71,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v242) < 0 )
            {
              v208 = WdLogNewEntry5_WdAssertion(v93, v92);
              WdLogEvent5_WdAssertion(v208);
            }
            v95 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(v238, (struct DMMVIDPNTOPOLOGY *const)(v37 + 12), v91, v94);
            v82 = v95;
            if ( v95 < 0 )
            {
LABEL_154:
              v211 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79, v81);
              v212 = v44;
              v213 = v37 + 12;
              v211[3] = v44;
              v211[4] = v71;
LABEL_156:
              v211[5] = v213;
              v211[6] = v82;
              WdLogEvent5_WdError(v211);
              k = (int)v236;
              goto LABEL_163;
            }
            v48 = v230;
          }
          v72 = 0;
          v73 = (char **)(v37 + 12);
          while ( 1 )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v73, v44, v72, &v231) < 0 )
            {
              v209 = WdLogNewEntry5_WdAssertion(v75, v74);
              WdLogEvent5_WdAssertion(v209);
            }
            v71 = v231;
            if ( v231 == -1 )
              break;
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v245,
                   v231,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v242) < 0 )
            {
              v210 = WdLogNewEntry5_WdAssertion(v77, v76);
              WdLogEvent5_WdAssertion(v210);
            }
            v78 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                    v238,
                    (struct DMMVIDPNTOPOLOGY *const)v73,
                    (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v242);
            v82 = v78;
            if ( v78 < 0 )
              goto LABEL_154;
            v73 = (char **)(v37 + 12);
            DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v37 + 12), v71);
            PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v240, v71);
            DMMVIDPNPRESENTPATH::SetGammaRamp(v84, *((const struct DXGK_GAMMA_RAMP **)PathFromTarget + 23));
            ++v72;
          }
          if ( v243 && v251[0] )
          {
            v96 = ADAPTER_DISPLAY::CreateCddAllocations(*(PERESOURCE ***)(v21 + 2552), v243, v44, &v247, v251[0]);
            v82 = v96;
            if ( v96 < 0 )
            {
              v211 = (_QWORD *)WdLogNewEntry5_WdError(v98, v97, v99);
              v212 = v44;
              v211[3] = v44;
              v211[4] = *(int *)(v21 + 280);
              v213 = (unsigned __int64 *)*(unsigned int *)(v21 + 276);
              goto LABEL_156;
            }
            CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v21 + 2552), v44, 0);
            if ( !*(_QWORD *)(v21 + 2560) )
            {
LABEL_66:
              v101 = 0LL;
              goto LABEL_70;
            }
LABEL_69:
            v101 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
LABEL_70:
            v105 = 32;
            k = (int)v236;
            if ( v72 <= 1 )
              v105 = 48;
            LODWORD(v232) = v232 & 0xFFFFFF00 | v234 & 0xF | v105;
            v106 = *(ADAPTER_DISPLAY **)(v21 + 2552);
            v233 = *((_DWORD *)v106 + 86);
            BYTE4(v232) = BYTE4(v232) & 0xF8 | (v235 >> 14) & 4;
            if ( ((unsigned int)v236 & a8[6]) != 0 )
              v107 = ADAPTER_DISPLAY::IsVidPnSourceActive(v106, v44) == 0;
            else
              v107 = ((unsigned int)v236 & a8[5]) == 0;
            v108 = v238;
            LOBYTE(v227) = v107;
            v109 = VIDPN_MGR::CommitVidPn(
                     (ADAPTER_DISPLAY **)v238,
                     (const struct DMMVIDPN *)v37,
                     v101,
                     v44,
                     D3DKMDT_MCC_ENFORCE,
                     0,
                     v227,
                     (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v232,
                     &v228);
            v82 = v109;
            if ( v109 >= 0 )
            {
              if ( (k & a8[5]) == 0 )
              {
                v113 = *((_QWORD *)v108 + 1);
                if ( !v113 )
                {
                  v221 = WdLogNewEntry5_WdAssertion(v111, v110);
                  WdLogEvent5_WdAssertion(v221);
                  v113 = *((_QWORD *)v108 + 1);
                }
                v114 = *(_QWORD *)(v113 + 16);
                if ( *(int *)(v114 + 2452) < 1200
                  || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v114 + 192) + 64LL) + 40LL) + 28LL) < 0x300Au )
                {
                  v237 |= k;
                }
              }
              goto LABEL_26;
            }
            v216 = (_QWORD *)WdLogNewEntry5_WdError(v111, v110, v112);
            v212 = v44;
            v216[3] = v44;
            v216[4] = *(int *)(v21 + 280);
            v216[5] = *(unsigned int *)(v21 + 276);
            v216[6] = v82;
            WdLogEvent5_WdError(v216);
            if ( v243 )
              ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v21 + 2552), v243, v44);
          }
          else
          {
            if ( !*(_QWORD *)(v21 + 2560) )
              goto LABEL_66;
            CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v21 + 2552), v44);
            if ( CddPrimaryAllocation )
            {
              v103 = *((unsigned int *)CddPrimaryAllocation + 1);
              if ( (v103 & 0x10) == 0 )
                goto LABEL_69;
            }
            k = (int)v236;
            v212 = v44;
            if ( ((unsigned int)v236 & a8[8]) == 0 )
            {
              *v246 |= (unsigned int)v236;
              v215 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v103, v102);
              v215[3] = v44;
              v215[4] = *(int *)(v21 + 280);
              v215[5] = *(unsigned int *)(v21 + 276);
              WdLogEvent5_WdDmmEvent(v215);
              goto LABEL_26;
            }
            LODWORD(v82) = -1071775482;
            v214 = (_QWORD *)WdLogNewEntry5_WdError(v103, v102, v104);
            v214[3] = v44;
            v214[4] = *(int *)(v21 + 280);
            v214[5] = *(unsigned int *)(v21 + 276);
            WdLogEvent5_WdError(v214);
          }
LABEL_163:
          if ( !v229 )
          {
            DxgkLogCodePointPacket(0x61u, v44, v82, 0, *(_QWORD *)(v21 + 276));
            v229 = 1;
            goto LABEL_14;
          }
          a8[20] |= k;
          a8[v212 + 21] = v82;
          if ( (_DWORD)v82 == -1071774920 || (_DWORD)v82 == -1071774976 )
            v228 = 1;
        }
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v244,
          (unsigned __int64)(v37 + 19) & -(__int64)(v37 + 12 != 0LL),
          2u,
          v35,
          v226,
          v37[17]);
        v217 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v37 + 12), v44);
        v218 = 0x80000000LL;
        v219 = v217 + 0x80000000;
        if ( (int)v219 >= 0 && v217 != -1071774919 )
        {
          v220 = WdLogNewEntry5_WdAssertion(v219, 0x80000000LL);
          WdLogEvent5_WdAssertion(v220);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v244, v218);
LABEL_26:
        ++v44;
      }
      v49 = 0LL;
      v50 = 1;
      if ( v47 )
      {
        do
        {
          if ( (v50 & a8[20]) == 0 )
          {
            v51 = a8[5];
            if ( (v50 & v237) != 0 )
            {
              v115 = 0LL;
              if ( (v51 & v50) == 0 )
              {
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  (__int64)v244,
                  (unsigned __int64)(v37 + 19) & -(__int64)(v37 + 12 != 0LL),
                  2u,
                  v35,
                  v226,
                  v37[17]);
                v131 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v37 + 12), v49);
                v132 = 0x80000000LL;
                v133 = v131 + 0x80000000;
                if ( (int)v133 >= 0 && v131 != -1071774919 )
                {
                  v223 = WdLogNewEntry5_WdAssertion(v133, 0x80000000LL);
                  WdLogEvent5_WdAssertion(v223);
                }
                a8[17] |= v50;
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                  (ApplyPermissionWithinThisScope *)v244,
                  v132);
                v119 = v232 & 0xFFFFFF0F | 0x40;
                goto LABEL_87;
              }
              if ( !*(_QWORD *)(v21 + 2560) )
                goto LABEL_86;
              v116 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)v46, v49);
              if ( v116 )
              {
                v118 = *((unsigned int *)v116 + 1);
                if ( (v118 & 0x10) == 0 )
                {
                  v115 = (void *)*((_QWORD *)v116 + 2);
LABEL_86:
                  v119 = v232 & 0xFFFFFF0F | 0x20;
LABEL_87:
                  v251[0] = 0LL;
                  v251[1] = 0LL;
                  v120 = v234;
                  if ( v234 == 4 )
                  {
                    DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, v251);
                    v120 = v234;
                  }
                  LODWORD(v232) = v119 ^ ((unsigned __int8)v119 ^ v120) & 0xF;
                  v233 = *(_DWORD *)(*(_QWORD *)(v21 + 2552) + 344LL);
                  LOBYTE(v227) = 0;
                  BYTE4(v232) = BYTE4(v232) & 0xF8 | (v235 >> 14) & 4;
                  v121 = VIDPN_MGR::CommitVidPn(
                           (ADAPTER_DISPLAY **)v238,
                           (const struct DMMVIDPN *)v37,
                           v115,
                           v49,
                           D3DKMDT_MCC_ENFORCE,
                           1,
                           v227,
                           (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v232,
                           &v228);
                  v125 = (int)v121;
                  if ( v234 == 4 )
                    DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v121, v251);
                  if ( (int)v125 < 0 )
                  {
                    a8[20] |= v50;
                    a8[v49 + 21] = v125;
                    v224 = (_QWORD *)WdLogNewEntry5_WdError(v123, v122, v124);
                    v224[3] = (unsigned int)v49;
                    v224[4] = *(int *)(v21 + 280);
                    v224[5] = *(unsigned int *)(v21 + 276);
                    v224[6] = v125;
                    WdLogEvent5_WdError(v224);
                  }
                  goto LABEL_31;
                }
              }
              *v246 |= v50;
              a8[17] |= v50;
              v222 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v118, v117);
              v222[3] = (unsigned int)v49;
              v222[4] = *(int *)(v21 + 280);
              v222[5] = *(unsigned int *)(v21 + 276);
              WdLogEvent5_WdDmmEvent(v222);
            }
            else
            {
              a8[17] |= v50 & ~v51;
            }
          }
LABEL_31:
          v46 = *(_QWORD *)(v21 + 2552);
          v49 = (unsigned int)(v49 + 1);
          v50 *= 2;
        }
        while ( (unsigned int)v49 < *(_DWORD *)(v46 + 80) );
      }
      if ( a5 )
      {
        v53 = 0LL;
        v54 = v249;
        do
        {
          v55 = 1 << *a7;
          v56 = *(_DWORD *)(v54 + v53 + 32);
          if ( (v55 & a8[38]) != 0 )
          {
            v57 = v56 & 0xF0FFFFFF | 0xC000000;
          }
          else if ( (v55 & a8[20]) != 0 )
          {
            v57 = v56 & 0xF0FFFFFF | 0xD000000;
          }
          else
          {
            v57 = v56 & 0xF0FFFFFF | 0xE000000;
          }
          *(_DWORD *)(v54 + v53 + 32) = v57;
          v58 = DxgkIncrementGlobalConnectionChangeId();
          *(_QWORD *)(v54 + v59 + 24) = v58;
          v61 = (v60 & (a8[38] | a8[2])) != 0 ? 1 : -1;
          LOBYTE(v58) = -((v60 & (a8[38] | a8[2])) != 0);
          *(_DWORD *)(v59 + v54 + 16) &= ~1u;
          *(_BYTE *)(v59 + v54 + 48) = v61;
          *(_BYTE *)(v59 + v54 + 49) = ~(_BYTE)v58;
          a7 = (_DWORD *)(v62 + 4);
          *(_BYTE *)(v59 + v54 + 50) = v61;
          v53 = v59 + 56;
        }
        while ( v63 != 1 );
      }
      v30 = v242;
      *v250 = (v228 != 0) | *v250 & 0xFFFFFFFE;
      LODWORD(v36) = 0;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v241, 0LL);
  }
  else
  {
    v225 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
    *(_QWORD *)(v225 + 24) = *(int *)(v21 + 280);
    *(_QWORD *)(v225 + 32) = *(unsigned int *)(v21 + 276);
    WdLogEvent5_WdLowResource(v225);
    LODWORD(v36) = -1073741801;
  }
  operator delete(v30);
  return (unsigned int)v36;
}
