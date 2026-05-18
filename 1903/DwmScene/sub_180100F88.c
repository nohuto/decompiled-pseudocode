/*
 * XREFs of sub_180100F88 @ 0x180100F88
 * Callers:
 *     sub_1800FFC4C @ 0x1800FFC4C (sub_1800FFC4C.c)
 *     sub_180100330 @ 0x180100330 (sub_180100330.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180026770 @ 0x180026770 (sub_180026770.c)
 *     sub_18002BFD4 @ 0x18002BFD4 (sub_18002BFD4.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 *     sub_1800F0DA4 @ 0x1800F0DA4 (sub_1800F0DA4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180100F88(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rsi
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v8; // [rsp+38h] [rbp-30h]
  const void *Src; // [rsp+40h] [rbp-28h] BYREF

  v2 = (_QWORD *)sub_1800F0DA4(a1);
  sub_180026770(v2, &v7, 1u);
  v3 = (__int64 *)(a1 + 1832);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1832), &v7);
  v4 = v8;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (__int64 *)sub_18002BFD4(&Src, (_QWORD *)(a1 + 24), " DepthBuffer");
  sub_1800644E4(*v3, v5);
  return sub_1800D0348((_QWORD *)*v3, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), 1u, 0, 0LL);
}
