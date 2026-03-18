/*
 * XREFs of DxgkGetYieldPercentage @ 0x1C017CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C017D308 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetYieldPercentage(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int *v7; // rax
  size_t v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  const void *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rax
  int v22; // esi
  int v23; // r14d
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  const GUID *v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  const GUID *v38; // r8
  int v39; // [rsp+20h] [rbp-58h] BYREF
  __int64 v40; // [rsp+28h] [rbp-50h]
  char v41; // [rsp+30h] [rbp-48h]
  unsigned int v42; // [rsp+38h] [rbp-40h]
  _BYTE v43[16]; // [rsp+40h] [rbp-38h] BYREF
  int v44; // [rsp+50h] [rbp-28h]
  __int64 v45; // [rsp+58h] [rbp-20h] BYREF
  __int64 v46; // [rsp+60h] [rbp-18h]

  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2142;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2142);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2142LL);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v44 = 0;
    v45 = 0LL;
    v46 = 0LL;
    v7 = (unsigned int *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (unsigned int *)MmUserProbeAddress;
    v42 = *v7;
    v8 = v42;
    if ( v42 >= 0x10 )
    {
      if ( v42 > 0x10 )
        v8 = 16LL;
      v42 = v8;
      v14 = (const void *)a1;
      if ( a1 >= MmUserProbeAddress )
        v14 = (const void *)MmUserProbeAddress;
      memmove(&v45, v14, v8);
      if ( HIDWORD(v45) )
      {
        v35 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(_QWORD *)(v35 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v35);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v36);
        if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v37, &EventProfilerExit, v38, v39);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal(v16, v15);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v43, (struct DXGGLOBAL *)((char *)Global + 408), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
        v21 = DXGGLOBAL::GetGlobal(v20, v19);
        v22 = ((unsigned __int8)v46 ^ (unsigned __int8)*((_DWORD *)v21 + 75979)) & 1 ^ v46;
        LODWORD(v46) = v22;
        v23 = *((_DWORD *)v21 + 75976);
        HIDWORD(v46) = v23;
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43);
        v24 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v24 = (_DWORD *)MmUserProbeAddress;
        *v24 = v23;
        v25 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v25 = (_DWORD *)MmUserProbeAddress;
        *v25 = v22;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v26);
        if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v27, &EventProfilerExit, v28, v39);
        return 0LL;
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v42);
      *(_QWORD *)(v9 + 24) = 4346LL;
      WdLogEvent5_WdWarning(v9);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v10);
      if ( v41 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v11, &EventProfilerExit, v12, v39);
      }
      return 3221225485LL;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v29 + 24) = DXGPROCESS::GetCurrent(v31, v30);
    *(_QWORD *)(v29 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v32);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v33, &EventProfilerExit, v34, v39);
    return 3221225506LL;
  }
}
