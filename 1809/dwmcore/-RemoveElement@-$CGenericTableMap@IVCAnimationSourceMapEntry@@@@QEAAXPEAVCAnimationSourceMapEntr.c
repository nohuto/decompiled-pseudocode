/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntry@@@Z @ 0x18005B73C
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x18004E218 (--1CResource@@MEAA@XZ.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x18005B5F0 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        _QWORD *Buffer)
{
  void *v2; // r8

  v2 = (void *)Buffer[1];
  if ( v2 != (void *)Buffer[2] )
  {
    if ( v2 )
      HeapFree(WPF::g_processHeap, 0, v2);
    Buffer[1] = 0LL;
  }
  if ( !RtlDeleteElementGenericTable(Table, Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
