/*
 * XREFs of sub_1800E0FBC @ 0x1800E0FBC
 * Callers:
 *     sub_180108B50 @ 0x180108B50 (sub_180108B50.c)
 *     sub_180108E50 @ 0x180108E50 (sub_180108E50.c)
 *     sub_1801092FC @ 0x1801092FC (sub_1801092FC.c)
 *     sub_180109400 @ 0x180109400 (sub_180109400.c)
 *     sub_1801095E0 @ 0x1801095E0 (sub_1801095E0.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 *     sub_18010A044 @ 0x18010A044 (sub_18010A044.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800E1598 @ 0x1800E1598 (sub_1800E1598.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0FBC(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  volatile signed __int32 *v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+28h] [rbp-19h]

  sub_1800E1598(a1);
  v4 = a2[1];
  v5 = *a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)a1 = v5;
  v6 = *(volatile signed __int32 **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  if ( v6 && _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2 + 2);
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 8);
  *(_DWORD *)(a1 + 36) = *((_DWORD *)a2 + 9);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 5);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 7);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 9);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 11);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 13);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 15);
  *(_QWORD *)(a1 + 136) = a2[17];
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 144), a2 + 18);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 160), a2 + 20);
  *(_QWORD *)&v8 = 0LL;
  result = a1;
  BYTE8(v8) = 1;
  *((_DWORD *)a2 + 9) = 4;
  *(_OWORD *)(a2 + 5) = v8;
  *(_OWORD *)(a2 + 7) = 0uLL;
  *(_OWORD *)(a2 + 9) = 0uLL;
  *(_OWORD *)(a2 + 11) = 0uLL;
  *(_OWORD *)(a2 + 13) = 0uLL;
  *(_OWORD *)(a2 + 15) = 0uLL;
  a2[17] = 0LL;
  return result;
}
