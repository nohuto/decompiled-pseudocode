/*
 * XREFs of MiSetPfnPageState @ 0x140142D2C
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnPageState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 34) ^= (*(_BYTE *)(a1 + 34) ^ a2) & 7;
}
