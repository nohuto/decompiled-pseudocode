/*
 * XREFs of sub_1800970AC @ 0x1800970AC
 * Callers:
 *     sub_180096A58 @ 0x180096A58 (sub_180096A58.c)
 *     sub_180096ED0 @ 0x180096ED0 (sub_180096ED0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18003118C @ 0x18003118C (sub_18003118C.c)
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_180094950 @ 0x180094950 (sub_180094950.c)
 *     sub_1800D2604 @ 0x1800D2604 (sub_1800D2604.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800970AC(__int64 a1, __int64 a2, unsigned int a3)
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
  v6 = (_QWORD *)sub_180064400(a1);
  v7 = *(_DWORD *)(a1 + 304);
  v8 = (__int64 *)(a1 + 272);
  v9 = *(_DWORD *)(a1 + 116);
  v10 = *(_QWORD *)(a1 + 272);
  if ( !v10 )
  {
    sub_180094950(v6, &v14, 1);
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
    sub_180064684(*v8, 8, 0);
    v10 = *v8;
  }
  v12 = sub_18003118C(8, v9);
  return sub_1800D2604(v10, a2, a3, v12, v7, 8);
}
