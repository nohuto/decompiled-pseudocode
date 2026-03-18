/*
 * XREFs of ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C0281360
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00C6164 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00C61B0 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorIsUsingDefaultMonitorProfile @ 0x1C0290D34 (MonitorIsUsingDefaultMonitorProfile.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsUsingDefaultMonitorProfile(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        const GUID *a3,
        unsigned __int8 *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 IsUsingDefaultMonitorProfile; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  VIDPN_MGR *v14; // r14
  int ConnectedMonitorHandle; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  struct HDXGMONITOR__ *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h]
  char v29; // [rsp+30h] [rbp-10h]
  struct HDXGMONITOR__ *v30; // [rsp+80h] [rbp+40h] BYREF
  __int64 v31; // [rsp+88h] [rbp+48h] BYREF

  v27 = -1;
  v28 = 0LL;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 6056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6056);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 6056);
  if ( a3 )
  {
    if ( !this )
    {
      v10 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v10 + 24) = 0LL;
LABEL_13:
      WdLogEvent5_WdError(v10);
      LODWORD(IsUsingDefaultMonitorProfile) = -1071775742;
      goto LABEL_25;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v12);
    }
    v13 = *((_QWORD *)this + 315);
    if ( !v13 )
    {
      v10 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v10 + 24) = this;
      goto LABEL_13;
    }
    v14 = *(VIDPN_MGR **)(v13 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, (__int64)v14);
    v30 = 0LL;
    ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v14, v6, &v30);
    IsUsingDefaultMonitorProfile = ConnectedMonitorHandle;
    if ( ConnectedMonitorHandle == -1073741275 )
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = v6;
      *(_QWORD *)(v17 + 32) = this;
      WdLogEvent5_WdError(v17);
      LODWORD(IsUsingDefaultMonitorProfile) = -1071774920;
    }
    else
    {
      if ( ConnectedMonitorHandle >= 0 )
      {
        v19 = v30;
        if ( !v30 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v16);
          WdLogEvent5_WdAssertion(v20);
        }
        IsUsingDefaultMonitorProfile = (int)MonitorIsUsingDefaultMonitorProfile(v19, a3);
        VIDPN_MGR::ReleaseMonitorHandle(v14, v19, v21, v22);
        if ( (int)IsUsingDefaultMonitorProfile >= 0 )
        {
          LODWORD(IsUsingDefaultMonitorProfile) = 0;
          goto LABEL_24;
        }
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v18[3] = v19;
        v18[4] = IsUsingDefaultMonitorProfile;
      }
      else
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v18[3] = v6;
        v18[4] = this;
        v18[5] = IsUsingDefaultMonitorProfile;
      }
      WdLogEvent5_WdError(v18);
    }
LABEL_24:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40));
    goto LABEL_25;
  }
  v8 = WdLogNewEntry5_WdError(v7);
  *(_QWORD *)(v8 + 24) = 0LL;
  WdLogEvent5_WdError(v8);
  LODWORD(IsUsingDefaultMonitorProfile) = -1073741811;
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v27);
  return (unsigned int)IsUsingDefaultMonitorProfile;
}
