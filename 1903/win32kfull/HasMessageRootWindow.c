/*
 * XREFs of HasMessageRootWindow @ 0x1C01F8454
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     _GetAncestor @ 0x1C012EF14 (_GetAncestor.c)
 */

__int64 __fastcall HasMessageRootWindow(__int64 a1)
{
  unsigned int v1; // r10d
  _QWORD *Ancestor; // rax
  _QWORD *v3; // r11

  v1 = 0;
  if ( a1 )
  {
    Ancestor = GetAncestor(a1, 4);
    if ( Ancestor == v3 )
      return 1;
  }
  return v1;
}
