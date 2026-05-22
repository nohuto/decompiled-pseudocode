/*
 * XREFs of ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180043600
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     _lambda_f25ac99651c50efdaddaa211dd60b097_::operator() @ 0x180040FA8 (_lambda_f25ac99651c50efdaddaa211dd60b097_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_963bfbc14f59451a8d8dafb806357068__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x180043DD0 (std--_Func_impl_no_alloc__lambda_963bfbc14f59451a8d8dafb806357068__void_IMPCInputPr_ea_180043DD0.c)
 *     _MPCHolographicInputManager::Process3DInput_::_1_::dtor$2 @ 0x18012FCD8 (_MPCHolographicInputManager--Process3DInput_--_1_--dtor$2.c)
 *     __lambda_f25ac99651c50efdaddaa211dd60b097_::operator()_::_1_::dtor$1 @ 0x18012FCEA (__lambda_f25ac99651c50efdaddaa211dd60b097_--operator()_--_1_--dtor$1.c)
 *     _std::_Func_impl_no_alloc__lambda_963bfbc14f59451a8d8dafb806357068__void_IMPCInputProviderBase_____ptr64_::_Do_call_::_1_::dtor$0 @ 0x18012FE59 (_std--_Func_impl_no_alloc__lambda_963bfbc14f59451a8d8dafb806357068__void_IMPCInputProviderBase__.c)
 *     _MPCClickerProcessor::GetPoints_::_1_::dtor$0 @ 0x180134E90 (_MPCClickerProcessor--GetPoints_--_1_--dtor$0.c)
 *     _MPCProcessor::GetPoints_::_1_::dtor$0 @ 0x1801350E5 (_MPCProcessor--GetPoints_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<PointData3D>::~vector<PointData3D>(__int64 a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = 184 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 184LL);
    if ( v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 += 39LL;
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x18004367DLL);
      }
      v2 = v4;
    }
    operator delete(v2, (const struct std::nothrow_t *)v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
