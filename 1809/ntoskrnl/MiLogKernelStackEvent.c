/*
 * XREFs of MiLogKernelStackEvent @ 0x1402BB954
 * Callers:
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400CA580 (MmDeleteKernelStack.c)
 *     MiInPageSingleKernelStack @ 0x14013D5A0 (MiInPageSingleKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiLogKernelStackEvent(__int64 a1, unsigned int a2, int a3)
{
  _QWORD v3[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v4[2]; // [rsp+48h] [rbp-20h] BYREF

  v3[2] = a2;
  v3[1] = a1;
  v4[0] = v3;
  v3[0] = 11LL;
  v4[1] = 24LL;
  EtwTraceKernelEvent((__int64)v4, 1u, 0x20000001u, (a3 != 1) + 632, 0x11401B02u);
}
