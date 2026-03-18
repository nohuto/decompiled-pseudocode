/*
 * XREFs of ??8?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAE$$QEAW4ZBID@@@Z @ 0x1C00647E0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldzbid<enum ZBID>::operator==(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 174) + 236LL) == *a2;
}
