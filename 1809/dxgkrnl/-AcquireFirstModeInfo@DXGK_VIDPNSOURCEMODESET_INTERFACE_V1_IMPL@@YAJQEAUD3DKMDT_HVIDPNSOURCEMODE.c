/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0284D80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007094 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C012A73C (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  const GUID *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  struct DMMVIDPNTARGETMODE *(__fastcall *v29)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v30; // [rsp+28h] [rbp-28h]
  int v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+38h] [rbp-18h]
  char v33; // [rsp+40h] [rbp-10h]
  __int64 v34; // [rsp+60h] [rbp+10h] BYREF

  v4 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 12);
  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 7001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v5, &EventProfilerEnter, v6, 7001);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 7001);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = v4;
  *(_QWORD *)(v11 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v15 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v15 )
    {
      v30 = 0;
      v34 = 0LL;
      v29 = DMMVIDPNTARGETMODESET::GetFirstMode;
      v17 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v15,
              (__int64)&v29,
              &v34);
      v4 = v17;
      if ( v17 == -1071774902 )
      {
        v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
        *(_QWORD *)(v21 + 24) = v15;
        WdLogEvent5_WdWarning(v21);
        if ( v34 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v23);
        }
        LODWORD(v4) = 1075708747;
      }
      else if ( v17 >= 0 )
      {
        v4 = v34;
        if ( !v34 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v19);
          WdLogEvent5_WdAssertion(v25);
        }
        *(_QWORD *)a2 = v4;
        LODWORD(v4) = 0;
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v24 + 24) = v15;
        *(_QWORD *)(v24 + 32) = v4;
        WdLogEvent5_WdError(v24);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v16 + 24) = v4;
      WdLogEvent5_WdError(v16);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_QWORD *)(v13 + 32) = v4;
    WdLogEvent5_WdError(v13);
    LODWORD(v4) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v31);
  return (unsigned int)v4;
}
