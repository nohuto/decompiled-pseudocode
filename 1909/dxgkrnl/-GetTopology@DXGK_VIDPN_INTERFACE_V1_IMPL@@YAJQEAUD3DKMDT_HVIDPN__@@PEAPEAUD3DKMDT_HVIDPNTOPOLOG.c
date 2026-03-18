/*
 * XREFs of ?GetTopology@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C013E840
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGK_VIDPNTOPOLOGY_INTERFACE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGK_VIDPN_INTERFACE_V1_IMPL *v13; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]

  v21 = -1;
  v22 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v23 = 1;
    v21 = 7042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 7042);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 7042LL);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v9[3] = this;
  v9[4] = a2;
  v9[5] = a3;
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    if ( this && *((_DWORD *)this + 16) == 1833172997 )
      v13 = this;
    else
      v13 = 0LL;
    if ( v13 )
    {
      v14 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(*((_QWORD *)v13 + 6) + 376LL);
      *(_QWORD *)a2 = ((unsigned __int64)v13 + 96) & -(__int64)((DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v13 + 289) != 0LL);
      v15 = 0;
      *a3 = v14;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(0LL, v10, v12);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdError(v20);
      v15 = -1071774973;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdError(v19);
    v15 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, (__int64)v14);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v21);
  return v15;
}
