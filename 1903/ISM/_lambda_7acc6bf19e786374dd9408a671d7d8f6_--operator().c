/*
 * XREFs of _lambda_7acc6bf19e786374dd9408a671d7d8f6_::operator() @ 0x180080610
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7acc6bf19e786374dd9408a671d7d8f6__void_IMPCInputProviderBase___::_Do_call @ 0x1800843C0 (std--_Func_impl_no_alloc__lambda_7acc6bf19e786374dd9408a671d7d8f6__void_IMPCInputPr_ea_1800843C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180080378 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ?_Tidy@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAXXZ @ 0x180084478 (-_Tidy@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7acc6bf19e786374dd9408a671d7d8f6_::operator()(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 i; // rbx
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, v7, *(_QWORD *)a1);
  v4 = v7[1];
  for ( i = v7[0]; i != v4; i += 184LL )
  {
    *(_DWORD *)(i + 176) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 312LL))(a2);
    std::vector<PointData3D>::emplace_back<PointData3D const &>(*(__int64 **)(a1 + 8), (_OWORD *)i);
  }
  return std::vector<PointData3D>::_Tidy(v7);
}
