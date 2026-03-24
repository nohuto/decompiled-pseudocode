/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x140167130
 * Callers:
 *     <none>
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x140091860 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeAutoExpandPushLock(PVOID P)
{
  ExCleanupAutoExpandPushLock((__int64)P);
  ExFreePoolWithTag(P, 0);
}
