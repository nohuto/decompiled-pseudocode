/*
 * XREFs of CmpRunDownDelayDerefKCBEngine @ 0x140693F94
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x140693CDC (CmpCleanUpKCBCacheTable.c)
 *     CmpFreeAllMemory @ 0x1407EDFC0 (CmpFreeAllMemory.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1405B2550 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpIsLockAllowedByIndex @ 0x1407F1AB4 (CmpIsLockAllowedByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1407FA72C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1407FA7A4 (CmpUnlockHashEntryByIndex.c)
 */

void __fastcall CmpRunDownDelayDerefKCBEngine(__int64 a1, char a2)
{
  unsigned int v2; // esi
  __int64 v3; // r13
  char v4; // bp
  _QWORD *v5; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // r14
  int v9; // edx
  char v10; // r12
  unsigned int v11; // r15d
  int v12; // r8d
  char v13; // bp
  __int64 v14; // rax
  ULONG_PTR v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  char v19; // [rsp+70h] [rbp+8h] BYREF
  char v20; // [rsp+78h] [rbp+10h]

  v20 = a2;
  v2 = -1;
  v3 = 0LL;
  v4 = a2;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v12 = *(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9);
    v2 = (*(_DWORD *)(v3 + 1648) - 1) & ((101027 * v12) ^ ((unsigned int)(101027 * v12) >> 9));
  }
  while ( 1 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
    v5 = (_QWORD *)CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      break;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead )
      goto LABEL_25;
    v6 = *(_QWORD *)CmpDelayDerefKCBListHead;
    if ( *(_QWORD *)(*(_QWORD *)CmpDelayDerefKCBListHead + 8LL) != CmpDelayDerefKCBListHead )
      goto LABEL_25;
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v7 = (ULONG_PTR)(v5 - 27);
    *(_QWORD *)(v6 + 8) = &CmpDelayDerefKCBListHead;
    v5[1] = v5;
    *v5 = v5;
    _InterlockedOr(v18, 0);
    *((_BYTE *)v5 - 160) &= ~1u;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
    v8 = *(v5 - 24);
    v9 = *(_DWORD *)(v7 + 8) ^ (*(_DWORD *)(v7 + 8) >> 9);
    v10 = *(_BYTE *)(v8 + 2936);
    v11 = (*(_DWORD *)(v8 + 1648) - 1) & ((101027 * v9) ^ ((unsigned int)(101027 * v9) >> 9));
    if ( v4 )
    {
      CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)(v5 - 27));
    }
    else
    {
      v13 = 0;
      v19 = 0;
      if ( !v3 )
        goto LABEL_14;
      if ( !(unsigned __int8)CmpIsLockAllowedByIndex(v3, v2, v8, v11, (__int64)&v19) )
      {
        ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
        *(_BYTE *)(v7 + 56) |= 1u;
        v17 = CmpDelayDerefKCBListHead;
        if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead )
LABEL_25:
          __fastfail(3u);
        *v5 = CmpDelayDerefKCBListHead;
        v5[1] = &CmpDelayDerefKCBListHead;
        *(_QWORD *)(v17 + 8) = v5;
        CmpDelayDerefKCBListHead = (__int64)v5;
        break;
      }
      v13 = v19;
      if ( !v19 )
LABEL_14:
        CmpLockHashEntryByIndexExclusive(v8, v11);
      CmpLockKcbExclusive((__int64)(v5 - 27));
      v14 = *(_QWORD *)(v7 + 184);
      v15 = 0LL;
      if ( v14 )
      {
        v16 = *(_QWORD *)(v14 + 24);
        if ( v16 )
        {
          v15 = *(_QWORD *)(v16 + 16);
          CmpUnlockKcb(v7);
          CmpLockKcbExclusive(v15);
          CmpLockKcbExclusive(v7);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v7);
      CmpUnlockKcb(v7);
      if ( v15 )
        CmpUnlockKcb(v15);
      if ( !v13 )
        CmpUnlockHashEntryByIndex((PVOID)v8);
      v4 = v20;
    }
    if ( v10 == 1 )
      CmpDoQueueLateUnloadWorker(v8);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
}
