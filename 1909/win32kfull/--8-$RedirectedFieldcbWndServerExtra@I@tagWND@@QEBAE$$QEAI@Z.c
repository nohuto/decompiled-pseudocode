/*
 * XREFs of ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0109D24
 * Callers:
 *     xxxSetWindowLong @ 0x1C00A8474 (xxxSetWindowLong.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00AB5F8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 281) + 252LL) == *a2;
}
