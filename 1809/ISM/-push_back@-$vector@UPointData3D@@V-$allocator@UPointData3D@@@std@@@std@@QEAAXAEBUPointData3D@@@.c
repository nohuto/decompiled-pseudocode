/*
 * XREFs of ?push_back@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18004356C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_963bfbc14f59451a8d8dafb806357068__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x180043DD0 (std--_Func_impl_no_alloc__lambda_963bfbc14f59451a8d8dafb806357068__void_IMPCInputPr_ea_180043DD0.c)
 *     ?GetPoints@MPCSixDofProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800F1CF0 (-GetPoints@MPCSixDofProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@s.c)
 *     ?GetPoints@MPCProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800F6660 (-GetPoints@MPCProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@PE.c)
 *     ?GetPoints@MPCGamepadProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800FA040 (-GetPoints@MPCGamepadProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@.c)
 *     ?GetPoints@MPCMouseProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800FD720 (-GetPoints@MPCMouseProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@st.c)
 *     ?GetPoints@MPCClickerProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180100080 (-GetPoints@MPCClickerProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<PointData3D>::push_back(__int64 a1, _OWORD *a2)
{
  _OWORD *v3; // rdx
  _OWORD *v4; // rdx
  __int128 v5; // xmm0
  _OWORD *v6; // r8
  __int64 result; // rax

  v3 = *(_OWORD **)(a1 + 8);
  if ( *(_OWORD **)(a1 + 16) == v3 )
    return std::vector<PointData3D>::_Emplace_reallocate<PointData3D const &>(a1, v3, a2);
  *v3 = *a2;
  v3[1] = a2[1];
  v3[2] = a2[2];
  v3[3] = a2[3];
  v3[4] = a2[4];
  v3[5] = a2[5];
  v3[6] = a2[6];
  v4 = v3 + 8;
  v5 = a2[7];
  v6 = a2 + 8;
  *(v4 - 1) = v5;
  *v4 = *v6;
  v4[1] = v6[1];
  v4[2] = v6[2];
  result = *((_QWORD *)v6 + 6);
  *((_QWORD *)v4 + 6) = result;
  *(_QWORD *)(a1 + 8) += 184LL;
  return result;
}
