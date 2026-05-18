/*
 * XREFs of sub_18001402C @ 0x18001402C
 * Callers:
 *     sub_18001BE34 @ 0x18001BE34 (sub_18001BE34.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_18001402C(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 32), a2);
  return 0LL;
}
