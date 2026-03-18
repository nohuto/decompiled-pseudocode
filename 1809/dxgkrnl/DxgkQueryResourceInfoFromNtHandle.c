/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C00F0EB0
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F152C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, const GUID *a3)
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
  _QWORD *v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  HANDLE v23; // r15
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  int Resource; // esi
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v34; // rcx
  const GUID *v35; // r8
  int v36; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-D0h]
  char v38; // [rsp+40h] [rbp-C8h]
  __int64 v39; // [rsp+48h] [rbp-C0h] BYREF
  char v40; // [rsp+50h] [rbp-B8h]
  HANDLE Handle[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  _BYTE v44[136]; // [rsp+80h] [rbp-88h] BYREF
  struct DXGDEVICE *v45; // [rsp+118h] [rbp+10h] BYREF
  PVOID Object; // [rsp+120h] [rbp+18h] BYREF
  struct DXGDEVICE *v47; // [rsp+128h] [rbp+20h] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2073;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2073);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2073);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v36);
    }
    return 3221225485LL;
  }
  v7 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v7;
  v42 = v7[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, (unsigned int)Handle[0], Current, &v47);
  v9 = v47;
  if ( !v47 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = LODWORD(Handle[0]);
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v39, v47);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v9, 0, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
  v19 = v15;
  if ( v15 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v20[4] = v19;
    goto LABEL_19;
  }
  v23 = Handle[1];
  v24 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v19 = v24;
  if ( v24 == -1073741788 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
    v28[3] = v9;
    v28[4] = v23;
    v28[5] = -1073741788LL;
    WdLogEvent5_WdWarning(v28);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    if ( v39 && v40 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v39 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v36);
    return 3221225508LL;
  }
  else
  {
    if ( v24 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v20[4] = v23;
      v20[5] = v19;
LABEL_19:
      v20[3] = v9;
      WdLogEvent5_WdWarning(v20);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
      if ( v39 && v40 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v39 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v21, &EventProfilerExit, v22, v36);
      return (unsigned int)v19;
    }
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v9, Handle, v27, Object);
    ObfDereferenceObject(Object);
    if ( Resource >= 0 )
    {
      if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a1 = *(_OWORD *)Handle;
      *(_OWORD *)(a1 + 16) = v42;
      *(_QWORD *)(a1 + 32) = v43;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
      if ( v39 && v40 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v39 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v34, &EventProfilerExit, v35, v36);
      return 0LL;
    }
    else
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
      if ( v39 && v40 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v39 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v32, &EventProfilerExit, v33, v36);
      return (unsigned int)Resource;
    }
  }
}
