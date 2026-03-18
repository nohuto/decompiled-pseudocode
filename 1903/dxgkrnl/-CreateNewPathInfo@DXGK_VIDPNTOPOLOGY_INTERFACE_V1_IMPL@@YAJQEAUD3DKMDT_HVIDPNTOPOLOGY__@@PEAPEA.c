/*
 * XREFs of ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02BDDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02BC6E8 (-AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::CreateNewPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  DMMVIDPNTOPOLOGY *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  int v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+28h] [rbp-20h]
  char v27; // [rsp+30h] [rbp-18h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v28; // [rsp+50h] [rbp+8h] BYREF

  v25 = -1;
  v26 = 0LL;
  v4 = (__int64)this;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 7040;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 7040);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 7040LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = v4;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4) )
    {
      v17 = DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(v14, &v28);
      v4 = v17;
      if ( v17 >= 0 )
      {
        LODWORD(v4) = 0;
        *(_QWORD *)a2 = v28;
      }
      else
      {
        if ( v17 != -1073741801 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v18, v12);
          WdLogEvent5_WdAssertion(v20);
        }
        v21 = WdLogNewEntry5_WdError(v18, v12, v19);
        *(_QWORD *)(v21 + 24) = v4;
        WdLogEvent5_WdError(v21);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v16 + 24) = v4;
      WdLogEvent5_WdError(v16);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = v4;
    WdLogEvent5_WdError(v11);
    LODWORD(v4) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v12);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v25);
  return (unsigned int)v4;
}
