/*
 * XREFs of _malloc_base @ 0x18002C152
 * Callers:
 *     __tlregdtor @ 0x18002D87C (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
