/*
 * XREFs of ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0176880
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005D64 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00060BC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00E7098 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::IsSupportedByMonitor(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        GUID *a3,
        unsigned __int8 *const a4)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  DMMVIDPNTARGETMODE *v20; // r14
  unsigned int v21; // eax
  int IsSupportedByMonitor; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _D3DKMDT_MODE_PRUNING_REASON v32; // [rsp+20h] [rbp-20h] BYREF
  int v33; // [rsp+28h] [rbp-18h] BYREF
  __int64 v34; // [rsp+30h] [rbp-10h]
  char v35; // [rsp+38h] [rbp-8h]
  unsigned __int8 v36; // [rsp+80h] [rbp+40h] BYREF

  v33 = -1;
  v34 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  v8 = 1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 6017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6017);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 6017LL);
  if ( !a3 )
  {
    v28 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v28 + 24) = 0LL;
LABEL_19:
    WdLogEvent5_WdError(v28);
    LODWORD(v6) = -1073741811;
    goto LABEL_11;
  }
  if ( !a4 )
  {
    v28 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v28 + 24) = a3;
    goto LABEL_19;
  }
  LOBYTE(a3->Data1) = 0;
  *(_DWORD *)a4 = 0;
  v12 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v6);
  if ( v12 )
  {
    v20 = (DMMVIDPNTARGETMODE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v12 + 24, v7);
    if ( v20 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 112) + 96LL) + 84LL);
      if ( v21 < 0xF || v21 > 0x11 )
        v8 = 0;
      v32 = D3DKMDT_MPR_UNINITIALIZED;
      v36 = 0;
      LOBYTE(v16) = v8;
      IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(v20, v16, &v36, &v32);
      v6 = IsSupportedByMonitor;
      if ( IsSupportedByMonitor < 0 )
      {
        v31 = WdLogNewEntry5_WdDmmEvent(v24, v23);
        *(_QWORD *)(v31 + 24) = v20;
        *(_QWORD *)(v31 + 32) = v6;
        WdLogEvent5_WdDmmEvent(v31);
      }
      else
      {
        LODWORD(v6) = 0;
        LOBYTE(a3->Data1) = v36;
        *(_DWORD *)a4 = v32;
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v17, v16, v18);
      *(_QWORD *)(v30 + 24) = v7;
      *(_QWORD *)(v30 + 32) = v6;
      WdLogEvent5_WdError(v30);
      LODWORD(v6) = -1071774959;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v29 + 24) = v6;
    WdLogEvent5_WdError(v29);
    LODWORD(v6) = -1071774967;
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v23);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v33);
  return (unsigned int)v6;
}
