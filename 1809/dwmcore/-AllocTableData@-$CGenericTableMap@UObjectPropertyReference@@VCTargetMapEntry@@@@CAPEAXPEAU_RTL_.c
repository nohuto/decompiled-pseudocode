/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1800686C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  SIZE_T v2; // r8

  v2 = ByteSize;
  if ( !ByteSize )
    v2 = 1LL;
  return HeapAlloc(WPF::g_processHeap, 0, v2);
}
