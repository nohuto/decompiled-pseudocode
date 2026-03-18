/*
 * XREFs of ??9?$RedirectedFieldcbwndExtra@H@tagWND@@QEBAEAEBH@Z @ 0x1C01105B0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldcbwndExtra<int>::operator!=(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 121) + 200LL) != *a2;
}
