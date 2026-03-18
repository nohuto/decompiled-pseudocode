/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x18007F9D4
 * Callers:
 *     ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x1800825F4 (-UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV-$CWeakReference@V.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801C128C (--1CExpressionManager@@UEAA@XZ.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x180085E3C (--1CTargetMapEntry@@QEAA@XZ.c)
 */

void __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CTargetMapEntry *this)
{
  CTargetMapEntry::~CTargetMapEntry(this);
  if ( !RtlDeleteElementGenericTable(Table, this) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
