/*
 * XREFs of DxgkSetYieldPercentage @ 0x1C022C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C015CB1C (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C02288CC (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall DxgkSetYieldPercentage(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  const GUID *v10; // r8
  unsigned int *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+28h] [rbp-40h]
  char v28; // [rsp+30h] [rbp-38h]
  unsigned int v29; // [rsp+38h] [rbp-30h]
  __int64 v30; // [rsp+40h] [rbp-28h] BYREF
  __int64 v31; // [rsp+48h] [rbp-20h]

  v3 = (unsigned int *)a1;
  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 2139;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2139);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2139);
  if ( !CheckTokenForResourceManagerAccess(v4) )
  {
    v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = DXGPROCESS::GetCurrent();
    *(_QWORD *)(v8 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v26);
    }
    return 3221225506LL;
  }
  v30 = 0LL;
  v31 = 0LL;
  v12 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v12 = (unsigned int *)MmUserProbeAddress;
  v29 = *v12;
  v13 = v29;
  if ( v29 < 0x10 )
  {
    v14 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v29, v7);
    *(_QWORD *)(v14 + 24) = 3884LL;
    WdLogEvent5_WdWarning(v14);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v26);
    return 3221225485LL;
  }
  if ( v29 > 0x10 )
    v13 = 16;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(&v30, v3, v13);
  v20 = HIDWORD(v31);
  if ( (unsigned int)(HIDWORD(v31) - 1) > 0x62 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = v20;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
  }
  else
  {
    if ( (v31 & 0xFFFFFFFE) == 0 && !HIDWORD(v30) )
    {
      ApplyResourceManagerPolicyToRenderAdapters(0LL, (__int64)&v30);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v22, &EventProfilerExit, v23, v26);
      return 0LL;
    }
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdWarning(v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v26);
  return 3221225485LL;
}
