/*
 * XREFs of ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C013CDC0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C013CEDC (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireFirstPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v4; // rbx
  __int64 v5; // rcx
  const GUID *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct DMMVIDPNPRESENTPATH *(__fastcall *v29)(DMMVIDPNTOPOLOGY *); // [rsp+20h] [rbp-30h] BYREF
  int v30; // [rsp+28h] [rbp-28h]
  int v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+38h] [rbp-18h]
  char v33; // [rsp+40h] [rbp-10h]
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v34; // [rsp+60h] [rbp+10h] BYREF

  v4 = this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 18);
  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 7036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v5, &EventProfilerEnter, v6, 7036);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 7036LL);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( v4 && *((_DWORD *)v4 + 46) == 1833173002 )
      v13 = v4;
    else
      v13 = 0LL;
    if ( v13 )
    {
      v30 = 0;
      v34 = 0LL;
      v29 = DMMVIDPNTOPOLOGY::GetFirstPath;
      v14 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
              v13,
              &v29,
              &v34);
      v4 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v14;
      if ( v14 == -1071774937 )
      {
        v23 = WdLogNewEntry5_WdTrace(v16, v15);
        v25 = v34 == 0LL;
        *(_QWORD *)(v23 + 24) = v13;
        if ( !v25 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v24, v15);
          WdLogEvent5_WdAssertion(v26);
        }
        LODWORD(v4) = 1075708747;
      }
      else if ( v14 < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v16, v15, v17);
        *(_QWORD *)(v27 + 24) = v13;
        *(_QWORD *)(v27 + 32) = v4;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        v4 = v34;
        if ( !v34 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v16, v15);
          WdLogEvent5_WdAssertion(v28);
        }
        *(_QWORD *)a2 = v4;
        LODWORD(v4) = 0;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v22 + 24) = v4;
      WdLogEvent5_WdError(v22);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v21 + 24) = 0LL;
    *(_QWORD *)(v21 + 32) = v4;
    WdLogEvent5_WdError(v21);
    LODWORD(v4) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v15);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v31);
  return (unsigned int)v4;
}
