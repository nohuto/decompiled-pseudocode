/*
 * XREFs of KiIsProcessorIdleSoftParked @ 0x1401BE8BC
 * Callers:
 *     KiChooseTargetProcessor @ 0x140068F60 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402AF588 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsProcessorIdleSoftParked(__int64 a1)
{
  return *(_BYTE *)(a1 + 35) == 6;
}
