/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C013CD60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BDDC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043204 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00EE57C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F51B0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C02240D8 (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(void *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdi
  struct DXGADAPTER *const v5; // rdx
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  void **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGKEYEDMUTEX *v11; // r14
  struct DXGSYNCOBJECT *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v17; // rax
  int v18; // [rsp+20h] [rbp-79h] BYREF
  __int64 v19; // [rsp+28h] [rbp-71h]
  char v20; // [rsp+30h] [rbp-69h]
  _BYTE v21[8]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v22[16]; // [rsp+48h] [rbp-51h] BYREF
  DXGADAPTER *v23; // [rsp+58h] [rbp-41h]
  _BYTE v24[72]; // [rsp+88h] [rbp-11h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v20 = 1;
    v18 = 16000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 16000);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 16000LL);
  v4 = *((_QWORD *)a1 + 2);
  COREACCESS::COREACCESS((COREACCESS *)v22, *(struct DXGADAPTER *const *)(*(_QWORD *)(v4 + 72) + 16LL));
  COREACCESS::COREACCESS((COREACCESS *)v24, v5);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v23) )
    COREADAPTERACCESS::AcquireShared((__int64)v21, 0xFFFFFFFFLL, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 56));
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
  v11 = (DXGKEYEDMUTEX *)*((_QWORD *)a1 + 3);
  v12 = (struct DXGSYNCOBJECT *)*((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 10) )
  {
    Global = DXGGLOBAL::GetGlobal(v10, v9);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)Global + 164),
      *((_DWORD *)a1 + 10));
    *((_DWORD *)a1 + 10) = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 60), 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v4, 0LL, 0);
  *((_QWORD *)a1 + 2) = 0LL;
  if ( v11 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v11, v9);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  if ( v12 )
  {
    v17 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10, v9);
    DXGGLOBAL::DestroySyncObject(v17, v12, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  COREACCESS::~COREACCESS((COREACCESS *)v22);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18, v13);
  if ( v20 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v18);
  }
}
