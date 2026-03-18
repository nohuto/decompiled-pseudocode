/*
 * XREFs of VerifierProbeForWrite @ 0x140971470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierProbeForWrite()
{
  return ((__int64 (*)(void))pXdvProbeForWrite)();
}
