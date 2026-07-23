/*
 * XREFs of KiTraceCancelTimer2 @ 0x14029BAC0
 * Callers:
 *     KeCancelTimer2 @ 0x1400FAFF0 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1400FB1D4 (KeDisableTimer2.c)
 *     KiTraceSetTimer2 @ 0x14029BC80 (KiTraceSetTimer2.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall KiTraceCancelTimer2(__int64 a1, __int64 a2)
{
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v3 = &v2;
  v5 = 0;
  v2 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a2 ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever));
  v4 = 8;
  EtwTraceKernelEvent((__int64)&v3, 1u, 0x40020000u, 0xF6Au, 0x602u);
}
