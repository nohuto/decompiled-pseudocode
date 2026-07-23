/*
 * XREFs of InbvEnableDisplayString @ 0x140194040
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_14043D7B4;
  byte_14043D7B4 = a1;
  return result;
}
