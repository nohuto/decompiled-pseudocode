/*
 * XREFs of sub_1800FAFD0 @ 0x1800FAFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DCC0 @ 0x18000DCC0 (sub_18000DCC0.c)
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800FAFD0(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp-40h]
  __int64 v15[4]; // [rsp+40h] [rbp-38h] BYREF

  v10 = sub_18006CE94(a2);
  sub_18000DCC0(v10, &v13, 0);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 232), &v13);
  v11 = v14;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v15[2] = 0LL;
  v15[3] = 15LL;
  LOBYTE(v15[0]) = 0;
  sub_18000E168(v15, 0x1AuLL, 0LL, "ImageProcessingEffectBloom");
  sub_1800645F4(*(_QWORD *)(a1 + 232), v15);
  return sub_180064DAC(*(_QWORD *)(a1 + 232), a3, a4, a5, a6, a2);
}
