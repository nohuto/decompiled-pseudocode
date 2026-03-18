/*
 * XREFs of CmpLockKcbShared @ 0x1405FBB40
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400CFEE0 (CmpDoQueryKeyName.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140633EC0 (CmQueryMultipleValueKey.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     CmpCloseKeyObject @ 0x1406B6B30 (CmpCloseKeyObject.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 result; // rax

  result = ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
