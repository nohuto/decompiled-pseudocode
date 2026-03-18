/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002210 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkGetGlobalConnectionChangeId @ 0x1C00022EC (DxgkGetGlobalConnectionChangeId.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003EF0 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0005E08 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0005EC4 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000611C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000F638 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x1C0043B80 (DxgkIncrementGlobalConnectionChangeId.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00B7ED8 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B8048 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B8160 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B9074 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00B91E4 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00BB0F4 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BD85C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00D36E8 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E4FE0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E5198 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C011EDE8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C011F6B4 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C011FB7C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120BCC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnOnAdapter(
        VIDPN_MGR *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
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
  __int64 v14; // r15
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r15
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  DMMVIDPNTOPOLOGY *v23; // r12
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  struct DMMVIDPN *v28; // rbx
  unsigned int v29; // edi
  int v30; // r14d
  DMMVIDPNTOPOLOGY *v31; // rbx
  ADAPTER_DISPLAY *v32; // rcx
  __int64 v33; // r14
  int j; // r12d
  unsigned int v35; // r13d
  int k; // r12d
  ADAPTER_DISPLAY *v37; // rcx
  unsigned int v38; // eax
  char v39; // di
  __int64 v40; // r12
  int v41; // r14d
  int v42; // eax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // r9d
  __int64 v48; // r10
  __int64 v49; // r11
  char v50; // cl
  char v51; // al
  int v53; // eax
  __int64 v54; // rcx
  unsigned int m; // r14d
  __int64 v56; // rcx
  __int64 v57; // r12
  unsigned int v58; // r14d
  DMMVIDPNTOPOLOGY *v59; // rdi
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rdi
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  DMMVIDPNPRESENTPATH *v66; // r11
  const struct _DXGK_DISPLAYMODE_INFO *v67; // rax
  __int128 v68; // xmm1
  __int64 v69; // xmm0_8
  DMMVIDPNPRESENTPATH *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v73; // r9d
  int v74; // eax
  int v75; // eax
  __int64 v76; // rcx
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v78; // rdi
  int v79; // ecx
  ADAPTER_DISPLAY *v80; // rcx
  unsigned __int8 v81; // zf
  VIDPN_MGR *v82; // r14
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  void *v87; // r13
  struct DXGADAPTERALLOCATION *v88; // rax
  int v89; // edi
  unsigned __int8 v90; // al
  unsigned int v91; // eax
  __int64 v92; // rcx
  __int64 v93; // r13
  int v94; // eax
  __int64 v95; // rcx
  __int64 v96; // r13
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // r13
  __int64 v108; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  unsigned int v110; // ecx
  __int128 v111; // xmm1
  __int64 v112; // xmm0_8
  int updated; // eax
  __int64 v114; // rcx
  __int64 v115; // r12
  unsigned int i; // r12d
  __int64 v117; // rcx
  __int64 v118; // rax
  DMMVIDPNPRESENTPATH *v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  int v124; // eax
  __int64 v125; // rcx
  __int64 v126; // rax
  ADAPTER_DISPLAY *v127; // rcx
  unsigned __int8 v128; // zf
  DMMVIDPNTOPOLOGY *v129; // rbx
  unsigned int v130; // r13d
  unsigned int *v131; // rdi
  __int64 v132; // rcx
  __int64 v133; // rax
  bool IsSourceInTopology; // al
  void *v135; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  ADAPTER_DISPLAY *v141; // rcx
  unsigned __int8 v142; // zf
  __int64 v143; // rdi
  int v144; // eax
  __int64 v145; // rcx
  __int64 v146; // r13
  _QWORD *v147; // rax
  _QWORD *v148; // rax
  __int64 v149; // r8
  VIDPN_MGR *v150; // r13
  int v151; // eax
  __int64 v152; // rcx
  __int64 v153; // rdi
  _QWORD *v154; // rax
  int v155; // eax
  __int64 v156; // rcx
  __int64 v157; // rdi
  _QWORD *v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  _QWORD *v165; // rax
  __int64 v166; // r14
  char *v167; // rcx
  _QWORD *v168; // rax
  _QWORD *v169; // rax
  _QWORD *v170; // rax
  int v171; // eax
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rax
  _QWORD *v175; // rax
  __int64 v176; // rax
  _QWORD *v177; // rax
  signed __int64 v178; // rax
  __int64 v179; // r8
  unsigned __int8 v180; // [rsp+50h] [rbp-B0h] BYREF
  char v181; // [rsp+51h] [rbp-AFh]
  char v182; // [rsp+52h] [rbp-AEh]
  unsigned int v183; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v184; // [rsp+58h] [rbp-A8h] BYREF
  int v185; // [rsp+60h] [rbp-A0h]
  int v186; // [rsp+68h] [rbp-98h]
  unsigned int v187; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *v188; // [rsp+70h] [rbp-90h]
  int v189; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v190; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v191; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v192; // [rsp+90h] [rbp-70h]
  struct DMMVIDPN *v193; // [rsp+98h] [rbp-68h] BYREF
  struct DXGDEVICE *v194; // [rsp+A0h] [rbp-60h]
  _BYTE v195[24]; // [rsp+A8h] [rbp-58h] BYREF
  DMMVIDPN *v196; // [rsp+C0h] [rbp-40h]
  _DWORD *v197; // [rsp+C8h] [rbp-38h]
  __int64 v198; // [rsp+D0h] [rbp-30h]
  __int64 v199; // [rsp+D8h] [rbp-28h]
  unsigned int *v200; // [rsp+E0h] [rbp-20h]
  struct _D3DKMT_DISPLAYMODE v201; // [rsp+E8h] [rbp-18h] BYREF
  struct COREDEVICEACCESS *v202[3]; // [rsp+118h] [rbp+18h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v203; // [rsp+130h] [rbp+30h] BYREF

  v14 = *((_QWORD *)a1 + 1);
  v199 = a6;
  v197 = a9;
  v198 = a10;
  v200 = a11;
  v194 = a12;
  v202[0] = a13;
  v196 = (DMMVIDPN *)a4;
  v186 = a3;
  v187 = a2;
  v190 = a1;
  v184 = 0LL;
  v185 = 0;
  v180 = 0;
  v181 = 0;
  if ( !v14 )
  {
    v100 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v100);
    v14 = *((_QWORD *)a1 + 1);
  }
  v17 = a8[6];
  v18 = (unsigned int)(a8[13] | a8[3]);
  v19 = *(_QWORD *)(v14 + 16);
  v189 = v17;
  if ( ((unsigned int)v18 & v17) != 0 )
  {
    v101 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v101);
  }
  v20 = a8[2];
  v21 = v20 & a8[5];
  v22 = v17 & v20;
  if ( (v17 & v21) != (_DWORD)v22 )
  {
    v102 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v102);
  }
  v23 = (DMMVIDPNTOPOLOGY *)(a4 + 96);
  v193 = 0LL;
  v192 = (DMMVIDPNTOPOLOGY *)(a4 + 96);
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1);
  v27 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v103 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v103[3] = *(int *)(v19 + 280);
    v103[4] = *(unsigned int *)(v19 + 276);
    v103[5] = v27;
    WdLogEvent5_WdError(v103);
  }
  else
  {
    v28 = v193;
    v29 = 0;
    v191 = (struct DMMVIDPN *)((char *)v193 + 96);
    v30 = 1;
    if ( *(_DWORD *)(*(_QWORD *)(v19 + 2520) + 80LL) )
    {
      v31 = v191;
      do
      {
        if ( (v30 & a8[10]) != 0 )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v23, v29, 0LL, &v183) < 0 || v183 == -1 )
          {
            v105 = WdLogNewEntry5_WdAssertion(v104);
            WdLogEvent5_WdAssertion(v105);
          }
          Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(v23, v29, v183);
          if ( !Path )
          {
            v108 = WdLogNewEntry5_WdAssertion(v106);
            WdLogEvent5_WdAssertion(v108);
          }
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v19 + 2520), v29);
          v110 = *((_DWORD *)Path + 29);
          v111 = *((_OWORD *)DisplayModeInfo + 1);
          *(_OWORD *)&v201.Width = *(_OWORD *)DisplayModeInfo;
          v112 = *((_QWORD *)DisplayModeInfo + 4);
          LODWORD(DisplayModeInfo) = *((_DWORD *)DisplayModeInfo + 10);
          *(_QWORD *)&v201.DisplayFixedOutput = v112;
          *((_DWORD *)&v201.Flags + 1) = (_DWORD)DisplayModeInfo;
          *(_OWORD *)&v201.RefreshRate.Numerator = v111;
          v201.DisplayOrientation = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v110);
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path);
          v115 = updated;
          if ( updated < 0 )
          {
            v122 = (_QWORD *)WdLogNewEntry5_WdError(v114);
            v122[3] = v29;
            v122[4] = v31;
            v122[5] = v115;
            WdLogEvent5_WdError(v122);
            a8[10] &= ~v30;
            a8[2] |= v30;
          }
          else
          {
            for ( i = 0; ; ++i )
            {
              if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v191, v29, i, &v183) < 0 )
              {
                v118 = WdLogNewEntry5_WdAssertion(v117);
                WdLogEvent5_WdAssertion(v118);
              }
              v26 = v183;
              if ( v183 == -1 )
                break;
              v119 = DMMVIDPNTOPOLOGY::FindPath(v191, v29, v183);
              v188 = v119;
              if ( !v119 )
              {
                v121 = WdLogNewEntry5_WdAssertion(v120);
                WdLogEvent5_WdAssertion(v121);
                v119 = v188;
              }
              DMMVIDPNPRESENTPATH::PinContentRotation(v119, Path[29]);
            }
            v31 = v191;
          }
          v23 = v192;
        }
        ++v29;
        v30 *= 2;
      }
      while ( v29 < *(_DWORD *)(*(_QWORD *)(v19 + 2520) + 80LL) );
      v28 = v193;
    }
