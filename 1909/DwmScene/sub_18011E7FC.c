/*
 * XREFs of sub_18011E7FC @ 0x18011E7FC
 * Callers:
 *     sub_1801343C0 @ 0x1801343C0 (sub_1801343C0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall sub_18011E7FC(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a1; i != a2; i += 2 )
  {
    std::shared_ptr<__ExceptionPtr>::operator=(a3, i);
    a3 += 2;
  }
  return a3;
}
