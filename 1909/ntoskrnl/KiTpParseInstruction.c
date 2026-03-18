/*
 * XREFs of KiTpParseInstruction @ 0x14087FDA4
 * Callers:
 *     KiTpSetupCompletion @ 0x14087FEB0 (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpEmulateInstruction @ 0x1402B44F8 (KiTpEmulateInstruction.c)
 *     KiTpParseInstructionPrefix @ 0x1402B4EA8 (KiTpParseInstructionPrefix.c)
 */

__int64 __fastcall KiTpParseInstruction(char *a1)
{
  __int64 result; // rax

  result = KiTpParseInstructionPrefix(a1);
  if ( (int)result >= 0 )
    return KiTpEmulateInstruction((__int64)a1, 0LL);
  return result;
}