LABEL_13:
    v32 = *(ADAPTER_DISPLAY **)(v19 + 2520);
    v33 = 0LL;
    for ( j = 1; (unsigned int)v33 < *((_DWORD *)v32 + 20); j *= 2 )
    {
      if ( (j & a8[19]) == 0 )
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v32, v33)
          && (((a8[13] | a8[3] | a8[2]) & j) != 0 || (j & a8[5]) == 0)
          && (v94 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v19 + 2520), v33, 0, 0x800u, a14),
              v96 = v94,
              v94 < 0) )
        {
          v123 = (_QWORD *)WdLogNewEntry5_WdError(v95);
          v123[3] = (unsigned int)v33;
          v123[4] = *(int *)(v19 + 280);
          v123[5] = *(unsigned int *)(v19 + 276);
          v123[6] = v96;
          WdLogEvent5_WdError(v123);
          a8[19] |= j;
          a8[v33 + 20] = v96;
        }
        else
        {
          if ( (j & a8[3]) != 0 || v181 && (j & a8[2]) != 0 || *((_BYTE *)v190 + 464) )
          {
            LOBYTE(v26) = 2;
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              v195,
              ((unsigned __int64)v28 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v28 + 96) != 0LL),
              v26);
            v124 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v28 + 96), v33);
            goto LABEL_119;
          }
          if ( (j & a8[13]) != 0 )
          {
            v129 = v191;
            v130 = 0;
            v131 = (unsigned int *)(v198 + 4LL * (unsigned int)(16 * v33));
            do
            {
              if ( *v131 == -1 )
                break;
              LOBYTE(v26) = 2;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                v195,
                ((unsigned __int64)v129 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v129 >> 64),
                v26);
              if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v129, v33, *v131, 0LL) < 0 )
              {
                v133 = WdLogNewEntry5_WdAssertion(v132);
                WdLogEvent5_WdAssertion(v133);
              }
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v195);
              ++v130;
              ++v131;
            }
            while ( v130 < 0x10 );
            IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v129, v33);
            v28 = v193;
            if ( !IsSourceInTopology )
              goto LABEL_123;
            v135 = 0LL;
            if ( *(_QWORD *)(v19 + 2528) )
            {
              DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                             *(ADAPTER_DISPLAY **)(v19 + 2520),
                                             v33);
              if ( !DisplayedPrimaryAllocation
                || (v138 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v138 & 0x10) != 0) )
              {
                v143 = (unsigned int)v33;
LABEL_141:
                v148 = (_QWORD *)WdLogNewEntry5_WdTrace(v138, v137, v139, v140);
                LOBYTE(v149) = 2;
                v148[3] = v143;
                v148[4] = *(int *)(v19 + 280);
                v148[5] = *(unsigned int *)(v19 + 276);
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  v195,
                  ((unsigned __int64)v28 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v28 + 96) != 0LL),
                  v149);
                v124 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v28 + 96), v33);
