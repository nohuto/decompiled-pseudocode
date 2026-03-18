/*
 * XREFs of CmpDummyThreadRoutine @ 0x14078C9E0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __noreturn CmpDummyThreadRoutine()
{
  NTSTATUS v0; // eax

  v0 = KeWaitForSingleObject(&CmpDummyThreadEvent, Executive, 0, 0, 0LL);
  KeBugCheckEx(0x51u, 0x23uLL, v0, 0LL, 0LL);
}
