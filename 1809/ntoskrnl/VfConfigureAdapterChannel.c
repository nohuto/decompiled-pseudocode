/*
 * XREFs of VfConfigureAdapterChannel @ 0x14092BAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfConfigureAdapterChannel(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, _QWORD, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, _QWORD, __int64))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1, a2, a3);
}
