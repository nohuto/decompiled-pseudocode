/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x140170658
 * Callers:
 *     RtlCSparseBitmapCleanup @ 0x1401591AC (RtlCSparseBitmapCleanup.c)
 *     RtlCSparseBitmapStart @ 0x140170508 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x1401706A4 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2)
{
  return (unsigned int)MmManageFaultRange(a1, a2) == 0 ? 0xC000009A : 0;
}
