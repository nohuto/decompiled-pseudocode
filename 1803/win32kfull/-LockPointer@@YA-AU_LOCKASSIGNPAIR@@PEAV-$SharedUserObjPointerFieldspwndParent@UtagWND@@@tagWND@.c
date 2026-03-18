/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00349AC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
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
  *(_QWORD *)(*(_QWORD *)(a2 - 40) + 48LL) = v3;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  return result;
}
