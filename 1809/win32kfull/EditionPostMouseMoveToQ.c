/*
 * XREFs of EditionPostMouseMoveToQ @ 0x1C00D3EC0
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 */

__int64 __fastcall EditionPostMouseMoveToQ(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  return PostInputMessage(a1, 0LL, 512LL, 0LL, a2, a3, a4, a5, 0, a6, 0LL, 0LL);
}
