/*
 * XREFs of ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x18018CF1C
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1801D28FC (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     <none>
 */

char __fastcall CBaseExpression::ShouldLogPerfStats(CBaseExpression *this)
{
  char result; // al

  result = 0;
  if ( *(int *)(*((_QWORD *)this + 35) + 4LL) < 0 || CCommonRegistryData::m_fLogExpressionPerfStats )
    return 1;
  return result;
}
