/*
 * XREFs of DxgkGetContextSchedulingPriority @ 0x1C0202600
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetContextSchedulingPriority(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGCONTEXT *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // r9
  int v17; // r14d
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v22; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-A0h]
  char v24; // [rsp+40h] [rbp-98h]
  __int64 v25; // [rsp+48h] [rbp-90h] BYREF
  char v26; // [rsp+50h] [rbp-88h]
  _BYTE v27[24]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v28[96]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+10h]
  struct DXGCONTEXT *v30; // [rsp+F0h] [rbp+18h] BYREF

  v3 = (__int64 *)a1;
  v22 = -1;
  v23 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 2030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2030);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2030);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v22);
    }
    return 3221225485LL;
  }
  v7 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v29 = *v7;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27, *v7, Current, &v30, 0);
  v11 = v30;
  if ( !v30 )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = (unsigned int)v29;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    goto LABEL_11;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)&v25,
    *((struct DXGDEVICE **)v30 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, *((_QWORD *)v11 + 2), 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28);
  if ( v17 >= 0 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    HIDWORD(v29) = *((_DWORD *)v11 + 105);
    *v3 = v29;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    if ( v25 && v26 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v25 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v22);
    return 0LL;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    if ( v25 && v26 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v25 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, v22);
    return (unsigned int)v17;
  }
}
