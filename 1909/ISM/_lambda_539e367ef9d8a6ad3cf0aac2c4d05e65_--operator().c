/*
 * XREFs of _lambda_539e367ef9d8a6ad3cf0aac2c4d05e65_::operator() @ 0x180133FC0
 * Callers:
 *     ?ComputeHandBeamFromShoulderPivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x180134BE4 (-ComputeHandBeamFromShoulderPivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULeg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_539e367ef9d8a6ad3cf0aac2c4d05e65_::operator()(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  float v4; // xmm0_4
  int v5; // eax

  v4 = *(float *)a3;
  if ( *(_DWORD *)(a1 + 260) == 2 )
    LODWORD(v4) ^= _xmm;
  *(float *)a3 = v4 + a4;
  v5 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)a2 = *(_QWORD *)a3;
  *(_DWORD *)(a2 + 8) = v5;
  return a2;
}
