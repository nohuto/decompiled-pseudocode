/*
 * XREFs of ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801C1AB8
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800993F0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180099900 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801E7F78 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801EF3E0 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 */

bool __fastcall CPathData::operator==(__int64 a1, __int64 a2)
{
  char v2; // bl
  size_t v3; // r8

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24);
  if ( v3 == *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24) )
    return memcmp_0(*(const void **)(a1 + 24), *(const void **)(a2 + 24), v3) == 0;
  return v2;
}
