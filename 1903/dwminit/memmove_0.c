/*
 * XREFs of memmove_0 @ 0x1800065C5
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x180003658 (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
