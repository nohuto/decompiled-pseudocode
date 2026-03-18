/*
 * XREFs of DxgkGetYieldPercentage @ 0x1C015C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C015CB1C (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetYieldPercentage(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int *v7; // rax
  size_t v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  const GUID *v11; // r8
  const void *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  struct DXGGLOBAL *v19; // rax
  int v20; // esi
  int v21; // r14d
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rcx
  const GUID *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  int v32; // [rsp+20h] [rbp-58h] BYREF
  __int64 v33; // [rsp+28h] [rbp-50h]
  char v34; // [rsp+30h] [rbp-48h]
  unsigned int v35; // [rsp+38h] [rbp-40h]
  _BYTE v36[16]; // [rsp+40h] [rbp-38h] BYREF
  int v37; // [rsp+50h] [rbp-28h]
  __int64 v38; // [rsp+58h] [rbp-20h] BYREF
  __int64 v39; // [rsp+60h] [rbp-18h]

  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2142;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2142);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2142);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v37 = 0;
    v38 = 0LL;
    v39 = 0LL;
    v7 = (unsigned int *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (unsigned int *)MmUserProbeAddress;
    v35 = *v7;
    v8 = v35;
    if ( v35 >= 0x10 )
    {
      if ( v35 > 0x10 )
        v8 = 16LL;
      v35 = v8;
      v13 = (const void *)a1;
      if ( a1 >= MmUserProbeAddress )
        v13 = (const void *)MmUserProbeAddress;
      memmove(&v38, v13, v8);
      if ( HIDWORD(v38) )
      {
        v29 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v29 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v29);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v30, &EventProfilerExit, v31, v32);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal(v15);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, (struct DXGGLOBAL *)((char *)Global + 408), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
        v19 = DXGGLOBAL::GetGlobal(v18);
        v20 = ((unsigned __int8)v39 ^ (unsigned __int8)*((_DWORD *)v19 + 5063)) & 1 ^ v39;
        LODWORD(v39) = v20;
        v21 = *((_DWORD *)v19 + 5060);
        HIDWORD(v39) = v21;
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
        v22 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v22 = (_DWORD *)MmUserProbeAddress;
        *v22 = v21;
        v23 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v23 = (_DWORD *)MmUserProbeAddress;
        *v23 = v20;
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v36);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v24, &EventProfilerExit, v25, v32);
        return 0LL;
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v35);
      *(_QWORD *)(v9 + 24) = 4301LL;
      WdLogEvent5_WdWarning(v9);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( v34 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v10, &EventProfilerExit, v11, v32);
      }
      return 3221225485LL;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v26 + 24) = DXGPROCESS::GetCurrent();
    *(_QWORD *)(v26 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v32);
    return 3221225506LL;
  }
}
