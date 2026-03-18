/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C002E67C
 * Callers:
 *     LinkWindow @ 0x1C002E120 (LinkWindow.c)
 *     UnlinkWindow @ 0x1C002FDB0 (UnlinkWindow.c)
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
  *(_QWORD *)(*(_QWORD *)(a2 - 24) + 72LL) = v3;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  return result;
}
