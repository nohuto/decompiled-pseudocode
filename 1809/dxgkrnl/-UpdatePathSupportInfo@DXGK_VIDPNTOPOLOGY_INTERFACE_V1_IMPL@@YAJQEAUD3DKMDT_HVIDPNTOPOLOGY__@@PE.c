/*
 * XREFs of ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E5310
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E4E34 (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rcx
  DMMVIDPNTOPOLOGY *v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  int updated; // ebx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+30h] [rbp-28h] BYREF
  __int64 v24; // [rsp+38h] [rbp-20h]
  char v25; // [rsp+40h] [rbp-18h]

  v23 = -1;
  v24 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 7038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7038);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 7038);
  if ( a2 )
  {
    v9 = *(_DWORD *)a2;
    v10 = *((unsigned int *)a2 + 1);
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v11[3] = v9;
    v11[4] = v10;
    v11[5] = this;
    v11[6] = a2;
    v13 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v13 )
    {
      v14 = *((_DWORD *)a2 + 83);
      if ( (v14 & 1) == 0 )
        *((_DWORD *)a2 + 83) = v14 | 1;
      updated = DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
                  v13,
                  v9,
                  v10,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)a2 + 4,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)a2 + 6,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *)a2 + 83);
      if ( updated < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v22 + 24) = a2;
        *(_QWORD *)(v22 + 32) = v13;
        WdLogEvent5_WdError(v22);
      }
      else
      {
        updated = 0;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v21 + 24) = this;
      WdLogEvent5_WdError(v21);
      updated = -1071774976;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    updated = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v23);
  return (unsigned int)updated;
}
