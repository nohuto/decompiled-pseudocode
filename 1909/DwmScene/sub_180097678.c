/*
 * XREFs of sub_180097678 @ 0x180097678
 * Callers:
 *     sub_180096A58 @ 0x180096A58 (sub_180096A58.c)
 *     sub_1800975A4 @ 0x1800975A4 (sub_1800975A4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18003118C @ 0x18003118C (sub_18003118C.c)
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_180094A70 @ 0x180094A70 (sub_180094A70.c)
 *     sub_1800D2604 @ 0x1800D2604 (sub_1800D2604.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180097678(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  _QWORD *v7; // rax
  int v8; // esi
  __int64 *v9; // rdi
  int v10; // ebp
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  unsigned int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v16; // [rsp+38h] [rbp-40h]
  int v17[14]; // [rsp+40h] [rbp-38h] BYREF

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x20u;
  *(_DWORD *)(a1 + 292) |= 0x20u;
  v7 = (_QWORD *)sub_180064400(a1);
  v8 = *(_DWORD *)(a1 + 304);
  v9 = (__int64 *)(a1 + 192);
  v10 = *(_DWORD *)(a1 + 124);
  v11 = *(_QWORD *)(a1 + 192);
  v17[0] = 2;
  if ( !v11 )
  {
    sub_180094A70(v7, &v15, 1, (__int64)v17);
    std::shared_ptr<__ExceptionPtr>::operator=(v9, &v15);
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
    sub_180064684(*v9, 8, 0);
    v11 = *v9;
  }
  v13 = sub_18003118C(6, v10);
  return sub_1800D2604(v11, a2, a3, v13, v8, 6);
}
