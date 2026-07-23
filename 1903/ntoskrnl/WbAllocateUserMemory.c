/*
 * XREFs of WbAllocateUserMemory @ 0x1406AEBF8
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x1406ADFB0 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     WbAllocateMemoryBlock @ 0x1406ADCAC (WbAllocateMemoryBlock.c)
 *     sub_1406AEE44 @ 0x1406AEE44 (sub_1406AEE44.c)
 *     WbFreeMemoryBlock @ 0x1406AF0E4 (WbFreeMemoryBlock.c)
 *     sub_1406AF340 @ 0x1406AF340 (sub_1406AF340.c)
 */

__int64 __fastcall WbAllocateUserMemory(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  PVOID *v6; // r14
  PVOID *v7; // rdi
  int MemoryBlock; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rbx
  PRTL_BALANCED_NODE v11; // rdi
  int v12; // edi
  __int64 v13; // rcx
  struct _KTHREAD *v15; // rax
  _RTL_BALANCED_NODE *v16; // rax
  int v17; // r8d
  _RTL_BALANCED_NODE *v18; // rdi
  char v19; // r15
  PVOID *BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-18h] BYREF

  BaseAddress = 0LL;
  v21[0] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  MemoryBlock = 0;
  if ( a2 > 0x10000 )
  {
    MemoryBlock = -1073741811;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64 *)(a1 + 224);
  v11 = KeAbPreAcquire(a1 + 224, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10);
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  v12 = 0;
  if ( *(_DWORD *)(a1 + 188) )
  {
    while ( 1 )
    {
      v6 = *(PVOID **)((unsigned int)(v12 * *(_DWORD *)(a1 + 184)) + *(_QWORD *)(a1 + 200));
      MemoryBlock = sub_1406AEE44(v6, a2, v21);
      if ( MemoryBlock < 0 )
        goto LABEL_29;
      if ( !v21[0] && (unsigned int)++v12 < *(_DWORD *)(a1 + 188) )
        continue;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v13 = v21[0];
  if ( v21[0] )
  {
    v7 = BaseAddress;
  }
  else
  {
    MemoryBlock = WbAllocateMemoryBlock(0LL, (__int64 **)&BaseAddress);
    if ( MemoryBlock < 0 )
      goto LABEL_29;
    v7 = BaseAddress;
    MemoryBlock = sub_1406AEE44(BaseAddress, a2, v21);
    if ( MemoryBlock < 0 )
      goto LABEL_17;
    v15 = KeGetCurrentThread();
    --v15->SpecialApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v16, (ULONG_PTR)v10);
    if ( v18 )
      BYTE2(v18[1].Left) |= 1u;
    MemoryBlock = sub_1406AF340((int)a1 + 184, (_DWORD)BaseAddress, v17, (unsigned int)BaseAddress[4], 8, -1);
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( MemoryBlock < 0 )
    {
LABEL_29:
      v7 = BaseAddress;
      goto LABEL_17;
    }
    v6 = BaseAddress;
    v7 = 0LL;
    v13 = v21[0];
  }
  if ( a3 )
    *a3 = v13;
  if ( a4 )
    *a4 = v13 + (_BYTE *)*v6 - (_BYTE *)v6[4];
LABEL_17:
  WbFreeMemoryBlock(v7);
  return (unsigned int)MemoryBlock;
}
