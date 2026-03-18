/*
 * XREFs of ?ReleaseSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@QEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C02B9730
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C00223CC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C017A21C (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo(
        DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  DMMVIDEOPRESENTSOURCESET *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  char v21; // [rsp+30h] [rbp-18h]

  v19 = -1;
  v20 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v21 = 1;
    v19 = 6043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6043);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 6043LL);
  if ( a2 )
  {
    v11 = (DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      v10 = DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(v11, a2);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v15 + 24) = this;
      WdLogEvent5_WdError(v15);
      v10 = -1071774955;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdError(v8);
    v10 = -1071774972;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19, v9);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v19);
  return v10;
}