LABEL_119:
                v125 = v124 + 0x80000000;
                if ( (v125 & 0x80000000) == 0 && v124 != -1071774919 )
                {
                  v126 = WdLogNewEntry5_WdAssertion(v125);
                  WdLogEvent5_WdAssertion(v126);
                }
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v195);
LABEL_123:
                v81 = (j & a8[3]) == 0;
                LODWORD(v184) = v184 & 0xFFFFFF50 | v186 & 0xF | 0x50;
                v127 = *(ADAPTER_DISPLAY **)(v19 + 2520);
                v185 = *((_DWORD *)v127 + 60);
                BYTE4(v184) = (BYTE4(v184) & 0xFC | ((j & a8[3]) == 0)) ^ ((v187 >> 14) ^ (BYTE4(v184) | v81)) & 4;
                if ( (j & a8[6]) != 0 )
                  v128 = ADAPTER_DISPLAY::IsVidPnSourceActive(v127, v33) == 0;
                else
                  v128 = (j & a8[5]) == 0;
                v150 = v190;
                v151 = VIDPN_MGR::CommitVidPn(
                         v190,
                         v28,
                         0LL,
                         v33,
                         D3DKMDT_MCC_IGNORE,
                         0,
                         v128,
                         (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v184,
                         &v180);
                v153 = v151;
                if ( v151 < 0 )
                {
                  v154 = (_QWORD *)WdLogNewEntry5_WdError(v152);
                  v154[3] = (unsigned int)v33;
                  v154[4] = *(int *)(v19 + 280);
                  v154[5] = *(unsigned int *)(v19 + 276);
                  v154[6] = v153;
                  WdLogEvent5_WdError(v154);
                }
                if ( v194 && ((j & a8[3]) != 0 || *((_BYTE *)v150 + 464)) )
                {
                  v155 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2520), v194, v33);
                  v157 = v155;
                  if ( v155 < 0 )
                  {
                    v158 = (_QWORD *)WdLogNewEntry5_WdError(v156);
                    v158[3] = (unsigned int)v33;
                    v158[4] = *(int *)(v19 + 280);
                    v158[5] = *(unsigned int *)(v19 + 276);
                    v158[6] = v157;
                    WdLogEvent5_WdError(v158);
                  }
                }
                goto LABEL_20;
              }
              v135 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
            }
            LODWORD(v184) = v184 & 0xFFFFFF40 | v186 & 0xF | 0x40;
            v141 = *(ADAPTER_DISPLAY **)(v19 + 2520);
            v185 = *((_DWORD *)v141 + 60);
            BYTE4(v184) = BYTE4(v184) & 0xF9 | (v187 >> 14) & 4 | 1;
            if ( (j & a8[6]) != 0 )
              v142 = ADAPTER_DISPLAY::IsVidPnSourceActive(v141, v33) == 0;
            else
              v142 = (j & a8[5]) == 0;
            v144 = VIDPN_MGR::CommitVidPn(
                     v190,
                     v28,
                     v135,
                     v33,
                     D3DKMDT_MCC_ENFORCE,
                     0,
                     v142,
                     (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v184,
                     &v180);
            v146 = v144;
            if ( v144 < 0 )
            {
              v147 = (_QWORD *)WdLogNewEntry5_WdError(v145);
              v143 = (unsigned int)v33;
              v147[3] = (unsigned int)v33;
              v147[4] = *(int *)(v19 + 280);
              v147[5] = *(unsigned int *)(v19 + 276);
              v147[6] = v146;
              WdLogEvent5_WdError(v147);
              goto LABEL_141;
            }
          }
        }
      }
