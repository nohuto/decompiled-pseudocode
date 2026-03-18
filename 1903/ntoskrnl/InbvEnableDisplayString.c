/*
 * XREFs of InbvEnableDisplayString @ 0x14019E650
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140468224;
  byte_140468224 = a1;
  return result;
}
