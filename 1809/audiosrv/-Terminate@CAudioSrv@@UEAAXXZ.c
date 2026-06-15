/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800B3100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800AF93C (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??_GCAudioDGProcess@@QEAAPEAXI@Z @ 0x1800AFE64 (--_GCAudioDGProcess@@QEAAPEAXI@Z.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800B3314 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x1800F80FC (-MME_ServiceStop@@YAXXZ.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x1801124C8 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180124D14 (--4-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18012E540 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18012E84C (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18013C0AC (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::Terminate(CAudioSrv *this)
{
  CPowerReferenceManager *v2; // rbx
  CAudioDGProcess *v3; // rcx
  void *v4; // rdx
  void *v5; // rcx
  CKsNotificationsMonitor *v6; // rbx
  _QWORD *v7; // rax
  AtmosCheck *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  Microsoft::WRL::ComPtr<AtmosCheck>::operator=(&v8);
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  if ( v8 )
    AtmosCheck::Uninitialize(v8);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v8);
  if ( g_ADGProcess )
    CAudioDGProcess::CancelADGTerminationTimer(g_ADGProcess);
  CAudioSrv::VAD_AudiosrvServiceStop(this);
  v2 = g_powerReferenceManager;
  g_powerReferenceManager = 0LL;
  if ( v2 )
  {
    CPowerReferenceManager::~CPowerReferenceManager(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x198);
  }
  MME_ServiceStop();
  if ( g_ADGProcess )
  {
    CAudioDGProcess::TerminateADG(v3);
    if ( g_ADGProcess )
      CAudioDGProcess::`scalar deleting destructor'((CAudioDGProcess *)g_ADGProcess, v4);
    g_ADGProcess = 0LL;
  }
  while ( 1 )
  {
    v5 = g_lstKsNotificationMonitors;
    if ( !g_lstKsNotificationMonitors )
      break;
    v6 = (CKsNotificationsMonitor *)*((_QWORD *)g_lstKsNotificationMonitors + 2);
    v7 = *(_QWORD **)g_lstKsNotificationMonitors;
    g_lstKsNotificationMonitors = v7;
    if ( v7 )
      v7[1] = 0LL;
    else
      qword_1801B43B8 = 0LL;
    operator delete(v5);
    --dword_1801B43C0;
    CKsNotificationsMonitor::Dispose(v6);
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( g_bKsNotificationLockInitialized )
    DeleteCriticalSection(&g_csKsNotificationMonitors);
  if ( (char *)g_hCanAcceptMMCClientEvent - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_hCanAcceptMMCClientEvent);
    g_hCanAcceptMMCClientEvent = 0LL;
  }
}
