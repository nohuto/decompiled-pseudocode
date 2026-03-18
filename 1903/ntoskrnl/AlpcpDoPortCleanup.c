/*
 * XREFs of AlpcpDoPortCleanup @ 0x14064A2F0
 * Callers:
 *     AlpcpClosePort @ 0x14064A420 (AlpcpClosePort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     AlpcpDisconnectPort @ 0x14064986C (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x140649E08 (AlpcpFlushMessagesPort.c)
 *     AlpcpFlushResourcesPort @ 0x14064A1EC (AlpcpFlushResourcesPort.c)
 *     AlpcpFreeCompletionList @ 0x1406F7738 (AlpcpFreeCompletionList.c)
 */

char __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rsi
  void *v3; // rcx
  __int64 v4; // rax
  _QWORD **v5; // r14
  volatile signed __int64 *v7; // rdi
  _DISPATCHER_HEADER *v8; // r9
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax

  AlpcpDisconnectPort((char *)a1, 0);
  v2 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 360) )
    AlpcpFreeCompletionList(a1);
  v3 = *(void **)(a1 + 24);
  v4 = 0LL;
  if ( ((unsigned __int8)v3 & 1) == 0 )
    v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v3, 0x63706C41u);
    *(_QWORD *)(a1 + 24) |= 1uLL;
  }
  *(_DWORD *)(a1 + 416) |= 0x40u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpFlushMessagesPort(a1);
  AlpcpFlushResourcesPort(a1);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 248), 1, 0x1000000, 0);
  }
  else
  {
    v5 = (_QWORD **)(a1 + 232);
    if ( *v5 != v5 )
    {
      v7 = (volatile signed __int64 *)(a1 + 224);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
      while ( 1 )
      {
        v9 = *v5;
        if ( *v5 == v5 )
          break;
        *(v9 - 1) = 0LL;
        v10 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        *v9 = 0LL;
        KeReleaseSemaphoreEx((__int64)(v9 - 21), 1, 1, v8, 2);
      }
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7);
      KeAbPostRelease((ULONG_PTR)v7);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
