/*
 * XREFs of memmove_0 @ 0x1400181FB
 * Callers:
 *     memmove_s @ 0x14002FEC0 (memmove_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
