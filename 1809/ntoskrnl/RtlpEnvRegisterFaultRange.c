/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x140170538
 * Callers:
 *     RtlCSparseBitmapCleanup @ 0x14015908C (RtlCSparseBitmapCleanup.c)
 *     RtlCSparseBitmapStart @ 0x1401703E8 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x140170584 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2)
{
  return (unsigned int)MmManageFaultRange(a1, a2) == 0 ? 0xC000009A : 0;
}
