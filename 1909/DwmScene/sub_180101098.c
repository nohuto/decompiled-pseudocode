/*
 * XREFs of sub_180101098 @ 0x180101098
 * Callers:
 *     sub_1800FFD5C @ 0x1800FFD5C (sub_1800FFD5C.c)
 *     sub_180100440 @ 0x180100440 (sub_180100440.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180026880 @ 0x180026880 (sub_180026880.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_1800D0458 @ 0x1800D0458 (sub_1800D0458.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180101098(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rsi
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v8; // [rsp+38h] [rbp-30h]
  const void *Src; // [rsp+40h] [rbp-28h] BYREF

  v2 = (_QWORD *)sub_1800F0EB4(a1);
  sub_180026880(v2, &v7, 1u);
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
  v5 = (__int64 *)sub_18002C0E4(&Src, (_QWORD *)(a1 + 24), " DepthBuffer");
  sub_1800645F4(*v3, v5);
  return sub_1800D0458((_QWORD *)*v3, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), 1u, 0, 0LL);
}
