/*
 * XREFs of ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00EDD74
 * Callers:
 *     UmfdUninitializeThread @ 0x1C00EDD60 (UmfdUninitializeThread.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C007F2BC (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00EDE40 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00EDEC8 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C00EDEF4 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02AFB84 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::UninitializeThread(__int64 a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct UmfdTls *v5; // rbx
  __int64 v6; // rdx
  void *ServerPort; // rdi
  CMultipleConsumerWorkQueue::CWaitableWorkItem **v8; // rbx
  __int64 v9; // rax
  void *v10; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( ThreadWin32Thread && *(_QWORD *)(ThreadWin32Thread + 352) )
  {
    CAutoPushLockEx::CAutoPushLockEx(
      (CAutoPushLockEx *)&v11,
      (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
    UmfdHostLifeTimeManager::s_Ready = 0;
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
    v5 = UmfdTls::EnsureTls(v4, v3);
    ServerPort = (void *)UmfdGetServerPort(*((unsigned int *)v5 + 2));
    if ( ServerPort )
    {
      v8 = (CMultipleConsumerWorkQueue::CWaitableWorkItem **)*((_QWORD *)v5 + 2);
      if ( v8 )
      {
        if ( *v8 )
        {
          CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(*v8);
          *v8 = 0LL;
        }
        EngFreeMem(v8);
      }
      UmfdCancelServerOutstandingRequests(ServerPort);
    }
    v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    if ( v9 )
    {
      v10 = *(void **)(v9 + 352);
      if ( v10 )
      {
        *(_QWORD *)(v9 + 352) = 0LL;
        UmfdTls::Destroy(v10);
      }
    }
  }
}
