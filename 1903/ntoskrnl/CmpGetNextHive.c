/*
 * XREFs of CmpGetNextHive @ 0x140637EC0
 * Callers:
 *     CmpDoFlushAll @ 0x140168D30 (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     CmpUnblockHiveWrites @ 0x1406F49FC (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1406F4D08 (CmpBlockHiveWrites.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     CmpReferenceHive @ 0x14064E82C (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
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
  if ( P && _InterlockedExchangeAdd(P + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)P);
  return v1;
}
