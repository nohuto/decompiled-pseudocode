/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180004FEC
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x1800063A0 (--3@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete(void *a1)
{
  WPF::ProcessHeapImpl::Free(a1);
}
