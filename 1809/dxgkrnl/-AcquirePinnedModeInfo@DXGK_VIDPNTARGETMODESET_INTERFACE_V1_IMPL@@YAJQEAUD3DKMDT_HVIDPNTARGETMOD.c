/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D9210
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C000A52C (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C001B040 (-GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rcx
  const GUID *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v13; // rbx
  bool v14; // zf
  struct DMMVIDPNTARGETMODE *PinnedMode; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DMMVIDPNTARGETMODE *v20; // rdi
  __int64 v21; // rcx
  _QWORD *Instance; // r14
  int v23; // edi
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v36)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v37; // [rsp+28h] [rbp-28h]
  int v38; // [rsp+30h] [rbp-20h] BYREF
  __int64 v39; // [rsp+38h] [rbp-18h]
  char v40; // [rsp+40h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 14);
  v38 = -1;
  v39 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v40 = 1;
    v38 = 7011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v5, &EventProfilerEnter, v6, 7011);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 7011);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v30 + 24) = 0LL;
    *(_QWORD *)(v30 + 32) = this;
    WdLogEvent5_WdError(v30);
    v23 = -1073741811;
    goto LABEL_12;
  }
  *(_QWORD *)a2 = 0LL;
  if ( this && *((_DWORD *)this + 32) == 1833173005 )
    v13 = this;
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v31 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v31 + 24) = this;
    WdLogEvent5_WdError(v31);
    v23 = -1071774967;
    goto LABEL_12;
  }
  v37 = 0;
  v14 = *((_BYTE *)v13 + 136) == 0;
  v36 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( v14 )
  {
    v32 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v32 + 24) = v13;
    WdLogEvent5_WdError(v32);
    v23 = -1071774944;
LABEL_22:
    v35 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v35 + 32) = v23;
    *(_QWORD *)(v35 + 24) = v13;
    WdLogEvent5_WdError(v35);
    goto LABEL_12;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(v13);
  v20 = PinnedMode;
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = &v36;
    v23 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v36, v27, v28, v29) + 24) = v13;
    goto LABEL_12;
  }
  Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance((__int64)PinnedMode);
  if ( !Instance )
  {
    v34 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v34 + 24) = v13;
    WdLogEvent5_WdLowResource(v34);
    operator delete(0LL);
    v23 = -1073741801;
    goto LABEL_22;
  }
  operator delete(0LL);
  *((_DWORD *)Instance + 4) = *((_DWORD *)v20 + 6);
  *(_OWORD *)(Instance + 3) = *(_OWORD *)((char *)v20 + 72);
  *(_OWORD *)(Instance + 5) = *(_OWORD *)((char *)v20 + 88);
  *(_OWORD *)(Instance + 7) = *(_OWORD *)((char *)v20 + 104);
  Instance[9] = *((_QWORD *)v20 + 15);
  *((_DWORD *)Instance + 20) = *((_DWORD *)v20 + 32);
  operator delete(0LL);
  v23 = 0;
  *(_QWORD *)a2 = Instance + 2;
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v38);
  return (unsigned int)v23;
}
