/*
 * XREFs of sub_1800DBE50 @ 0x1800DBE50
 * Callers:
 *     sub_1800DBFD4 @ 0x1800DBFD4 (sub_1800DBFD4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_1800DA6D4 @ 0x1800DA6D4 (sub_1800DA6D4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800DBE50(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rax
  char *v9; // r15
  char *i; // rdi
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  char v15[8]; // [rsp+50h] [rbp-21h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp-19h]
  char *v17; // [rsp+60h] [rbp-11h] BYREF
  char *v18; // [rsp+68h] [rbp-9h]
  __int64 v19; // [rsp+70h] [rbp-1h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  sub_1800DA6D4(&v17, a1 + 40, 1);
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = a5[1];
  if ( v8 )
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
  *a2 = *a5;
  a2[1] = a5[1];
  v9 = v18;
  for ( i = v17; i != v9; i += 16 )
  {
    v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *, __int64, __int64, _QWORD *))(**(_QWORD **)i + 16LL))(
                       *(_QWORD *)i,
                       v15,
                       a3,
                       a4,
                       a2);
    std::shared_ptr<__ExceptionPtr>::operator=(a2, v11);
    v12 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
  }
  sub_180011388((__int64 *)&v17);
  v13 = (volatile signed __int32 *)a5[1];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return a2;
}
