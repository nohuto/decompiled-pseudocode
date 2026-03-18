/*
 * XREFs of ?GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C014C6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+28h] [rbp-20h]
  char v26; // [rsp+30h] [rbp-18h]

  v24 = -1;
  v25 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 6033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 6033);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 6033LL);
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v14 = v10;
    if ( v10 )
    {
      v15 = *(_QWORD *)(v10 + 48);
      if ( *(_QWORD *)(v15 + 88) == v10 )
      {
        v23 = WdLogNewEntry5_WdError(v12, v15, v13);
        *(_QWORD *)(v23 + 24) = v14;
        WdLogEvent5_WdError(v23);
        v17 = -1071774909;
      }
      else
      {
        v16 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(v15 + 432);
        *(_QWORD *)a2 = (v10 + 96) & -(__int64)(v10 != -289);
        v17 = 0;
        *a3 = v16;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v22 + 24) = this;
      WdLogEvent5_WdError(v22);
      v17 = -1071774973;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v21 + 24) = 0LL;
    *(_QWORD *)(v21 + 32) = this;
    WdLogEvent5_WdError(v21);
    v17 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, (__int64)v16);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v24);
  return v17;
}
