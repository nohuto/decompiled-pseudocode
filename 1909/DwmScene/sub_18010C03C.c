/*
 * XREFs of sub_18010C03C @ 0x18010C03C
 * Callers:
 *     sub_18010C4CC @ 0x18010C4CC (sub_18010C4CC.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18010C560 @ 0x18010C560 (sub_18010C560.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18010C03C(__int64 *a1, __int64 *a2)
{
  __int64 *v4; // rdi
  __int64 *v5; // r15
  __int64 *v6; // r12
  __int64 *i; // rbx
  __int64 *v8; // rcx
  __int64 *v9; // rbx
  __int64 *j; // r8
  char v11; // al
  volatile signed __int32 *v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  volatile signed __int32 *v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h]
  char v17[8]; // [rsp+38h] [rbp-18h] BYREF

  v16 = -2LL;
  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    if ( a1 + 2 != a2 )
    {
      v5 = a1;
      do
      {
        v6 = v4;
        v14 = *v4;
        v15 = (volatile signed __int32 *)v5[3];
        *v4 = 0LL;
        v5[3] = 0LL;
        if ( (unsigned __int8)sub_18010C560(v17, &v14, a1) )
        {
          for ( i = v4; i != a1; std::shared_ptr<__ExceptionPtr>::operator=(i + 2, i) )
            i -= 2;
          v8 = a1;
        }
        else
        {
          v9 = v5;
          for ( j = v5; ; j = v9 )
          {
            v11 = sub_18010C560(v17, &v14, j);
            v8 = v6;
            if ( !v11 )
              break;
            std::shared_ptr<__ExceptionPtr>::operator=(v6, v9);
            v6 = v9;
            v9 -= 2;
          }
        }
        std::shared_ptr<__ExceptionPtr>::operator=(v8, &v14);
        if ( v15 )
        {
          if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
          {
            v12 = v15;
            (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
            if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          }
        }
        v4 += 2;
        v5 += 2;
      }
      while ( v4 != a2 );
    }
  }
  return a2;
}
