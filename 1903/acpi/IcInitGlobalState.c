/*
 * XREFs of IcInitGlobalState @ 0x1C008F2D0
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BED50 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C0081568 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
