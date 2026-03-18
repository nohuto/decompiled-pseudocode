/*
 * XREFs of VfFlushDmaBuffer @ 0x140327D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x14096C3A4 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFlushDmaBuffer(__int64 a1, __int64 a2, char a3)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64); // rax
  __int64 v7; // r8

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64))ViGetRealDmaOperation(a1);
  LOBYTE(v7) = a3;
  return RealDmaOperation(a1, a2, v7);
}
