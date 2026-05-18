/*
 * XREFs of sub_180094CA8 @ 0x180094CA8
 * Callers:
 *     sub_1800972F4 @ 0x1800972F4 (sub_1800972F4.c)
 *     sub_180097434 @ 0x180097434 (sub_180097434.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18003107C @ 0x18003107C (sub_18003107C.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_180094960 @ 0x180094960 (sub_180094960.c)
 *     sub_1800D24F4 @ 0x1800D24F4 (sub_1800D24F4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180094CA8(__int64 *a1, __int64 a2, unsigned int a3, int a4, int a5, int a6, _QWORD *a7)
{
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  unsigned int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+38h] [rbp-30h]

  v11 = *a1;
  if ( !*a1 )
  {
    sub_180094960(a7, &v15, 1, (__int64)&a5);
    std::shared_ptr<__ExceptionPtr>::operator=(a1, &v15);
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
    sub_180064574(*a1, 8, 0);
    v11 = *a1;
  }
  v13 = sub_18003107C(5, a4);
  return sub_1800D24F4(v11, a2, a3, v13, a6, 5);
}
