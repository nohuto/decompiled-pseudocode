/*
 * XREFs of LinkNodeInitGlobalState @ 0x1C008F2B0
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BED50 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeInitGlobalState()
{
  qword_1C00815B8 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
