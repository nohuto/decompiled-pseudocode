/*
 * XREFs of WbGetWarbirdEncryptionSegment @ 0x1405B3CE8
 * Callers:
 *     sub_1405B3B68 @ 0x1405B3B68 (sub_1405B3B68.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140004610 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405B3808 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405B3934 @ 0x1405B3934 (sub_1405B3934.c)
 *     sub_1405B3E20 @ 0x1405B3E20 (sub_1405B3E20.c)
 *     sub_1405B3E54 @ 0x1405B3E54 (sub_1405B3E54.c)
 */

__int64 __fastcall WbGetWarbirdEncryptionSegment(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rbx
  PRTL_BALANCED_NODE v8; // rdi
  int v9; // edi
  __int64 v10; // rbx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  char v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v14 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 176);
  v8 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = sub_1405B3E54(a1, a2, &v16, &v15);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveGuardedRegion();
  if ( v9 == -1073741198 )
  {
    v12 = sub_1405B3934(a2, &v16);
    v10 = v16;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_11;
    v9 = WbAddWarbirdEncryptionSegment(a1, v16, &v14);
    if ( v9 < 0 )
      goto LABEL_11;
    v13 = v14;
    if ( v14 )
    {
      sub_1405B3E20(v10);
      v10 = v13;
    }
  }
  else
  {
    v10 = v16;
    if ( v9 < 0 )
      goto LABEL_11;
  }
  if ( a3 )
  {
    *a3 = v10;
    v10 = 0LL;
  }
LABEL_11:
  sub_1405B3E20(v10);
  sub_1405B3E20(v14);
  return (unsigned int)v9;
}
