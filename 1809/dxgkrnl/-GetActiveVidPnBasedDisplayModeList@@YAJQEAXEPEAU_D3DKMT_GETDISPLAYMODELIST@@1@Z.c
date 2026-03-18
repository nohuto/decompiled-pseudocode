/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C012033C
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0120954 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000292C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     McTemplateK0xxqqqqqqqqx @ 0x1C0013614 (McTemplateK0xxqqqqqqqqx.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C001372C (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C0013778 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00B835C (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00BF2F4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00CF110 (DxgkQueryDmmInterface.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00E2DB0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00ED084 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01222F0 (DxgkQueryMonitorTypeLockHeld.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020345C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C02058E0 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0241AA4 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C027A184 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        char a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rcx
  __int64 VidPnSourceId; // rsi
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  struct _DXGDMM_INTERFACE *v14; // r13
  struct D3DKMDT_HVIDPN__ *v15; // r14
  __int64 (__fastcall *v16)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  ADAPTER_DISPLAY *v21; // rcx
  int **SessionViewOwner; // rax
  SESSION_VIEW *v23; // r12
  int v24; // r11d
  struct _DXGDMM_VIDPN_INTERFACE *v25; // r9
  unsigned int *v26; // rdi
  __int64 i; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // r15d
  char v34; // r15
  struct DXGGLOBAL *v35; // r13
  __int64 v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  struct DXGGLOBAL *v41; // rdi
  __int64 v42; // rcx
  struct DXGGLOBAL *v43; // rbx
  __int64 v44; // rcx
  struct DXGGLOBAL *v45; // rsi
  __int64 v46; // rcx
  struct DXGGLOBAL *v47; // r14
  __int64 v48; // rcx
  struct DXGGLOBAL *v49; // r15
  __int64 v50; // rcx
  struct DXGGLOBAL *v51; // r13
  __int64 v52; // rcx
  struct DXGGLOBAL *v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  struct DXGGLOBAL *v58; // rax
  __int64 v59; // rdx
  const GUID *v60; // r8
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  char v65; // r13
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // r12
  _QWORD *v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  unsigned int v78; // r14d
  __int64 v79; // r12
  __int64 v80; // r15
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  _QWORD *v84; // rax
  void *v85; // r15
  __int64 v86; // r13
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  _QWORD *v90; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v91; // [rsp+28h] [rbp-D8h]
  unsigned int v92[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v93[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v94[8]; // [rsp+40h] [rbp-C0h]
  __int64 v95; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v96; // [rsp+50h] [rbp-B0h]
  unsigned int *v97; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v98; // [rsp+60h] [rbp-A0h]
  __int64 v99; // [rsp+70h] [rbp-90h] BYREF
  struct DXGGLOBAL *v100; // [rsp+78h] [rbp-88h]
  int v101; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v102; // [rsp+88h] [rbp-78h] BYREF
  struct DXGGLOBAL *v103; // [rsp+90h] [rbp-70h]
  unsigned __int64 v104; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGDMM_INTERFACE *v105; // [rsp+A0h] [rbp-60h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v106; // [rsp+A8h] [rbp-58h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v107; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGGLOBAL *v108; // [rsp+B8h] [rbp-48h]
  __int64 v109; // [rsp+C0h] [rbp-40h] BYREF
  void *v110; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v111[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DKMDT_HVIDPN__ *v112; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v113)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+E0h] [rbp-20h]
  __int64 v114; // [rsp+E8h] [rbp-18h]
  int v115; // [rsp+F0h] [rbp-10h]
  DXGADAPTER *v116; // [rsp+F8h] [rbp-8h] BYREF
  int v117; // [rsp+100h] [rbp+0h]
  int v118; // [rsp+104h] [rbp+4h]
  __int64 v119; // [rsp+108h] [rbp+8h]
  void *v120; // [rsp+110h] [rbp+10h]
  __int64 v121; // [rsp+118h] [rbp+18h]
  int v122; // [rsp+120h] [rbp+20h]
  _QWORD v123[5]; // [rsp+128h] [rbp+28h] BYREF
  int v124; // [rsp+150h] [rbp+50h]
  bool v125; // [rsp+154h] [rbp+54h]
  int v126; // [rsp+158h] [rbp+58h]
  int v127; // [rsp+15Ch] [rbp+5Ch]
  char v128; // [rsp+160h] [rbp+60h]
  __int64 v129; // [rsp+168h] [rbp+68h]
  void *v130; // [rsp+170h] [rbp+70h]
  __int64 v131; // [rsp+178h] [rbp+78h]
  int v132; // [rsp+180h] [rbp+80h]
  __int64 v133; // [rsp+188h] [rbp+88h]
  void *v134; // [rsp+190h] [rbp+90h]
  __int64 v135; // [rsp+198h] [rbp+98h]
  int v136; // [rsp+1A0h] [rbp+A0h]
  _BYTE v137[24]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v138[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v139[16]; // [rsp+200h] [rbp+100h] BYREF

  v108 = (struct DXGGLOBAL *)a4;
  v103 = (struct DXGGLOBAL *)a3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v137,
    (union _LARGE_INTEGER *)Global + 10);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v137);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v8) + 6);
  VidPnSourceId = a3->VidPnSourceId;
  v105 = 0LL;
  v11 = DxgkQueryDmmInterface(a1, v10, &v105);
  v13 = v11;
  if ( v11 < 0 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v62[3] = v13;
    v62[4] = a3->hAdapter;
    v62[5] = a1;
    v62[6] = VidPnSourceId;
    WdLogEvent5_WdError(v62);
    return (unsigned int)v13;
  }
  v14 = v105;
  v102 = 0LL;
  v109 = 0LL;
  v15 = 0LL;
  v112 = 0LL;
  v16 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v105 + 6);
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0;
  v111[0] = 0;
  v17 = v16(a1, &v109, &v102);
  v13 = v17;
  if ( v17 < 0 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v63[3] = a1;
    v63[4] = v13;
    goto LABEL_46;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v111,
    v109,
    *((_QWORD *)v14 + 8),
    (__int64)a1);
  v15 = v112;
  v106 = 0LL;
  v107 = 0LL;
  v19 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v102)(
          v112,
          &v106,
          &v107);
  v13 = v19;
  if ( v19 < 0 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v63[3] = v13;
    v63[4] = v15;
    v63[5] = a1;
    v63[6] = VidPnSourceId;
    v63[7] = v102;
    goto LABEL_46;
  }
  v21 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 315);
  v13 = 0LL;
  v104 = 0LL;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v21, VidPnSourceId);
  v23 = (SESSION_VIEW *)SessionViewOwner;
  v24 = -1;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner)
    || a2
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v23),
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 315) + 112LL)
                                                        + 3760 * VidPnSourceId)) )
  {
LABEL_6:
    v25 = v102;
    v26 = v138;
    for ( i = 16LL; i; --i )
      *v26++ = v24;
    v28 = PrepareUnpinnedPathsFromSource(
            v14,
            a1,
            v15,
            v25,
            v106,
            v107,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v104,
            (unsigned int (*)[16])v138,
            0LL);
    v13 = v28;
    v33 = -1071774925;
    if ( v28 == -1071774925 || (v33 = -1071774886, v28 == -1071774886) )
    {
      v76 = WdLogNewEntry5_WdDmmEvent(v30, v29, v31, v32);
      *(_QWORD *)(v76 + 24) = VidPnSourceId;
      *(_QWORD *)(v76 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v76);
      LODWORD(v13) = v33;
      goto LABEL_18;
    }
    v34 = 0;
    if ( v28 >= 0 )
    {
      v13 = v104;
      goto LABEL_13;
    }
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v30);
    v63[3] = VidPnSourceId;
    v63[4] = a1;
    v63[5] = v13;
