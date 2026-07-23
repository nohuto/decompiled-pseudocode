/*
 * XREFs of WbGetHeapExecutedBlock @ 0x1405CA3C8
 * Callers:
 *     WbHeapExecuteCall @ 0x1405CA1C8 (WbHeapExecuteCall.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140004580 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1405C9EAC (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     sub_1405CA528 @ 0x1405CA528 (sub_1405CA528.c)
 *     sub_1405CA5E8 @ 0x1405CA5E8 (sub_1405CA5E8.c)
 *     WbCreateHeapExecutedBlock @ 0x1406ADFB0 (WbCreateHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406AF160 (WbAddHeapExecutedBlockToCache.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D5E08 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 */

__int64 __fastcall WbGetHeapExecutedBlock(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v8; // rdi
  int v9; // edi
  __int64 *v10; // rbx
  int v12; // eax
  __int64 *v13; // r14
  __int64 *v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v15; // [rsp+88h] [rbp+58h] BYREF

  v5 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56));
  v14 = 0LL;
  v15 = 0LL;
  WbReleaseLeastRecentlyUsedHeapExecutedBlocks(a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 48), v8, a1 + 48);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = sub_1405CA5E8(a1, *(_QWORD *)(a2 + 272), &v14, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KeLeaveGuardedRegion();
  if ( v9 == -1073741198 )
  {
    v12 = WbCreateHeapExecutedBlock(a1, a2, &v14);
    v10 = v14;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_11;
    v9 = WbAddHeapExecutedBlockToCache(a1, v14, &v15);
    if ( v9 < 0 )
      goto LABEL_11;
    v13 = v15;
    if ( v15 )
    {
      sub_1405CA528(a1, v10);
      v10 = v13;
      v15 = 0LL;
    }
  }
  else
  {
    v10 = v14;
    if ( v9 < 0 )
      goto LABEL_11;
  }
  WbMoveHeapExecutedBlockToBackOfLRU(a1, v10);
  if ( a3 )
  {
    *a3 = v10;
    v10 = 0LL;
  }
LABEL_11:
  sub_1405CA528(a1, v10);
  sub_1405CA528(a1, v15);
  return (unsigned int)v9;
}
