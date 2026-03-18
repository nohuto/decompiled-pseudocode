/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C02BD0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0003EB8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DBC8C (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
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
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  const GUID *v29; // r8
  struct DMMVIDPNSOURCEMODE *(__fastcall *v31)(DMMVIDPNSOURCEMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v32; // [rsp+28h] [rbp-28h]
  int v33; // [rsp+30h] [rbp-20h] BYREF
  __int64 v34; // [rsp+38h] [rbp-18h]
  char v35; // [rsp+40h] [rbp-10h]
  __int64 v36; // [rsp+60h] [rbp+10h] BYREF

  v4 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 12);
  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 7001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v5, &EventProfilerEnter, v6, 7001);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 7001LL);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v17 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v17 )
    {
      v32 = 0;
      v36 = 0LL;
      v31 = DMMVIDPNSOURCEMODESET::GetFirstMode;
      v20 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v17,
              (__int64)&v31,
              &v36);
      v4 = v20;
      if ( v20 == -1071774902 )
      {
        v23 = WdLogNewEntry5_WdWarning(v21, v14, v22);
        *(_QWORD *)(v23 + 24) = v17;
        WdLogEvent5_WdWarning(v23);
        if ( v36 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v24, v14);
          WdLogEvent5_WdAssertion(v25);
        }
        LODWORD(v4) = 1075708747;
      }
      else if ( v20 >= 0 )
      {
        v4 = v36;
        if ( !v36 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v21, v14);
          WdLogEvent5_WdAssertion(v27);
        }
        *(_QWORD *)a2 = v4;
        LODWORD(v4) = 0;
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v21, v14, v22);
        *(_QWORD *)(v26 + 24) = v17;
        *(_QWORD *)(v26 + 32) = v4;
        WdLogEvent5_WdError(v26);
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v16, v15, v18);
      *(_QWORD *)(v19 + 24) = v4;
      WdLogEvent5_WdError(v19);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_QWORD *)(v13 + 32) = v4;
    WdLogEvent5_WdError(v13);
    LODWORD(v4) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v14);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v33);
  return (unsigned int)v4;
}
