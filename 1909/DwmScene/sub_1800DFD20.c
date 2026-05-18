/*
 * XREFs of sub_1800DFD20 @ 0x1800DFD20
 * Callers:
 *     sub_18006AB68 @ 0x18006AB68 (sub_18006AB68.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall sub_1800DFD20(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *result; // rax

  result = std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 8), a2);
  *(_DWORD *)(a1 + 56) = a3;
  return result;
}
