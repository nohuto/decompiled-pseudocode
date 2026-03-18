/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C016CFF0
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C016CD78 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002118 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     McTemplateK0xxqqqqqqqqx @ 0x1C001FB60 (McTemplateK0xxqqqqqqqqx.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C001FCF0 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C001FD3C (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DxgkQueryDmmInterface @ 0x1C00CEE90 (DxgkQueryDmmInterface.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00D501C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D72F0 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00EAC24 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C016D40C (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C016E3D4 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C017F040 (DxgkQueryMonitorTypeLockHeld.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0234D9C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C0237268 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0276EF0 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02B26E4 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        __int64 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4)
{
  char v5; // r13
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 VidPnSourceId; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  struct _DXGDMM_INTERFACE *v18; // rbx
  struct D3DKMDT_HVIDPN__ *v19; // r12
  __int64 (__fastcall *v20)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  ADAPTER_DISPLAY *v29; // rcx
  int **SessionViewOwner; // rax
  SESSION_VIEW *v31; // rbx
  struct _DXGDMM_VIDPN_INTERFACE *v32; // r9
  unsigned int *v33; // rdi
  __int64 i; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // ebx
  char v40; // r13
  bool v41; // zf
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct DXGGLOBAL *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct DXGGLOBAL *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  struct DXGGLOBAL *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct DXGGLOBAL *v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct DXGGLOBAL *v59; // r15
  __int64 v60; // rdx
  __int64 v61; // rcx
  struct DXGGLOBAL *v62; // r13
  __int64 v63; // rdx
  __int64 v64; // rcx
  struct DXGGLOBAL *v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  struct DXGGLOBAL *v74; // rax
  __int64 v75; // rdx
  const GUID *v76; // r8
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rdi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  _QWORD *v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  unsigned int v96; // edi
  struct DXGGLOBAL *v97; // r13
  int v98; // eax
  __int64 v99; // r12
  __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  _QWORD *v104; // rax
  void *v105; // rbx
  __int64 v106; // r13
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  _QWORD *v110; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v111; // [rsp+28h] [rbp-D8h]
  unsigned int v112[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v113[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v114[8]; // [rsp+40h] [rbp-C0h]
  __int64 v115; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v116; // [rsp+50h] [rbp-B0h]
  unsigned int *v117; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v118; // [rsp+60h] [rbp-A0h]
  __int64 v119; // [rsp+70h] [rbp-90h] BYREF
  struct DXGGLOBAL *v120; // [rsp+78h] [rbp-88h]
  int v121; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v122; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v123; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGDMM_INTERFACE *v124; // [rsp+98h] [rbp-68h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v125; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v126; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGGLOBAL *v127; // [rsp+B0h] [rbp-50h]
  struct DXGGLOBAL *v128; // [rsp+B8h] [rbp-48h]
  __int64 v129; // [rsp+C0h] [rbp-40h] BYREF
  void *v130; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v131[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DKMDT_HVIDPN__ *v132; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v133)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+E0h] [rbp-20h]
  __int64 v134; // [rsp+E8h] [rbp-18h]
  int v135; // [rsp+F0h] [rbp-10h]
  DXGADAPTER *v136; // [rsp+F8h] [rbp-8h] BYREF
  int v137; // [rsp+100h] [rbp+0h]
  int v138; // [rsp+104h] [rbp+4h]
  char v139; // [rsp+108h] [rbp+8h]
  __int64 v140; // [rsp+110h] [rbp+10h]
  void *v141; // [rsp+118h] [rbp+18h]
  __int64 v142; // [rsp+120h] [rbp+20h]
  int v143; // [rsp+128h] [rbp+28h]
  char v144; // [rsp+12Ch] [rbp+2Ch]
  void *v145; // [rsp+130h] [rbp+30h]
  _QWORD v146[5]; // [rsp+138h] [rbp+38h] BYREF
  int v147; // [rsp+160h] [rbp+60h]
  bool v148; // [rsp+164h] [rbp+64h]
  char v149; // [rsp+165h] [rbp+65h]
  int v150; // [rsp+168h] [rbp+68h]
  int v151; // [rsp+16Ch] [rbp+6Ch]
  char v152; // [rsp+170h] [rbp+70h]
  __int64 v153; // [rsp+178h] [rbp+78h]
  void *v154; // [rsp+180h] [rbp+80h]
  __int64 v155; // [rsp+188h] [rbp+88h]
  int v156; // [rsp+190h] [rbp+90h]
  char v157; // [rsp+194h] [rbp+94h]
  void *v158[4]; // [rsp+198h] [rbp+98h] BYREF
  int v159; // [rsp+1B8h] [rbp+B8h]
  char v160; // [rsp+1BCh] [rbp+BCh]
  void *v161; // [rsp+1C0h] [rbp+C0h]
  _BYTE v162[24]; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v163[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v164[16]; // [rsp+220h] [rbp+120h] BYREF

  v128 = (struct DXGGLOBAL *)a4;
  v120 = (struct DXGGLOBAL *)a3;
  v5 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v162,
    (union _LARGE_INTEGER *)Global + 10);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v162);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9, v8) + 6);
  VidPnSourceId = a3->VidPnSourceId;
  v11 = 0LL;
  v124 = 0LL;
  v13 = DxgkQueryDmmInterface(a1, v12, &v124);
  v17 = v13;
  if ( v13 < 0 )
  {
    v78 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
    v78[3] = v17;
    v78[4] = a3->hAdapter;
    v78[5] = a1;
    v78[6] = VidPnSourceId;
    WdLogEvent5_WdError(v78);
    return (unsigned int)v17;
  }
  v18 = v124;
  v122 = 0LL;
  v129 = 0LL;
  v19 = 0LL;
  v132 = 0LL;
  v20 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v124 + 6);
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0;
  v131[0] = 0;
  v21 = v20(a1, &v129, &v122);
  v17 = v21;
  if ( v21 < 0 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
    v79[3] = a1;
    v79[4] = v17;
    goto LABEL_44;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v131,
    v129,
    *((_QWORD *)v18 + 8),
    (__int64)a1);
  v19 = v132;
  v125 = 0LL;
  v126 = 0LL;
  v25 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v122)(
          v132,
          &v125,
          &v126);
  v17 = v25;
  if ( v25 < 0 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
    v79[3] = v17;
    v79[4] = v19;
    v79[5] = a1;
    v79[6] = VidPnSourceId;
    v79[7] = v122;
    goto LABEL_44;
  }
  v29 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 319);
  v123 = 0LL;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v29, (unsigned int)VidPnSourceId);
  v31 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner)
    || v5
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v31),
        v81 = *(_QWORD *)(*((_QWORD *)a1 + 319) + 112LL) + 3968 * VidPnSourceId,
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)v81) )
  {
LABEL_6:
    v32 = v122;
    v33 = v163;
    for ( i = 16LL; i; --i )
      *v33++ = -1;
    v35 = PrepareUnpinnedPathsFromSource(
            v124,
            a1,
            v19,
            v32,
            v125,
            v126,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v123,
            (unsigned int (*)[16])v163,
            0LL);
    v17 = v35;
    v39 = -1071774925;
    if ( v35 == -1071774925 || (v39 = -1071774886, v35 == -1071774886) )
    {
      v94 = WdLogNewEntry5_WdDmmEvent(v37, v36);
      *(_QWORD *)(v94 + 24) = VidPnSourceId;
      *(_QWORD *)(v94 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v94);
      LODWORD(v17) = v39;
      goto LABEL_18;
    }
    v40 = 0;
    if ( v35 >= 0 )
    {
      v11 = v123;
      goto LABEL_13;
    }
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36, v38);
    v79[3] = VidPnSourceId;
    v79[4] = a1;
    v79[5] = v17;
