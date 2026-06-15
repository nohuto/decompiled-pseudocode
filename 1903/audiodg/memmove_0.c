/*
 * XREFs of memmove_0 @ 0x140017D7B
 * Callers:
 *     memmove_s @ 0x14002FF40 (memmove_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
