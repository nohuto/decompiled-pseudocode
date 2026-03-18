/*
 * XREFs of MiLogKernelStackEvent @ 0x1402D17D0
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14008F9F4 (MiInPageSingleKernelStack.c)
 *     MmCreateKernelStack @ 0x1400A3B60 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400A4B30 (MmDeleteKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall MiLogKernelStackEvent(__int64 a1, unsigned int a2, int a3)
{
  _QWORD v3[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v4[2]; // [rsp+48h] [rbp-20h] BYREF

  v3[2] = a2;
  v3[1] = a1;
  v4[1] = 24LL;
  v3[0] = 11LL;
  v4[0] = v3;
  EtwTraceKernelEvent((__int64)v4, 1u, 0x20000001u, (a3 != 1) + 632, 0x11401B02u);
}
