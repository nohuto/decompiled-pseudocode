/*
 * XREFs of KiIsProcessorBusySoftParked @ 0x1401BF39C
 * Callers:
 *     KiSearchForNewThread @ 0x1400132D4 (KiSearchForNewThread.c)
 *     KiSwapThread @ 0x140040B40 (KiSwapThread.c)
 *     KiSelectReadyThread @ 0x140041FA0 (KiSelectReadyThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsProcessorBusySoftParked(__int64 a1)
{
  return *(_BYTE *)(a1 + 35) == 7;
}
