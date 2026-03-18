/*
 * XREFs of DxgkGetContextInProcessSchedulingPriority @ 0x1C02329E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006810 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000D348 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000D3B8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetInProcessSchedulingPriority@DXGCONTEXT@@QEAAHXZ @ 0x1C020D7F4 (-GetInProcessSchedulingPriority@DXGCONTEXT@@QEAAHXZ.c)
 */

__int64 __fastcall DxgkGetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, const GUID *a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v28; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-F0h]
  char v30; // [rsp+40h] [rbp-E8h]
  unsigned int v31[2]; // [rsp+48h] [rbp-E0h]
  DXGCONTEXT *v32; // [rsp+50h] [rbp-D8h] BYREF
  char v33; // [rsp+58h] [rbp-D0h]
  _BYTE v34[16]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v35[160]; // [rsp+70h] [rbp-B8h] BYREF

  v3 = (_QWORD *)a1;
  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2085;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2085);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2085LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, 0LL);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v10);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v28);
    }
    return 3221225485LL;
  }
  v14 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v14 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v31 = *v14;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34, v31[0], Current, &v32, 0);
  v18 = (__int64 *)v32;
  if ( !v32 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v31[0];
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)&v32,
    *((struct DXGDEVICE **)v32 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, v18[2], 0, v20, 0);
  v21 = COREDEVICEACCESS::AcquireShared((__int64)v35, 0xFFFFFFFF, 0LL);
  if ( v21 >= 0 )
  {
    v31[1] = DXGCONTEXT::GetInProcessSchedulingPriority((DXGCONTEXT *)v18);
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *v3 = *(_QWORD *)v31;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
    if ( v32 && v33 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v32 + 13));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v25);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v28);
    return 0LL;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
    if ( v32 && v33 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v32 + 13));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v22);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v28);
    return (unsigned int)v21;
  }
}
