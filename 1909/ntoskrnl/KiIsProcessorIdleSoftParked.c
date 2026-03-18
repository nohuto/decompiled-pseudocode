/*
 * XREFs of KiIsProcessorIdleSoftParked @ 0x1401BF3AC
 * Callers:
 *     KiChooseTargetProcessor @ 0x1400691D0 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402AF2E8 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsProcessorIdleSoftParked(__int64 a1)
{
  return *(_BYTE *)(a1 + 35) == 6;
}
