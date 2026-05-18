/*
 * XREFs of sub_18006E3C8 @ 0x18006E3C8
 * Callers:
 *     sub_18006CB20 @ 0x18006CB20 (sub_18006CB20.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_180084E84 @ 0x180084E84 (sub_180084E84.c)
 *     sub_180085098 @ 0x180085098 (sub_180085098.c)
 *     sub_1800B4214 @ 0x1800B4214 (sub_1800B4214.c)
 *     sub_1800DE1E8 @ 0x1800DE1E8 (sub_1800DE1E8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 */

_QWORD *__fastcall sub_18006E3C8(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *v4; // rdi
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 16);
  if ( (__int64 *)(a3 + 16) != v3 )
  {
    do
    {
      std::shared_ptr<__ExceptionPtr>::operator=(v4 - 2, v4);
      v4 += 2;
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
  }
  unknown_libname_115((__int64)(v3 - 2), 0);
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
