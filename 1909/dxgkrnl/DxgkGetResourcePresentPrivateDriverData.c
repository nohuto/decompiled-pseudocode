/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C02091F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023D5C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C003BD30 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C013D838 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, const GUID *a3)
{
  struct CRefCountedBuffer *v3; // r15
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD **v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _EX_RUNDOWN_REF *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DXGDEVICE *v29; // r13
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v41; // rax
  KSPIN_LOCK *v42; // rcx
  __int64 v43; // rax
  size_t v44; // r8
  _DWORD *v45; // rdx
  void *v46; // rcx
  struct DXGDEVICE *v47; // [rsp+30h] [rbp-128h] BYREF
  struct _EX_RUNDOWN_REF *v48; // [rsp+38h] [rbp-120h] BYREF
  int v49; // [rsp+40h] [rbp-118h] BYREF
  __int64 v50; // [rsp+48h] [rbp-110h]
  char v51; // [rsp+50h] [rbp-108h]
  ULONG64 v52; // [rsp+58h] [rbp-100h]
  unsigned int v53; // [rsp+60h] [rbp-F8h]
  struct CRefCountedBuffer *v54; // [rsp+68h] [rbp-F0h] BYREF
  size_t Size[2]; // [rsp+70h] [rbp-E8h] BYREF
  struct _EX_RUNDOWN_REF *v56; // [rsp+80h] [rbp-D8h] BYREF
  struct DXGDEVICE *v57; // [rsp+88h] [rbp-D0h] BYREF
  _BYTE v58[160]; // [rsp+90h] [rbp-C8h] BYREF

  v52 = a1;
  v3 = 0LL;
  v54 = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  v49 = -1;
  v50 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v51 = 1;
    v49 = 2123;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(MmUserProbeAddress, &EventProfilerEnter, a3, 2123);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2123LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v11 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v13);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v14, &EventProfilerExit, v15, v49);
    }
    return 3221225485LL;
  }
  v48 = 0LL;
  ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                              (__int64)Current,
                                              (DXGRESOURCEREFERENCE *)&v56,
                                              Size[0]);
  DXGRESOURCEREFERENCE::MoveAssign(&v48, ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56, v18);
  v22 = v48;
  if ( !v48 )
  {
    v23 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = LODWORD(Size[0]);
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
LABEL_15:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v48, v24);
    goto LABEL_9;
  }
  v53 = *(_DWORD *)(v48[1].Count + 332);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, v53, v11, &v57);
  v29 = v57;
  if ( !v57 )
  {
    v30 = WdLogNewEntry5_WdError(v26, v25, v27);
    *(_QWORD *)(v30 + 24) = v53;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
LABEL_18:
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    goto LABEL_15;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v58, (__int64)v57, 0, v28, 0);
  v31 = COREDEVICEACCESS::AcquireShared((__int64)v58, 0xFFFFFFFF, 0LL);
  v35 = v31;
  if ( v31 >= 0 )
  {
    if ( (HIDWORD(v22->Ptr) & 1) == 0 )
    {
      v41 = WdLogNewEntry5_WdError(v33, v32, v34);
      *(_QWORD *)(v41 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v41);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v58);
      goto LABEL_18;
    }
    v42 = *(KSPIN_LOCK **)(v22[7].Count + 168);
    if ( v42 )
    {
      LODWORD(v35) = GetPresentPrivateDriverDataFromResource(
                       v42,
                       (KSPIN_LOCK *)&v54,
                       (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)Size);
      v3 = v54;
      v44 = HIDWORD(Size[0]);
    }
    else
    {
      v43 = WdLogNewEntry5_WdWarning(0LL, v32, v34);
      *(_QWORD *)(v43 + 24) = 0LL;
      *(_QWORD *)(v43 + 32) = 13139LL;
      WdLogEvent5_WdWarning(v43);
      v44 = 0LL;
      HIDWORD(Size[0]) = 0;
    }
    v45 = (_DWORD *)(v52 + 4);
    if ( v52 + 4 >= MmUserProbeAddress )
      v45 = (_DWORD *)MmUserProbeAddress;
    *v45 = v44;
    if ( (_DWORD)v44 && v3 )
    {
      v46 = (void *)Size[1];
      if ( v44 + Size[1] > MmUserProbeAddress || v44 + Size[1] <= Size[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v46, (char *)v3 + 8, v44);
    }
    if ( v3 )
      CRefCountedBuffer::RefCountedBufferRelease(v3);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v58);
    if ( v47 )
      goto LABEL_23;
  }
  else
  {
    v36 = WdLogNewEntry5_WdEvent(v33);
    *(_QWORD *)(v36 + 24) = v35;
    *(_QWORD *)(v36 + 32) = v29;
    WdLogEvent5_WdEvent(v36);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v58);
    if ( v47 )
    {
LABEL_23:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v48, v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v38);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v49);
  return (unsigned int)v35;
}
