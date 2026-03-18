/*
 * XREFs of VfGetDmaTransferInfo @ 0x140969B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x14096C3A4 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfGetDmaTransferInfo(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD, char, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char, __int64))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1, a2, a3, a4, a5, a6);
}
