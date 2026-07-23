/*
 * XREFs of VerifierZwOpenKeyEx @ 0x140934370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwOpenKeyEx()
{
  return ((__int64 (*)(void))pXdvZwOpenKeyEx)();
}
