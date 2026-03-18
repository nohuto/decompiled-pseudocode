/*
 * XREFs of ?AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C014CFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0006424 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00E707C (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v28)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v29; // [rsp+28h] [rbp-28h]
  int v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+38h] [rbp-18h]
  char v32; // [rsp+40h] [rbp-10h]
  __int64 v33; // [rsp+68h] [rbp+18h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 6005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 6005);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 6005LL);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v10 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v10 )
    {
      v29 = 0;
      v33 = 0LL;
      v28 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v12 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
              v10,
              (__int64)&v28,
              &v33);
      v15 = v12;
      if ( v12 == -1071774902 )
      {
        v22 = WdLogNewEntry5_WdTrace(v14, v13);
        v24 = v33 == 0;
        *(_QWORD *)(v22 + 24) = v10;
        if ( !v24 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v23, v13);
          WdLogEvent5_WdAssertion(v25);
        }
        v15 = 1075708679;
      }
      else if ( v12 < 0 )
      {
        v26 = WdLogNewEntry5_WdDmmEvent(v14, v13);
        *(_QWORD *)(v26 + 24) = v10;
        WdLogEvent5_WdDmmEvent(v26);
      }
      else
      {
        v16 = v33;
        if ( !v33 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v14, v13);
          WdLogEvent5_WdAssertion(v27);
        }
        *(_QWORD *)a2 = v16;
        v15 = 0;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v9, v8, v11);
      *(_QWORD *)(v21 + 24) = this;
      WdLogEvent5_WdError(v21);
      v15 = -1071774967;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_QWORD *)(v20 + 32) = this;
    WdLogEvent5_WdError(v20);
    v15 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v13);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v30);
  return v15;
}
