/*
 * XREFs of sub_180096F9C @ 0x180096F9C
 * Callers:
 *     sub_180096948 @ 0x180096948 (sub_180096948.c)
 *     sub_180096DC0 @ 0x180096DC0 (sub_180096DC0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18003107C @ 0x18003107C (sub_18003107C.c)
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_180094840 @ 0x180094840 (sub_180094840.c)
 *     sub_1800D24F4 @ 0x1800D24F4 (sub_1800D24F4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180096F9C(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax
  int v7; // r14d
  __int64 *v8; // rdi
  int v9; // r15d
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  unsigned int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-20h]

  *(_DWORD *)(a1 + 292) |= 0x10000040u;
  *(_DWORD *)(a1 + 288) = 1;
  v6 = (_QWORD *)sub_1800642F0(a1);
  v7 = *(_DWORD *)(a1 + 304);
  v8 = (__int64 *)(a1 + 272);
  v9 = *(_DWORD *)(a1 + 116);
  v10 = *(_QWORD *)(a1 + 272);
  if ( !v10 )
  {
    sub_180094840(v6, &v14, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(v8, &v14);
    v11 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    sub_180064574(*v8, 8, 0);
    v10 = *v8;
  }
  v12 = sub_18003107C(8, v9);
  return sub_1800D24F4(v10, a2, a3, v12, v7, 8);
}
