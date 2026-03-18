/*
 * XREFs of ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C02B93A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00D0630 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00D0748 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorIsUsingDefaultMonitorProfile @ 0x1C02C97CC (MonitorIsUsingDefaultMonitorProfile.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsUsingDefaultMonitorProfile(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        const GUID *a3,
        unsigned __int8 *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 IsUsingDefaultMonitorProfile; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  VIDPN_MGR *v19; // r14
  int ConnectedMonitorHandle; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rax
  struct HDXGMONITOR__ *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v34; // [rsp+20h] [rbp-20h] BYREF
  __int64 v35; // [rsp+28h] [rbp-18h]
  char v36; // [rsp+30h] [rbp-10h]
  struct HDXGMONITOR__ *v37; // [rsp+80h] [rbp+40h] BYREF
  __int64 v38; // [rsp+88h] [rbp+48h] BYREF

  v34 = -1;
  v35 = 0LL;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 6056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6056);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 6056LL);
  if ( a3 )
  {
    if ( !this )
    {
      v13 = WdLogNewEntry5_WdError(v8, v7, v9);
      *(_QWORD *)(v13 + 24) = 0LL;
LABEL_13:
      WdLogEvent5_WdError(v13);
      LODWORD(IsUsingDefaultMonitorProfile) = -1071775742;
      goto LABEL_25;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = *((_QWORD *)this + 319);
    if ( !v18 )
    {
      v13 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v13 + 24) = this;
      goto LABEL_13;
    }
    v19 = *(VIDPN_MGR **)(v18 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v38, (__int64)v19);
    v37 = 0LL;
    ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v19, (unsigned int)v6, &v37);
    IsUsingDefaultMonitorProfile = ConnectedMonitorHandle;
    if ( ConnectedMonitorHandle == -1073741275 )
    {
      v24 = WdLogNewEntry5_WdError(v22, v21, v23);
      *(_QWORD *)(v24 + 24) = v6;
      *(_QWORD *)(v24 + 32) = this;
      WdLogEvent5_WdError(v24);
      LODWORD(IsUsingDefaultMonitorProfile) = -1071774920;
    }
    else
    {
      if ( ConnectedMonitorHandle >= 0 )
      {
        v26 = v37;
        if ( !v37 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v22, v21);
          WdLogEvent5_WdAssertion(v27);
        }
        IsUsingDefaultMonitorProfile = (int)MonitorIsUsingDefaultMonitorProfile(v26, a3);
        VIDPN_MGR::ReleaseMonitorHandle(v19, v26);
        if ( (int)IsUsingDefaultMonitorProfile >= 0 )
        {
          LODWORD(IsUsingDefaultMonitorProfile) = 0;
          goto LABEL_24;
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
        v25[3] = v26;
        v25[4] = IsUsingDefaultMonitorProfile;
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
        v25[3] = v6;
        v25[4] = this;
        v25[5] = IsUsingDefaultMonitorProfile;
      }
      WdLogEvent5_WdError(v25);
    }
LABEL_24:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38 + 40));
    goto LABEL_25;
  }
  v10 = WdLogNewEntry5_WdError(v8, v7, v9);
  *(_QWORD *)(v10 + 24) = 0LL;
  WdLogEvent5_WdError(v10);
  LODWORD(IsUsingDefaultMonitorProfile) = -1073741811;
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v11);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v34);
  return (unsigned int)IsUsingDefaultMonitorProfile;
}
