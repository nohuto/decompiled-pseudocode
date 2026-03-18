/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026E72C
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C026DFFC (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C000389C (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00D08CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D1D08 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00D92B0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DA7CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DA844 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD334 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C012C9C0 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0146BD8 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C026DBC8 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C026E2EC (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C026E4F4 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C026E5C8 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C026FA9C (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C026FC34 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02C0968 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02C0D48 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C02C1068 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02C64E4 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // r13
  __int64 v8; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct CCD_BTL *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rbx
  _QWORD *v20; // rax
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  unsigned int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // r14
  __int16 v36; // cx
  int MonitorType; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rbx
  _QWORD *v42; // rax
  unsigned __int8 v43; // al
  int v44; // ebx
  __int64 v45; // rdx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v46; // r14d
  __int64 v47; // rax
  unsigned int v48; // edx
  int Persisted; // r14d
  __int64 v50; // rbx
  char v51; // r12
  unsigned int i; // ebx
  __int64 v53; // rdx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathsCount; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  _QWORD *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // r12
  __int64 v69; // r14
  __int64 v70; // r13
  _QWORD *v71; // rax
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r14
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rbx
  __int64 v83; // rax
  unsigned int v84; // edx
  unsigned int v85; // r8d
  unsigned int v86; // r9d
  __int16 v87; // cx
  unsigned __int8 v88; // bl
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v90; // rax
  const GUID *v91; // r8
  unsigned __int8 IsPortraitFirstTarget; // al
  char v93; // al
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int16 v96; // r13
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rcx
  unsigned __int16 v101; // dx
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned int j; // ebx
  __int64 v110; // rcx
  unsigned __int16 v111; // ax
  __int16 v112; // r14
  unsigned __int16 v113; // r14
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // rax
  unsigned int v124; // ebx
  char v125; // al
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v130; // r14
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v131; // rax
  __int64 v132; // rcx
  __int128 v133; // xmm1
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v134; // r14
  __int64 v135; // rdx
  bool v136; // zf
  __int64 v137; // rcx
  __int64 v138; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v139; // rax
  __int64 v140; // rcx
  int v141; // eax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // rax
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // rax
  int v151; // eax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // rbx
  __int64 v156; // rax
  int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r14
  __int64 v162; // rax
  int v163; // eax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // rbx
  _QWORD *v168; // rax
  _QWORD *v169; // rax
  unsigned __int8 v170[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v171[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v172[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v173; // [rsp+68h] [rbp-A0h]
  int v174; // [rsp+70h] [rbp-98h] BYREF
  int UnusedVidpnSourceId; // [rsp+74h] [rbp-94h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v176[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v177; // [rsp+80h] [rbp-88h]
  unsigned int v178[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v179[64]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v180; // [rsp+D8h] [rbp-30h]
  int v181; // [rsp+E4h] [rbp-24h]
  int v182; // [rsp+E8h] [rbp-20h]
  _BYTE v183[96]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v184[64]; // [rsp+158h] [rbp+50h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v185; // [rsp+198h] [rbp+90h]

  v6 = a4;
  v8 = a3;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 25) = 0;
    return 0LL;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v179, 8u, 0);
  v13 = CCD_BTL::Global(v12, v11);
  v14 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v179, (struct CCD_BTL *)((char *)v13 + 8));
  v18 = 0;
  v19 = v14;
  if ( v14 >= 0 )
  {
    v26 = *((_DWORD *)DXGGLOBAL::GetGlobal(v16, v15) + 370);
    if ( v26 > 1 )
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v27);
      *(_QWORD *)(v28 + 24) = 3457LL;
      WdLogEvent5_WdWarning(v28);
      v21 = 1;
      v23 = v26;
      v22 = 82;
      goto LABEL_7;
    }
    v29 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
    v33 = v29;
    v177 = v8;
    if ( v29 >= 0 )
    {
      v35 = v6;
      v173 = v6;
    }
    else
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30, v32);
      v35 = v6;
      v173 = v6;
      v34[3] = v33;
      v34[4] = a2->HighPart;
      v34[5] = a2->LowPart;
      v34[6] = v8;
      v34[7] = v6;
      WdLogEvent5_WdError(v34);
    }
    if ( v180 )
    {
      v36 = *(_WORD *)(v180 + 20);
    }
    else
    {
      v36 = 0;
      v173 = v35;
    }
    if ( !v36 )
    {
      DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, (__int64)*a2);
      *(_BYTE *)(a1 + 25) = 1;
      goto LABEL_141;
    }
    v170[3] = 0;
    v170[1] = 0;
    v170[2] = 1;
    MonitorType = QueryMonitorType(
                    a2,
                    v8,
                    (enum _DMM_VIDPN_MONITOR_TYPE *)&v174,
                    v172,
                    v176,
                    v171,
                    &v170[2],
                    &v170[3],
                    &v170[1]);
    v41 = MonitorType;
    if ( MonitorType >= 0 )
    {
      v43 = v170[1];
      v44 = v174;
    }
    else
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38, v40);
      v42[3] = v41;
      v42[4] = a2->HighPart;
      v42[5] = a2->LowPart;
      v42[6] = v8;
      v42[7] = v35;
      WdLogEvent5_WdError(v42);
      v43 = 0;
      v172[0] = D3DKMDT_VOT_UNINITIALIZED;
      v44 = 0;
      v170[1] = 0;
      v174 = 0;
      v171[0] = 0;
      v170[2] = 0;
      v170[3] = 0;
    }
    v170[0] = v43;
    v172[1] = GetLaptopSpecialCaseFlags(
                (const struct CCD_TOPOLOGY *)v179,
                a2,
                v8,
                v172[0],
                (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v46 = v172[1];
    if ( v172[1] )
    {
      if ( v172[1] == D3DKMDT_VOT_SVIDEO )
      {
        *(_BYTE *)(a1 + 26) = 1;
      }
      else if ( v172[1] == D3DKMDT_VOT_D_JPN )
      {
        *(_BYTE *)(a1 + 27) = 1;
      }
      else
      {
        v47 = WdLogNewEntry5_WdAssertion((unsigned int)(v172[1] - 1), v45);
        *(_QWORD *)(v47 + 24) = 3549LL;
        WdLogEvent5_WdAssertion(v47);
      }
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v184, 8u, 0);
    if ( v46 && v44 == 1 )
      v48 = v46 | 0x86;
    else
      v48 = 143;
    Persisted = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v184, v48, 0LL);
    LODWORD(v50) = Persisted;
    if ( Persisted >= 0 )
    {
      if ( v176[0] == D3DKMDT_VOT_MIRACAST )
      {
        v51 = 0;
        for ( i = 0; ; ++i )
        {
          PathsCount = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v184);
          if ( i >= (unsigned int)PathsCount )
            break;
          PathsCount = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v184, i);
          if ( *((_DWORD *)PathsCount + 7) == a3
            && *((_DWORD *)PathsCount + 4) == a2->LowPart
            && *((_DWORD *)PathsCount + 5) == a2->HighPart )
          {
            v51 = 1;
            break;
          }
        }
        LODWORD(v50) = Persisted;
        if ( !v51 )
        {
          v56 = WdLogNewEntry5_WdError(PathsCount, v53, v55);
          *(_QWORD *)(v56 + 24) = 3599LL;
          WdLogEvent5_WdError(v56);
          LODWORD(v50) = -1073741823;
        }
      }
      if ( !IsValidCloneConfiguration(v185) )
      {
        v60 = WdLogNewEntry5_WdError(v58, v57, v59);
        *(_QWORD *)(v60 + 24) = 3609LL;
        WdLogEvent5_WdError(v60);
        LODWORD(v50) = -1073741823;
      }
      if ( (int)v50 >= 0 )
      {
        v61 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v184, 0LL);
        v50 = v61;
        if ( v61 < 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62, v64);
          v65[3] = v50;
          v65[4] = a2->HighPart;
          v65[5] = a2->LowPart;
          v65[6] = v177;
          v65[7] = v6;
          WdLogEvent5_WdError(v65);
          DxgkLogCodePointPacket(0x3Eu, 2u, v50, 0, (__int64)*a2);
        }
        *(_DWORD *)(a1 + 32) |= 0x40u;
      }
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v184);
    if ( (int)v50 >= 0 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdEvent(v66);
      v68 = v177;
      v69 = v173;
      v70 = a5;
      v67[3] = a2->HighPart;
      v67[4] = a2->LowPart;
      v67[5] = v68;
      v67[6] = v69;
      v67[7] = a5;
      WdLogEvent5_WdEvent(v67);
LABEL_138:
      v163 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
      v167 = v163;
      if ( v163 < 0 )
      {
        v168 = (_QWORD *)WdLogNewEntry5_WdError(v165, v164, v166);
        v168[3] = v167;
        v168[4] = a2->HighPart;
        v168[5] = a2->LowPart;
        v168[6] = v68;
        v168[7] = v69;
        WdLogEvent5_WdError(v168);
        LODWORD(v167) = 0;
      }
      v169 = (_QWORD *)WdLogNewEntry5_WdEvent(v165);
      v169[3] = a2->HighPart;
      v169[4] = a2->LowPart;
      v169[5] = v68;
      v169[6] = v69;
      v169[7] = v70;
      WdLogEvent5_WdEvent(v169);
      v18 = v167;
      goto LABEL_141;
    }
    if ( (_DWORD)v50 == -1073741266 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      *(_BYTE *)(a1 + 30) = 1;
      goto LABEL_137;
    }
    v71 = (_QWORD *)WdLogNewEntry5_WdEvent(v66);
    v71[3] = (int)v50;
    v71[4] = a2->HighPart;
    v71[5] = a2->LowPart;
    v71[6] = v177;
    v71[7] = v173;
    WdLogEvent5_WdEvent(v71);
    *(_BYTE *)(a1 + 25) = 1;
    *(_BYTE *)(a1 + 30) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v183, 8u, 0);
    v72 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v183, (const struct CCD_TOPOLOGY *)v179);
    v76 = v72;
    if ( v72 < 0 )
    {
      v77 = WdLogNewEntry5_WdError(v74, v73, v75);
      *(_QWORD *)(v77 + 32) = v179;
      *(_QWORD *)(v77 + 24) = v76;
      WdLogEvent5_WdError(v77);
      v78 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v179, 0LL);
      v82 = v78;
      if ( v78 < 0 )
      {
        v83 = WdLogNewEntry5_WdError(v80, v79, v81);
        *(_QWORD *)(v83 + 32) = v179;
        *(_QWORD *)(v83 + 24) = v82;
        WdLogEvent5_WdError(v83);
      }
      v84 = 3;
      goto LABEL_53;
    }
    if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v179, a2, a3, v178) >= 0 )
      CCD_TOPOLOGY::RemovePath((CCD_TOPOLOGY *)v179, v178[0]);
    if ( v180 )
      v87 = *(_WORD *)(v180 + 20);
    else
      v87 = 0;
    if ( !v87 )
      goto LABEL_135;
    v88 = v170[0];
    v93 = 0;
    if ( !v170[0] && !v170[2] )
    {
      if ( v171[0]
        || (PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, 0LL),
            v90 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, 0LL),
            IsPortraitFirstTarget = DxgkIsPortraitFirstTarget(
                                      *(struct _LUID *)((char *)v90 + 16),
                                      *((_DWORD *)PathDescriptor + 7),
                                      v91),
            v88 = 0,
            IsPortraitFirstTarget) )
      {
        v93 = 1;
      }
    }
    v171[1] = v93;
    v96 = DetermineDefaultTopology(v172[1], v93);
    if ( v96 == 3 )
    {
      if ( v88 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, 0LL) + 129)
        || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, 0LL) + 4)
        && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, 0LL) + 5) )
      {
        if ( !v88 )
        {
          UnusedVidpnSourceId = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, 0LL) + 6);
          goto LABEL_96;
        }
      }
      else
      {
        v96 = 4;
      }
    }
    else if ( (unsigned __int16)(v96 - 4) > 1u )
    {
      v97 = WdLogNewEntry5_WdAssertion(v95, v94);
      *(_QWORD *)(v97 + 24) = 3751LL;
      WdLogEvent5_WdAssertion(v97);
    }
    UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v179, a2);
    if ( UnusedVidpnSourceId == 16 )
    {
      v100 = WdLogNewEntry5_WdEvent(v99);
      if ( v180 )
        v101 = *(_WORD *)(v180 + 20);
      else
        v101 = 0;
      *(_QWORD *)(v100 + 24) = v101;
      *(_QWORD *)(v100 + 32) = 16LL;
      WdLogEvent5_WdEvent(v100);
      v102 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v183, 0LL);
      v106 = v102;
      if ( v102 < 0 )
      {
        v107 = WdLogNewEntry5_WdError(v104, v103, v105);
        *(_QWORD *)(v107 + 32) = v183;
        *(_QWORD *)(v107 + 24) = v106;
        WdLogEvent5_WdError(v107);
      }
      v86 = 0;
      v85 = v106;
      v84 = 4;
      goto LABEL_55;
    }
    if ( v96 == 3 )
    {
      if ( !v88 )
      {
        v108 = WdLogNewEntry5_WdAssertion(v99, v98);
        *(_QWORD *)(v108 + 24) = 3828LL;
        WdLogEvent5_WdAssertion(v108);
      }
      for ( j = 0; ; ++j )
      {
        v110 = v180;
        v111 = v180 ? *(_WORD *)(v180 + 20) : 0;
        if ( j >= v111 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, j) + 129) )
        {
          v96 = 4;
          goto LABEL_96;
        }
      }
      goto LABEL_97;
    }
