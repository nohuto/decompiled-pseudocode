/*
 * XREFs of sub_180080BE0 @ 0x180080BE0
 * Callers:
 *     sub_1800812E0 @ 0x1800812E0 (sub_1800812E0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall sub_180080BE0(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 *v8; // rbx
  __int64 *v9; // r15
  __int64 *v10; // r14
  __int64 *i; // rsi
  __int64 *v12; // rcx
  __int64 *v13; // rsi
  __int64 *j; // rdx
  char v15; // al
  volatile signed __int32 *v16; // rsi
  __int64 v18; // [rsp+28h] [rbp-50h] BYREF
  volatile signed __int32 *v19; // [rsp+30h] [rbp-48h]

  if ( a2 != a3 )
  {
    v8 = a2 + 2;
    if ( a2 + 2 != a3 )
    {
      v9 = a2;
      do
      {
        v10 = v8;
        v18 = *v8;
        v19 = (volatile signed __int32 *)v9[3];
        *v8 = 0LL;
        v9[3] = 0LL;
        if ( (unsigned __int8)a4(&v18, a2) )
        {
          for ( i = v8; i != a2; std::shared_ptr<__ExceptionPtr>::operator=(i + 2, i) )
            i -= 2;
          v12 = a2;
        }
        else
        {
          v13 = v9;
          for ( j = v9; ; j = v13 )
          {
            v15 = a4(&v18, j);
            v12 = v10;
            if ( !v15 )
              break;
            std::shared_ptr<__ExceptionPtr>::operator=(v10, v13);
            v10 = v13;
            v13 -= 2;
          }
        }
        std::shared_ptr<__ExceptionPtr>::operator=(v12, &v18);
        v16 = v19;
        if ( v19 )
        {
          if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          }
        }
        v8 += 2;
        v9 += 2;
      }
      while ( v8 != a3 );
    }
  }
  *a1 = a3;
  return a1;
}
