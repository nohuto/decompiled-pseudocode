/*
 * XREFs of VerifierIoInitializeIrp @ 0x140932D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoInitializeIrp()
{
  return ((__int64 (*)(void))pXdvIoInitializeIrp)();
}
