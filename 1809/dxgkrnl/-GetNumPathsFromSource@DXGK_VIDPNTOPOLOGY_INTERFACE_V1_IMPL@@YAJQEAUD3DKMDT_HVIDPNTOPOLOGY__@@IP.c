/*
 * XREFs of ?GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C0285D80
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        GUID *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  DMMVIDPNTOPOLOGY *v14; // rax
  __int64 v15; // rcx
  DMMVIDPNTOPOLOGY *v16; // rsi
  __int64 v17; // rax
  int NumPathsFromSource; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h]
  char v29; // [rsp+30h] [rbp-10h]
  unsigned __int64 v30; // [rsp+60h] [rbp+20h] BYREF

  v27 = -1;
  v28 = 0LL;
  v5 = (__int64)this;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 7032;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7032);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 7032);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v11[3] = v6;
  v11[4] = v5;
  v11[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->Data1 = 0LL;
    v14 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
    v16 = v14;
    if ( v14 )
    {
      v30 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v14, v6, &v30);
      v5 = NumPathsFromSource;
      if ( NumPathsFromSource >= 0 )
      {
        LODWORD(v5) = 0;
        *(_QWORD *)&a3->Data1 = v30;
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
        v23[3] = v6;
        v23[4] = v16;
        v23[5] = v5;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v17 + 24) = v5;
      WdLogEvent5_WdError(v17);
      LODWORD(v5) = -1071774976;
    }
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v13[3] = 0LL;
    v13[4] = v6;
    v13[5] = v5;
    WdLogEvent5_WdError(v13);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v27);
  return (unsigned int)v5;
}