LABEL_46:
    WdLogEvent5_WdError(v63);
    goto LABEL_18;
  }
  v65 = 0;
  do
  {
    v66 = *((_QWORD *)PrimaryDisplaySource + 1);
    LOBYTE(v99) = 0;
    if ( *(DXGADAPTER **)(v66 + 16) != a1 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v66);
      *(_QWORD *)(v67 + 24) = 4509LL;
      WdLogEvent5_WdAssertion(v67);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(a1, 0LL, (__int64)&v99, 0LL, 0LL, 0LL) < 0 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v68);
      *(_QWORD *)(v69 + 24) = 4523LL;
      WdLogEvent5_WdAssertion(v69);
    }
    if ( v13 )
    {
      if ( v65 != (_BYTE)v99 )
        goto LABEL_39;
      v70 = *(unsigned int *)(*((_QWORD *)a1 + 315) + 80LL);
      if ( v13 >= v70 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v70);
        *(_QWORD *)(v71 + 24) = 4534LL;
        WdLogEvent5_WdAssertion(v71);
      }
      v138[v13++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v13 = 1LL;
      v65 = v99;
      v139[0] = *((_DWORD *)PrimaryDisplaySource + 267);
      v138[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v104 = v13;
LABEL_39:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v23, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( v13 <= 1 )
  {
    v14 = v105;
    v24 = -1;
    goto LABEL_6;
  }
  v34 = 1;
  v72 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v138, v13, v15, v139);
  v74 = v72;
  if ( v72 < 0 )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdError(v73);
    LODWORD(v13) = -1071775483;
    v75[3] = VidPnSourceId;
    v75[4] = a1;
    v75[5] = v74;
    v75[6] = -1071775483LL;
    WdLogEvent5_WdError(v75);
    goto LABEL_18;
  }
