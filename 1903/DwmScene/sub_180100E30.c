/*
 * XREFs of sub_180100E30 @ 0x180100E30
 * Callers:
 *     sub_1800FFC4C @ 0x1800FFC4C (sub_1800FFC4C.c)
 * Callees:
 *     sub_18000DC70 @ 0x18000DC70 (sub_18000DC70.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002BFD4 @ 0x18002BFD4 (sub_18002BFD4.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_1800F0DA4 @ 0x1800F0DA4 (sub_1800F0DA4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180100E30(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  volatile signed __int32 *v6; // rbx
  __int64 *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v10; // [rsp+38h] [rbp-30h]
  const void *Src; // [rsp+40h] [rbp-28h] BYREF

  v4 = sub_1800F0DA4(a1);
  sub_18000DC70(v4, &v9, 0);
  v5 = (__int64 *)(a1 + 1912);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1912), &v9);
  v6 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = (__int64 *)sub_18002BFD4(&Src, (_QWORD *)(a1 + 24), " ColorBuffer");
  sub_1800644E4(*v5, v7);
  return sub_180064C9C(*v5, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), a2, 3, 0LL);
}
