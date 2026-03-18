/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02C4374
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02C4C04 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02C4CFC (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02C53D8 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02C5480 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003E00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005530 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00058C0 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8CB8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E32C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E364C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E7328 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0100818 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0142E58 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C02C4314 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C02C59D0 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        __int64 a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rsi
  _QWORD *v13; // rax
  struct DMMVIDEOPRESENTTARGET *v14; // rdi
  __int64 v15; // r8
  VIDPN_MGR *v16; // r12
  int ClientVidPn; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  unsigned int i; // r14d
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rbx
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rbx
  unsigned int v36; // r14d
  _QWORD *v37; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  char v43; // r10
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 *v47; // rdi
  __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rax
  struct _FAST_MUTEX *v54; // rcx
  __int64 v55; // rax
  int MonitorInstance; // eax
  __int64 v57; // rax
  char v58; // r14
  __int64 v59; // rax
  struct DXGMONITOR *v60; // r14
  __int64 v61; // rax
  __int64 v62; // rax
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v64; // rcx
  int IsTargetForceable; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  struct DMMVIDPNTOPOLOGY *v73; // r12
  unsigned int v74; // eax
  unsigned int v75; // ecx
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  char v85; // [rsp+40h] [rbp-C0h]
  bool v86; // [rsp+41h] [rbp-BFh]
  char v87; // [rsp+41h] [rbp-BFh]
  char v88; // [rsp+42h] [rbp-BEh]
  bool v89; // [rsp+42h] [rbp-BEh]
  bool v90; // [rsp+43h] [rbp-BDh]
  bool v91; // [rsp+44h] [rbp-BCh]
  int v92; // [rsp+48h] [rbp-B8h]
  char v93; // [rsp+4Ch] [rbp-B4h]
  unsigned __int8 v94[3]; // [rsp+4Dh] [rbp-B3h] BYREF
  struct DMMVIDEOPRESENTTARGET *v95; // [rsp+50h] [rbp-B0h]
  char v96; // [rsp+58h] [rbp-A8h]
  int v97; // [rsp+5Ch] [rbp-A4h]
  unsigned int v98; // [rsp+60h] [rbp-A0h]
  __int64 v99; // [rsp+68h] [rbp-98h] BYREF
  const struct DMMVIDPN *v100; // [rsp+70h] [rbp-90h] BYREF
  VIDPN_MGR *v101; // [rsp+78h] [rbp-88h]
  DMMVIDPNTOPOLOGY *v102; // [rsp+80h] [rbp-80h]
  struct DXGMONITOR *v103; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v104; // [rsp+90h] [rbp-70h]
  __int64 v105; // [rsp+98h] [rbp-68h] BYREF
  DXGADAPTER *v106; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v107; // [rsp+A8h] [rbp-58h] BYREF
  char v108[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v109[64]; // [rsp+B8h] [rbp-48h] BYREF
  char v110[72]; // [rsp+F8h] [rbp-8h] BYREF

  v98 = a4;
  v93 = a2;
  LOBYTE(v97) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v107);
  v106 = v8;
  v12 = v8;
  if ( !v8 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13[3] = *this;
    v13[4] = *((_QWORD *)*this + 8);
    v13[5] = a3->HighPart;
    v13[6] = a3->LowPart;
    WdLogEvent5_WdWarning(v13);
    LODWORD(v14) = -1073741810;
    return (unsigned int)v14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v108, v8, 0LL);
  LODWORD(v14) = COREADAPTERACCESS::AcquireShared((__int64)v108, 0xFFFFFFFFLL, v15);
  if ( (int)v14 < 0 )
    goto LABEL_97;
  v104 = (__int64 *)((char *)v12 + 2552);
  v101 = *(VIDPN_MGR **)(*((_QWORD *)v12 + 319) + 88LL);
  v16 = v101;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v105, (__int64)v101);
  v100 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v101, (__int64 *)&v100);
  v14 = (struct DMMVIDEOPRESENTTARGET *)ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
    v21[3] = v14;
    v21[4] = v12;
    v21[5] = *((int *)v12 + 70);
    v21[6] = *((unsigned int *)v12 + 69);
    v21[7] = this;
