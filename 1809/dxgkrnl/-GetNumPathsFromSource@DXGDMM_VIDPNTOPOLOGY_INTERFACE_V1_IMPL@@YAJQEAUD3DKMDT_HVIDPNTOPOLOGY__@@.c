/*
 * XREFs of ?GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C0138190
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        GUID *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rcx
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // rsi
  int NumPathsFromSource; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  const GUID *v17; // r8
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v22; // [rsp+20h] [rbp-20h] BYREF
  __int64 v23; // [rsp+28h] [rbp-18h]
  char v24; // [rsp+30h] [rbp-10h]
  unsigned __int64 v25; // [rsp+70h] [rbp+30h] BYREF

  v22 = -1;
  v23 = 0LL;
  v5 = (__int64)this;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 6018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6018);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 6018);
  if ( a3 )
  {
    *(_QWORD *)&a3->Data1 = 0LL;
    v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
    v10 = v8;
    if ( v8 )
    {
      v25 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v8, v6, &v25);
      v5 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
        v21[3] = v6;
        v21[4] = v10;
        v21[5] = v5;
      }
      else
      {
        LODWORD(v5) = 0;
        *(_QWORD *)&a3->Data1 = v25;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v20 + 24) = v5;
      WdLogEvent5_WdError(v20);
      LODWORD(v5) = -1071774976;
    }
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v19[3] = 0LL;
    v19[4] = v6;
    v19[5] = v5;
    WdLogEvent5_WdError(v19);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v22);
  return (unsigned int)v5;
}
