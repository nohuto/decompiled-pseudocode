/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x1C0095510
 * Callers:
 *     PowerUnDimMonitor @ 0x1C009780C (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0099C10 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C00E2618 (PowerDimMonitor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvDxgkWriteDiagEntry()
{
  return ((__int64 (*)(void))qword_1C01CD968)();
}