LABEL_96:
    v110 = v180;
LABEL_97:
    if ( v110 )
      v112 = *(_WORD *)(v110 + 20);
    else
      v112 = 0;
    v113 = v112 + 1;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v179, v113) < v113 )
    {
      v118 = WdLogNewEntry5_WdLowResource(v115, v114, v116, v117);
      *(_QWORD *)(v118 + 24) = v113;
      WdLogEvent5_WdLowResource(v118);
      v119 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v183, 0LL);
      v82 = v119;
      if ( v119 < 0 )
      {
        v123 = WdLogNewEntry5_WdError(v121, v120, v122);
        *(_QWORD *)(v123 + 32) = v183;
        *(_QWORD *)(v123 + 24) = v82;
        WdLogEvent5_WdError(v123);
      }
      v85 = v113;
      v84 = 5;
      goto LABEL_54;
    }
    v124 = v113 - 1;
    if ( !v170[0] )
    {
      v125 = v172[1];
      if ( v172[1] )
      {
        if ( v113 != 2 )
        {
          v126 = WdLogNewEntry5_WdAssertion(1LL, 2LL);
          *(_QWORD *)(v126 + 24) = 3891LL;
          WdLogEvent5_WdAssertion(v126);
          v125 = v172[1];
        }
        if ( v171[1] )
          v124 = !IsInternalVideoOutput(v172[0]);
        else
          v124 = ((unsigned __int8)~v125 >> 3) & 1;
        if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, 0LL) + 28) )
        {
          v129 = WdLogNewEntry5_WdAssertion(v128, v127);
          *(_QWORD *)(v129 + 24) = 3923LL;
          WdLogEvent5_WdAssertion(v129);
        }
        v130 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, 0LL);
        v131 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, 1LL);
        v132 = 2LL;
        do
        {
          *(_OWORD *)v131 = *(_OWORD *)v130;
          *((_OWORD *)v131 + 1) = *((_OWORD *)v130 + 1);
          *((_OWORD *)v131 + 2) = *((_OWORD *)v130 + 2);
          *((_OWORD *)v131 + 3) = *((_OWORD *)v130 + 3);
          *((_OWORD *)v131 + 4) = *((_OWORD *)v130 + 4);
          *((_OWORD *)v131 + 5) = *((_OWORD *)v130 + 5);
          *((_OWORD *)v131 + 6) = *((_OWORD *)v130 + 6);
          v131 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v131 + 128);
          v133 = *((_OWORD *)v130 + 7);
          v130 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v130 + 128);
          *((_OWORD *)v131 - 1) = v133;
          --v132;
        }
        while ( v132 );
        *(_OWORD *)v131 = *(_OWORD *)v130;
        *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, 1 - v124) = 0xCF00000000000LL;
      }
    }
    v134 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, v124);
    *((struct _LUID *)v134 + 2) = *a2;
    LOBYTE(v135) = v170[0] != 0 ? 2 : 0;
    v136 = v170[3] == 0;
    *((_DWORD *)v134 + 6) = UnusedVidpnSourceId;
    *((_DWORD *)v134 + 7) = a3;
    *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v134 + 22) = v172[0];
    *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v134 + 23) = v176[0];
    *((_BYTE *)v134 + 129) = v135 | !v136;
    *(_QWORD *)v134 = 0x8F00000000000LL;
    ++*(_WORD *)(v180 + 20);
    if ( v96 == 3 )
    {
      if ( v180 )
        v137 = *(unsigned __int16 *)(v180 + 20);
      else
        v137 = 0LL;
      if ( (_WORD)v137 != 2 )
      {
        v138 = WdLogNewEntry5_WdAssertion(v137, v135);
        *(_QWORD *)(v138 + 24) = 3964LL;
        WdLogEvent5_WdAssertion(v138);
      }
      v139 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v179, v124 == 0);
      v140 = *((_QWORD *)v139 + 19);
      *(_QWORD *)v134 |= 0x20000uLL;
      *((_QWORD *)v134 + 19) = v140;
      *((_DWORD *)v134 + 46) = *((_DWORD *)v139 + 46);
      *(_QWORD *)v134 |= 0x4000000000000uLL;
    }
    else
    {
      CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v179, v124);
    }
    v181 = 1;
    v182 = 4;
    v141 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v179, 0, 0);
    v76 = v141;
    if ( v141 >= 0 )
    {
      v151 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v179, 1LL);
      v155 = v151;
      if ( v151 == -1073741266 )
      {
        v86 = 0;
        v85 = -1073741266;
        v84 = 7;
      }
      else
      {
        if ( v151 >= 0 )
        {
          *(_BYTE *)(a1 + 30) = 0;
          goto LABEL_135;
        }
        v156 = WdLogNewEntry5_WdError(v153, v152, v154);
        *(_QWORD *)(v156 + 24) = v155;
        *(_QWORD *)(v156 + 32) = v180;
        WdLogEvent5_WdError(v156);
        v157 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v183, 0LL);
        v161 = v157;
        if ( v157 < 0 )
        {
          v162 = WdLogNewEntry5_WdError(v159, v158, v160);
          *(_QWORD *)(v162 + 32) = v183;
          *(_QWORD *)(v162 + 24) = v161;
          WdLogEvent5_WdError(v162);
        }
        v86 = v161;
        v85 = v155;
        v84 = 8;
      }
