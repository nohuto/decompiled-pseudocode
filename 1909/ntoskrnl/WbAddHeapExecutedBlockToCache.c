/*
 * XREFs of WbAddHeapExecutedBlockToCache @ 0x1406B1090
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1405CA8C8 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     sub_1405CA1E8 @ 0x1405CA1E8 (sub_1405CA1E8.c)
 *     sub_1405CAAE8 @ 0x1405CAAE8 (sub_1405CAAE8.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406B11A0 (WbAddHeapExecutedBlockToLRU.c)
 *     sub_1406B1270 @ 0x1406B1270 (sub_1406B1270.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToCache(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rdi
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_BALANCED_NODE *v9; // rbx
  int v10; // eax
  int v11; // r8d
  int v12; // ebx
  char v13; // bp
  int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  v16 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 48);
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v10 = sub_1405CAAE8(a1, *(_QWORD *)(a2 + 48), &v16, (__int64)&v15);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v16;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_1406B1270((int)a1 + 8, a2, v11, *(_QWORD *)(a2 + 48), 8, v15);
    if ( v12 >= 0 )
    {
      v12 = sub_1405CA1E8(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = WbAddHeapExecutedBlockToLRU(a1, a2);
      }
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
