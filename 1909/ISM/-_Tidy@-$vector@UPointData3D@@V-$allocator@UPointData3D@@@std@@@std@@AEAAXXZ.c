/*
 * XREFs of ?_Tidy@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAXXZ @ 0x180084238
 * Callers:
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x1800803C4 (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 *     _lambda_7acc6bf19e786374dd9408a671d7d8f6_::operator() @ 0x1800803D0 (_lambda_7acc6bf19e786374dd9408a671d7d8f6_--operator().c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082828 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     _std::vector_PointData3D_std::allocator_PointData3D___::_Range_construct_or_tidy_PointData3D_const____::_1_::catch$23 @ 0x180133D2E (_std--vector_PointData3D_std--allocator_PointData3D___--_Range_construct_or_tidy_PointData3D_con.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<PointData3D>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(184 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 184LL)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
