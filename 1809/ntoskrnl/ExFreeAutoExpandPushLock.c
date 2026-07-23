/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x140167230
 * Callers:
 *     <none>
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1400917A0 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeAutoExpandPushLock(PVOID P)
{
  ExCleanupAutoExpandPushLock((__int64)P);
  ExFreePoolWithTag(P, 0);
}
