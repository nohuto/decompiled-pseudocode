/*
 * XREFs of WbDecryptEncryptionSegment @ 0x1405B39C8
 * Callers:
 *     WbDispatchOperation @ 0x1405CADA0 (WbDispatchOperation.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140004610 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     sub_1405B3B68 @ 0x1405B3B68 (sub_1405B3B68.c)
 *     sub_1405B3E20 @ 0x1405B3E20 (sub_1405B3E20.c)
 *     WbDecryptWarbirdEncryptionSegment @ 0x1405B4090 (WbDecryptWarbirdEncryptionSegment.c)
 */

__int64 __fastcall WbDecryptEncryptionSegment(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  _RTL_BALANCED_NODE *v6; // rax
  _RTL_BALANCED_NODE *v7; // rsi
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( (unsigned int)a3 < 0x10 )
  {
    v3 = -1073741811;
  }
  else
  {
    v3 = sub_1405B3B68(a1, a2, a3, &v9);
    if ( v3 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v5 = (unsigned __int64 *)(v9 + 8);
      v6 = KeAbPreAcquire(v9 + 8, 0LL, 0);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
      if ( v7 )
        BYTE2(v7[1].Left) |= 1u;
      v3 = WbDecryptWarbirdEncryptionSegment(v9);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KeLeaveGuardedRegion();
    }
  }
  sub_1405B3E20(v9);
  return (unsigned int)v3;
}