LABEL_20:
      v32 = *(ADAPTER_DISPLAY **)(v19 + 2520);
      v33 = (unsigned int)(v33 + 1);
    }
    v35 = 0;
    for ( k = 1; ; k *= 2 )
    {
      v37 = *(ADAPTER_DISPLAY **)(v19 + 2520);
      LODWORD(v188) = k;
      v38 = *((_DWORD *)v37 + 20);
      if ( v35 >= v38 )
        break;
      v39 = 1;
      v182 = 1;
      if ( (k & a8[19]) == 0 )
      {
        if ( (k & a8[2]) == 0 )
          goto LABEL_25;
        LOBYTE(v26) = 2;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          v195,
          ((unsigned __int64)v28 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v28 + 96) != 0LL),
          v26);
        v53 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v28 + 96), v35);
        v54 = v53 + 0x80000000;
        if ( (int)v54 >= 0 && v53 != -1071774919 )
        {
          v159 = WdLogNewEntry5_WdAssertion(v54);
          WdLogEvent5_WdAssertion(v159);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v195);
        for ( m = 0; ; ++m )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v192, v35, m, &v183) < 0 )
          {
            v160 = WdLogNewEntry5_WdAssertion(v56);
            WdLogEvent5_WdAssertion(v160);
          }
          v57 = v183;
          if ( v183 == -1 )
            break;
          if ( v39 )
          {
            v67 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v19 + 2520), v35);
            v68 = *((_OWORD *)v67 + 1);
            *(_OWORD *)&v201.Width = *(_OWORD *)v67;
            v69 = *((_QWORD *)v67 + 4);
            LODWORD(v67) = *((_DWORD *)v67 + 10);
            *(_QWORD *)&v201.DisplayFixedOutput = v69;
            *((_DWORD *)&v201.Flags + 1) = (_DWORD)v67;
            *(_OWORD *)&v201.RefreshRate.Numerator = v68;
            v70 = DMMVIDPNTOPOLOGY::FindPath(v192, v35, v57);
            if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v70, &v201) < 0 )
            {
              v161 = WdLogNewEntry5_WdAssertion(v71);
              WdLogEvent5_WdAssertion(v161);
            }
            v182 = 0;
          }
          if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                 v196,
                 v57,
                 (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)&v203) < 0 )
          {
            v162 = WdLogNewEntry5_WdAssertion(v72);
            WdLogEvent5_WdAssertion(v162);
          }
          v74 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(v190, (struct DMMVIDPN *)((char *)v28 + 96), &v203, v73);
          v64 = v74;
          if ( v74 < 0 )
          {
LABEL_150:
            v165 = (_QWORD *)WdLogNewEntry5_WdError(v63);
            v166 = v35;
            v167 = (char *)v28 + 96;
            v165[3] = v35;
            v165[4] = v57;
LABEL_152:
            v165[5] = v167;
            v165[6] = v64;
            WdLogEvent5_WdError(v165);
            k = (int)v188;
            goto LABEL_160;
          }
          v39 = v182;
        }
        v58 = 0;
        v59 = (struct DMMVIDPN *)((char *)v28 + 96);
        while ( 1 )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v59, v35, v58, &v183) < 0 )
          {
            v163 = WdLogNewEntry5_WdAssertion(v60);
            WdLogEvent5_WdAssertion(v163);
          }
          v57 = v183;
          if ( v183 == -1 )
            break;
          if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                 v196,
                 v183,
                 (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)&v203) < 0 )
          {
            v164 = WdLogNewEntry5_WdAssertion(v61);
            WdLogEvent5_WdAssertion(v164);
          }
          v62 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                  v190,
                  v59,
                  (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)&v203);
          v64 = v62;
          if ( v62 < 0 )
            goto LABEL_150;
          v59 = (struct DMMVIDPN *)((char *)v28 + 96);
          DMMVIDPNTOPOLOGY::GetPathFromTarget((struct DMMVIDPN *)((char *)v28 + 96), v57);
          PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v192, v57);
          DMMVIDPNPRESENTPATH::SetGammaRamp(v66, *((const struct DXGK_GAMMA_RAMP **)PathFromTarget + 23));
          ++v58;
        }
        if ( v194 && v202[0] )
        {
          v75 = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2520), v194, v35, &v201, v202[0]);
          v64 = v75;
          if ( v75 < 0 )
          {
            v165 = (_QWORD *)WdLogNewEntry5_WdError(v76);
            v166 = v35;
            v165[3] = v35;
            v165[4] = *(int *)(v19 + 280);
            v167 = (char *)*(unsigned int *)(v19 + 276);
            goto LABEL_152;
          }
          CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v19 + 2520), v35, 0);
          if ( *(_QWORD *)(v19 + 2528) )
          {
LABEL_63:
            v78 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
            goto LABEL_64;
          }
