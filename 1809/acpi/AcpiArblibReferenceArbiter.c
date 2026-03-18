/*
 * XREFs of AcpiArblibReferenceArbiter @ 0x1C000C870
 * Callers:
 *     AcpiArblibEjectInterface @ 0x1C00A9550 (AcpiArblibEjectInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiArblibReferenceArbiter(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 88));
}
