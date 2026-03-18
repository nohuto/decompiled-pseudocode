/*
 * XREFs of ?GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C012DA00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058A0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012CC00 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        GUID *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  DMMVIDPNTOPOLOGY *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DMMVIDPNTOPOLOGY *v14; // rsi
  int NumPathsFromSource; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  const GUID *v19; // r8
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  int v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h]
  char v26; // [rsp+30h] [rbp-10h]
  unsigned __int64 v27; // [rsp+70h] [rbp+30h] BYREF

  v24 = -1;
  v25 = 0LL;
  v5 = (__int64)this;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 6018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6018);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 6018LL);
  if ( a3 )
  {
    *(_QWORD *)&a3->Data1 = 0LL;
    v10 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
    v14 = v10;
    if ( v10 )
    {
      v27 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v10, (unsigned int)v6, &v27);
      v5 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
        v23[3] = v6;
        v23[4] = v14;
        v23[5] = v5;
      }
      else
      {
        LODWORD(v5) = 0;
        *(_QWORD *)&a3->Data1 = v27;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v22 + 24) = v5;
      WdLogEvent5_WdError(v22);
      LODWORD(v5) = -1071774976;
    }
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v21[3] = 0LL;
    v21[4] = v6;
    v21[5] = v5;
    WdLogEvent5_WdError(v21);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v16);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v24);
  return (unsigned int)v5;
}
