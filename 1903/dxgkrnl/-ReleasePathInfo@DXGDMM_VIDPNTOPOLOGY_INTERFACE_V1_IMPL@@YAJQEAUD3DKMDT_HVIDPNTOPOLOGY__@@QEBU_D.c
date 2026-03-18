/*
 * XREFs of ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E59A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00FBD88 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  char v21; // [rsp+30h] [rbp-18h]

  v19 = -1;
  v20 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v21 = 1;
    v19 = 6022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6022);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 6022LL);
  if ( a2 )
  {
    v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v8 )
    {
      v13 = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v8, a2);
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
      v13 = -1071774976;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    v13 = -1071774951;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19, v12);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v19);
  return v13;
}
