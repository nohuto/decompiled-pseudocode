/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02B7A70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00060CC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C01298E8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorQueryDmmSourceModeSetInterface @ 0x1C02C9ADC (MonitorQueryDmmSourceModeSetInterface.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        GUID *a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // edi
  VIDPN_MGR *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  int DmmSourceModeSetInterface; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  struct HDXGMONITOR__ *v41; // rdi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  const GUID *v45; // r8
  int v47; // [rsp+20h] [rbp-20h] BYREF
  __int64 v48; // [rsp+28h] [rbp-18h]
  char v49; // [rsp+30h] [rbp-10h]
  struct HDXGMONITOR__ *v50; // [rsp+80h] [rbp+40h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v51; // [rsp+88h] [rbp+48h]

  v47 = -1;
  v48 = 0LL;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v49 = 1;
    v47 = 6038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6038);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v47, 6038LL);
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 4559LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v11 + 24) = 4560LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *(_QWORD *)&a3->Data1 = 0LL;
  *a4 = 0LL;
  v12 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v12 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    v18 = -1071774973;
    goto LABEL_27;
  }
  v19 = *(VIDPN_MGR **)(v12 + 48);
  v20 = *((_QWORD *)v19 + 1);
  if ( !v20 )
  {
    v21 = WdLogNewEntry5_WdAssertion(0LL, v13);
    WdLogEvent5_WdAssertion(v21);
    v20 = *((_QWORD *)v19 + 1);
  }
  DmmSourceModeSetInterface = MonitorQueryDmmSourceModeSetInterface(*(DXGADAPTER **)(v20 + 16));
  v26 = DmmSourceModeSetInterface;
  if ( DmmSourceModeSetInterface < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v24, v23, v25);
    v29 = *((_QWORD *)v19 + 1);
    v30 = v27;
    if ( !v29 )
    {
      v31 = WdLogNewEntry5_WdAssertion(0LL, v28);
      WdLogEvent5_WdAssertion(v31);
      v29 = *((_QWORD *)v19 + 1);
    }
    *(_QWORD *)(v30 + 24) = *(_QWORD *)(v29 + 16);
    *(_QWORD *)(v30 + 32) = v26;
    WdLogEvent5_WdError(v30);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v19 + 10) + 72LL));
  v32 = *((_QWORD *)v19 + 10);
  v33 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v32, v7);
  if ( !v33 )
  {
    v37 = WdLogNewEntry5_WdError(v35, v34, v36);
    *(_QWORD *)(v37 + 24) = v7;
    WdLogEvent5_WdError(v37);
    v18 = -1071774971;
    goto LABEL_25;
  }
  if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v19, *(unsigned int *)(v33 + 24), &v50) < 0 || (v41 = v50) == 0LL )
  {
    v43 = WdLogNewEntry5_WdWarning(v39, v17, v40);
    *(_QWORD *)(v43 + 24) = v7;
    WdLogEvent5_WdWarning(v43);
    v18 = -1071774920;
LABEL_25:
    if ( v32 )
      ReferenceCounted::Release((ReferenceCounted *)(v32 + 64), v17, v38);
    goto LABEL_27;
  }
  if ( v32 )
    ReferenceCounted::Release((ReferenceCounted *)(v32 + 64), v17, v40);
  v42 = v51;
  *(_QWORD *)&a3->Data1 = v41;
  v18 = 0;
  *a4 = v42;
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v17);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v47);
  return v18;
}
