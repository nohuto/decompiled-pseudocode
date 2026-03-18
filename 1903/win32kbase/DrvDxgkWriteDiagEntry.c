/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x1C00A95C0
 * Callers:
 *     PowerUnDimMonitor @ 0x1C005B698 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C00623F8 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C0108A3C (PowerDimMonitor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvDxgkWriteDiagEntry()
{
  return ((__int64 (*)(void))qword_1C0215140)();
}
