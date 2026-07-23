/*
 * XREFs of sub_1405B378C @ 0x1405B378C
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x1405B35EC (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405B36BC (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140004580 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405B390C (WbGetWarbirdEncryptionSegment.c)
 *     sub_1405B3A44 @ 0x1405B3A44 (sub_1405B3A44.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405B3AD0 (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1405B4334 (WbInitializeEncryptionSegment.c)
 *     sub_1405CA880 @ 0x1405CA880 (sub_1405CA880.c)
 */

__int64 __fastcall sub_1405B378C(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v7; // rdi
  int WarbirdEncryptionSegment; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // r14
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_BALANCED_NODE *v13; // r15
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-20h] BYREF

  v17[0] = 0LL;
  v17[1] = 0LL;
  v15 = 0uLL;
  v7 = 0LL;
  v14 = 0LL;
  WarbirdEncryptionSegment = WbValidateEncryptionSegmentArguments(a2, a3, &v15, v17);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_7;
  WarbirdEncryptionSegment = WbGetWarbirdEncryptionSegment(a1, v17, &v14);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_18;
  v7 = v14;
  if ( !*(_DWORD *)(v14 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = (unsigned __int64 *)(v14 + 8);
    v12 = KeAbPreAcquire(v14 + 8, 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
    if ( v13 )
      BYTE2(v13[1].Left) |= 1u;
    if ( !*(_DWORD *)(v7 + 16) )
    {
      v16 = v15;
      WarbirdEncryptionSegment = WbInitializeEncryptionSegment(&v16, a2, v14);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveGuardedRegion();
    if ( WarbirdEncryptionSegment >= 0 )
    {
      v7 = v14;
      goto LABEL_4;
    }
LABEL_18:
    v7 = v14;
    goto LABEL_7;
  }
LABEL_4:
  WarbirdEncryptionSegment = *(_DWORD *)(v7 + 20);
  if ( WarbirdEncryptionSegment >= 0 && a4 )
  {
    *a4 = v7;
    v7 = 0LL;
  }
LABEL_7:
  sub_1405B3A44(v7);
  sub_1405CA880(*((_QWORD *)&v15 + 1));
  return (unsigned int)WarbirdEncryptionSegment;
}
