/*
 * XREFs of ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C0091454
 * Callers:
 *     SetDialogPointer @ 0x1C00F6930 (SetDialogPointer.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 281) + 252LL) != *a2;
}
