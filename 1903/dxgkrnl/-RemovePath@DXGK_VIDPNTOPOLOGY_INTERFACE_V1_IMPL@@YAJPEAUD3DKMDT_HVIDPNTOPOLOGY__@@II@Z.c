/*
 * XREFs of ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C02BE610
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00DFA08 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemovePath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        const GUID *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DMMVIDPNTOPOLOGY *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  int v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+28h] [rbp-30h]
  char v24; // [rsp+30h] [rbp-28h]

  v22 = -1;
  v3 = (__int64)this;
  v23 = 0LL;
  v4 = (unsigned int)a3;
  v5 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 7058;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7058);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 7058LL);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v8[3] = v5;
  v8[4] = v4;
  v8[5] = v3;
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v13 = v9;
  if ( v9 )
  {
    v16 = DMMVIDPNTOPOLOGY::RemovePath(v9, v5, v4, 0LL);
    v3 = v16;
    if ( v16 >= 0 )
    {
      LODWORD(v3) = 0;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v17, v15);
      v18[3] = v5;
      v18[4] = v4;
      v18[5] = v13;
      v18[6] = v3;
      WdLogEvent5_WdDmmEvent(v18);
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = v3;
    WdLogEvent5_WdError(v14);
    LODWORD(v3) = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v15);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v22);
  return (unsigned int)v3;
}
