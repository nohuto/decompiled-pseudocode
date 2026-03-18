/*
 * XREFs of InbvEnableDisplayString @ 0x14019ED70
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140467F64;
  byte_140467F64 = a1;
  return result;
}
