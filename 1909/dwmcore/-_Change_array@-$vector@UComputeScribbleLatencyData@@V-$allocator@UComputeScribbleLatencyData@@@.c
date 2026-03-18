/*
 * XREFs of ?_Change_array@?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAXQEAUComputeScribbleLatencyData@@_K1@Z @ 0x1801B4C20
 * Callers:
 *     std::vector_ComputeScribbleLatencyData_std::allocator_ComputeScribbleLatencyData___::_Resize__lambda_49aad73161a680b61c856fa3713eefe3___ @ 0x1801B3AB0 (std--vector_ComputeScribbleLatencyData_std--allocator_ComputeScribbleLatencyData___--_Resize__la.c)
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801E7A64 (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<ComputeScribbleLatencyData>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 24 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 24LL));
  *(_QWORD *)a1 = a2;
  result = 3 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
