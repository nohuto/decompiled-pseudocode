/*
 * XREFs of MmIsSessionLeaderProcess @ 0x140716340
 * Callers:
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     MiInitializeSessionGlobals @ 0x140716204 (MiInitializeSessionGlobals.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109D40 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 __fastcall MmIsSessionLeaderProcess(__int64 a1)
{
  return a1 == *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109);
}
