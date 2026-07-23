/*
 * XREFs of ZwCompactKeys @ 0x1401C1F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCompactKeys(ULONG Count, PHANDLE KeyArray)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Count);
}
