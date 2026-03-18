/*
 * XREFs of ?EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@_KPEAI2@Z @ 0x1C02B8830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPaths(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        GUID *a3,
        unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+28h] [rbp-20h]
  char v28; // [rsp+30h] [rbp-18h]

  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 6061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6061);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 6061LL);
  if ( !a4 || !a3 )
  {
    v22 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v22 + 24) = a2;
    *(_QWORD *)(v22 + 32) = this;
    WdLogEvent5_WdError(v22);
    v17 = -1073741811;
    goto LABEL_21;
  }
  *a4 = -1;
  a3->Data1 = -1;
  v11 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( v11 )
  {
    v18 = v11 + 24;
    v19 = 0;
    v20 = *(_QWORD *)(v11 + 24);
    if ( v20 == v11 + 24 )
      v16 = 0LL;
    else
      v16 = (_QWORD *)(v20 - 8);
    if ( a2 )
    {
      while ( v16 )
      {
        v21 = v16[1];
        v16 = (_QWORD *)(v21 - 8);
        if ( v21 == v18 )
          v16 = 0LL;
        if ( (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)(unsigned int)++v19 == a2 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( v16 )
      {
        v17 = 0;
        *a4 = *(_DWORD *)(v16[12] + 24LL);
        a3->Data1 = *(_DWORD *)(v16[11] + 24LL);
        goto LABEL_21;
      }
    }
    v17 = 1075708748;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    v17 = -1071774976;
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, (__int64)v16);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v26);
  return v17;
}
