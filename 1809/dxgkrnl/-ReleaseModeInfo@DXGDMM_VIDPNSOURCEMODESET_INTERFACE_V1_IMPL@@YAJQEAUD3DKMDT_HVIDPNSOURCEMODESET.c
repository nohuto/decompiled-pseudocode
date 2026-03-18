/*
 * XREFs of ?ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00D8710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007094 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DC6FC (-ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a2,
        const GUID *a3)
{
  __int64 v5; // rcx
  DMMVIDPNSOURCEMODESET *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  char v16; // [rsp+30h] [rbp-18h]

  v14 = -1;
  v15 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v16 = 1;
    v14 = 6006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6006);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 6006);
  if ( a2 )
  {
    v6 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v6 )
    {
      v8 = DMMVIDPNSOURCEMODESET::ReleaseDdiEnumerator(v6, a2);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v13 + 24) = this;
      WdLogEvent5_WdError(v13);
      v8 = -1071774968;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v12 + 24) = 0LL;
    WdLogEvent5_WdError(v12);
    v8 = -1071774960;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v14);
  return v8;
}