LABEL_13:
  v125 = *((_QWORD *)a1 + 316) == 0LL;
  v123[2] = v102;
  v35 = (struct DXGGLOBAL *)((char *)v103 + 16);
  v123[3] = v106;
  v123[4] = v107;
  v124 = *((_DWORD *)v103 + 1);
  v126 = -1;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v123[0] = a1;
  v123[1] = v15;
  v127 = 0;
  v128 = 0;
  v132 = 0;
  v136 = 0;
  v100 = (struct DXGGLOBAL *)((char *)v103 + 16);
  v36 = (int)OBTAIN_MODES_ON_SOURCE::operator()(
               (__int64)v123,
               (struct _D3DKMT_DISPLAYMODE **)v103 + 1,
               (unsigned int *)v103 + 4,
               (void **)(((unsigned __int64)v108 + 8) & -(__int64)(v108 != 0LL)),
               (unsigned int *)(((unsigned __int64)v108 + 16) & -(__int64)(v108 != 0LL)));
  operator delete[](v134);
  operator delete[](v130);
  if ( (int)v36 < 0 )
  {
    v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
    v77[3] = v36;
    v77[4] = v15;
    v77[5] = a1;
    v77[6] = VidPnSourceId;
    v77[7] = v13;
    WdLogEvent5_WdWarning(v77);
    LODWORD(v13) = v36;
  }
  else
  {
    if ( v34 )
    {
      v78 = 0;
      if ( v13 )
      {
        v38 = 0LL;
        do
        {
          v79 = v139[v38];
          v110 = 0LL;
          v101 = 0;
          v116 = a1;
          v117 = *((_DWORD *)v103 + 1);
          v122 = 0;
          v119 = 0LL;
          v120 = 0LL;
          v121 = 0LL;
          v118 = v79;
          v80 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v116, &v110, &v101);
          operator delete[](v120);
          if ( (int)v80 >= 0 )
          {
            v85 = v110;
            if ( v110 )
            {
              v86 = (int)CombineModeList((_DWORD)v35, (int)v103 + 8, v101, (_DWORD)v110, 0);
              operator delete[](v85);
              if ( (int)v86 < 0 )
              {
                v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v88, v87, v89);
                v90[3] = VidPnSourceId;
                v90[4] = v79;
                v90[5] = a1;
                v90[6] = v86;
                WdLogEvent5_WdWarning(v90);
              }
              v35 = v100;
            }
          }
          else
          {
            v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v82, v81, v83);
            v84[3] = VidPnSourceId;
            v84[4] = v79;
            v84[5] = a1;
            v84[6] = v80;
            WdLogEvent5_WdWarning(v84);
          }
          v38 = ++v78;
        }
        while ( v78 < v13 );
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v38) + 1, *(unsigned int *)v35);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
    {
      v41 = DXGGLOBAL::GetGlobal(v40);
      v43 = DXGGLOBAL::GetGlobal(v42);
      v45 = DXGGLOBAL::GetGlobal(v44);
      v47 = DXGGLOBAL::GetGlobal(v46);
      v49 = DXGGLOBAL::GetGlobal(v48);
      v51 = DXGGLOBAL::GetGlobal(v50);
      v53 = DXGGLOBAL::GetGlobal(v52);
      v108 = DXGGLOBAL::GetGlobal(v54);
      v100 = DXGGLOBAL::GetGlobal(v55);
      v103 = DXGGLOBAL::GetGlobal(v56);
      v58 = DXGGLOBAL::GetGlobal(v57);
      LODWORD(v98) = *((_DWORD *)v43 + 19);
      LODWORD(v97) = *((_DWORD *)v45 + 18);
      LODWORD(v96) = *((_DWORD *)v47 + 15);
      LODWORD(v95) = *((_DWORD *)v49 + 14);
      *(_DWORD *)v94 = *((_DWORD *)v51 + 11);
      *(_DWORD *)v93 = *((_DWORD *)v53 + 10);
      v92[0] = *((_DWORD *)v108 + 9);
      LODWORD(v91) = *((_DWORD *)v100 + 6);
      McTemplateK0xxqqqqqqqqx(
        *(unsigned int *)v93,
        v59,
        v60,
        *((_QWORD *)v58 + 1),
        *((_QWORD *)v103 + 2),
        v91,
        *(_QWORD *)v92,
        *(_QWORD *)v93,
        *(_QWORD *)v94,
        v95,
        v96,
        v97,
        v98,
        *((_QWORD *)v41 + 10));
    }
    v15 = v112;
    LODWORD(v13) = 0;
  }
LABEL_18:
  if ( v111[0] )
    v113(v114, v15);
  return (unsigned int)v13;
}
