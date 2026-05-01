/*
 * XREFs of ??0hresult@winrt@@QEAA@H@Z @ 0x1801ED1F8
 * Callers:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1800C5130 (-throw_last_error@winrt@@YAXXZ.c)
 * Callees:
 *     <none>
 */

winrt::hresult *__fastcall winrt::hresult::hresult(winrt::hresult *this, int a2)
{
  *(_DWORD *)this = a2;
  return this;
}
