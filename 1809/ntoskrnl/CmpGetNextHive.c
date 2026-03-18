/*
 * XREFs of CmpGetNextHive @ 0x1405D00F0
 * Callers:
 *     CmpDoFlushAll @ 0x1401579E8 (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     CmpBlockHiveWrites @ 0x1407F06C0 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1407F0908 (CmpUnblockHiveWrites.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1405AFDEC (CmpDeleteHive.c)
 *     CmpReferenceHive @ 0x1405D16FC (CmpReferenceHive.c)
 */

__int64 *__fastcall CmpGetNextHive(volatile signed __int32 *P)
{
  __int64 *v1; // rdi
  __int64 **v3; // rsi
  __int64 *v4; // r8
  __int64 **v5; // r8

  v1 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( P )
    v3 = (__int64 **)(P + 400);
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  v4 = *v3;
  while ( v4 != &CmpHiveListHead )
  {
    v1 = v4 - 200;
    if ( (unsigned __int8)CmpReferenceHive(v4 - 200) )
      break;
    v4 = *v5;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( P && _InterlockedExchangeAdd(P + 1072, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
  return v1;
}
