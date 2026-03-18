/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x1408332C0
 * Callers:
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x14083286C (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
