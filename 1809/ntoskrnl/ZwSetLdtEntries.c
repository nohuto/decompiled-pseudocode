/*
 * XREFs of ZwSetLdtEntries @ 0x1401BB670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetLdtEntries(ULONG Selector1, LDT_ENTRY LdtEntry1, ULONG Selector2, LDT_ENTRY LdtEntry2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Selector1);
}
