/*
 * XREFs of DxgkQueryResourceInfo @ 0x1C00F3940
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F2090 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryResourceInfo(_OWORD *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  _OWORD *v7; // rax
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  int Resource; // esi
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v28; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C0h]
  char v30; // [rsp+40h] [rbp-B8h]
  __int64 v31; // [rsp+48h] [rbp-B0h] BYREF
  char v32; // [rsp+50h] [rbp-A8h]
  unsigned int v33[4]; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+68h] [rbp-90h]
  _BYTE v35[96]; // [rsp+80h] [rbp-78h] BYREF
  struct DXGDEVICE *v36; // [rsp+108h] [rbp+10h] BYREF
  struct DXGDEVICE *v37; // [rsp+110h] [rbp+18h] BYREF

  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2004);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2004);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v28);
    }
    return 3221225485LL;
  }
  v7 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v33 = *v7;
  v34 = v7[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, v33[0], Current, &v37);
  v9 = v37;
  if ( !v37 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v33[0];
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v31, v37);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, (__int64)v9, 0, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35);
  v19 = v15;
  if ( v15 >= 0 )
  {
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)v9, v33, v33[1]);
    if ( Resource >= 0 )
    {
      if ( (unsigned __int64)(a1 + 2) > MmUserProbeAddress || a1 + 2 <= a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = *(_OWORD *)v33;
      a1[1] = v34;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
      if ( v31 && v32 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v31 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, v28);
      return 0LL;
    }
    else
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
      if ( v31 && v32 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v31 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v24, &EventProfilerExit, v25, v28);
      return (unsigned int)Resource;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = v9;
    *(_QWORD *)(v20 + 32) = v19;
    WdLogEvent5_WdWarning(v20);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
    if ( v31 && v32 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v31 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v28);
    return (unsigned int)v19;
  }
}
