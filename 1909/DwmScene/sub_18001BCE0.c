/*
 * XREFs of sub_18001BCE0 @ 0x18001BCE0
 * Callers:
 *     sub_180016660 @ 0x180016660 (sub_180016660.c)
 *     sub_18001674C @ 0x18001674C (sub_18001674C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_18001BCE0(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2);
  return 0LL;
}
