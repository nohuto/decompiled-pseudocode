/*
 * XREFs of ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00C3E00
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000A58C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00C3F18 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::IsSupportedByMonitor(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        GUID *a3,
        unsigned __int8 *const a4)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int8 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r10
  DMMVIDPNTARGETMODE *v14; // r14
  unsigned int v15; // eax
  int IsSupportedByMonitor; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _D3DKMDT_MODE_PRUNING_REASON v28; // [rsp+20h] [rbp-20h] BYREF
  int v29; // [rsp+28h] [rbp-18h] BYREF
  __int64 v30; // [rsp+30h] [rbp-10h]
  char v31; // [rsp+38h] [rbp-8h]
  unsigned __int8 v32; // [rsp+80h] [rbp+40h] BYREF

  v29 = -1;
  v30 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  v8 = 1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 6017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6017);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 6017);
  if ( !a3 )
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = 0LL;
LABEL_19:
    WdLogEvent5_WdError(v24);
    LODWORD(v6) = -1073741811;
    goto LABEL_11;
  }
  if ( !a4 )
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = a3;
    goto LABEL_19;
  }
  LOBYTE(a3->Data1) = 0;
  *(_DWORD *)a4 = 0;
  v10 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v6);
  if ( v10 )
  {
    v14 = (DMMVIDPNTARGETMODE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v10 + 24, v7);
    if ( v14 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 112) + 96LL) + 84LL);
      if ( v15 < 0xF || v15 > 0x11 )
        v8 = 0;
      v28 = D3DKMDT_MPR_UNINITIALIZED;
      v32 = 0;
      IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(v14, v8, &v32, &v28);
      v6 = IsSupportedByMonitor;
      if ( IsSupportedByMonitor < 0 )
      {
        v27 = WdLogNewEntry5_WdDmmEvent(v18, v17, v19, v20);
        *(_QWORD *)(v27 + 24) = v14;
        *(_QWORD *)(v27 + 32) = v6;
        WdLogEvent5_WdDmmEvent(v27);
      }
      else
      {
        LODWORD(v6) = 0;
        LOBYTE(a3->Data1) = v32;
        *(_DWORD *)a4 = v28;
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v26 + 24) = v7;
      *(_QWORD *)(v26 + 32) = v6;
      WdLogEvent5_WdError(v26);
      LODWORD(v6) = -1071774959;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v25 + 24) = v6;
    WdLogEvent5_WdError(v25);
    LODWORD(v6) = -1071774967;
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v29);
  return (unsigned int)v6;
}
