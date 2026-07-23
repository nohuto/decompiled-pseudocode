/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x1407F24BC
 * Callers:
 *     CmpSearchKeyControlBlockTree @ 0x1407F24A0 (CmpSearchKeyControlBlockTree.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitDiscardReplacePost @ 0x1407FAC60 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140804C84 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D53B8 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140693F0C (CmpRemoveFromDelayedClose.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1407FA72C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1407FA7A4 (CmpUnlockHashEntryByIndex.c)
 */

char __fastcall CmpSearchKeyControlBlockTreeEx(
        __int64 (__fastcall *a1)(ULONG_PTR, ULONG_PTR, __int64),
        ULONG_PTR a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // r13
  unsigned int v6; // edi
  char v8; // bl
  unsigned int v9; // ebp
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 *v12; // r14
  ULONG_PTR v13; // rdi
  int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-98h]
  __int64 v17; // [rsp+28h] [rbp-90h]
  __int64 v20; // [rsp+40h] [rbp-78h]
  _BYTE v21[48]; // [rsp+48h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a2 + 1640);
  v6 = *(_DWORD *)(a2 + 1648);
  v17 = v4;
  v16 = v6;
  CmpAttachToRegistryProcess((__int64)v21);
  v8 = 0;
  v9 = 0;
  if ( !v6 )
  {
LABEL_28:
    KiUnstackDetachProcess((__int64)v21, 0LL);
    return 1;
  }
  v10 = (__int64 *)(v4 + 16);
  while ( 1 )
  {
    if ( a4 )
      CmpLockHashEntryByIndexExclusive(a2, v9);
    v11 = *v10;
    v12 = v10;
    if ( *v10 )
      break;
LABEL_25:
    if ( a4 )
      CmpUnlockHashEntryByIndex((PVOID)a2);
    ++v9;
    v10 += 3;
    if ( v9 >= v6 )
      goto LABEL_28;
  }
  while ( 1 )
  {
    v13 = v11 - 8;
    if ( a4 )
      CmpLockKcbExclusive(v11 - 8);
    if ( !*(_DWORD *)v13 )
    {
      CmpRemoveFromDelayedClose(v13);
      CmpCleanUpKcbCacheWithLock(v13, 0LL);
      if ( a4 )
      {
        CmpUnlockKcb(v13);
      }
      else if ( (*(_DWORD *)(v13 + 4) & 0x80000) != 0 )
      {
        CmpFreeKeyControlBlock(v13);
      }
      v12 = (__int64 *)(v4 + 24LL * v9 + 16);
      goto LABEL_23;
    }
    v20 = *(_QWORD *)(v13 + 16);
    v14 = a1(v13, a2, a3);
    if ( v14 == 1 )
      break;
    if ( v14 == 3 )
    {
      if ( a4 )
        CmpUnlockKcb(v13);
      goto LABEL_34;
    }
    if ( v14 == 2 )
    {
      if ( a4 )
        CmpUnlockKcb(v13);
      *v12 = v20;
    }
    else
    {
      v12 = (__int64 *)(v13 + 16);
      if ( a4 )
        CmpUnlockKcb(v13);
    }
    v4 = v17;
LABEL_23:
    v11 = *v12;
    if ( !*v12 )
    {
      v6 = v16;
      goto LABEL_25;
    }
  }
  if ( a4 )
    CmpUnlockKcb(v13);
  v8 = 1;
LABEL_34:
  CmpUnlockHashEntryByIndex((PVOID)a2);
  return v8;
}
