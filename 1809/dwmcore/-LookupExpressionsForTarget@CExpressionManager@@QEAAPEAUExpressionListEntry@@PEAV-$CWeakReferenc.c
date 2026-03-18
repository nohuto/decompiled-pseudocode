/*
 * XREFs of ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18018A304
 * Callers:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18018A2B8 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x1800BD964 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 */

_QWORD *__fastcall CExpressionManager::LookupExpressionsForTarget(__int64 a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v5 = a3;
  result = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
             (struct _RTL_GENERIC_TABLE *)(a1 + 328),
             &v4);
  if ( result )
    return (_QWORD *)result[2];
  return result;
}
