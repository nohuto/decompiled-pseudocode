/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1C017F040
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C6D88 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C016CFF0 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C02361C8 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C026FC34 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     MonitorGetMonitorType @ 0x1C00DF994 (MonitorGetMonitorType.c)
 *     MonitorGetMonitorHandle @ 0x1C00E8044 (MonitorGetMonitorHandle.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00E86A4 (MonitorReleaseMonitorHandle.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00EE55C (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  char v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v21; // r8
  struct DMMVIDEOPRESENTTARGET *v22; // rcx
  bool *v23; // rdx
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  struct _FAST_MUTEX *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  int MonitorInstance; // eax
  __int64 v44; // rax
  char v45; // r14
  __int64 v46; // rax
  bool v47; // al
  struct DXGMONITOR *v48; // r14
  __int64 v49; // rax
  __int64 v50; // rax
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  bool v61; // [rsp+30h] [rbp-30h]
  char v62; // [rsp+31h] [rbp-2Fh]
  struct DXGMONITOR *v63; // [rsp+38h] [rbp-28h] BYREF
  __int64 v64; // [rsp+40h] [rbp-20h] BYREF
  struct HDXGMONITOR__ *v65; // [rsp+48h] [rbp-18h] BYREF
  struct DMMVIDEOPRESENTTARGET *v66; // [rsp+50h] [rbp-10h]
  char v67; // [rsp+A0h] [rbp+40h]

  MonitorType = 0;
  v10 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v16 = *((_QWORD *)this + 319);
  if ( !v16 )
  {
    v25 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = v10;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  v17 = 1;
  if ( a4 || a5 || a6 || a8 || a9 )
  {
    v18 = *(_QWORD *)(v16 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v64, v18);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL), 1u);
    v19 = *(_QWORD *)(v18 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v19, a2);
    v66 = TargetById;
    v22 = TargetById;
    if ( !TargetById )
    {
      if ( a6 )
        *a6 = 0;
      if ( a8 )
        *a8 = *(_BYTE *)(*((_QWORD *)this + 319) + 233LL);
      v23 = a9;
      if ( a9 )
        *a9 = *(_BYTE *)(*((_QWORD *)this + 319) + 234LL);
      goto LABEL_14;
    }
    if ( a4 )
      *a4 = *((_DWORD *)TargetById + 20);
    if ( a5 )
      *a5 = *((_DWORD *)TargetById + 21);
    if ( a6 )
      *a6 = *((_BYTE *)TargetById + 405);
    v23 = a8;
    if ( !a8 && !a9 )
    {
LABEL_14:
      if ( v19 )
        ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), (__int64)v23, v21);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v64 + 40));
      goto LABEL_17;
    }
    v26 = *((unsigned int *)TargetById + 6);
    if ( (_DWORD)v26 == -1 )
    {
      LOBYTE(v22) = v67;
      MonitorType = -1073741811;
      v47 = v61;
LABEL_54:
      if ( MonitorType >= 0 )
      {
        if ( v23 )
          *v23 = !v47;
        if ( a9 )
          *a9 = (_BYTE)v22 == 0;
        goto LABEL_14;
      }
LABEL_28:
      v32 = WdLogNewEntry5_WdError(v22, v23, v21);
      *(_QWORD *)(v32 + 24) = *((unsigned int *)v66 + 6);
      *(_QWORD *)(v32 + 32) = this;
      WdLogEvent5_WdError(v32);
      if ( v19 )
        ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), v33, v34);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v64 + 40));
      return (unsigned int)MonitorType;
    }
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v30 = *((_QWORD *)this + 319);
    if ( !v30 )
    {
      v31 = WdLogNewEntry5_WdError(v28, v27, v29);
      *(_QWORD *)(v31 + 24) = 8960LL;
      WdLogEvent5_WdError(v31);
      MonitorType = -1073741811;
      goto LABEL_28;
    }
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v38 = *((_QWORD *)this + 319);
    if ( !v38 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v36, v35);
      WdLogEvent5_WdAssertion(v39);
      v38 = *((_QWORD *)this + 319);
    }
    v40 = *(struct _FAST_MUTEX **)(v38 + 96);
    if ( !v40 )
    {
      v41 = WdLogNewEntry5_WdError(0LL, v35, v37);
      *(_QWORD *)(v41 + 24) = this;
      WdLogEvent5_WdError(v41);
      MonitorType = -1073741811;
LABEL_39:
      v46 = WdLogNewEntry5_WdAssertion(v22, v42);
      *(_QWORD *)(v46 + 24) = MonitorType;
      WdLogEvent5_WdAssertion(v46);
      LOBYTE(v22) = v67;
      v47 = v61;
LABEL_52:
      v23 = a8;
      goto LABEL_54;
    }
    v63 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v40, (unsigned int)v26, 1, &v63);
    MonitorType = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v44 = WdLogNewEntry5_WdDmmEvent(v22, v42);
      *(_QWORD *)(v44 + 24) = v26;
      *(_QWORD *)(v44 + 32) = this;
      WdLogEvent5_WdDmmEvent(v44);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v48 = v63;
        if ( !v63 || *((_DWORD *)v63 + 108) != 1 )
        {
          v49 = WdLogNewEntry5_WdAssertion(v22, v42);
          WdLogEvent5_WdAssertion(v49);
        }
        if ( !v48 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v22, v42);
          WdLogEvent5_WdAssertion(v50);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v48 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v48);
        v52 = (struct _ERESOURCE *)((char *)v48 + 296);
        v45 = IsVirtualModeSuportDisabled;
        ExReleaseResourceLite(v52);
        KeLeaveCriticalRegion();
        MonitorType = 0;
        goto LABEL_49;
      }
      if ( MonitorInstance != -1073741632 )
      {
        v45 = v62;
LABEL_38:
        if ( MonitorType < 0 )
          goto LABEL_39;
LABEL_49:
        if ( v45 )
        {
          LOBYTE(v22) = 1;
          v47 = 1;
        }
        else
        {
          LOBYTE(v22) = *(_BYTE *)(v30 + 234) == 0;
          v47 = *(_BYTE *)(v30 + 233) == 0;
        }
        goto LABEL_52;
      }
    }
    v45 = 0;
    MonitorType = 0;
    goto LABEL_38;
  }
LABEL_17:
  if ( a7 )
  {
    v53 = *((_QWORD *)this + 319);
    if ( (!*(_BYTE *)(v53 + 233) || !*(_BYTE *)(v53 + 234))
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) < 0x4003u )
    {
      v17 = 0;
    }
    *a7 = v17;
  }
  if ( !a3 )
    return (unsigned int)MonitorType;
  result = MonitorGetMonitorHandle(this, a2, 0, DxgkQueryMonitorTypeLockHeld, &v65);
  if ( (int)result >= 0 )
  {
    MonitorType = MonitorGetMonitorType(v65, a3);
    if ( MonitorType < 0 )
    {
      v57 = WdLogNewEntry5_WdError(v55, v54, v56);
      *(_QWORD *)(v57 + 24) = a2;
      *(_QWORD *)(v57 + 32) = this;
      WdLogEvent5_WdError(v57);
    }
    if ( (int)MonitorReleaseMonitorHandle(this, (__int64)v65, DxgkQueryMonitorTypeLockHeld) < 0 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v59, v58);
      *(_QWORD *)(v60 + 24) = 2956LL;
      WdLogEvent5_WdAssertion(v60);
    }
    return (unsigned int)MonitorType;
  }
  return result;
}
