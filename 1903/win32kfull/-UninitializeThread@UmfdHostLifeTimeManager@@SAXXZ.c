/*
 * XREFs of ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0080D54
 * Callers:
 *     UmfdUninitializeThread @ 0x1C0080D40 (UmfdUninitializeThread.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C007DB28 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C0080E28 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C0080EC4 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C0080EF8 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02D4D88 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::UninitializeThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct UmfdTls *v9; // rbx
  __int64 v10; // rdx
  void *ServerPort; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  CMultipleConsumerWorkQueue::CWaitableWorkItem **v14; // rbx
  __int64 v15; // rax
  void *v16; // rcx
  char v17; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread && *(_QWORD *)(ThreadWin32Thread + 352) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v17, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
    UmfdHostLifeTimeManager::s_Ready = 0;
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v17);
    v9 = UmfdTls::EnsureTls(v6, v5, v7, v8);
    ServerPort = (void *)UmfdGetServerPort(*((unsigned int *)v9 + 2));
    if ( ServerPort )
    {
      v14 = (CMultipleConsumerWorkQueue::CWaitableWorkItem **)*((_QWORD *)v9 + 2);
      if ( v14 )
      {
        if ( *v14 )
        {
          CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(*v14);
          *v14 = 0LL;
        }
        EngFreeMem(v14);
      }
      UmfdCancelServerOutstandingRequests(ServerPort);
    }
    v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v12, v13);
    if ( v15 )
    {
      v16 = *(void **)(v15 + 352);
      if ( v16 )
      {
        *(_QWORD *)(v15 + 352) = 0LL;
        UmfdTls::Destroy(v16);
      }
    }
  }
}
