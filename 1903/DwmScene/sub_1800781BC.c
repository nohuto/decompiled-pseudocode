/*
 * XREFs of sub_1800781BC @ 0x1800781BC
 * Callers:
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 *     sub_1800FE530 @ 0x1800FE530 (sub_1800FE530.c)
 *     sub_1800FE8E0 @ 0x1800FE8E0 (sub_1800FE8E0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18006E4D4 @ 0x18006E4D4 (sub_18006E4D4.c)
 *     sub_18006EF74 @ 0x18006EF74 (sub_18006EF74.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800781BC(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v4; // rsi
  void *v5; // rax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-18h]

  v4 = (_QWORD *)(sub_18006EF74(*a3, (__int64)a2) + 8);
  if ( !*v4 )
  {
    v5 = operator new(0xA8uLL);
    v6 = v5 ? sub_18006E4D4((__int64)v5) : 0LL;
    v10 = v6 + 16;
    v11 = (volatile signed __int32 *)v6;
    std::shared_ptr<__ExceptionPtr>::operator=(v4, &v10);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        v7 = v11;
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = v4[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = v4[1];
  }
  *a2 = *v4;
  a2[1] = v8;
  return a2;
}
