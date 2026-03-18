/*
 * XREFs of CmpDetachFromRegistryProcess @ 0x1405D1AE8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F2A38 (CmpDoBuildVirtualStack.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x1409CC66C (CmGetSystemDriverList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 */

__int64 __fastcall CmpDetachFromRegistryProcess(__int64 a1)
{
  return KiUnstackDetachProcess(a1, 0LL);
}
