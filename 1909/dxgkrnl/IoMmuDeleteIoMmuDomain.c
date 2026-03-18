/*
 * XREFs of IoMmuDeleteIoMmuDomain @ 0x1C004FF34
 * Callers:
 *     DpiResetIoMmuContext @ 0x1C0050A9C (DpiResetIoMmuContext.c)
 *     DpiDestroyIoMmuContext @ 0x1C02A87DC (DpiDestroyIoMmuContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
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
