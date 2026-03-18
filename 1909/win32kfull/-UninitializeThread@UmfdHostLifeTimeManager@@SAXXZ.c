/*
 * XREFs of ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0142114
 * Callers:
 *     ?UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0142100 (-UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0030F0C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030F40 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C01229E8 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C01421E8 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C0142284 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C01422B8 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02D48D8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::UninitializeThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct UmfdTls *v7; // rbx
  __int64 v8; // rdx
  void *ServerPort; // rdi
  __int64 v10; // r8
  CMultipleConsumerWorkQueue::CWaitableWorkItem **v11; // rbx
  __int64 v12; // rax
  void *v13; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( ThreadWin32Thread && *(_QWORD *)(ThreadWin32Thread + 352) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v14, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
    UmfdHostLifeTimeManager::s_Ready = 0;
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v14);
    v7 = UmfdTls::EnsureTls(v5, v4, v6);
    ServerPort = (void *)UmfdGetServerPort(*((unsigned int *)v7 + 2));
    if ( ServerPort )
    {
      v11 = (CMultipleConsumerWorkQueue::CWaitableWorkItem **)*((_QWORD *)v7 + 2);
      if ( v11 )
      {
        if ( *v11 )
        {
          CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(*v11);
          *v11 = 0LL;
        }
        EngFreeMem(v11);
      }
      UmfdCancelServerOutstandingRequests(ServerPort);
    }
    v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10);
    if ( v12 )
    {
      v13 = *(void **)(v12 + 352);
      if ( v13 )
      {
        *(_QWORD *)(v12 + 352) = 0LL;
        UmfdTls::Destroy(v13);
      }
    }
  }
}
