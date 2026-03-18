/*
 * XREFs of MmOutPageKernelStack @ 0x14008F6F8
 * Callers:
 *     KiOutSwapKernelStacks @ 0x14008F500 (KiOutSwapKernelStacks.c)
 * Callees:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     KeEnumerateKernelStackSegments @ 0x14008F828 (KeEnumerateKernelStackSegments.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
