/*
 * XREFs of ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x1800051B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x180022A38 (--1TSSession@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowsPolicyManager::Shutdown(CWindowsPolicyManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  void *v3; // rcx
  TSSession *v4; // rbx
  _QWORD *v5; // rax
  CApplicationManager *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  HANDLE v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  CApplicationManager *v12; // rbx
  struct CAudioThreadPool *v13; // rbx
  struct _TP_CLEANUP_GROUP *v14; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    v3 = qword_18004DC78;
    if ( !qword_18004DC78 )
      break;
    v4 = (TSSession *)*((_QWORD *)qword_18004DC78 + 2);
    v5 = *(_QWORD **)qword_18004DC78;
    qword_18004DC78 = v5;
    if ( v5 )
      v5[1] = 0LL;
    else
      qword_18004DC80 = 0LL;
    operator delete(v3, (const struct std::nothrow_t *)0x18);
    --dword_18004DC88;
    if ( v4 )
    {
      TSSession::~TSSession(v4);
      operator delete(v4, (const struct std::nothrow_t *)0x160);
    }
  }
  LeaveCriticalSection(&CriticalSection);
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( g_hLowPowerEpochNotificationHandle )
  {
    PowerSettingUnregisterNotification(g_hLowPowerEpochNotificationHandle);
    g_hLowPowerEpochNotificationHandle = 0LL;
  }
  g_bLowPowerEpoch = 0;
  g_bApmSuspended = 0;
  g_bIsSystemAsleep = 0;
  v6 = g_ApplicationManager;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  *((_DWORD *)v6 + 6) = 1;
  if ( v7 )
    LeaveCriticalSection(v7);
  v8 = g_EventWorkerThreadHandle;
  if ( g_EventWorkerThreadHandle )
  {
    if ( g_WorkerEventPort )
    {
      PostQueuedCompletionStatus(g_WorkerEventPort, 0xFFFFFFFF, 0LL, 0LL);
      v8 = g_EventWorkerThreadHandle;
    }
    WaitForSingleObject(v8, 0xFFFFFFFF);
    if ( (char *)g_EventWorkerThreadHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(g_EventWorkerThreadHandle);
      g_EventWorkerThreadHandle = 0LL;
    }
  }
  v9 = g_StreamClassPolicyManager;
  g_StreamClassPolicyManager = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 4);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 4) = 0LL;
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 32LL))(v11);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
    }
    *((_QWORD *)this + 5) = 0LL;
  }
  v12 = g_ApplicationManager;
  if ( g_ApplicationManager )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)g_ApplicationManager + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v12 + 16LL))(v12);
      (*(void (__fastcall **)(CApplicationManager *, __int64))(*(_QWORD *)v12 + 8LL))(v12, 1LL);
    }
    g_ApplicationManager = 0LL;
  }
  if ( (char *)g_WorkerEventPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_WorkerEventPort);
    g_WorkerEventPort = 0LL;
  }
  v13 = ThreadPool;
  if ( ThreadPool )
  {
    v14 = (struct _TP_CLEANUP_GROUP *)*((_QWORD *)ThreadPool + 10);
    if ( v14 )
    {
      CloseThreadpoolCleanupGroupMembers(v14, 0, 0LL);
      CloseThreadpoolCleanupGroup(*((PTP_CLEANUP_GROUP *)v13 + 10));
      *((_QWORD *)v13 + 10) = 0LL;
      v13 = ThreadPool;
    }
    if ( v13 )
      (**(void (__fastcall ***)(struct CAudioThreadPool *, __int64))v13)(v13, 1LL);
  }
  ThreadPool = 0LL;
  if ( g_DeviceEnumerator )
  {
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)g_DeviceEnumerator + 16LL))(g_DeviceEnumerator);
    g_DeviceEnumerator = 0LL;
  }
}
