/*
 * XREFs of WbAddWarbirdEncryptionSegment @ 0x1405B3808
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x1405B3CE8 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     sub_1405B3E20 @ 0x1405B3E20 (sub_1405B3E20.c)
 *     sub_1405B3E54 @ 0x1405B3E54 (sub_1405B3E54.c)
 *     sub_1405B4074 @ 0x1405B4074 (sub_1405B4074.c)
 *     sub_1406B1270 @ 0x1406B1270 (sub_1406B1270.c)
 */

__int64 __fastcall WbAddWarbirdEncryptionSegment(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rdi
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v10; // rbx
  int v11; // eax
  int v12; // r8d
  int v13; // ebx
  char v14; // si
  __int64 v16; // rdx
  int v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+4Ch] [rbp-14h]

  v3 = *(_DWORD *)(a2 + 24);
  v21 = 0;
  v18 = 0LL;
  v17 = 0;
  v20 = v3;
  v19 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (unsigned __int64 *)(a1 + 176);
  v9 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    BYTE2(v10[1].Left) |= 1u;
  v11 = sub_1405B3E54(a1, &v19, &v18, &v17);
  v13 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741198 )
    {
      v13 = sub_1406B1270((int)a1 + 136, a2, v12, (unsigned int)&v19, 16, v17);
      if ( v13 >= 0 )
        v13 = sub_1405B4074(a2);
    }
  }
  else if ( a3 )
  {
    sub_1405B4074(v18);
    v18 = 0LL;
    *a3 = v16;
  }
  sub_1405B3E20(v18);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}
