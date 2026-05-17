/*
 * XREFs of TppDestroyTimer @ 0x180031A74
 * Callers:
 *     TppFreeWait @ 0x180030280 (TppFreeWait.c)
 *     TppTimerpFree @ 0x1800317D0 (TppTimerpFree.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x180031B40 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppDestroyTimer(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFFLL);
  return TppCleanupGroupMemberDestroy(a1);
}
