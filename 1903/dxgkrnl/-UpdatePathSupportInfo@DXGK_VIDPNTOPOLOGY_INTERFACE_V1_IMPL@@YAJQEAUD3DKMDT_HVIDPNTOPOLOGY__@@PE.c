/*
 * XREFs of ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E5BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E5CF0 (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbp
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DMMVIDPNTOPOLOGY *v13; // rsi
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int updated; // ebx
  __int64 v19; // r8
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+30h] [rbp-28h] BYREF
  __int64 v27; // [rsp+38h] [rbp-20h]
  char v28; // [rsp+40h] [rbp-18h]

  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 7038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7038);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 7038LL);
  if ( a2 )
  {
    v8 = *(_DWORD *)a2;
    v9 = *((unsigned int *)a2 + 1);
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v10[3] = v8;
    v10[4] = v9;
    v10[5] = this;
    v10[6] = a2;
    v13 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v13 )
    {
      v15 = *((_DWORD *)a2 + 83);
      if ( (v15 & 1) == 0 )
        *((_DWORD *)a2 + 83) = v15 | 1;
      updated = DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
                  v13,
                  v8,
                  v9,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)a2 + 4,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)a2 + 6,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *)a2 + 83);
      if ( updated < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v17, v16, v19);
        *(_QWORD *)(v25 + 24) = a2;
        *(_QWORD *)(v25 + 32) = v13;
        WdLogEvent5_WdError(v25);
      }
      else
      {
        updated = 0;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v12, v11, v14);
      *(_QWORD *)(v24 + 24) = this;
      WdLogEvent5_WdError(v24);
      updated = -1071774976;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    updated = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v16);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v26);
  return (unsigned int)updated;
}
