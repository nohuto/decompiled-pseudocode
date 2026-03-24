/*
 * XREFs of WbAddWarbirdEncryptionSegment @ 0x140583C40
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x14058410C (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     sub_140584234 @ 0x140584234 (sub_140584234.c)
 *     sub_140584268 @ 0x140584268 (sub_140584268.c)
 *     sub_140584490 @ 0x140584490 (sub_140584490.c)
 *     sub_14069174C @ 0x14069174C (sub_14069174C.c)
 */

__int64 __fastcall WbAddWarbirdEncryptionSegment(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  int v12; // ebx
  char v13; // si
  __int64 v15; // rdx
  int v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]

  v17 = 0LL;
  v16 = 0;
  v19 = 0LL;
  LODWORD(v19) = *(_DWORD *)(a2 + 24);
  v18 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 176);
  v8 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = sub_140584268(a1, &v18, &v17, &v16);
  v12 = v10;
  if ( v10 )
  {
    if ( v10 == -1073741198 )
    {
      v12 = sub_14069174C((int)a1 + 136, a2, v11, (unsigned int)&v18, 16, v16);
      if ( v12 >= 0 )
        v12 = sub_140584490(a2);
    }
  }
  else if ( a3 )
  {
    sub_140584490(v17);
    v17 = 0LL;
    *a3 = v15;
  }
  sub_140584234(v17);
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
