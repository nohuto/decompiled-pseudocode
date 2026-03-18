/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02398A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00AF410 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3F34 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00C6574 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00C8064 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00CA594 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00CDD14 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C023927C (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0239B74 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C0239D54 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C0239E28 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C023B2A4 (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C023B43C (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02885F8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02889D8 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0288CF8 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C028D138 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
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
  __int64 v11; // rcx
  struct CCD_BTL *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // r14
  __int16 v31; // cx
  int MonitorType; // eax
  __int64 v33; // rcx
  __int64 v34; // rbx
  _QWORD *v35; // rax
  unsigned __int8 v36; // al
  int v37; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v38; // r12d
  __int64 v39; // rax
  unsigned int v40; // edx
  int Persisted; // r14d
  __int64 v42; // rbx
  char v43; // r12
  unsigned int i; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // r12
  __int64 v58; // r14
  __int64 v59; // r13
  _QWORD *v60; // rax
  char v61; // r13
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rax
  unsigned int v72; // edx
  unsigned int v73; // r8d
  unsigned int v74; // r9d
  __int16 v75; // cx
  unsigned __int8 v76; // bl
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v77; // rbx
  struct _LUID *v78; // rax
  const GUID *v79; // r8
  unsigned __int8 IsPortraitFirstTarget; // al
  __int64 v81; // rcx
  __int16 v82; // r12
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rcx
  unsigned __int16 v89; // dx
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 v96; // rax
  unsigned int j; // ebx
  __int64 v98; // rcx
  unsigned __int16 v99; // ax
  __int16 v100; // r14
  unsigned __int16 v101; // r14
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // r8
  __int64 v105; // r9
  int v106; // eax
  __int64 v107; // rcx
  __int64 v108; // rax
  unsigned int v109; // ebx
  char v110; // al
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v114; // r14
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v115; // rax
  __int64 v116; // rcx
  __int128 v117; // xmm1
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v118; // r14
  bool v119; // zf
  __int64 v120; // rcx
  __int64 v121; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v122; // rax
  unsigned __int8 v123; // r8
  __int64 v124; // rcx
  int v125; // eax
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rax
  __int64 v130; // r8
  __int64 v131; // r9
  int v132; // eax
  __int64 v133; // rcx
  __int64 v134; // rax
  int v135; // eax
  __int64 v136; // rcx
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 v139; // r8
  __int64 v140; // r9
  int v141; // eax
  __int64 v142; // rcx
  __int64 v143; // r14
  __int64 v144; // rax
  int v145; // eax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rbx
  _QWORD *v149; // rax
  _QWORD *v150; // rax
  unsigned __int8 v151[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v152[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v153[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v154; // [rsp+68h] [rbp-A0h]
  int v155; // [rsp+70h] [rbp-98h] BYREF
  int UnusedVidpnSourceId; // [rsp+74h] [rbp-94h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v157[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v158; // [rsp+80h] [rbp-88h]
  unsigned int v159[4]; // [rsp+88h] [rbp-80h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v160[8]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v161; // [rsp+D8h] [rbp-30h]
  int v162; // [rsp+E4h] [rbp-24h]
  int v163; // [rsp+E8h] [rbp-20h]
  struct D3DKMT_GETPATHSMODALITY *v164[12]; // [rsp+F8h] [rbp-10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v165[8]; // [rsp+158h] [rbp+50h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v166; // [rsp+198h] [rbp+90h]

  v6 = a4;
  v8 = a3;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 25) = 0;
    return 0LL;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v160, 8u, 0);
  v12 = CCD_BTL::Global(v11);
  v13 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v160, (struct CCD_BTL *)((char *)v12 + 8));
  v15 = 0;
  v16 = v13;
  if ( v13 >= 0 )
  {
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal(v14) + 378);
    if ( v23 > 1 )
    {
      v25 = WdLogNewEntry5_WdWarning(v22, v21, v24);
      *(_QWORD *)(v25 + 24) = 3428LL;
      WdLogEvent5_WdWarning(v25);
      v18 = 1;
      v20 = v23;
      v19 = 82;
      goto LABEL_7;
    }
    v26 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
    v28 = v26;
    v158 = v8;
    if ( v26 >= 0 )
    {
      v30 = v6;
      v154 = v6;
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v30 = v6;
      v154 = v6;
      v29[3] = v28;
      v29[4] = a2->HighPart;
      v29[5] = a2->LowPart;
      v29[6] = v8;
      v29[7] = v6;
      WdLogEvent5_WdError(v29);
    }
    if ( v161 )
    {
      v31 = *(_WORD *)(v161 + 20);
    }
    else
    {
      v31 = 0;
      v154 = v30;
    }
    if ( !v31 )
    {
      DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, (__int64)*a2);
      *(_BYTE *)(a1 + 25) = 1;
      goto LABEL_144;
    }
    v151[2] = 1;
    v151[3] = 0;
    v151[1] = 0;
    MonitorType = QueryMonitorType(
                    a2,
                    v8,
                    (enum _DMM_VIDPN_MONITOR_TYPE *)&v155,
                    &v153[1],
                    v157,
                    v152,
                    &v151[2],
                    &v151[3],
                    &v151[1]);
    v34 = MonitorType;
    if ( MonitorType >= 0 )
    {
      v36 = v151[1];
      v37 = v155;
    }
    else
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v33);
      v35[3] = v34;
      v35[4] = a2->HighPart;
      v35[5] = a2->LowPart;
      v35[6] = v8;
      v35[7] = v30;
      WdLogEvent5_WdError(v35);
      v36 = 0;
      v153[1] = D3DKMDT_VOT_UNINITIALIZED;
      v37 = 0;
      v151[1] = 0;
      v155 = 0;
      v152[0] = 0;
      v151[2] = 0;
      v151[3] = 0;
    }
    v151[0] = v36;
    v153[0] = GetLaptopSpecialCaseFlags(
                (const struct CCD_TOPOLOGY *)v160,
                a2,
                v8,
                v153[1],
                (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v38 = v153[0];
    if ( v153[0] )
    {
      if ( v153[0] == D3DKMDT_VOT_SVIDEO )
      {
        *(_BYTE *)(a1 + 26) = 1;
      }
      else if ( v153[0] == D3DKMDT_VOT_D_JPN )
      {
        *(_BYTE *)(a1 + 27) = 1;
      }
      else
      {
        v39 = WdLogNewEntry5_WdAssertion((unsigned int)(v153[0] - 1));
        *(_QWORD *)(v39 + 24) = 3520LL;
        WdLogEvent5_WdAssertion(v39);
      }
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v165, 8u, 0);
    if ( v38 && v37 == 1 )
      v40 = v38 | 0x86;
    else
      v40 = 143;
    Persisted = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v165, v40, 0LL);
    LODWORD(v42) = Persisted;
    if ( Persisted >= 0 )
    {
      if ( v157[0] == D3DKMDT_VOT_MIRACAST )
      {
        v43 = 0;
        for ( i = 0; ; ++i )
        {
          PathDescriptor = v166 ? (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((unsigned __int16 *)v166 + 10) : 0LL;
          if ( i >= (unsigned __int16)PathDescriptor )
            break;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v165, i);
          if ( *((_DWORD *)PathDescriptor + 7) == a3
            && *((_DWORD *)PathDescriptor + 4) == a2->LowPart
            && *((_DWORD *)PathDescriptor + 5) == a2->HighPart )
          {
            v43 = 1;
            break;
          }
        }
        LODWORD(v42) = Persisted;
        if ( !v43 )
        {
          v46 = WdLogNewEntry5_WdError(PathDescriptor);
          *(_QWORD *)(v46 + 24) = 3570LL;
          WdLogEvent5_WdError(v46);
          LODWORD(v42) = -1073741823;
        }
        v38 = v153[0];
      }
      if ( !IsValidCloneConfiguration(v166) )
      {
        v50 = WdLogNewEntry5_WdError(v47);
        *(_QWORD *)(v50 + 24) = 3580LL;
        WdLogEvent5_WdError(v50);
        LODWORD(v42) = -1073741823;
      }
      if ( (int)v42 >= 0 )
      {
        v51 = CCD_TOPOLOGY::Persist(v165, 0LL, v48, v49);
        v42 = v51;
        if ( v51 < 0 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v52);
          v53[3] = v42;
          v53[4] = a2->HighPart;
          v53[5] = a2->LowPart;
          v53[6] = v158;
          v53[7] = v6;
          WdLogEvent5_WdError(v53);
          DxgkLogCodePointPacket(0x3Eu, 2u, v42, 0, (__int64)*a2);
        }
        *(_DWORD *)(a1 + 32) |= 0x40u;
      }
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v165);
    if ( (int)v42 >= 0 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, v54);
      v57 = v158;
      v58 = v154;
      v59 = a5;
      v56[3] = a2->HighPart;
      v56[4] = a2->LowPart;
      v56[5] = v57;
      v56[6] = v58;
      v56[7] = a5;
      WdLogEvent5_WdEvent(v56);
