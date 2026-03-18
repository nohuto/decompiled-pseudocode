/*
 * XREFs of DxgkGetAllocationPriority @ 0x1C01DA300
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C01D8920 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 */

__int64 __fastcall DxgkGetAllocationPriority(__int64 a1, __int64 a2, const GUID *a3)
{
  _D3DKMT_GETALLOCATIONPRIORITY *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  DXGDEVICE *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  unsigned int AllocationPriority; // edi
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v25; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-B0h]
  char v27; // [rsp+40h] [rbp-A8h]
  __int64 v28; // [rsp+48h] [rbp-A0h] BYREF
  char v29; // [rsp+50h] [rbp-98h]
  _D3DKMT_GETALLOCATIONPRIORITY v30; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v31[96]; // [rsp+80h] [rbp-68h] BYREF
  struct DXGDEVICE *v32; // [rsp+F8h] [rbp+10h] BYREF
  struct DXGDEVICE *v33; // [rsp+100h] [rbp+18h] BYREF

  v3 = (_D3DKMT_GETALLOCATIONPRIORITY *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 2138;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2138);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2138);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v10, &EventProfilerExit, v11, v25);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_GETALLOCATIONPRIORITY *)MmUserProbeAddress;
  v30 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, v30.hDevice, Current, &v33);
  v8 = v33;
  if ( !v33 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v30.hDevice;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v28, v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v8, 0, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31);
  v18 = v14;
  if ( v14 >= 0 )
  {
    AllocationPriority = DXGDEVICE::GetAllocationPriority(v8, &v30);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    if ( v28 && v29 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v28 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v25);
    return AllocationPriority;
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v8;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdWarning(v19);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    if ( v28 && v29 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v28 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v25);
    return (unsigned int)v18;
  }
}
