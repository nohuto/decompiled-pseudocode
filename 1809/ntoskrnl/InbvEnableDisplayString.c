/*
 * XREFs of InbvEnableDisplayString @ 0x140193F00
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_14043C6F4;
  byte_14043C6F4 = a1;
  return result;
}
