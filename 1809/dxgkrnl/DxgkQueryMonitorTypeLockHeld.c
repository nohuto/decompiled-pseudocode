/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1C01222F0
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C012033C (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0204850 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C023B43C (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     MonitorGetMonitorType @ 0x1C00C2CC0 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00E4434 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        DXGADAPTER *this,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        bool *a8,
        bool *a9)
{
  int MonitorType; // edi
  __int64 v10; // r14
  __int64 v13; // rcx
  __int64 v14; // rbx
  char v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v19; // rcx
  bool *v20; // rdx
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  struct _FAST_MUTEX *v31; // rcx
  __int64 v32; // rax
  int MonitorInstance; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  char v38; // r14
  __int64 v39; // rax
  bool v40; // al
  struct DXGMONITOR *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rax
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  bool v54; // [rsp+30h] [rbp-30h]
  char v55; // [rsp+31h] [rbp-2Fh]
  struct DXGMONITOR *v56; // [rsp+38h] [rbp-28h] BYREF
  __int64 v57; // [rsp+40h] [rbp-20h] BYREF
  struct HDXGMONITOR__ *v58; // [rsp+48h] [rbp-18h] BYREF
  struct DMMVIDEOPRESENTTARGET *v59; // [rsp+50h] [rbp-10h]
  char v60; // [rsp+A0h] [rbp+40h]

  MonitorType = 0;
  v10 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v14 = *((_QWORD *)this + 315);
  if ( !v14 )
  {
    v22 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v22 + 24) = this;
    *(_QWORD *)(v22 + 32) = v10;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  v15 = 1;
  if ( a4 || a5 || a6 || a8 || a9 )
  {
    v16 = *(_QWORD *)(v14 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v57, v16);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL), 1u);
    v17 = *(_QWORD *)(v16 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v17, a2);
    v59 = TargetById;
    v19 = TargetById;
    if ( !TargetById )
    {
      if ( a6 )
        *a6 = 0;
      if ( a8 )
        *a8 = *(_BYTE *)(*((_QWORD *)this + 315) + 132LL);
      if ( a9 )
        *a9 = *(_BYTE *)(*((_QWORD *)this + 315) + 133LL);
      goto LABEL_14;
    }
    if ( a4 )
      *a4 = *((_DWORD *)TargetById + 20);
    if ( a5 )
      *a5 = *((_DWORD *)TargetById + 21);
    if ( a6 )
      *a6 = *((_BYTE *)TargetById + 405);
    v20 = a8;
    if ( !a8 && !a9 )
    {
LABEL_14:
      if ( v17 )
        ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v57 + 40));
      goto LABEL_17;
    }
    v23 = *((unsigned int *)TargetById + 6);
    if ( (_DWORD)v23 == -1 )
    {
      LOBYTE(v19) = v60;
      MonitorType = -1073741811;
      v40 = v54;
LABEL_54:
      if ( MonitorType >= 0 )
      {
        if ( v20 )
          *v20 = !v40;
        if ( a9 )
          *a9 = (_BYTE)v19 == 0;
        goto LABEL_14;
      }
LABEL_28:
      v27 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v27 + 24) = *((unsigned int *)v59 + 6);
      *(_QWORD *)(v27 + 32) = this;
      WdLogEvent5_WdError(v27);
      if ( v17 )
        ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v57 + 40));
      return (unsigned int)MonitorType;
    }
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v25 = *((_QWORD *)this + 315);
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v26 + 24) = 8248LL;
      WdLogEvent5_WdError(v26);
      MonitorType = -1073741811;
      goto LABEL_28;
    }
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v29 = *((_QWORD *)this + 315);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v30);
      v29 = *((_QWORD *)this + 315);
    }
    v31 = *(struct _FAST_MUTEX **)(v29 + 96);
    if ( !v31 )
    {
      v32 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v32 + 24) = this;
      WdLogEvent5_WdError(v32);
      MonitorType = -1073741811;
LABEL_39:
      v39 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v39 + 24) = MonitorType;
      WdLogEvent5_WdAssertion(v39);
      LOBYTE(v19) = v60;
      v40 = v54;
LABEL_52:
      v20 = a8;
      goto LABEL_54;
    }
    v56 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v31, v23, 1, &v56);
    MonitorType = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v37 = WdLogNewEntry5_WdDmmEvent(v19, v34, v35, v36);
      *(_QWORD *)(v37 + 24) = v23;
      *(_QWORD *)(v37 + 32) = this;
      WdLogEvent5_WdDmmEvent(v37);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v41 = v56;
        if ( !v56 || *((_DWORD *)v56 + 108) != 1 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v19);
          WdLogEvent5_WdAssertion(v42);
        }
        if ( !v41 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v19);
          WdLogEvent5_WdAssertion(v43);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v41 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v41);
        v45 = (struct _ERESOURCE *)((char *)v41 + 296);
        v38 = IsVirtualModeSuportDisabled;
        ExReleaseResourceLite(v45);
        KeLeaveCriticalRegion();
        MonitorType = 0;
        goto LABEL_49;
      }
      if ( MonitorInstance != -1073741632 )
      {
        v38 = v55;
LABEL_38:
        if ( MonitorType < 0 )
          goto LABEL_39;
LABEL_49:
        if ( v38 )
        {
          LOBYTE(v19) = 1;
          v40 = 1;
        }
        else
        {
          LOBYTE(v19) = *(_BYTE *)(v25 + 133) == 0;
          v40 = *(_BYTE *)(v25 + 132) == 0;
        }
        goto LABEL_52;
      }
    }
    v38 = 0;
    MonitorType = 0;
    goto LABEL_38;
  }
LABEL_17:
  if ( a7 )
  {
    v46 = *((_QWORD *)this + 315);
    if ( (!*(_BYTE *)(v46 + 132) || !*(_BYTE *)(v46 + 133))
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) < 0x4003u )
    {
      v15 = 0;
    }
    *a7 = v15;
  }
  if ( !a3 )
    return (unsigned int)MonitorType;
  result = MonitorGetMonitorHandle(this, a2, 0LL, DxgkQueryMonitorTypeLockHeld, &v58);
  if ( (int)result >= 0 )
  {
    MonitorType = MonitorGetMonitorType(v58, a3, v47, v48);
    if ( MonitorType < 0 )
    {
      v51 = WdLogNewEntry5_WdError(v49);
      *(_QWORD *)(v51 + 24) = a2;
      *(_QWORD *)(v51 + 32) = this;
      WdLogEvent5_WdError(v51);
    }
    if ( (int)MonitorReleaseMonitorHandle(this, (__int64)v58, DxgkQueryMonitorTypeLockHeld, v50) < 0 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v52);
      *(_QWORD *)(v53 + 24) = 2927LL;
      WdLogEvent5_WdAssertion(v53);
    }
    return (unsigned int)MonitorType;
  }
  return result;
}