LABEL_44:
    WdLogEvent5_WdError(v79);
    goto LABEL_18;
  }
  do
  {
    v82 = *((_QWORD *)PrimaryDisplaySource + 1);
    LOBYTE(v119) = 0;
    if ( *(DXGADAPTER **)(v82 + 16) != a1 )
    {
      v83 = WdLogNewEntry5_WdAssertion(v82, v81);
      *(_QWORD *)(v83 + 24) = 4886LL;
      WdLogEvent5_WdAssertion(v83);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(a1, 0LL, (__int64)&v119, 0LL, 0LL, 0LL) < 0 )
    {
      v86 = WdLogNewEntry5_WdAssertion(v85, v84);
      *(_QWORD *)(v86 + 24) = 4900LL;
      WdLogEvent5_WdAssertion(v86);
    }
    if ( v11 )
    {
      if ( v5 != (_BYTE)v119 )
        goto LABEL_38;
      v87 = *(unsigned int *)(*((_QWORD *)a1 + 319) + 80LL);
      if ( v11 >= v87 )
      {
        v88 = WdLogNewEntry5_WdAssertion(v87, v84);
        *(_QWORD *)(v88 + 24) = 4911LL;
        WdLogEvent5_WdAssertion(v88);
      }
      v163[v11++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v11 = 1LL;
      v5 = v119;
      v164[0] = *((_DWORD *)PrimaryDisplaySource + 267);
      v163[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v123 = v11;
LABEL_38:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v31, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( v11 <= 1 )
    goto LABEL_6;
  v40 = 1;
  v89 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v163, v11, v19, v164);
  v17 = v89;
  if ( v89 < 0 )
  {
    v93 = (_QWORD *)WdLogNewEntry5_WdError(v91, v90, v92);
    v93[5] = v17;
    LODWORD(v17) = -1071775483;
    v93[3] = VidPnSourceId;
    v93[6] = -1071775483LL;
    v93[4] = a1;
    WdLogEvent5_WdError(v93);
    goto LABEL_18;
  }
LABEL_13:
  v146[0] = a1;
  v146[1] = v19;
  v149 = 1;
  v152 = 0;
  v157 = 1;
  v41 = *((_QWORD *)a1 + 320) == 0LL;
  v146[2] = v122;
  v151 = 0;
  v146[3] = v125;
  v146[4] = v126;
  v147 = *((_DWORD *)v120 + 1);
  v150 = -1;
  v156 = 0;
  v148 = v41;
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  memset(v158, 0, sizeof(v158));
  v159 = 0;
  v161 = 0LL;
  v160 = 1;
  v17 = (int)OBTAIN_MODES_ON_SOURCE::operator()(
               (unsigned int)v146,
               (int)v120 + 8,
               (int)v120 + 16,
               ((_DWORD)v128 + 8) & (unsigned int)-(v128 != 0LL),
               ((unsigned __int64)v128 + 16) & -(__int64)(v128 != 0LL));
  operator delete[](v158[2]);
  operator delete[](v161);
  operator delete[](v154);
  operator delete[](v158[0]);
  if ( (int)v17 < 0 )
  {
    v95 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
    v95[3] = v17;
    v95[4] = v19;
    v95[5] = a1;
    v95[6] = VidPnSourceId;
    v95[7] = v11;
    WdLogEvent5_WdWarning(v95);
  }
  else
  {
    if ( v40 )
    {
      v96 = 0;
      if ( v11 )
      {
        v97 = v120;
        v43 = 0LL;
        do
        {
          v98 = *((_DWORD *)v97 + 1);
          v99 = v164[v43];
          v130 = 0LL;
          v121 = 0;
          v137 = v98;
          v143 = 0;
          v145 = 0LL;
          v140 = 0LL;
          v141 = 0LL;
          v142 = 0LL;
          v136 = a1;
          v138 = v99;
          v139 = 1;
          v144 = 1;
          v100 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v136, &v130, &v121);
          operator delete[](v141);
          operator delete[](v145);
          if ( (int)v100 >= 0 )
          {
            v105 = v130;
            if ( v130 )
            {
              v106 = (int)CombineModeList((int)v97 + 16, (int)v97 + 8, v121, (_DWORD)v130, 0);
              operator delete[](v105);
              if ( (int)v106 < 0 )
              {
                v110 = (_QWORD *)WdLogNewEntry5_WdWarning(v108, v107, v109);
                v110[3] = VidPnSourceId;
                v110[4] = v99;
                v110[5] = a1;
                v110[6] = v106;
                WdLogEvent5_WdWarning(v110);
              }
              v97 = v120;
            }
          }
          else
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v102, v101, v103);
            v104[3] = VidPnSourceId;
            v104[4] = v99;
            v104[5] = a1;
            v104[6] = v100;
            WdLogEvent5_WdWarning(v104);
          }
          v43 = ++v96;
        }
        while ( v96 < v11 );
      }
    }
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)DXGGLOBAL::GetGlobal(v43, (__int64)v120) + 1,
      *((unsigned int *)v120 + 4));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
    {
      v47 = DXGGLOBAL::GetGlobal(v46, v45);
      v50 = DXGGLOBAL::GetGlobal(v49, v48);
      v53 = DXGGLOBAL::GetGlobal(v52, v51);
      v56 = DXGGLOBAL::GetGlobal(v55, v54);
      v59 = DXGGLOBAL::GetGlobal(v58, v57);
      v62 = DXGGLOBAL::GetGlobal(v61, v60);
      v65 = DXGGLOBAL::GetGlobal(v64, v63);
      v128 = DXGGLOBAL::GetGlobal(v67, v66);
      v127 = DXGGLOBAL::GetGlobal(v69, v68);
      v120 = DXGGLOBAL::GetGlobal(v71, v70);
      v74 = DXGGLOBAL::GetGlobal(v73, v72);
      LODWORD(v118) = *((_DWORD *)v50 + 19);
      LODWORD(v117) = *((_DWORD *)v53 + 18);
      LODWORD(v116) = *((_DWORD *)v56 + 15);
      LODWORD(v115) = *((_DWORD *)v59 + 14);
      *(_DWORD *)v114 = *((_DWORD *)v62 + 11);
      *(_DWORD *)v113 = *((_DWORD *)v65 + 10);
      v112[0] = *((_DWORD *)v128 + 9);
      LODWORD(v111) = *((_DWORD *)v127 + 6);
      McTemplateK0xxqqqqqqqqx(
        *(unsigned int *)v113,
        v75,
        v76,
        *((_QWORD *)v74 + 1),
        *((_QWORD *)v120 + 2),
        v111,
        *(_QWORD *)v112,
        *(_QWORD *)v113,
        *(_QWORD *)v114,
        v115,
        v116,
        v117,
        v118,
        *((_QWORD *)v47 + 10));
    }
    v19 = v132;
    LODWORD(v17) = 0;
  }
LABEL_18:
  if ( v131[0] )
    v133(v134, v19);
  return (unsigned int)v17;
}