LABEL_20:
    WdLogEvent5_WdError(v21);
    goto LABEL_96;
  }
  v102 = (const struct DMMVIDPN *)((char *)v100 + 96);
  if ( v100 == (const struct DMMVIDPN *)-96LL )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
    v22[3] = v12;
    v22[4] = *((int *)v12 + 70);
    v22[5] = *((unsigned int *)v12 + 69);
    v22[6] = this;
    WdLogEvent5_WdError(v22);
    LODWORD(v14) = -1073741823;
    goto LABEL_96;
  }
  for ( i = 0; ; ++i )
  {
    v24 = (__int64)*this;
    v25 = *((_QWORD *)*this + 8);
    v26 = v25 ? *(_WORD *)(v25 + 20) : 0;
    if ( i >= v26 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v28 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v12 + 69)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v12 + 70) )
    {
      v29 = *((_DWORD *)PathDescriptor + 6);
      v30 = *((_DWORD *)PathDescriptor + 7);
      v31 = (unsigned __int8)v97;
      if ( v29 == a4 )
        v31 = 1;
      v97 = v31;
      v32 = VIDPN_MGR::AddPathToVidPnTopology(
              v16,
              v102,
              v29,
              v30,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v14 = (struct DMMVIDEOPRESENTTARGET *)v32;
      if ( v32 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v33, v18, v34);
        v21[3] = v14;
        v21[4] = *((int *)v28 + 5);
        v21[5] = *((unsigned int *)v28 + 4);
        v21[6] = *((unsigned int *)v28 + 6);
        v21[7] = *((unsigned int *)v28 + 7);
        goto LABEL_20;
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v16 + 10) + 72LL), 1u);
  v35 = (_QWORD *)*((_QWORD *)v16 + 10);
  v12 = v106;
  v14 = 0LL;
  v91 = 0;
  v36 = -1;
  v90 = 0;
  v95 = 0LL;
  v37 = (_QWORD *)v35[3];
  v92 = -1;
  if ( v37 == v35 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v37 - 1), v37 == (_QWORD *)8) )
  {
LABEL_94:
    LODWORD(v14) = -1073741275;
    goto LABEL_95;
  }
  v85 = v88;
  v89 = v86;
  v87 = v96;
  while ( 1 )
  {
    if ( *((_DWORD *)NextTarget + 22) )
      goto LABEL_58;
    v39 = *((unsigned int *)NextTarget + 6);
    if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v102, *((_DWORD *)NextTarget + 6))
      && (_DWORD)v39 != *((_DWORD *)this + 6) )
    {
      break;
    }
LABEL_57:
    v36 = v92;
LABEL_58:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v35, NextTarget);
    if ( !NextTarget )
    {
      if ( v14 )
      {
        LODWORD(v14) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                         (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                         (struct _LUID *)((char *)v12 + 276),
                         v36,
                         *((_DWORD *)v95 + 6),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v14 + 20),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v14 + 21),
                         v91,
                         v90);
        goto LABEL_95;
      }
      goto LABEL_94;
    }
    v16 = v101;
  }
  if ( (_DWORD)v39 != -1 )
  {
    DXGADAPTER::IsCoreResourceSharedOwner(v12);
    v47 = v104;
    v48 = *v104;
    if ( !*v104 )
    {
      v80 = WdLogNewEntry5_WdError(v45, v44, v46);
      *(_QWORD *)(v80 + 24) = 8960LL;
      WdLogEvent5_WdError(v80);
      LODWORD(v14) = -1073741811;
LABEL_84:
      v81 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40, v42);
      v81[3] = v12;
      v81[4] = *((unsigned int *)NextTarget + 6);
LABEL_85:
      WdLogEvent5_WdError(v81);
      goto LABEL_95;
    }
    DXGADAPTER::IsCoreResourceSharedOwner(v12);
    v52 = *v47;
    if ( !*v47 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v50, v49);
      WdLogEvent5_WdAssertion(v53);
      v52 = *v47;
    }
    v54 = *(struct _FAST_MUTEX **)(v52 + 96);
    if ( !v54 )
    {
      v55 = WdLogNewEntry5_WdError(0LL, v49, v51);
      *(_QWORD *)(v55 + 24) = v12;
      WdLogEvent5_WdError(v55);
      LODWORD(v14) = -1073741811;
LABEL_40:
      v59 = WdLogNewEntry5_WdAssertion(v41, v40);
      *(_QWORD *)(v59 + 24) = (int)v14;
      WdLogEvent5_WdAssertion(v59);
LABEL_51:
      v43 = v85;
      v16 = v101;
      goto LABEL_53;
    }
    v103 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v54, (unsigned int)v39, 1, &v103);
    LODWORD(v14) = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v57 = WdLogNewEntry5_WdDmmEvent(v41, v40);
      *(_QWORD *)(v57 + 24) = v39;
      *(_QWORD *)(v57 + 32) = v12;
      WdLogEvent5_WdDmmEvent(v57);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v60 = v103;
        if ( !v103 || *((_DWORD *)v103 + 108) != 1 )
        {
          v61 = WdLogNewEntry5_WdAssertion(v41, v40);
          WdLogEvent5_WdAssertion(v61);
        }
        if ( !v60 )
        {
          v62 = WdLogNewEntry5_WdAssertion(v41, v40);
          WdLogEvent5_WdAssertion(v62);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v60 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v60);
        v64 = (struct _ERESOURCE *)((char *)v60 + 296);
        v87 = IsVirtualModeSuportDisabled;
        v58 = IsVirtualModeSuportDisabled;
        ExReleaseResourceLite(v64);
        KeLeaveCriticalRegion();
        LODWORD(v14) = 0;
        goto LABEL_47;
      }
      if ( MonitorInstance != -1073741632 )
      {
        v58 = v87;
LABEL_39:
        if ( (int)v14 < 0 )
          goto LABEL_40;
LABEL_47:
        if ( v58 )
        {
          LOBYTE(v41) = 1;
          v89 = 1;
        }
        else
        {
          LOBYTE(v41) = *(_BYTE *)(v48 + 234) == 0;
          v89 = *(_BYTE *)(v48 + 233) == 0;
        }
        v85 = v41;
        goto LABEL_51;
      }
    }
    v58 = 0;
    v87 = 0;
    LODWORD(v14) = 0;
    goto LABEL_39;
  }
  LODWORD(v14) = -1073741811;
