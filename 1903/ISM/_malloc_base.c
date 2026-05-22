/*
 * XREFs of _malloc_base @ 0x18002C4D2
 * Callers:
 *     __tlregdtor @ 0x18002DBFC (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
