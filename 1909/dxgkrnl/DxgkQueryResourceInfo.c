/*
 * XREFs of DxgkQueryResourceInfo @ 0x1C00F21F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0023BC0 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F3EC4 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkQueryResourceInfo(_OWORD *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  _OWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGDEVICE *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  int Resource; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  struct DXGDEVICE *v35; // [rsp+30h] [rbp-128h] BYREF
  int v36; // [rsp+38h] [rbp-120h] BYREF
  __int64 v37; // [rsp+40h] [rbp-118h]
  char v38; // [rsp+48h] [rbp-110h]
  struct DXGDEVICE *v39; // [rsp+50h] [rbp-108h] BYREF
  struct DXGDEVICE *v40; // [rsp+58h] [rbp-100h] BYREF
  char v41; // [rsp+60h] [rbp-F8h]
  unsigned int v42[4]; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v43; // [rsp+78h] [rbp-E0h]
  _BYTE v44[160]; // [rsp+90h] [rbp-C8h] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2004);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2004LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4, 0LL);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v8);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v36);
    }
    return 3221225485LL;
  }
  v12 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v42 = *v12;
  v43 = v12[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, v42[0], Current, &v39);
  v16 = v39;
  if ( !v39 )
  {
    v17 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = v42[0];
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    goto LABEL_7;
  }
  v40 = v39;
  v41 = 0;
  DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v40);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v16, 0, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((__int64)v44, 0xFFFFFFFF, 0LL);
  v23 = v19;
  if ( v19 >= 0 )
  {
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v16, v42, v42[1]);
    if ( Resource >= 0 )
    {
      if ( (unsigned __int64)(a1 + 2) > MmUserProbeAddress || a1 + 2 <= a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = *(_OWORD *)v42;
      a1[1] = v43;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
      if ( v40 && v41 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v40 + 13));
        KeLeaveCriticalRegion();
      }
      if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v32);
      if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v33, &EventProfilerExit, v34, v36);
      return 0LL;
    }
    else
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
      if ( v40 && v41 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v40 + 13));
        KeLeaveCriticalRegion();
      }
      if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v29);
      if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v30, &EventProfilerExit, v31, v36);
      return (unsigned int)Resource;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = v16;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdWarning(v24);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    if ( v40 && v41 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v40 + 13));
      KeLeaveCriticalRegion();
    }
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v25);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v36);
    return (unsigned int)v23;
  }
}
