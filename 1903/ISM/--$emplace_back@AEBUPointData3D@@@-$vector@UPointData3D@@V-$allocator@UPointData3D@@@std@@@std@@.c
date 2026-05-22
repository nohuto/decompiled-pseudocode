/*
 * XREFs of ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180080378
 * Callers:
 *     ?GetPoints@MPCVoiceProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180036910 (-GetPoints@MPCVoiceProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@st.c)
 *     _lambda_7acc6bf19e786374dd9408a671d7d8f6_::operator() @ 0x180080610 (_lambda_7acc6bf19e786374dd9408a671d7d8f6_--operator().c)
 *     ?GetPoints@MPCSixDofProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18012FF70 (-GetPoints@MPCSixDofProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@s.c)
 *     ?GetPoints@MPCGamepadProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1801377A0 (-GetPoints@MPCGamepadProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@.c)
 *     ?GetPoints@MPCMouseProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18013AD20 (-GetPoints@MPCMouseProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@st.c)
 *     ?GetPoints@MPCClickerProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18013F9F0 (-GetPoints@MPCClickerProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<PointData3D>::emplace_back<PointData3D const &>(__int64 *a1, _OWORD *a2)
{
  _OWORD *v3; // rdx
  _OWORD *v4; // rdx
  __int128 v5; // xmm0
  _OWORD *v6; // r8
  __int64 result; // rax

  v3 = (_OWORD *)a1[1];
  if ( (_OWORD *)a1[2] == v3 )
    return std::vector<PointData3D>::_Emplace_reallocate<PointData3D const &>(a1, (__int64)v3, a2);
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
  *((_QWORD *)v4 + 6) = *((_QWORD *)v6 + 6);
  result = a1[1];
  a1[1] = result + 184;
  return result;
}
