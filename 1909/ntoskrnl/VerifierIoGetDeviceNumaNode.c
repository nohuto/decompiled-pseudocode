/*
 * XREFs of VerifierIoGetDeviceNumaNode @ 0x1409704C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceNumaNode()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceNumaNode)();
}
