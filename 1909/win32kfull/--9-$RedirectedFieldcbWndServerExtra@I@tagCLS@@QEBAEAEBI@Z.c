/*
 * XREFs of ??9?$RedirectedFieldcbWndServerExtra@I@tagCLS@@QEBAEAEBI@Z @ 0x1C00F2A2C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagCLS::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 114) + 84LL) != *a2;
}
