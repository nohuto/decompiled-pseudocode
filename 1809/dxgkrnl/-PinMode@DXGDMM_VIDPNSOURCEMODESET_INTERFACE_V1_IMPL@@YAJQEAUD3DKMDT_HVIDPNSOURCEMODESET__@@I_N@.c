/*
 * XREFs of ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C00D87A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007094 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00D887C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const GUID *a3)
{
  bool v3; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  struct DMMVIDPNSOURCEMODESET *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 Container; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+28h] [rbp-20h]
  char v26; // [rsp+30h] [rbp-18h]

  v24 = -1;
  v3 = (char)a3;
  v25 = 0LL;
  v5 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 6007;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6007);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 6007);
  v6 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v8 = (struct DMMVIDPNSOURCEMODESET *)v6;
  if ( v6 )
  {
    v9 = *(_QWORD *)(v6 + 112);
    if ( !v9 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v21);
    }
    v10 = *(_QWORD *)(v9 + 40);
    if ( !v10 )
    {
      v22 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v22);
      v10 = *(_QWORD *)(v9 + 40);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(v10 + 64);
    v14 = VIDPN_MGR::PinVidPnSourceMode(*(VIDPN_MGR **)(Container + 48), v8, v5, v3);
    if ( v14 < 0 )
    {
      v23 = WdLogNewEntry5_WdDmmEvent(v13, v12, v15, v16);
      *(_QWORD *)(v23 + 24) = v5;
      *(_QWORD *)(v23 + 32) = this;
      WdLogEvent5_WdDmmEvent(v23);
    }
    else
    {
      v14 = 0;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    v14 = -1071774968;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v24);
  return (unsigned int)v14;
}
