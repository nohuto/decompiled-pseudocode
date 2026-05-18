/*
 * XREFs of sub_1800E10CC @ 0x1800E10CC
 * Callers:
 *     sub_180108C60 @ 0x180108C60 (sub_180108C60.c)
 *     sub_180108F60 @ 0x180108F60 (sub_180108F60.c)
 *     sub_18010940C @ 0x18010940C (sub_18010940C.c)
 *     sub_180109510 @ 0x180109510 (sub_180109510.c)
 *     sub_1801096F0 @ 0x1801096F0 (sub_1801096F0.c)
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 *     sub_18010A154 @ 0x18010A154 (sub_18010A154.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800E16A8 @ 0x1800E16A8 (sub_1800E16A8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E10CC(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  volatile signed __int32 *v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+28h] [rbp-19h]

  sub_1800E16A8(a1);
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
