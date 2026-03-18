/*
 * XREFs of MmIsSessionLeaderProcess @ 0x140716360
 * Callers:
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     MiInitializeSessionGlobals @ 0x140716224 (MiInitializeSessionGlobals.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 __fastcall MmIsSessionLeaderProcess(__int64 a1)
{
  return a1 == *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109);
}
