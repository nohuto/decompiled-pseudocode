/*
 * XREFs of WbGetInitializedEncryptionSegment @ 0x140584F8C
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x140584E04 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x140584EC8 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14058510C (WbGetWarbirdEncryptionSegment.c)
 *     sub_140585234 @ 0x140585234 (sub_140585234.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405852C0 (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x140585B2C (WbInitializeEncryptionSegment.c)
 */

__int64 __fastcall WbGetInitializedEncryptionSegment(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v7; // rbx
  int WarbirdEncryptionSegment; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // rsi
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_BALANCED_NODE *v13; // r15
  char v14; // r14
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-20h] BYREF

  v18[0] = 0LL;
  v18[1] = 0LL;
  P[0] = 0LL;
  P[1] = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  WarbirdEncryptionSegment = WbValidateEncryptionSegmentArguments(a2, a3, P, v18);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_7;
  WarbirdEncryptionSegment = WbGetWarbirdEncryptionSegment(a1, v18, &v15);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_19;
  v7 = v15;
  if ( !*(_DWORD *)(v15 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = (unsigned __int64 *)(v15 + 8);
    v12 = KeAbPreAcquire(v15 + 8, 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
    if ( v13 )
      BYTE2(v13[1].Left) |= 1u;
    if ( !*(_DWORD *)(v7 + 16) )
    {
      v17 = *(_OWORD *)P;
      WarbirdEncryptionSegment = WbInitializeEncryptionSegment(&v17, a2, v15);
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( WarbirdEncryptionSegment >= 0 )
    {
      v7 = v15;
      goto LABEL_4;
    }
LABEL_19:
    v7 = v15;
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
  sub_140585234(v7);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x42524157u);
  return (unsigned int)WarbirdEncryptionSegment;
}