LABEL_141:
      v145 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
      v148 = v145;
      if ( v145 < 0 )
      {
        v149 = (_QWORD *)WdLogNewEntry5_WdError(v147);
        v149[3] = v148;
        v149[4] = a2->HighPart;
        v149[5] = a2->LowPart;
        v149[6] = v57;
        v149[7] = v58;
        WdLogEvent5_WdError(v149);
        LODWORD(v148) = 0;
      }
      v150 = (_QWORD *)WdLogNewEntry5_WdEvent(v147, v146);
      v150[3] = a2->HighPart;
      v150[4] = a2->LowPart;
      v150[5] = v57;
      v150[6] = v58;
      v150[7] = v59;
      WdLogEvent5_WdEvent(v150);
      v15 = v148;
      goto LABEL_144;
    }
    if ( (_DWORD)v42 == -1073741266 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      *(_BYTE *)(a1 + 30) = 1;
      goto LABEL_140;
    }
    v60 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, v54);
    v60[3] = (int)v42;
    v60[4] = a2->HighPart;
    v60[5] = a2->LowPart;
    v60[6] = v158;
    v60[7] = v154;
    WdLogEvent5_WdEvent(v60);
    v61 = 1;
    *(_BYTE *)(a1 + 25) = 1;
    *(_BYTE *)(a1 + 30) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v164, 8u, 0);
    v62 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v164, (const struct CCD_TOPOLOGY *)v160);
    v64 = v62;
    if ( v62 < 0 )
    {
      v65 = WdLogNewEntry5_WdError(v63);
      *(_QWORD *)(v65 + 32) = v160;
      *(_QWORD *)(v65 + 24) = v64;
      WdLogEvent5_WdError(v65);
      v68 = CCD_TOPOLOGY::Persist(v160, 0LL, v66, v67);
      v70 = v68;
      if ( v68 < 0 )
      {
        v71 = WdLogNewEntry5_WdError(v69);
        *(_QWORD *)(v71 + 32) = v160;
        *(_QWORD *)(v71 + 24) = v70;
        WdLogEvent5_WdError(v71);
      }
      v72 = 3;
      goto LABEL_57;
    }
    if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v160, a2, a3, v159) >= 0 )
      CCD_TOPOLOGY::RemovePath((CCD_TOPOLOGY *)v160, v159[0]);
    if ( v161 )
      v75 = *(_WORD *)(v161 + 20);
    else
      v75 = 0;
    if ( !v75 )
      goto LABEL_138;
    v76 = v151[0];
    if ( v151[0]
      || v151[2]
      || !v152[0]
      && (v77 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0),
          v78 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0),
          IsPortraitFirstTarget = DxgkIsPortraitFirstTarget(v78[2], *((_DWORD *)v77 + 7), v79),
          v76 = 0,
          !IsPortraitFirstTarget) )
    {
      v61 = 0;
    }
    v82 = DetermineDefaultTopology(v38, v61);
    if ( v82 == 3 )
    {
      if ( v76 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0) + 129)
        || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0) + 4)
        && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0) + 5) )
      {
        if ( !v76 )
        {
          UnusedVidpnSourceId = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0) + 6);
          goto LABEL_99;
        }
      }
      else
      {
        v82 = 4;
      }
    }
    else if ( (unsigned __int16)(v82 - 4) > 1u )
    {
      v83 = WdLogNewEntry5_WdAssertion(v81);
      *(_QWORD *)(v83 + 24) = 3722LL;
      WdLogEvent5_WdAssertion(v83);
    }
    UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v160, a2);
    if ( UnusedVidpnSourceId == 16 )
    {
      v88 = WdLogNewEntry5_WdEvent(v87, v86);
      if ( v161 )
        v89 = *(_WORD *)(v161 + 20);
      else
        v89 = 0;
      *(_QWORD *)(v88 + 24) = v89;
      *(_QWORD *)(v88 + 32) = 16LL;
      WdLogEvent5_WdEvent(v88);
      v92 = CCD_TOPOLOGY::Persist(v164, 0LL, v90, v91);
      v94 = v92;
      if ( v92 < 0 )
      {
        v95 = WdLogNewEntry5_WdError(v93);
        *(_QWORD *)(v95 + 32) = v164;
        *(_QWORD *)(v95 + 24) = v94;
        WdLogEvent5_WdError(v95);
      }
      v74 = 0;
      v73 = v94;
      v72 = 4;
      goto LABEL_59;
    }
    if ( v82 == 3 )
    {
      if ( !v76 )
      {
        v96 = WdLogNewEntry5_WdAssertion(v87);
        *(_QWORD *)(v96 + 24) = 3799LL;
        WdLogEvent5_WdAssertion(v96);
      }
      for ( j = 0; ; ++j )
      {
        v98 = v161;
        v99 = v161 ? *(_WORD *)(v161 + 20) : 0;
        if ( j >= v99 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, j) + 129) )
        {
          v82 = 4;
          goto LABEL_99;
        }
      }
      goto LABEL_100;
    }
