/*
 * XREFs of CmpLockKcbShared @ 0x140644190
 * Callers:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 result; // rax

  result = ExAcquirePushLockSharedEx(a1 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
  return result;
}
