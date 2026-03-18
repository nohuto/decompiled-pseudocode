/*
 * XREFs of MmIsSessionLeaderProcess @ 0x14073AF50
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     MiInitializeSessionGlobals @ 0x140740B00 (MiInitializeSessionGlobals.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 __fastcall MmIsSessionLeaderProcess(__int64 a1)
{
  return a1 == *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109);
}
