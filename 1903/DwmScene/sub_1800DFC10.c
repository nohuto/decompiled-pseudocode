/*
 * XREFs of sub_1800DFC10 @ 0x1800DFC10
 * Callers:
 *     sub_18006AA58 @ 0x18006AA58 (sub_18006AA58.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall sub_1800DFC10(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *result; // rax

  result = std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 8), a2);
  *(_DWORD *)(a1 + 56) = a3;
  return result;
}
