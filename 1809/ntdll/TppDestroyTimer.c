/*
 * XREFs of TppDestroyTimer @ 0x18002D5D4
 * Callers:
 *     TppTimerpFree @ 0x18002C400 (TppTimerpFree.c)
 *     TppFreeWait @ 0x18002F780 (TppFreeWait.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18002DA74 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppDestroyTimer(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFFLL);
  return TppCleanupGroupMemberDestroy(a1);
}
