/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x140179CD8
 * Callers:
 *     RtlCSparseBitmapCleanup @ 0x1401696A4 (RtlCSparseBitmapCleanup.c)
 *     RtlCSparseBitmapStart @ 0x140179B84 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x140179D24 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2)
{
  return (unsigned int)MmManageFaultRange(a1, a2) == 0 ? 0xC000009A : 0;
}
