/*
 * XREFs of IsHangulLV @ 0x180088A00
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18007E0E4 (Normalization__NormalizeCharacter.c)
 *     CanComposeHangul @ 0x1800F9194 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1800F9208 (ComposeHangulLVT.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
