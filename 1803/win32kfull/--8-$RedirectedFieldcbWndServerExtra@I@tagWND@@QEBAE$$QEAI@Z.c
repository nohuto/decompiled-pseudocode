/*
 * XREFs of ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0070C74
 * Callers:
 *     xxxSetWindowLong @ 0x1C0025120 (xxxSetWindowLong.c)
 *     xxxSetWindowLongPtr @ 0x1C0025674 (xxxSetWindowLongPtr.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 253) + 252LL) == *a2;
}
