/*
 * XREFs of DxgkWaitForIdle @ 0x1C0202FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF21C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForIdle(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v22; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-D0h]
  char v24; // [rsp+40h] [rbp-C8h]
  _BYTE v25[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h]
  char v27; // [rsp+58h] [rbp-B0h]
  _QWORD v28[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v29[32]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v30[120]; // [rsp+90h] [rbp-78h] BYREF
  struct DXGDEVICE *v31; // [rsp+120h] [rbp+18h] BYREF
  struct DXGDEVICE *v32; // [rsp+128h] [rbp+20h] BYREF

  v3 = (unsigned int *)a1;
  v22 = -1;
  v23 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 2045;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2045);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2045);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v22);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v7 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, v7, Current, &v32);
  v9 = v32;
  if ( !v32 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v7;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    if ( v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28, v32);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v29, (struct _KTHREAD **)v9 + 14);
  v26 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
  v27 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v9, 0, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30);
  v18 = v15;
  if ( v15 < 0 )
  {
    v19 = WdLogNewEntry5_WdEvent(v17, v16);
    *(_QWORD *)(v19 + 24) = v18;
    *(_QWORD *)(v19 + 32) = v9;
    WdLogEvent5_WdEvent(v19);
  }
  else
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v30);
    DXGDEVICE::FlushScheduler(v9, 1u);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
  if ( v27 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  if ( v28[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
  if ( v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v22);
  return (unsigned int)v18;
}
