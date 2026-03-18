/*
 * XREFs of ?eqLength@EFLOAT@@QEAA?AV1@AEBVPOINTFL@@@Z @ 0x1C008C300
 * Callers:
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C01235B0 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C007B0CC (-vSqrt@EFLOAT@@QEAAXXZ.c)
 */

_DWORD *__fastcall EFLOAT::eqLength(EFLOAT *a1, _DWORD *a2, float *a3)
{
  float v4; // xmm4_4
  _DWORD *result; // rax

  v4 = *a3;
  *(float *)a1 = a3[1] * a3[1];
  *(float *)a1 = (float)(v4 * v4) + *(float *)a1;
  *(_DWORD *)a1 = *(_DWORD *)a1;
  EFLOAT::vSqrt(a1);
  result = a2;
  *a2 = *(_DWORD *)a1;
  return result;
}
