/*
 * XREFs of DxgkSetMemoryBudgetTarget @ 0x1C022B620
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

__int64 __fastcall DxgkSetMemoryBudgetTarget(__int64 a1, __int64 a2, const GUID *a3)
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
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h]
  char v27; // [rsp+30h] [rbp-38h]
  unsigned int v28; // [rsp+38h] [rbp-30h]
  __int64 v29; // [rsp+40h] [rbp-28h] BYREF
  __int64 v30; // [rsp+48h] [rbp-20h]

  v3 = (unsigned int *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 2141;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2141);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2141);
  if ( CheckTokenForResourceManagerAccess(v4) )
  {
    v29 = 0LL;
    v30 = 0LL;
    v12 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v12 = (unsigned int *)MmUserProbeAddress;
    v28 = *v12;
    v13 = v28;
    if ( v28 >= 0x10 )
    {
      if ( v28 > 0x10 )
        v13 = 16;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      memmove(&v29, v3, v13);
      if ( (_DWORD)v30
        && (v18 = HIDWORD(v30), HIDWORD(v30))
        && (unsigned int)v30 < 0x64
        && HIDWORD(v30) < 0x64
        && (unsigned int)(HIDWORD(v30) + v30) < 0x64
        && !HIDWORD(v29) )
      {
        ApplyResourceManagerPolicyToRenderAdapters(1LL, (__int64)&v29);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
        if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v20, &EventProfilerExit, v21, v25);
        return 0LL;
      }
      else
      {
        v22 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v22 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v22);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
        if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v23, &EventProfilerExit, v24, v25);
        return 3221225485LL;
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v28, v7);
      *(_QWORD *)(v14 + 24) = 4181LL;
      WdLogEvent5_WdWarning(v14);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v15, &EventProfilerExit, v16, v25);
      return 3221225485LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = DXGPROCESS::GetCurrent();
    *(_QWORD *)(v8 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v25);
    }
    return 3221225506LL;
  }
}
