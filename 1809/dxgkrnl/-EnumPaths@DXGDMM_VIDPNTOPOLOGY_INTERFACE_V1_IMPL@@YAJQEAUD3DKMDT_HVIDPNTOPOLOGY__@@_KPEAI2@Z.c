/*
 * XREFs of ?EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@_KPEAI2@Z @ 0x1C02807F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPaths(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        GUID *a3,
        unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  int v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  char v24; // [rsp+30h] [rbp-18h]

  v22 = -1;
  v23 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 6061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6061);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 6061);
  if ( !a4 || !a3 )
  {
    v18 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v18 + 24) = a2;
    *(_QWORD *)(v18 + 32) = this;
    WdLogEvent5_WdError(v18);
    v12 = -1073741811;
    goto LABEL_20;
  }
  *a4 = -1;
  a3->Data1 = -1;
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( v9 )
  {
    v13 = v9 + 24;
    v14 = 0LL;
    v15 = *(_QWORD *)(v9 + 24);
    v16 = 0;
    if ( v15 != v9 + 24 )
      v14 = (_QWORD *)(v15 - 8);
    if ( a2 )
    {
      while ( v14 )
      {
        v17 = v14[1];
        v14 = (_QWORD *)(v17 - 8);
        if ( v17 == v13 )
          v14 = 0LL;
        if ( (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)(unsigned int)++v16 == a2 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( v14 )
      {
        v12 = 0;
        *a4 = *(_DWORD *)(v14[12] + 24LL);
        a3->Data1 = *(_DWORD *)(v14[11] + 24LL);
        goto LABEL_20;
      }
    }
    v12 = 1075708748;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    v12 = -1071774976;
  }
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v22);
  return v12;
}
