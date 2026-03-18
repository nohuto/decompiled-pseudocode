/*
 * XREFs of KiTpParseInstruction @ 0x140845CF4
 * Callers:
 *     KiTpSetupCompletion @ 0x140845DAC (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x14029E7FC (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x14029F1AC (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(char *a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix(a1);
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction((__int64)a1, 0LL);
  return result;
}
