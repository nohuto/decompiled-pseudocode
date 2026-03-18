/*
 * XREFs of ?GetPathImportance@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIQEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@QEAG@Z @ 0x1C0183330
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058A0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathImportance(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        const GUID *a3,
        _DWORD *a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *const a5)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DMMVIDPNTOPOLOGY *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+28h] [rbp-20h]
  char v28; // [rsp+30h] [rbp-18h]

  v26 = -1;
  v27 = 0LL;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 6059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6059);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 6059LL);
  if ( a4 && a5 )
  {
    v12 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v12 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v12, v8, v7);
      if ( Path )
      {
        *a4 = *((_DWORD *)Path + 26);
        *(_WORD *)a5 = *((_WORD *)Path + 54);
        v19 = 0;
      }
      else
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v17, v18);
        v24[3] = v8;
        v24[4] = v7;
        v24[5] = this;
        WdLogEvent5_WdWarning(v24);
        v19 = -1071774937;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v23 + 24) = this;
      WdLogEvent5_WdError(v23);
      v19 = -1071774976;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v10, v9, v11);
    WdLogEvent5_WdError(v25);
    v19 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v17);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v26);
  return v19;
}
