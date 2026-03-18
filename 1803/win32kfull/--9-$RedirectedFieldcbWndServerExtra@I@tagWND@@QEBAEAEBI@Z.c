/*
 * XREFs of ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C0070C58
 * Callers:
 *     SetDialogPointer @ 0x1C00F1B10 (SetDialogPointer.c)
 *     NtUserSetWindowFNID @ 0x1C00FB970 (NtUserSetWindowFNID.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 253) + 252LL) != *a2;
}
