/*
 * XREFs of DxgkConfigureSharedResource @ 0x1C011F210
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C011F3FC (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkConfigureSharedResource(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGDEVICE *v12; // rdi
  __int64 v13; // r9
  int v14; // esi
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  struct DXGDEVICE *v25; // [rsp+30h] [rbp-118h] BYREF
  int v26; // [rsp+38h] [rbp-110h] BYREF
  __int64 v27; // [rsp+40h] [rbp-108h]
  char v28; // [rsp+48h] [rbp-100h]
  struct DXGDEVICE *v29; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v30[2]; // [rsp+58h] [rbp-F0h] BYREF
  unsigned int v31[4]; // [rsp+68h] [rbp-E0h]
  void *v32[2]; // [rsp+78h] [rbp-D0h]
  _BYTE v33[160]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (_OWORD *)a1;
  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 2056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2056);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2056LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v20 = WdLogNewEntry5_WdError(v7, v6, 0LL);
    v15 = -1073741811;
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    goto LABEL_13;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v31 = *v3;
  *(_OWORD *)v32 = v3[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, v31[0], Current, &v29);
  v12 = v29;
  if ( !v29 )
  {
    v21 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v21 + 24) = v31[0];
    v15 = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    if ( v25 )
    {
LABEL_11:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    }
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v16);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v26);
    }
    return v15;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v29);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v12, 0, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((__int64)v33, 0xFFFFFFFF, 0LL);
  if ( v14 >= 0 )
  {
    v15 = DXGDEVICE::ConfigureSharedResource(v12, v31[2], v32[0], v31[1], (unsigned __int8)v32[1]);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    if ( !v25 )
      goto LABEL_13;
    goto LABEL_11;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
  if ( v30[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
  if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v22);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v26);
  return (unsigned int)v14;
}
