/*
 * XREFs of IoMmuDeleteIoMmuDomain @ 0x1C004FEF4
 * Callers:
 *     DpiResetIoMmuContext @ 0x1C0050A5C (DpiResetIoMmuContext.c)
 *     DpiDestroyIoMmuContext @ 0x1C02A83CC (DpiDestroyIoMmuContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IoMmuDeleteIoMmuDomain(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    result = ((__int64 (*)(void))qword_1C00A2C50)();
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
