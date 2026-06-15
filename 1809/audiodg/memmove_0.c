/*
 * XREFs of memmove_0 @ 0x14001D9BB
 * Callers:
 *     memmove_s @ 0x140035A94 (memmove_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
