/*
 * XREFs of CmpLockKcbShared @ 0x1405FAAF0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140092BC0 (CmpDoQueryKeyName.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140630040 (CmQueryMultipleValueKey.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     CmpCloseKeyObject @ 0x1406BB480 (CmpCloseKeyObject.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082BCB4 (CmKeyBodyRemapToVirtual.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 result; // rax

  result = ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