LABEL_99:
    v98 = v161;
LABEL_100:
    if ( v98 )
      v100 = *(_WORD *)(v98 + 20);
    else
      v100 = 0;
    v101 = v100 + 1;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v160, v101, v84, v85) < v101 )
    {
      v103 = WdLogNewEntry5_WdLowResource(v102);
      *(_QWORD *)(v103 + 24) = v101;
      WdLogEvent5_WdLowResource(v103);
      v106 = CCD_TOPOLOGY::Persist(v164, 0LL, v104, v105);
      v70 = v106;
      if ( v106 < 0 )
      {
        v108 = WdLogNewEntry5_WdError(v107);
        *(_QWORD *)(v108 + 32) = v164;
        *(_QWORD *)(v108 + 24) = v70;
        WdLogEvent5_WdError(v108);
      }
      v73 = v101;
      v72 = 5;
      goto LABEL_58;
    }
    v109 = v101 - 1;
    if ( !v151[0] )
    {
      v110 = v153[0];
      if ( v153[0] )
      {
        if ( v101 != 2 )
        {
          v111 = WdLogNewEntry5_WdAssertion(2LL);
          *(_QWORD *)(v111 + 24) = 3862LL;
          WdLogEvent5_WdAssertion(v111);
          v110 = v153[0];
        }
        if ( v61 )
          v109 = !IsInternalVideoOutput(v153[1]);
        else
          v109 = ((unsigned __int8)~v110 >> 3) & 1;
        if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0) + 28) )
        {
          v113 = WdLogNewEntry5_WdAssertion(v112);
          *(_QWORD *)(v113 + 24) = 3894LL;
          WdLogEvent5_WdAssertion(v113);
        }
        v114 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 0);
        v115 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 1u);
        v116 = 2LL;
        do
        {
          *(_OWORD *)v115 = *(_OWORD *)v114;
          *((_OWORD *)v115 + 1) = *((_OWORD *)v114 + 1);
          *((_OWORD *)v115 + 2) = *((_OWORD *)v114 + 2);
          *((_OWORD *)v115 + 3) = *((_OWORD *)v114 + 3);
          *((_OWORD *)v115 + 4) = *((_OWORD *)v114 + 4);
          *((_OWORD *)v115 + 5) = *((_OWORD *)v114 + 5);
          *((_OWORD *)v115 + 6) = *((_OWORD *)v114 + 6);
          v115 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v115 + 128);
          v117 = *((_OWORD *)v114 + 7);
          v114 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v114 + 128);
          *((_OWORD *)v115 - 1) = v117;
          --v116;
        }
        while ( v116 );
        *(_OWORD *)v115 = *(_OWORD *)v114;
        *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, 1 - v109) = 0xCF00000000000LL;
      }
    }
    v118 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, v109);
    *((struct _LUID *)v118 + 2) = *a2;
    v119 = v151[3] == 0;
    *((_DWORD *)v118 + 6) = UnusedVidpnSourceId;
    *((_DWORD *)v118 + 7) = a3;
    *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v118 + 22) = v153[1];
    *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v118 + 23) = v157[0];
    *(_QWORD *)v118 = 0x8F00000000000LL;
    *((_BYTE *)v118 + 129) = (v151[0] != 0 ? 2 : 0) | !v119;
    ++*(_WORD *)(v161 + 20);
    if ( v82 == 3 )
    {
      if ( v161 )
        v120 = *(unsigned __int16 *)(v161 + 20);
      else
        v120 = 0LL;
      if ( (_WORD)v120 != 2 )
      {
        v121 = WdLogNewEntry5_WdAssertion(v120);
        *(_QWORD *)(v121 + 24) = 3935LL;
        WdLogEvent5_WdAssertion(v121);
      }
      v122 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v160, v109 == 0);
      v124 = *((_QWORD *)v122 + 19);
      *(_QWORD *)v118 |= 0x20000uLL;
      *((_QWORD *)v118 + 19) = v124;
      *((_DWORD *)v118 + 46) = *((_DWORD *)v122 + 46);
      *(_QWORD *)v118 |= 0x4000000000000uLL;
    }
    else
    {
      CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v160, v109);
    }
    v162 = 1;
    v163 = 4;
    v125 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v160, 0, v123);
    v64 = v125;
    if ( v125 >= 0 )
    {
      v135 = CCD_TOPOLOGY::Persist(v160, 1LL, v127, v128);
      v137 = v135;
      if ( v135 == -1073741266 )
      {
        v74 = 0;
        v73 = -1073741266;
        v72 = 7;
      }
      else
      {
        if ( v135 >= 0 )
        {
          *(_BYTE *)(a1 + 30) = 0;
          goto LABEL_138;
        }
        v138 = WdLogNewEntry5_WdError(v136);
        *(_QWORD *)(v138 + 24) = v137;
        *(_QWORD *)(v138 + 32) = v161;
        WdLogEvent5_WdError(v138);
        v141 = CCD_TOPOLOGY::Persist(v164, 0LL, v139, v140);
        v143 = v141;
        if ( v141 < 0 )
        {
          v144 = WdLogNewEntry5_WdError(v142);
          *(_QWORD *)(v144 + 32) = v164;
          *(_QWORD *)(v144 + 24) = v143;
          WdLogEvent5_WdError(v144);
        }
        v74 = v143;
        v73 = v137;
        v72 = 8;
      }
LABEL_59:
      DxgkLogCodePointPacket(0x3Eu, v72, v73, v74, (__int64)*a2);
LABEL_138:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v164);
LABEL_140:
      v59 = a5;
      v57 = v158;
      v58 = v154;
      goto LABEL_141;
    }
    v129 = WdLogNewEntry5_WdError(v126);
    *(_QWORD *)(v129 + 24) = v64;
    *(_QWORD *)(v129 + 32) = v161;
    WdLogEvent5_WdError(v129);
    v132 = CCD_TOPOLOGY::Persist(v164, 0LL, v130, v131);
    v70 = v132;
    if ( v132 < 0 )
    {
      v134 = WdLogNewEntry5_WdError(v133);
      *(_QWORD *)(v134 + 32) = v164;
      *(_QWORD *)(v134 + 24) = v70;
      WdLogEvent5_WdError(v134);
    }
    v72 = 6;
LABEL_57:
    v73 = v64;
LABEL_58:
    v74 = v70;
    goto LABEL_59;
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v14);
  v17[3] = v16;
  v17[4] = a2->HighPart;
  v17[5] = a2->LowPart;
  v17[6] = v8;
  v17[7] = v6;
  WdLogEvent5_WdError(v17);
  v18 = v16;
  v19 = 62;
  v20 = 0;
LABEL_7:
  DxgkLogCodePointPacket(v19, v20, v18, 0, (__int64)*a2);
  *(_BYTE *)(a1 + 25) = 1;
  *(_BYTE *)(a1 + 30) = 1;
LABEL_144:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v160);
  return v15;
}