LABEL_53:
  if ( (int)v14 < 0 )
    goto LABEL_84;
  if ( (_BYTE)v97 )
  {
    if ( !v43 )
    {
LABEL_56:
      v14 = v95;
      goto LABEL_57;
    }
  }
  else if ( *((_BYTE *)this + 10) && v43 )
  {
    goto LABEL_56;
  }
  if ( *((_QWORD *)NextTarget + 14) )
    goto LABEL_66;
  if ( !v93 )
    goto LABEL_56;
  IsTargetForceable = DmmIsTargetForceable((__int64)v12, *((unsigned int *)NextTarget + 6), v94, 0);
  v14 = (struct DMMVIDEOPRESENTTARGET *)IsTargetForceable;
  if ( IsTargetForceable < 0 )
  {
    v81 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66, v68);
    v81[3] = v14;
    v81[4] = *((int *)v12 + 70);
    v81[5] = *((unsigned int *)v12 + 69);
    v81[6] = *((unsigned int *)NextTarget + 6);
    v81[7] = *((_QWORD *)*this + 8);
    goto LABEL_85;
  }
  if ( !v94[0] )
    goto LABEL_56;
LABEL_66:
  v14 = v95;
  if ( !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v12, NextTarget, v95) )
    goto LABEL_57;
  v99 = 0LL;
  v69 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v16, v100, &v99);
  v14 = (struct DMMVIDEOPRESENTTARGET *)v69;
  if ( v69 < 0 )
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70, v72);
    v82[3] = v14;
    v82[4] = v12;
    v82[5] = *((int *)v12 + 70);
    v82[6] = *((unsigned int *)v12 + 69);
    v82[7] = this;
    goto LABEL_90;
  }
  v73 = (struct DMMVIDPNTOPOLOGY *)(v99 + 96);
  if ( v99 == -96 )
  {
    v83 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70, v72);
    v83[3] = v12;
    v83[4] = *((int *)v12 + 70);
    v83[5] = *((unsigned int *)v12 + 69);
    v83[6] = this;
    WdLogEvent5_WdError(v83);
    LODWORD(v14) = -1073741823;
  }
  else
  {
    v74 = v98;
    v36 = 0;
    if ( v98 != -1 )
      v36 = v98;
    while ( 1 )
    {
      if ( v74 == -1 )
      {
        v75 = *(_DWORD *)(*v104 + 80);
        v74 = v98;
      }
      else
      {
        v75 = v74 + 1;
      }
      if ( v36 >= v75 )
      {
        v14 = v95;
        v36 = v92;
        goto LABEL_82;
      }
      if ( v74 != -1 || !DMMVIDPNTOPOLOGY::IsSourceInTopology(v73, v36) )
      {
        v76 = VIDPN_MGR::AddPathToVidPnTopology(
                v101,
                v73,
                v36,
                *((_DWORD *)NextTarget + 6),
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                0xFFFFu,
                0,
                D3DKMDT_MCC_IGNORE);
        v14 = (struct DMMVIDEOPRESENTTARGET *)v76;
        if ( v76 != -1071774975 )
          break;
      }
      v74 = v98;
      ++v36;
    }
    if ( v76 >= 0 )
    {
      v14 = NextTarget;
      v95 = NextTarget;
      v91 = !v89;
      v92 = v36;
      v90 = v85 == 0;
LABEL_82:
      auto_rc<DMMVIDPN>::reset(&v99, 0LL);
      goto LABEL_58;
    }
    v82 = (_QWORD *)WdLogNewEntry5_WdError(v78, v77, v79);
    v82[3] = v14;
    v82[4] = *((int *)v12 + 70);
    v82[5] = *((unsigned int *)v12 + 69);
    v82[6] = v36;
    v82[7] = *((unsigned int *)NextTarget + 6);
LABEL_90:
    WdLogEvent5_WdError(v82);
  }
  auto_rc<DMMVIDPN>::reset(&v99, 0LL);
LABEL_95:
  ReferenceCounted::Release((ReferenceCounted *)(v35 + 8), v18, v24);
LABEL_96:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v100, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v105 + 40));
LABEL_97:
  COREACCESS::~COREACCESS((COREACCESS *)v110);
  COREACCESS::~COREACCESS((COREACCESS *)v109);
  DXGADAPTER::ReleaseReferenceNoTracking(v12);
  return (unsigned int)v14;
}
