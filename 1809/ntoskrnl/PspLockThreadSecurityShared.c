/*
 * XREFs of PspLockThreadSecurityShared @ 0x14008FC4C
 * Callers:
 *     PsLockThreadNameShared @ 0x1401B5F1C (PsLockThreadNameShared.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockThreadSecurityShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 1728, 0LL);
}
