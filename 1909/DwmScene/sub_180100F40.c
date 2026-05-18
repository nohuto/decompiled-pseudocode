/*
 * XREFs of sub_180100F40 @ 0x180100F40
 * Callers:
 *     sub_1800FFD5C @ 0x1800FFD5C (sub_1800FFD5C.c)
 * Callees:
 *     sub_18000DCC0 @ 0x18000DCC0 (sub_18000DCC0.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180100F40(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  volatile signed __int32 *v6; // rbx
  __int64 *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v10; // [rsp+38h] [rbp-30h]
  const void *Src; // [rsp+40h] [rbp-28h] BYREF

  v4 = sub_1800F0EB4(a1);
  sub_18000DCC0(v4, &v9, 0);
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
  v7 = (__int64 *)sub_18002C0E4(&Src, (_QWORD *)(a1 + 24), " ColorBuffer");
  sub_1800645F4(*v5, v7);
  return sub_180064DAC(*v5, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), a2, 3, 0LL);
}
