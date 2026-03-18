/*
 * XREFs of ?GetPathSourceFromTarget@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEAI@Z @ 0x1C02BE330
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058A0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E6A64 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathSourceFromTarget(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        GUID *a3,
        unsigned int *a4)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // ebx
  DMMVIDPNTOPOLOGY *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  int v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+28h] [rbp-20h]
  char v26; // [rsp+30h] [rbp-18h]

  v24 = -1;
  v25 = 0LL;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 7034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7034);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 7034LL);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v9[3] = v6;
  v9[4] = this;
  v9[5] = a3;
  if ( a3 )
  {
    a3->Data1 = -1;
    v16 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v16 )
    {
      a3->Data1 = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v16, (unsigned int)v6);
      v15 = 0;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdError(v20);
      v15 = -1071774976;
    }
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v13[3] = 0LL;
    v13[4] = this;
    v13[5] = v6;
    WdLogEvent5_WdError(v13);
    v15 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v14);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v24);
  return v15;
}
