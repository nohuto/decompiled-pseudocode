/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00FC6D0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00FC66C (-ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  DMMVIDPNSOURCEMODESET *v11; // rcx
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
    v19 = 7004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7004);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 7004LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
      v11 = this;
    else
      v11 = 0LL;
    if ( v11 )
    {
      v13 = DMMVIDPNSOURCEMODESET::ReleaseDdiEnumerator(v11, a2, v10);
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(0LL, v8, v10);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
      v13 = -1071774968;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    v13 = -1071774960;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19, v12);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v19);
  return v13;
}
