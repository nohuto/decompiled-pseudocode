/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DC190
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DC2CC (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v4; // rbx
  __int64 v5; // rcx
  const GUID *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v29)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v30; // [rsp+28h] [rbp-28h]
  int v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+38h] [rbp-18h]
  char v33; // [rsp+40h] [rbp-10h]
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v34; // [rsp+60h] [rbp+10h] BYREF

  v4 = this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 10);
  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 7003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v5, &EventProfilerEnter, v6, 7003);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 7003LL);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( v4 && *((_DWORD *)v4 + 32) == 1833173004 )
      v13 = v4;
    else
      v13 = 0LL;
    if ( v13 )
    {
      v30 = 0;
      v34 = 0LL;
      v29 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v14 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v13,
              &v29,
              &v34);
      v4 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v14;
      if ( v14 == -1071774902 )
      {
        v21 = WdLogNewEntry5_WdTrace(v16, v15);
        v23 = v34 == 0LL;
        *(_QWORD *)(v21 + 24) = v13;
        if ( !v23 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v22, v15);
          WdLogEvent5_WdAssertion(v26);
        }
        LODWORD(v4) = 1075708679;
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
      v25 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v25 + 24) = v4;
      WdLogEvent5_WdError(v25);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v24 + 24) = 0LL;
    *(_QWORD *)(v24 + 32) = v4;
    WdLogEvent5_WdError(v24);
    LODWORD(v4) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v15);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v31);
  return (unsigned int)v4;
}
