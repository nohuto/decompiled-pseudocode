/*
 * XREFs of MiSetLeafPfnBuddy @ 0x1402D9458
 * Callers:
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetLeafPfnBuddy(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFFFELL;
  *a1 ^= (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  return result;
}
