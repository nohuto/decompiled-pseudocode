/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x1C00A8740
 * Callers:
 *     PowerDimUndimResend @ 0x1C006354C (PowerDimUndimResend.c)
 *     PowerUnDimMonitor @ 0x1C0066CB8 (PowerUnDimMonitor.c)
 *     PowerDimMonitor @ 0x1C01060CC (PowerDimMonitor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvDxgkWriteDiagEntry()
{
  return ((__int64 (*)(void))qword_1C0212140)();
}
