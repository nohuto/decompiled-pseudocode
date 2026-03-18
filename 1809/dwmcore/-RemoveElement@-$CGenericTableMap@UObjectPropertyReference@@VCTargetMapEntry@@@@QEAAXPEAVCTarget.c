/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x180069710
 * Callers:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BD280 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x18018A0CC (--1CExpressionManager@@UEAA@XZ.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x180069750 (--1CTargetMapEntry@@QEAA@XZ.c)
 */

void __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CTargetMapEntry *this)
{
  CTargetMapEntry::~CTargetMapEntry(this);
  if ( !RtlDeleteElementGenericTable(Table, this) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