LABEL_156:
          v78 = 0LL;
LABEL_64:
          v79 = 32;
          k = (int)v188;
          if ( v58 <= 1 )
            v79 = 48;
          LODWORD(v184) = v184 & 0xFFFFFF00 | v186 & 0xF | v79;
          v80 = *(ADAPTER_DISPLAY **)(v19 + 2520);
          v185 = *((_DWORD *)v80 + 60);
          BYTE4(v184) = BYTE4(v184) & 0xF8 | (v187 >> 14) & 4;
          if ( ((unsigned int)v188 & a8[6]) != 0 )
            v81 = ADAPTER_DISPLAY::IsVidPnSourceActive(v80, v35) == 0;
          else
            v81 = ((unsigned int)v188 & a8[5]) == 0;
          v82 = v190;
          v83 = VIDPN_MGR::CommitVidPn(
                  v190,
                  v28,
                  v78,
                  v35,
                  D3DKMDT_MCC_ENFORCE,
                  0,
                  v81,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v184,
                  &v180);
          v64 = v83;
          if ( v83 >= 0 )
          {
            if ( (k & a8[5]) == 0 )
            {
              v85 = *((_QWORD *)v82 + 1);
              if ( !v85 )
              {
                v174 = WdLogNewEntry5_WdAssertion(v84);
                WdLogEvent5_WdAssertion(v174);
                v85 = *((_QWORD *)v82 + 1);
              }
              if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v85 + 16)) < 1200
                || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v86 + 192) + 64LL) + 40LL) + 28LL) < 0x300Au )
              {
                v189 |= k;
              }
            }
            goto LABEL_25;
          }
          v170 = (_QWORD *)WdLogNewEntry5_WdError(v84);
          v166 = v35;
          v170[3] = v35;
          v170[4] = *(int *)(v19 + 280);
          v170[5] = *(unsigned int *)(v19 + 276);
          v170[6] = v64;
          WdLogEvent5_WdError(v170);
          if ( v194 )
            ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2520), v194, v35);
        }
        else
        {
          if ( !*(_QWORD *)(v19 + 2528) )
            goto LABEL_156;
          CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(ADAPTER_DISPLAY **)(v19 + 2520), v35);
          if ( CddPrimaryAllocation )
          {
            v97 = *((unsigned int *)CddPrimaryAllocation + 1);
            if ( (v97 & 0x10) == 0 )
              goto LABEL_63;
          }
          k = (int)v188;
          v166 = v35;
          if ( ((unsigned int)v188 & a8[8]) == 0 )
          {
            *v197 |= (unsigned int)v188;
            v169 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v169[3] = v35;
            v169[4] = *(int *)(v19 + 280);
            v169[5] = *(unsigned int *)(v19 + 276);
            WdLogEvent5_WdDmmEvent(v169);
            goto LABEL_25;
          }
          LODWORD(v64) = -1071775482;
          v168 = (_QWORD *)WdLogNewEntry5_WdError(v97);
          v168[3] = v35;
          v168[4] = *(int *)(v19 + 280);
          v168[5] = *(unsigned int *)(v19 + 276);
          WdLogEvent5_WdError(v168);
        }
