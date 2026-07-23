/*
 * XREFs of CmpDetachFromRegistryProcess @ 0x1405D2AE8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x1409CD66C (CmGetSystemDriverList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 */

__int64 __fastcall CmpDetachFromRegistryProcess(__int64 a1)
{
  return KiUnstackDetachProcess(a1, 0LL);
}
