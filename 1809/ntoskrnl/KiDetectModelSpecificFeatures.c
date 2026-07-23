/*
 * XREFs of KiDetectModelSpecificFeatures @ 0x1405662E0
 * Callers:
 *     KiSetProcessorSignature @ 0x1405707A8 (KiSetProcessorSignature.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 */

__int64 __fastcall KiDetectModelSpecificFeatures(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 36) )
    return KeGetPrcb(0);
  return result;
}
