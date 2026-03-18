/*
 * XREFs of HasMessageRootWindow @ 0x1C01F81A4
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     _GetAncestor @ 0x1C010A114 (_GetAncestor.c)
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
