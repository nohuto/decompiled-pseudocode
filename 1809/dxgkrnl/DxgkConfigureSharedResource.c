/*
 * XREFs of DxgkConfigureSharedResource @ 0x1C00F9BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C00F9D9C (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkConfigureSharedResource(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rcx
  DXGDEVICE *v7; // rdi
  __int64 v8; // r9
  int v9; // esi
  unsigned int v10; // edi
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v18; // rcx
  const GUID *v19; // r8
  int v20; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-B0h]
  char v22; // [rsp+40h] [rbp-A8h]
  _QWORD v23[2]; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v24[4]; // [rsp+58h] [rbp-90h]
  void *v25[2]; // [rsp+68h] [rbp-80h]
  _BYTE v26[96]; // [rsp+80h] [rbp-68h] BYREF
  struct DXGDEVICE *v27; // [rsp+F8h] [rbp+10h] BYREF
  struct DXGDEVICE *v28; // [rsp+100h] [rbp+18h] BYREF

  v3 = (_OWORD *)a1;
  v20 = -1;
  v21 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v22 = 1;
    v20 = 2056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2056);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v24 = *v3;
    *(_OWORD *)v25 = v3[1];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, v24[0], Current, &v28);
    v7 = v28;
    if ( v28 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23, v28);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v7, 0, v8, 0);
      v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26);
      if ( v9 < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
        if ( v23[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
        if ( v27 && _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
        if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v18, &EventProfilerExit, v19, v20);
        return (unsigned int)v9;
      }
      else
      {
        v10 = DXGDEVICE::ConfigureSharedResource(v7, v24[2], v25[0], v24[1], (unsigned __int8)v25[1]);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
        if ( v23[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
        if ( v27 && _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
        if ( v22 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v11, &EventProfilerExit, v12, v20);
        }
        return v10;
      }
    }
    v15 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v15 + 24) = v24[0];
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    if ( v27 && _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v20);
  return 3221225485LL;
}
