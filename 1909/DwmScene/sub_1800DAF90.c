/*
 * XREFs of sub_1800DAF90 @ 0x1800DAF90
 * Callers:
 *     sub_1800DADBC @ 0x1800DADBC (sub_1800DADBC.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800DAF90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64 *))
{
  __int64 v7; // rbx
  __int64 v9; // rsi

  v7 = a2;
  if ( a3 < a2 )
  {
    do
    {
      v9 = (v7 - 1) >> 1;
      if ( !a5(a1 + 16 * v9, a4) )
        break;
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16 * v7), (__int64 *)(a1 + 16 * ((v7 - 1) >> 1)));
      v7 = (v7 - 1) >> 1;
    }
    while ( a3 < v9 );
  }
  return std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16 * v7), a4);
}
