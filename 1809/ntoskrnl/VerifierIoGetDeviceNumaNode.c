/*
 * XREFs of VerifierIoGetDeviceNumaNode @ 0x140931C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceNumaNode()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceNumaNode)();
}
