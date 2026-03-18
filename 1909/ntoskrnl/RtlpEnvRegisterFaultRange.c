/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x14017A3C8
 * Callers:
 *     RtlCSparseBitmapCleanup @ 0x1401690F4 (RtlCSparseBitmapCleanup.c)
 *     RtlCSparseBitmapStart @ 0x14017A274 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x14017A414 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2)
{
  return (unsigned int)MmManageFaultRange(a1, a2) == 0 ? 0xC000009A : 0;
}
