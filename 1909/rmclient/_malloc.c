/*
 * XREFs of _malloc @ 0x1000CCE5
 * Callers:
 *     ??2@YAPAXI@Z @ 0x1000CFE2 (--2@YAPAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc(size_t Size)
{
  return _malloc(Size);
}
