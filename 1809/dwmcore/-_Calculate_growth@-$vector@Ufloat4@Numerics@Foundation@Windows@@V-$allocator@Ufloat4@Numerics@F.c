/*
 * XREFs of ?_Calculate_growth@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1801C7C7C
 * Callers:
 *     ??$_Emplace_reallocate@Ufloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x1801C4010 (--$_Emplace_reallocate@Ufloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Foundatio.c)
 *     std::vector_Windows::Foundation::Numerics::float4_std::allocator_Windows::Foundation::Numerics::float4___::_Resize__lambda_0c2713a16b6fe99d6b55b0d81ace1f5d___ @ 0x1801C4110 (std--vector_Windows--Foundation--Numerics--float4_std--allocator_Windows--Foundation--Numerics--.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<Windows::Foundation::Numerics::float4>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v2 = (__int64)(a1[2] - *a1) >> 4;
  v3 = v2 >> 1;
  if ( v2 > 0xFFFFFFFFFFFFFFFLL - (v2 >> 1) )
    return a2;
  result = v3 + v2;
  if ( v3 + v2 < a2 )
    return a2;
  return result;
}
