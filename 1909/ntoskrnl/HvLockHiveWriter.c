/*
 * XREFs of HvLockHiveWriter @ 0x1406ED658
 * Callers:
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpReorganizeHive @ 0x14068EB68 (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x1407882E0 (CmpCreateHiveRootCell.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvLockHiveWriter(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
}
