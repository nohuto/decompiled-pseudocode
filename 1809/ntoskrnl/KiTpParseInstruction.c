/*
 * XREFs of KiTpParseInstruction @ 0x140846F34
 * Callers:
 *     KiTpSetupCompletion @ 0x140846FEC (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x14029EAEC (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x14029F49C (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(char *a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix(a1);
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction((__int64)a1, 0LL);
  return result;
}
