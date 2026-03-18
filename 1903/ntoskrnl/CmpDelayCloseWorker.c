/*
 * XREFs of CmpDelayCloseWorker @ 0x14064E890
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpLockHashEntryExclusive @ 0x14064E7A8 (CmpLockHashEntryExclusive.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntry @ 0x14064EB24 (CmpUnlockHashEntry.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140652328 (CmpCleanUpKcbCacheWithLock.c)
 */

unsigned __int64 __fastcall CmpDelayCloseWorker(__int64 a1)
{
  bool v1; // r12
  unsigned int v2; // edi
  _BYTE *v3; // r9
  int v4; // eax
  unsigned int v5; // ebp
  char *v6; // rsi
  char *v7; // r14
  unsigned int v8; // r15d
  unsigned int *v9; // rbx
  ULONG_PTR v10; // r13
  ULONG_PTR v11; // rax
  __int64 v12; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  bool v18; // [rsp+20h] [rbp-E8h]
  _QWORD *v19[2]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v20[56]; // [rsp+38h] [rbp-D0h] BYREF
  char v21; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v22[12]; // [rsp+78h] [rbp-90h] BYREF
  char v23; // [rsp+84h] [rbp-84h] BYREF

  v1 = a1 != 0;
  v18 = a1 != 0;
  v19[0] = 0LL;
  v19[1] = 0LL;
  memset(v20, 0, 0x30uLL);
  CmpAttachToRegistryProcess((__int64)v20);
  CmpInitializeDelayDerefContext(v19);
  CmpLockRegistry();
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v2 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v3 = v22;
      do
      {
        v4 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!v1 || !CmpDelayedCloseElements) )
          break;
        v14 = qword_140463B08 - 224;
        if ( *(__int64 **)qword_140463B08 == &CmpDelayedLRUListHead )
        {
          v15 = *(_QWORD **)(qword_140463B08 + 8);
          if ( *v15 == qword_140463B08 )
            continue;
        }
        __fastfail(3u);
        qword_140463B08 = *(_QWORD *)(qword_140463B08 + 8);
        *v15 = &CmpDelayedLRUListHead;
        --qword_1409AEF38;
        CmpDelayedCloseElements = v4 - 1;
        *((_QWORD *)v3 - 1) = *(_QWORD *)(v14 + 32);
        *(_QWORD *)v3 = v14;
        v16 = v2++;
        v22[24 * v16 + 8] = 0;
        *((_DWORD *)v3 + 3) = *(_DWORD *)(v14 + 16);
        v3 += 24;
        *(_BYTE *)(v14 + 64) |= 4u;
        *(_QWORD *)(v14 + 224) = &v22[24 * v16 + 8];
      }
      while ( v2 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v5 = 0;
      if ( v2 )
      {
        v6 = &v21;
        v7 = &v23;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v6, *(unsigned int *)v7);
          v8 = v5;
          if ( v5 < v2 )
          {
            v9 = (unsigned int *)(v7 - 12);
            do
            {
              if ( v9[3] == *((_DWORD *)v6 + 5) && *((_QWORD *)v9 - 1) == *(_QWORD *)v6 && !*((_BYTE *)v9 + 8) )
              {
                CmpLockKcbExclusive(*(_QWORD *)v9);
                v10 = 0LL;
                v11 = *(_QWORD *)v9;
                v12 = *(_QWORD *)(*(_QWORD *)v9 + 192LL);
                if ( v12 )
                {
                  v17 = *(_QWORD *)(v12 + 24);
                  if ( v17 )
                  {
                    v10 = *(_QWORD *)(v17 + 16);
                    CmpUnlockKcb(*(_QWORD *)v9);
                    CmpLockKcbExclusive(v10);
                    CmpLockKcbExclusive(*(_QWORD *)v9);
                    v11 = *(_QWORD *)v9;
                  }
                }
                CmpCleanUpKcbCacheWithLock(v11);
                CmpUnlockKcb(*(_QWORD *)v9);
                if ( v10 )
                  CmpUnlockKcb(v10);
                v22[24 * v8 + 8] = 1;
              }
              ++v8;
              v9 += 6;
            }
            while ( v8 < v2 );
          }
          CmpUnlockHashEntry(*(PVOID *)v6);
          ++v5;
          v7 += 24;
          v6 += 24;
        }
        while ( v5 < v2 );
        v1 = v18;
      }
    }
    while ( v2 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpDrainDelayDerefContext(v19);
  CmpUnlockRegistry();
  return KiUnstackDetachProcess((struct _KTHREAD *)v20, 0);
}
