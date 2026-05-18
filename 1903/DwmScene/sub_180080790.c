/*
 * XREFs of sub_180080790 @ 0x180080790
 * Callers:
 *     sub_180080104 @ 0x180080104 (sub_180080104.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180080790(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 v5; // rbp
  __int64 *v9; // r14
  char *v10; // rcx
  __int64 *v11; // rdi
  char *v12; // rbx
  __int64 *v13; // rsi
  __int64 result; // rax
  signed __int64 v15; // rbx

  v5 = (__int64)a4;
  v9 = a4;
  if ( a1 != a2 )
  {
    v10 = (char *)((char *)a1 - (char *)a4);
    do
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      *v9 = *(__int64 *)((char *)v9 + (_QWORD)v10);
      v9[1] = *(__int64 *)((char *)v9 + (_QWORD)v10 + 8);
      *(__int64 *)((char *)v9 + (_QWORD)v10) = 0LL;
      *(__int64 *)((char *)v9 + (_QWORD)v10 + 8) = 0LL;
      v9 += 2;
    }
    while ( (__int64 *)((char *)v9 + (_QWORD)v10) != a2 );
  }
  v11 = a4;
  std::shared_ptr<__ExceptionPtr>::operator=(a1, a2);
  v12 = (char *)(a1 + 2);
  v13 = a2 + 2;
  do
  {
    while ( !a5(v13, v11) )
    {
      std::shared_ptr<__ExceptionPtr>::operator=(v12, v11);
      v12 += 16;
      v11 += 2;
      if ( v11 == v9 - 2 )
      {
        while ( v13 != a3 )
        {
          std::shared_ptr<__ExceptionPtr>::operator=(v12, v13);
          v12 += 16;
          v13 += 2;
        }
        result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v12, v9 - 2);
        goto LABEL_18;
      }
    }
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v12, v13);
    v12 += 16;
    v13 += 2;
  }
  while ( v13 != a3 );
  if ( v11 != v9 )
  {
    v15 = v12 - (char *)v11;
    do
    {
      result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((__int64 *)((char *)v11 + v15), v11);
      v11 += 2;
    }
    while ( v11 != v9 );
  }
LABEL_18:
  while ( (__int64 *)v5 != v9 )
  {
    result = unknown_libname_115(v5, 0);
    v5 += 16LL;
  }
  return result;
}
