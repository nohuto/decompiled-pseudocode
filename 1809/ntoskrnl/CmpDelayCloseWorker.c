/*
 * XREFs of CmpDelayCloseWorker @ 0x1405D2760
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpLockHashEntryExclusive @ 0x1405D2608 (CmpLockHashEntryExclusive.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntry @ 0x1405D29F8 (CmpUnlockHashEntry.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D53B8 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 */

PVOID __fastcall CmpDelayCloseWorker(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rcx
  unsigned int v3; // edi
  _BYTE *v4; // r9
  int v5; // eax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  char *v12; // rsi
  char *v13; // r14
  unsigned int v14; // r15d
  unsigned int *v15; // rbx
  ULONG_PTR v16; // r12
  ULONG_PTR v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  PVOID v22[2]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v23[56]; // [rsp+38h] [rbp-D0h] BYREF
  char v24; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v25[12]; // [rsp+78h] [rbp-90h] BYREF
  char v26; // [rsp+84h] [rbp-84h] BYREF

  v1 = a1;
  CmpInitializeThreadInfo(v22);
  CmpAttachToRegistryProcess(v23);
  CmpLockRegistry(v2);
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v3 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v4 = v25;
      do
      {
        v5 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!v1 || !CmpDelayedCloseElements) )
          break;
        v6 = qword_140438F88 - 216;
        if ( *(__int64 **)qword_140438F88 == &CmpDelayedLRUListHead )
        {
          v7 = *(_QWORD **)(qword_140438F88 + 8);
          if ( *v7 == qword_140438F88 )
            continue;
        }
        __fastfail(3u);
        qword_140438F88 = *(_QWORD *)(qword_140438F88 + 8);
        *v7 = &CmpDelayedLRUListHead;
        --qword_14096FB28;
        CmpDelayedCloseElements = v5 - 1;
        *((_QWORD *)v4 - 1) = *(_QWORD *)(v6 + 24);
        *(_QWORD *)v4 = v6;
        v8 = v3++;
        v9 = &v25[24 * v8 + 8];
        *v9 = 0;
        *((_DWORD *)v4 + 3) = *(_DWORD *)(v6 + 8);
        v4 += 24;
        *(_BYTE *)(v6 + 56) |= 4u;
        *(_QWORD *)(v6 + 216) = v9;
      }
      while ( v3 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v11 = 0;
      if ( v3 )
      {
        v12 = &v24;
        v13 = &v26;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v12, *(unsigned int *)v13);
          v14 = v11;
          if ( v11 < v3 )
          {
            v15 = (unsigned int *)(v13 - 12);
            do
            {
              if ( v15[3] == *((_DWORD *)v12 + 5) && *((_QWORD *)v15 - 1) == *(_QWORD *)v12 && !*((_BYTE *)v15 + 8) )
              {
                CmpLockKcbExclusive(*(_QWORD *)v15);
                v16 = 0LL;
                v17 = *(_QWORD *)v15;
                v18 = *(_QWORD *)(*(_QWORD *)v15 + 184LL);
                if ( v18 )
                {
                  v19 = *(_QWORD *)(v18 + 24);
                  if ( v19 )
                  {
                    v16 = *(_QWORD *)(v19 + 16);
                    CmpUnlockKcb(*(_QWORD *)v15);
                    CmpLockKcbExclusive(v16);
                    CmpLockKcbExclusive(*(_QWORD *)v15);
                    v17 = *(_QWORD *)v15;
                  }
                }
                CmpCleanUpKcbCacheWithLock(v17);
                CmpUnlockKcb(*(_QWORD *)v15);
                if ( v16 )
                  CmpUnlockKcb(v16);
                v25[24 * v14 + 8] = 1;
              }
              ++v14;
              v15 += 6;
            }
            while ( v14 < v3 );
          }
          CmpUnlockHashEntry(*(PVOID *)v12);
          ++v11;
          v13 += 24;
          v12 += 24;
        }
        while ( v11 < v3 );
        v1 = a1;
      }
    }
    while ( v3 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpUnlockRegistry(v10);
  KiUnstackDetachProcess((__int64)v23, 0LL);
  return CmCleanupThreadInfo(v22);
}
