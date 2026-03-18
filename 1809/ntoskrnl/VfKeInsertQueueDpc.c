/*
 * XREFs of VfKeInsertQueueDpc @ 0x14093ABF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409260A4 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VfKeInsertQueueDpc(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  VfUtilCheckKernelAddress(a1, 0x40uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvKeInsertQueueDpc)(a1, a2, a3);
}
