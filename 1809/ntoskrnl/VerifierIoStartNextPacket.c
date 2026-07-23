/*
 * XREFs of VerifierIoStartNextPacket @ 0x140933150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoStartNextPacket()
{
  return ((__int64 (*)(void))pXdvIoStartNextPacket)();
}
