/*
 * XREFs of ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0129A50
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0129B6C (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v30)(DMMVIDEOPRESENTTARGETSET *); // [rsp+20h] [rbp-30h] BYREF
  int v31; // [rsp+28h] [rbp-28h]
  int v32; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+38h] [rbp-18h]
  char v34; // [rsp+40h] [rbp-10h]
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v35; // [rsp+60h] [rbp+10h] BYREF

  v4 = this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 18);
  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 7036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v5, &EventProfilerEnter, v6, 7036);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 7036);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = v4;
  *(_QWORD *)(v11 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( v4 && *((_DWORD *)v4 + 46) == 1833173002 )
      v13 = v4;
    else
      v13 = 0LL;
    if ( v13 )
    {
      v31 = 0;
      v35 = 0LL;
      v30 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v14 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
              v13,
              &v30,
              &v35);
      v4 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v14;
      if ( v14 == -1071774937 )
      {
        v24 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
        v26 = v35 == 0LL;
        *(_QWORD *)(v24 + 24) = v13;
        if ( !v26 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v27);
        }
        LODWORD(v4) = 1075708747;
      }
      else if ( v14 < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v28 + 24) = v13;
        *(_QWORD *)(v28 + 32) = v4;
        WdLogEvent5_WdError(v28);
      }
      else
      {
        v4 = v35;
        if ( !v35 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v16);
          WdLogEvent5_WdAssertion(v29);
        }
        *(_QWORD *)a2 = v4;
        LODWORD(v4) = 0;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v23 + 24) = v4;
      WdLogEvent5_WdError(v23);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = v4;
    WdLogEvent5_WdError(v22);
    LODWORD(v4) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v32);
  return (unsigned int)v4;
}
