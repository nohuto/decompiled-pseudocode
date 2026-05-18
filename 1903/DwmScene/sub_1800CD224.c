/*
 * XREFs of sub_1800CD224 @ 0x1800CD224
 * Callers:
 *     sub_1800CE7E0 @ 0x1800CE7E0 (sub_1800CE7E0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800642F8 @ 0x1800642F8 (sub_1800642F8.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_1800CC6E8 @ 0x1800CC6E8 (sub_1800CC6E8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CD224(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h]
  __int64 v11[4]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  v10 = -2LL;
  *(_QWORD *)&v9 = a2;
  v12 = 0LL;
  v13 = 0LL;
  sub_1800CC6E8(*a4, &v12);
  sub_1800642F8(a1, v11);
  sub_1800644E4(v12, v11);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 40LL))(v12, a3) )
  {
    v9 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=(&v12, (__int64 *)&v9);
    if ( *((_QWORD *)&v9 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v7 = *((_QWORD *)&v9 + 1);
        (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
      }
    }
  }
  *a2 = v12;
  a2[1] = v13;
  return a2;
}