LABEL_55:
      DxgkLogCodePointPacket(0x3Eu, v84, v85, v86, (__int64)*a2);
LABEL_135:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v183);
LABEL_137:
      v70 = a5;
      v68 = v177;
      v69 = v173;
      goto LABEL_138;
    }
    v145 = WdLogNewEntry5_WdError(v143, v142, v144);
    *(_QWORD *)(v145 + 24) = v76;
    *(_QWORD *)(v145 + 32) = v180;
    WdLogEvent5_WdError(v145);
    v146 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v183, 0LL);
    v82 = v146;
    if ( v146 < 0 )
    {
      v150 = WdLogNewEntry5_WdError(v148, v147, v149);
      *(_QWORD *)(v150 + 32) = v183;
      *(_QWORD *)(v150 + 24) = v82;
      WdLogEvent5_WdError(v150);
    }
    v84 = 6;
LABEL_53:
    v85 = v76;
LABEL_54:
    v86 = v82;
    goto LABEL_55;
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
  v20[3] = v19;
  v20[4] = a2->HighPart;
  v20[5] = a2->LowPart;
  v20[6] = v8;
  v20[7] = v6;
  WdLogEvent5_WdError(v20);
  v21 = v19;
  v22 = 62;
  v23 = 0;
LABEL_7:
  DxgkLogCodePointPacket(v22, v23, v21, 0, (__int64)*a2);
  *(_BYTE *)(a1 + 25) = 1;
  *(_BYTE *)(a1 + 30) = 1;
LABEL_141:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v179);
  return v18;
}
