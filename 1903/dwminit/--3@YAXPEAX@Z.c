/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180004F88
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x180005FBC (--3@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete(void *a1)
{
  DefaultHeap::Free(a1);
}
