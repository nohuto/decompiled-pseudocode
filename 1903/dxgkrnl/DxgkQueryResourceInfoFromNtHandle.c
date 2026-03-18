/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C00ECD30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006810 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00ED370 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r8
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const GUID *v28; // r8
  HANDLE v29; // r15
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  int Resource; // esi
  __int64 v36; // rdx
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  const GUID *v41; // r8
  struct DXGDEVICE *v42; // [rsp+30h] [rbp-138h] BYREF
  int v43; // [rsp+38h] [rbp-130h] BYREF
  __int64 v44; // [rsp+40h] [rbp-128h]
  char v45; // [rsp+48h] [rbp-120h]
  struct DXGDEVICE *v46; // [rsp+50h] [rbp-118h] BYREF
  __int64 v47; // [rsp+58h] [rbp-110h] BYREF
  char v48; // [rsp+60h] [rbp-108h]
  PVOID Object; // [rsp+68h] [rbp-100h] BYREF
  HANDLE Handle[2]; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v51; // [rsp+80h] [rbp-E8h]
  __int64 v52; // [rsp+90h] [rbp-D8h]
  _BYTE v53[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v43 = -1;
  v44 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v45 = 1;
    v43 = 2073;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2073);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2073LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4, 0LL);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v9);
    if ( v45 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v10, &EventProfilerExit, v11, v43);
    }
    return v8;
  }
  v52 = 0LL;
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v13;
  v51 = v13[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, (unsigned int)Handle[0], Current, &v46);
  v17 = v46;
  if ( !v46 )
  {
    v18 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = LODWORD(Handle[0]);
    v8 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_15:
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v47, v46);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v17, 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((__int64)v53, 0xFFFFFFFF, 0LL);
  v24 = v20;
  if ( v20 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v25[4] = v24;
    goto LABEL_20;
  }
  v29 = Handle[1];
  v30 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v24 = v30;
  if ( v30 == -1073741788 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
    v34[3] = v17;
    v34[4] = v29;
    v8 = -1073741788;
    v34[5] = -1073741788LL;
    WdLogEvent5_WdWarning(v34);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    if ( v47 && v48 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v47 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_15;
  }
  if ( v30 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
    v25[4] = v29;
    v25[5] = v24;
LABEL_20:
    v25[3] = v17;
    WdLogEvent5_WdWarning(v25);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    if ( v47 && v48 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v47 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v26);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v43);
    return (unsigned int)v24;
  }
  Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v17, Handle, v33, Object);
  ObfDereferenceObject(Object);
  if ( Resource >= 0 )
  {
    if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a1 = *(_OWORD *)Handle;
    *(_OWORD *)(a1 + 16) = v51;
    *(_QWORD *)(a1 + 32) = v52;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    if ( v47 && v48 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v47 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v39);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v40, &EventProfilerExit, v41, v43);
    return 0LL;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    if ( v47 && v48 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v47 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v36);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v37, &EventProfilerExit, v38, v43);
    return (unsigned int)Resource;
  }
}
