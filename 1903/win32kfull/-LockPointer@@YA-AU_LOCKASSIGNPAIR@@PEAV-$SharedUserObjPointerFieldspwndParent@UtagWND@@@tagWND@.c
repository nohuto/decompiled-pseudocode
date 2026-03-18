/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00BFE08
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LockPointer(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = 0LL;
  if ( a3 )
    v3 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(*(_QWORD *)(a2 - 64) + 48LL) = v3;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  return result;
}
