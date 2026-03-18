/*
 * XREFs of KiTpParseInstruction @ 0x1408806A4
 * Callers:
 *     KiTpSetupCompletion @ 0x1408807B0 (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x1402B4798 (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x1402B5148 (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(char *a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix(a1);
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction((__int64)a1, 0LL);
  return result;
}
