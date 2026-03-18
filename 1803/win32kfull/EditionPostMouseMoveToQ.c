/*
 * XREFs of EditionPostMouseMoveToQ @ 0x1C00199C0
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 */

__int64 __fastcall EditionPostMouseMoveToQ(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  return PostInputMessage(a1, 0LL, 512LL, 0LL, a2, a3, a4, a5, 0, a6, 0LL, 0LL);
}
