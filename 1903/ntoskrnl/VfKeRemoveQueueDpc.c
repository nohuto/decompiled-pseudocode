/*
 * XREFs of VfKeRemoveQueueDpc @ 0x1409792E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VfKeRemoveQueueDpc(ULONG_PTR a1)
{
  VfUtilCheckKernelAddress(a1, 0x40uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeRemoveQueueDpc)(a1);
}
