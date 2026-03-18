/*
 * XREFs of ??8?$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z @ 0x1C00E72C0
 * Callers:
 *     SetDialogPointer @ 0x1C00E6FD0 (SetDialogPointer.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldfnid<unsigned short>::operator==(__int64 a1, _WORD *a2)
{
  return *(_WORD *)(*(_QWORD *)(a1 - 23) + 42LL) == *a2;
}
