/*
 * XREFs of WbFreeUserMemory @ 0x1406B2E3C
 * Callers:
 *     sub_140625A74 @ 0x140625A74 (sub_140625A74.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     sub_1406262B8 @ 0x1406262B8 (sub_1406262B8.c)
 *     WbFreeMemoryBlockRegion @ 0x1406B2F28 (WbFreeMemoryBlockRegion.c)
 */

__int64 __fastcall WbFreeUserMemory(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  PRTL_BALANCED_NODE v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edi
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 224);
  v6 = KeAbPreAcquire(a1 + 224, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, v6, (ULONG_PTR)v5);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  v13 = 0LL;
  v7 = sub_1406262B8(a1 + 184, a2, 8u, &v13, &v11);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
    v8 = v13;
  v12 = v8;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 >= 0 )
    return (unsigned int)WbFreeMemoryBlockRegion(v12, a2);
  return (unsigned int)v9;
}
