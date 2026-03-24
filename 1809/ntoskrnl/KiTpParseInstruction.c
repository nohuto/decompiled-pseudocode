/*
 * XREFs of KiTpParseInstruction @ 0x140845CD4
 * Callers:
 *     KiTpSetupCompletion @ 0x140845D8C (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x14029E8FC (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x14029F2AC (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(char *a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix(a1);
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction((__int64)a1, 0LL);
  return result;
}
