/*
 * XREFs of IsHangulLV @ 0x1402F4E58
 * Callers:
 *     CanComposeHangul @ 0x1402F4DB0 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1402F4E24 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x140899E9C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
