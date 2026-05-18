/*
 * XREFs of sub_1800A589C @ 0x1800A589C
 * Callers:
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180091350 @ 0x180091350 (sub_180091350.c)
 *     sub_180091930 @ 0x180091930 (sub_180091930.c)
 *     sub_1800A3AA0 @ 0x1800A3AA0 (sub_1800A3AA0.c)
 *     sub_1800F2944 @ 0x1800F2944 (sub_1800F2944.c)
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 *     sub_1800F3410 @ 0x1800F3410 (sub_1800F3410.c)
 *     sub_1800F5478 @ 0x1800F5478 (sub_1800F5478.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800A589C(__int64 a1)
{
  __int64 *v2; // rax
  _QWORD *v3; // rdi
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rcx
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbx
  _QWORD v8[3]; // [rsp+28h] [rbp-69h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-51h]
  __int64 v10; // [rsp+48h] [rbp-49h] BYREF
  volatile signed __int32 *v11; // [rsp+50h] [rbp-41h]
  __int64 v12[5]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v13[8]; // [rsp+80h] [rbp-11h] BYREF
  volatile signed __int32 *v14; // [rsp+88h] [rbp-9h]
  __int64 v15[8]; // [rsp+98h] [rbp+7h] BYREF

  v12[4] = -2LL;
  v2 = sub_1800A3AA0((__int128 *)a1, &v10, 1u);
  v3 = (_QWORD *)(a1 + 18632);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 18632), v2);
  v4 = v11;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v9 = 15LL;
  LOBYTE(v8[0]) = 0;
  v8[2] = 6LL;
  memmove(v8, "Global", 6uLL);
  BYTE6(v8[0]) = 0;
  sub_1800F3410(*v3, v8);
  if ( v9 >= 0x10 )
  {
    v5 = v8[0];
    if ( v9 + 1 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v8[0] - 8LL);
      if ( (unsigned __int64)(v8[0] - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v9 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v5);
  }
  sub_1800F2AC4(*v3);
  v6 = (__int64 *)sub_1800F2944(*v3, v13);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 18648), v6);
  v7 = v14;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v12[2] = 0LL;
  v12[3] = 15LL;
  LOBYTE(v12[0]) = 0;
  sub_18000E118(v12, 0x17uLL, 0LL, "Global/RenderTargetSize");
  sub_180091350((__int64)v15, v12, 5);
  sub_1800F5478(*(_QWORD *)(a1 + 18648), v15, 1LL);
  sub_180091930(v15);
}