LABEL_160:
        if ( !v181 )
        {
          DxgkLogCodePointPacket(0x61u, v35, v64, 0, *(_QWORD *)(v19 + 276));
          v181 = 1;
          goto LABEL_13;
        }
        a8[19] |= k;
        a8[v166 + 20] = v64;
        if ( (_DWORD)v64 == -1071774920 || (_DWORD)v64 == -1071774976 )
          v180 = 1;
      }
      LOBYTE(v26) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        v195,
        ((unsigned __int64)v28 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v28 + 96) != 0LL),
        v26);
      v171 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v28 + 96), v35);
      v172 = v171 + 0x80000000;
      if ( (int)v172 >= 0 && v171 != -1071774919 )
      {
        v173 = WdLogNewEntry5_WdAssertion(v172);
        WdLogEvent5_WdAssertion(v173);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v195);
LABEL_25:
      ++v35;
    }
    v40 = 0LL;
    v41 = 1;
    if ( v38 )
    {
      do
      {
        if ( (v41 & a8[19]) == 0 )
        {
          v42 = a8[5];
          if ( (v41 & v189) != 0 )
          {
            v87 = 0LL;
            if ( (v42 & v41) == 0 )
            {
              LOBYTE(v26) = 2;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                v195,
                ((unsigned __int64)v28 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v28 + 96) != 0LL),
                v26);
              v98 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v28 + 96), v40);
              v99 = v98 + 0x80000000;
              if ( (int)v99 >= 0 && v98 != -1071774919 )
              {
                v176 = WdLogNewEntry5_WdAssertion(v99);
                WdLogEvent5_WdAssertion(v176);
              }
              a8[17] |= v41;
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v195);
              v89 = v184 & 0xFFFFFF0F | 0x40;
              goto LABEL_81;
            }
            if ( !*(_QWORD *)(v19 + 2528) )
              goto LABEL_80;
            v88 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(v37, v40);
            if ( v88 && (*((_DWORD *)v88 + 1) & 0x10) == 0 )
            {
              v87 = (void *)*((_QWORD *)v88 + 2);
LABEL_80:
              v89 = v184 & 0xFFFFFF0F | 0x20;
LABEL_81:
              v202[0] = 0LL;
              v202[1] = 0LL;
              v90 = v186;
              if ( v186 == 4 )
              {
                DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, v202);
                v90 = v186;
              }
              LODWORD(v184) = v89 ^ ((unsigned __int8)v89 ^ v90) & 0xF;
              v185 = *(_DWORD *)(*(_QWORD *)(v19 + 2520) + 240LL);
              BYTE4(v184) = BYTE4(v184) & 0xF8 | (v187 >> 14) & 4;
              v91 = VIDPN_MGR::CommitVidPn(
                      v190,
                      v28,
                      v87,
                      v40,
                      D3DKMDT_MCC_ENFORCE,
                      1,
                      0,
                      (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v184,
                      &v180);
              v93 = (int)v91;
              if ( v186 == 4 )
                DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v91, v202);
              if ( (int)v93 < 0 )
              {
                a8[19] |= v41;
                a8[v40 + 20] = v93;
                v177 = (_QWORD *)WdLogNewEntry5_WdError(v92);
                v177[3] = (unsigned int)v40;
                v177[4] = *(int *)(v19 + 280);
                v177[5] = *(unsigned int *)(v19 + 276);
                v177[6] = v93;
                WdLogEvent5_WdError(v177);
              }
              goto LABEL_30;
            }
            *v197 |= v41;
            a8[17] |= v41;
            v175 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v175[3] = (unsigned int)v40;
            v175[4] = *(int *)(v19 + 280);
            v175[5] = *(unsigned int *)(v19 + 276);
            WdLogEvent5_WdDmmEvent(v175);
          }
          else
          {
            a8[17] |= v41 & ~v42;
          }
        }
