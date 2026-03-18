/*
 * XREFs of ThreadUnlockWorker1 @ 0x1C00297F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C002EA2C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00901D0 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C0090204 (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C01056F4 (AddToDeferredUserCritThreadUnlockList.c)
 */

__int64 ThreadUnlockWorker1()
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v1; // rdx
  __int64 v2; // rbx
  struct _HANDLEENTRY *v3; // rdi
  char v4; // al
  __int64 v6; // rdx
  __int64 v7; // r8

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = *(_QWORD **)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = *v1;
  v2 = v1[1];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    {
      v3 = (struct _HANDLEENTRY *)((char *)qword_1C0213758
                                 + dword_1C0213760 * (unsigned int)(unsigned __int16)*(_DWORD *)v2);
      v4 = *((_BYTE *)v3 + 25);
      if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
      {
        if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() || (unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
        {
          GetDomainLockRef(12LL, v6, v7);
          if ( !*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(_DWORD *)v2 + 2) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
            AddToDeferredUserCritThreadUnlockList();
          }
        }
        else
        {
          HMDestroyUnlockedObjectWorker(v3);
        }
        return 0LL;
      }
    }
  }
  return v2;
}
