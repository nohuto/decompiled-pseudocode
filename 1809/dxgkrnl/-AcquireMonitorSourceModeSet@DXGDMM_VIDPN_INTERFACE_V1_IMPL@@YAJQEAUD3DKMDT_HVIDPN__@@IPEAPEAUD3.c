/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C027F620
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000F75C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00C61B0 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorQueryDmmSourceModeSetInterface @ 0x1C0291234 (MonitorQueryDmmSourceModeSetInterface.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        GUID *a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edi
  VIDPN_MGR *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  int DmmSourceModeSetInterface; // eax
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct HDXGMONITOR__ *v32; // rdi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  const GUID *v36; // r8
  int v38; // [rsp+20h] [rbp-20h] BYREF
  __int64 v39; // [rsp+28h] [rbp-18h]
  char v40; // [rsp+30h] [rbp-10h]
  struct HDXGMONITOR__ *v41; // [rsp+80h] [rbp+40h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v42; // [rsp+88h] [rbp+48h]

  v38 = -1;
  v39 = 0LL;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v40 = 1;
    v38 = 6038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6038);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 6038);
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 4559LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = 4560LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *(_QWORD *)&a3->Data1 = 0LL;
  *a4 = 0LL;
  v11 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v11 )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    v14 = -1071774973;
    goto LABEL_27;
  }
  v15 = *(VIDPN_MGR **)(v11 + 48);
  v16 = *((_QWORD *)v15 + 1);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v17);
    v16 = *((_QWORD *)v15 + 1);
  }
  DmmSourceModeSetInterface = MonitorQueryDmmSourceModeSetInterface(*(DXGADAPTER **)(v16 + 16));
  v20 = DmmSourceModeSetInterface;
  if ( DmmSourceModeSetInterface < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v19);
    v22 = *((_QWORD *)v15 + 1);
    v23 = v21;
    if ( !v22 )
    {
      v24 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v24);
      v22 = *((_QWORD *)v15 + 1);
    }
    *(_QWORD *)(v23 + 24) = *(_QWORD *)(v22 + 16);
    *(_QWORD *)(v23 + 32) = v20;
    WdLogEvent5_WdError(v23);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v15 + 10) + 72LL));
  v25 = *((_QWORD *)v15 + 10);
  v26 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v25, v7);
  if ( !v26 )
  {
    v28 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v28 + 24) = v7;
    WdLogEvent5_WdError(v28);
    v14 = -1071774971;
    goto LABEL_25;
  }
  if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v15, *(_DWORD *)(v26 + 24), &v41) < 0 || (v32 = v41) == 0LL )
  {
    v34 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v34 + 24) = v7;
    WdLogEvent5_WdWarning(v34);
    v14 = -1071774920;
LABEL_25:
    if ( v25 )
      ReferenceCounted::Release((ReferenceCounted *)(v25 + 64));
    goto LABEL_27;
  }
  if ( v25 )
    ReferenceCounted::Release((ReferenceCounted *)(v25 + 64));
  v33 = v42;
  *(_QWORD *)&a3->Data1 = v32;
  v14 = 0;
  *a4 = v33;
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v38);
  return v14;
}
