/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x140833C60
 * Callers:
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x14083320C (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
