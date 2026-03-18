/*
 * XREFs of DxgkConfigureSharedResource @ 0x1C00EF510
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C00EF6FC (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkConfigureSharedResource(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGDEVICE *v10; // rdi
  __int64 v11; // r9
  int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  struct DXGDEVICE *v23; // [rsp+30h] [rbp-118h] BYREF
  int v24; // [rsp+38h] [rbp-110h] BYREF
  __int64 v25; // [rsp+40h] [rbp-108h]
  char v26; // [rsp+48h] [rbp-100h]
  struct DXGDEVICE *v27; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v28[2]; // [rsp+58h] [rbp-F0h] BYREF
  unsigned int v29[4]; // [rsp+68h] [rbp-E0h]
  void *v30[2]; // [rsp+78h] [rbp-D0h]
  _BYTE v31[160]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (_OWORD *)a1;
  v24 = -1;
  v25 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 2056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2056);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2056LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v18 = WdLogNewEntry5_WdError(v5, v4, 0LL);
    v13 = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    goto LABEL_13;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v29 = *v3;
  *(_OWORD *)v30 = v3[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, v29[0], Current, &v27);
  v10 = v27;
  if ( !v27 )
  {
    v19 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v19 + 24) = v29[0];
    v13 = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    if ( v23 )
    {
LABEL_11:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
    }
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v14);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v15, &EventProfilerExit, v16, v24);
    }
    return v13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28, v27);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v10, 0, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((__int64)v31, 0xFFFFFFFF, 0LL);
  if ( v12 >= 0 )
  {
    v13 = DXGDEVICE::ConfigureSharedResource(v10, v29[2], v30[0], v29[1], (unsigned __int8)v30[1]);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    if ( v28[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
    if ( !v23 )
      goto LABEL_13;
    goto LABEL_11;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
  if ( v28[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
  if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v20);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v12;
}
