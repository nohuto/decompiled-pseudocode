/*
 * XREFs of ??0CLineSpawner@EmitterShapes@@QEAA@Ufloat2@Numerics@Foundation@Windows@@0@Z @ 0x1801C48C4
 * Callers:
 *     ??$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@@YA?AV?$unique_ptr@VCLineSpawner@EmitterShapes@@U?$default_delete@VCLineSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0@Z @ 0x1801C46D0 (--$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@.c)
 *     ??0CRectangleEdgeSpawner@EmitterShapes@@QEAA@MMMM@Z @ 0x1801C4B38 (--0CRectangleEdgeSpawner@EmitterShapes@@QEAA@MMMM@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 */

__int64 __fastcall EmitterShapes::CLineSpawner::CLineSpawner(__int64 a1, __int64 a2, __int64 a3)
{
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm0_4
  __int64 result; // rax

  v4 = *(float *)&a3 - *(float *)&a2;
  v5 = *((float *)&a3 + 1) - *((float *)&a2 + 1);
  *(_QWORD *)a1 = &EmitterShapes::CLineSpawner::`vftable';
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  v6 = sqrtf_0((float)(v5 * v5) + (float)(v4 * v4));
  result = a1;
  *(float *)(a1 + 28) = (float)(1.0 / v6) * v4;
  *(_DWORD *)(a1 + 24) = COERCE_UNSIGNED_INT((float)(1.0 / v6) * v5) ^ _xmm;
  return result;
}
