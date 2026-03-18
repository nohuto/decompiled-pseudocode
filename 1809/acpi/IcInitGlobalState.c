/*
 * XREFs of IcInitGlobalState @ 0x1C008D294
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BB084 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C007F568 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
