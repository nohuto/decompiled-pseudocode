/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C01DA690
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011958 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00212B0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C00352B0 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, const GUID *a3)
{
  struct CRefCountedBuffer *v3; // r15
  _OWORD *v4; // rax
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r12
  __int64 v7; // rax
  struct DXGRESOURCE **ResourceSafe; // rax
  __int64 v9; // rcx
  struct _EX_RUNDOWN_REF *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  struct DXGDEVICE *v14; // r13
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  KSPIN_LOCK *v28; // rcx
  __int64 v29; // rax
  size_t v30; // r8
  _DWORD *v31; // rdx
  void *v32; // rcx
  int v33; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C0h]
  char v35; // [rsp+40h] [rbp-B8h]
  struct CRefCountedBuffer *v36; // [rsp+48h] [rbp-B0h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v38; // [rsp+60h] [rbp-98h] BYREF
  struct DXGDEVICE *v39; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v40[136]; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v42; // [rsp+108h] [rbp+10h]
  struct DXGDEVICE *v43; // [rsp+110h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+118h] [rbp+20h] BYREF

  v3 = 0LL;
  v36 = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 2123;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(MmUserProbeAddress, &EventProfilerEnter, a3, 2123);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2123);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_27:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, v33);
    }
    return 3221225485LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v44, 0LL);
  ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                          (__int64)Current,
                                          (DXGRESOURCEREFERENCE *)&v38,
                                          Size[0]);
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v44, ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v38);
  v10 = v44;
  if ( !v44 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = LODWORD(Size[0]);
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_26:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v44);
    goto LABEL_27;
  }
  v42 = *(_DWORD *)(v44[1].Count + 332);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, v42, Current, &v39);
  v14 = v39;
  if ( !v39 )
  {
    v15 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v15 + 24) = v42;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_23:
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    goto LABEL_26;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v39, 0, v13, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40);
  v20 = v16;
  if ( v16 >= 0 )
  {
    if ( (HIDWORD(v10->Ptr) & 1) == 0 )
    {
      v25 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v25 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v25);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
      goto LABEL_23;
    }
    v28 = *(KSPIN_LOCK **)(v10[7].Count + 168);
    if ( v28 )
    {
      LODWORD(v20) = GetPresentPrivateDriverDataFromResource(
                       v28,
                       (KSPIN_LOCK *)&v36,
                       (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)Size);
      v3 = v36;
      v30 = HIDWORD(Size[0]);
    }
    else
    {
      v29 = WdLogNewEntry5_WdWarning(0LL, v17, v19);
      *(_QWORD *)(v29 + 24) = 0LL;
      *(_QWORD *)(v29 + 32) = 13140LL;
      WdLogEvent5_WdWarning(v29);
      v30 = 0LL;
      HIDWORD(Size[0]) = 0;
    }
    v31 = (_DWORD *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v31 = (_DWORD *)MmUserProbeAddress;
    *v31 = v30;
    if ( (_DWORD)v30 && v3 )
    {
      v32 = (void *)Size[1];
      if ( v30 + Size[1] > MmUserProbeAddress || v30 + Size[1] <= Size[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v32, (char *)v3 + 8, v30);
    }
    if ( v3 )
      CRefCountedBuffer::RefCountedBufferRelease(v3);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
    if ( v43 )
      goto LABEL_15;
  }
  else
  {
    v21 = WdLogNewEntry5_WdEvent(v18, v17);
    *(_QWORD *)(v21 + 24) = v20;
    *(_QWORD *)(v21 + 32) = v14;
    WdLogEvent5_WdEvent(v21);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
    if ( v43 )
    {
LABEL_15:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v44);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v33);
  return (unsigned int)v20;
}
