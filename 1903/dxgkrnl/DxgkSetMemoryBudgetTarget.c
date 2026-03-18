/*
 * XREFs of DxgkSetMemoryBudgetTarget @ 0x1C025FE90
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C017D308 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C025D400 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall DxgkSetMemoryBudgetTarget(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  unsigned int *v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  int v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+28h] [rbp-40h]
  char v34; // [rsp+30h] [rbp-38h]
  unsigned int v35; // [rsp+38h] [rbp-30h]
  __int64 v36; // [rsp+40h] [rbp-28h] BYREF
  __int64 v37; // [rsp+48h] [rbp-20h]

  v3 = (unsigned int *)a1;
  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2141;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2141);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2141LL);
  if ( CheckTokenForResourceManagerAccess(v5, v4) )
  {
    v36 = 0LL;
    v37 = 0LL;
    v16 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v16 = (unsigned int *)MmUserProbeAddress;
    v35 = *v16;
    v17 = v35;
    if ( v35 >= 0x10 )
    {
      if ( v35 > 0x10 )
        v17 = 16;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      memmove(&v36, v3, v17);
      if ( (_DWORD)v37
        && (v23 = HIDWORD(v37), HIDWORD(v37))
        && (unsigned int)v37 < 0x64
        && HIDWORD(v37) < 0x64
        && (unsigned int)(HIDWORD(v37) + v37) < 0x64
        && !HIDWORD(v36) )
      {
        ApplyResourceManagerPolicyToRenderAdapters(1LL, (__int64)&v36);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v25);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v26, &EventProfilerExit, v27, v32);
        return 0LL;
      }
      else
      {
        v28 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v28 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v28);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v29);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v30, &EventProfilerExit, v31, v32);
        return 3221225485LL;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v35, v8);
      *(_QWORD *)(v18 + 24) = 4226LL;
      WdLogEvent5_WdWarning(v18);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v19);
      if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v32);
      return 3221225485LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = DXGPROCESS::GetCurrent(v11, v10);
    *(_QWORD *)(v9 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v12);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v32);
    }
    return 3221225506LL;
  }
}
