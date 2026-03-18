/*
 * XREFs of ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0123DD8
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C00666A0 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C006782C (xxxSetWindowLong.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 265) + 252LL) == *a2;
}
