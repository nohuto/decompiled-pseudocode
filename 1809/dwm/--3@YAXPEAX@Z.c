/*
 * XREFs of ??3@YAXPEAX@Z @ 0x140003C38
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x14000425C (--3@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
