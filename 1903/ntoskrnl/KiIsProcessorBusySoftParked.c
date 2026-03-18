/*
 * XREFs of KiIsProcessorBusySoftParked @ 0x1401BE8AC
 * Callers:
 *     KiSearchForNewThread @ 0x1400130A4 (KiSearchForNewThread.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     KiSelectReadyThread @ 0x140042260 (KiSelectReadyThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsProcessorBusySoftParked(__int64 a1)
{
  return *(_BYTE *)(a1 + 35) == 7;
}
