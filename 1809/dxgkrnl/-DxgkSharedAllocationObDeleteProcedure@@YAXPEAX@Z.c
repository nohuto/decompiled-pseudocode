/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00F6B20
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00F9350 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C01F43A8 (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(void *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  void **v8; // rax
  __int64 v9; // rcx
  DXGKEYEDMUTEX *v10; // r14
  struct DXGSYNCOBJECT *v11; // rsi
  __int64 v12; // rcx
  const GUID *v13; // r8
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v15; // rax
  int v16; // [rsp+28h] [rbp-29h] BYREF
  __int64 v17; // [rsp+30h] [rbp-21h]
  char v18; // [rsp+38h] [rbp-19h]
  _BYTE v19[8]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v20[8]; // [rsp+50h] [rbp-1h] BYREF
  __int64 v21; // [rsp+58h] [rbp+7h]
  DXGADAPTER *v22; // [rsp+60h] [rbp+Fh]
  char v23; // [rsp+68h] [rbp+17h]
  _BYTE v24[8]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+78h] [rbp+27h]
  volatile signed __int64 *v26; // [rsp+80h] [rbp+2Fh]
  char v27; // [rsp+88h] [rbp+37h]

  v17 = 0LL;
  v16 = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v18 = 1;
    v16 = 16000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 16000);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 16000);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *(volatile signed __int64 **)(*(_QWORD *)(v4 + 72) + 16LL);
  v22 = (DXGADAPTER *)v5;
  v23 = 0;
  if ( v5 )
  {
    _InterlockedIncrement64(v5 + 3);
    v21 = -1LL;
  }
  v26 = v5;
  v27 = 0;
  if ( v5 )
  {
    _InterlockedIncrement64(v5 + 3);
    v25 = -1LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v22) )
    COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 56), 0xFFFFFFFF);
  v6 = *(_QWORD *)(v4 + 72);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6 + 208, 0LL);
  *(_QWORD *)(v6 + 216) = KeGetCurrentThread();
  v7 = *(_QWORD **)a1;
  if ( *(void **)(*(_QWORD *)a1 + 8LL) != a1 || (v8 = (void **)*((_QWORD *)a1 + 1), *v8 != a1) )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = v8;
  *(_QWORD *)(v6 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v6 + 208, 0LL);
  KeLeaveCriticalRegion();
  v10 = (DXGKEYEDMUTEX *)*((_QWORD *)a1 + 3);
  v11 = (struct DXGSYNCOBJECT *)*((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 10) )
  {
    Global = DXGGLOBAL::GetGlobal(v9);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)Global + 168),
      *((_DWORD *)a1 + 10));
    *((_DWORD *)a1 + 10) = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 60), 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v4, 0LL, 0);
  *((_QWORD *)a1 + 2) = 0LL;
  if ( v10 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v10);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  if ( v11 )
  {
    v15 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v9);
    DXGGLOBAL::DestroySyncObject(v15, v11, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v16);
  }
}
