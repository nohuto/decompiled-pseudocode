/*
 * XREFs of sub_18006E4D8 @ 0x18006E4D8
 * Callers:
 *     sub_18006CC30 @ 0x18006CC30 (sub_18006CC30.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_180084F94 @ 0x180084F94 (sub_180084F94.c)
 *     sub_1800851A8 @ 0x1800851A8 (sub_1800851A8.c)
 *     sub_1800B4324 @ 0x1800B4324 (sub_1800B4324.c)
 *     sub_1800DE2F8 @ 0x1800DE2F8 (sub_1800DE2F8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 */

_QWORD *__fastcall sub_18006E4D8(__int64 a1, _QWORD *a2, __int64 a3)
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
