/*
 * XREFs of sub_18001BBD0 @ 0x18001BBD0
 * Callers:
 *     sub_1800165F0 @ 0x1800165F0 (sub_1800165F0.c)
 *     sub_1800166DC @ 0x1800166DC (sub_1800166DC.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_18001BBD0(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2);
  return 0LL;
}
