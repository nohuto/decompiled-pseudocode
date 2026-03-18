/*
 * XREFs of VfLeaveDmaDomain @ 0x14030A090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x14092DB34 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfLeaveDmaDomain(__int64 a1)
{
  __int64 (__fastcall *RealDmaOperation)(__int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1);
}
