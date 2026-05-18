/*
 * XREFs of sub_18011EC54 @ 0x18011EC54
 * Callers:
 *     sub_18011E8C0 @ 0x18011E8C0 (sub_18011E8C0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 */

__int64 **__fastcall sub_18011EC54(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *v4; // rbp
  __int64 *v8; // rsi
  __int64 *v9; // rdi
  __int64 i; // rbp

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(__int64 **)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v9, v4);
        v9 += 2;
        v4 += 2;
      }
      while ( v4 != v8 );
      v8 = *(__int64 **)(a1 + 8);
    }
    for ( i = (__int64)v9; (__int64 *)i != v8; i += 16LL )
      unknown_libname_115(i, 0);
    *(_QWORD *)(a1 + 8) = v9;
  }
  *a2 = a3;
  return a2;
}
