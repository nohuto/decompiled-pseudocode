/*
 * XREFs of MmOutPageKernelStack @ 0x1400E3478
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1400E3280 (KiOutSwapKernelStacks.c)
 * Callees:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     KeEnumerateKernelStackSegments @ 0x1400E35A8 (KeEnumerateKernelStackSegments.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MmOutPageKernelStack(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v5[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v5, 0, 0xB8uLL);
  if ( (MiFlags & 0x40) != 0 )
  {
    v5[3] = 0LL;
    LODWORD(v5[1]) = 20;
    KeEnumerateKernelStackSegments(a1, MiOutPageSingleKernelStack, v5);
    MiFlushTbList((int *)v5, v2, v3, v4);
  }
}
