/*
 * XREFs of ExSweepHandleTable @ 0x140692F10
 * Callers:
 *     ObInitProcess @ 0x140671FD0 (ObInitProcess.c)
 *     ObKillProcess @ 0x140691328 (ObKillProcess.c)
 *     PspRundownSingleProcess @ 0x140693078 (PspRundownSingleProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405FAA80 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406BCCE4 (ExpBlockOnLockedHandleEntry.c)
 */

_QWORD *__fastcall ExSweepHandleTable(_KPROCESS *BugCheckParameter1, __int64 a2, unsigned __int8 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v7; // r13
  int v8; // esi
  ULONG_PTR v9; // rbx
  signed __int64 *v10; // rdi
  signed __int64 v11; // r8
  bool v12; // al
  _QWORD *result; // rax
  _BYTE v14[48]; // [rsp+30h] [rbp-78h] BYREF

  memset(v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  if ( CurrentThread->ApcState.Process != BugCheckParameter1 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v14);
    v7 = 1;
  }
  v8 = 0;
  v9 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v10 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, v9);
  if ( v10 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v10);
        v11 = *v10;
        if ( (*v10 & 1) != 0 )
          break;
        if ( v11 )
        {
          ExpBlockOnLockedHandleEntry(a2, v10, v11);
        }
        else
        {
LABEL_7:
          v9 += 4LL;
          v10 += 2;
          if ( (v9 & 0x3FF) == 0 )
          {
            v9 += 4LL;
            goto LABEL_4;
          }
        }
      }
      if ( v11 == _InterlockedCompareExchange64(v10, v11 - 1, v11) )
      {
        v12 = (int)ObCloseHandleTableEntry(a2, v10, BugCheckParameter1, v9, a3, 1) >= 0;
        --CurrentThread->KernelApcDisable;
        if ( v12 )
          ++v8;
        goto LABEL_7;
      }
    }
  }
  ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
  *(_DWORD *)(a2 + 88) -= v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64));
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v7 == 1 )
    return (_QWORD *)KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
  return result;
}
