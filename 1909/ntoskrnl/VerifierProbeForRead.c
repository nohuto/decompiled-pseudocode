/*
 * XREFs of VerifierProbeForRead @ 0x140971450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierProbeForRead()
{
  return ((__int64 (*)(void))pXdvProbeForRead)();
}