LABEL_30:
        v37 = *(ADAPTER_DISPLAY **)(v19 + 2520);
        v40 = (unsigned int)(v40 + 1);
        v41 *= 2;
      }
      while ( (unsigned int)v40 < *((_DWORD *)v37 + 20) );
    }
    if ( a5 )
    {
      v44 = v199;
      do
      {
        if ( ((1 << *a7) & a8[19]) != 0 )
        {
          v178 = DxgkIncrementGlobalConnectionChangeId();
          *(_QWORD *)(v179 + v44 + 24) = v178;
          *(_DWORD *)(v179 + v44 + 32) = *(_DWORD *)(v179 + v44 + 32) & 0xF0FFFFFF | 0xD000000;
          DxgkIncrementGlobalConnectionChangeId();
        }
        else
        {
          v45 = DxgkGetGlobalConnectionChangeId();
          *(_QWORD *)(v46 + v44 + 24) = v45;
          *(_DWORD *)(v46 + v44 + 32) = *(_DWORD *)(v46 + v44 + 32) & 0xF0FFFFFF | 0xE000000;
        }
        v50 = (v47 & a8[2]) != 0 ? 1 : -1;
        v51 = -((v47 & a8[2]) != 0);
        *(_DWORD *)(v46 + v44 + 16) &= ~1u;
        *(_BYTE *)(v46 + v44 + 48) = v50;
        *(_BYTE *)(v46 + v44 + 49) = ~v51;
        a7 = (_DWORD *)(v48 + 4);
        *(_BYTE *)(v46 + v44 + 50) = v50;
      }
      while ( v49 != 1 );
    }
    *v200 = (v180 != 0) | *v200 & 0xFFFFFFFE;
    LODWORD(v27) = 0;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v193, 0LL);
  return (unsigned int)v27;
}
