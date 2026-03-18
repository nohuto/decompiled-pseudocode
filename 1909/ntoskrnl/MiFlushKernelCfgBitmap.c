/*
 * XREFs of MiFlushKernelCfgBitmap @ 0x1402DD3D0
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140748A78 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall MiFlushKernelCfgBitmap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v8[24]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = a2;
  memset(v8, 0, 0xB8uLL);
  v8[3] = 0LL;
  LODWORD(v8[1]) = 20;
  v4 = qword_140464538 + ((2 * ((unsigned __int64)(a1 + 0x800000000000LL) >> 4)) >> 3);
  MiInsertTbFlushEntry(
    (__int64)v8,
    v4 & 0xFFFFFFFFFFFFF000uLL,
    ((((_WORD)qword_140464538 + (unsigned __int16)((2 * ((unsigned __int64)(a1 + 0x800000000000LL) >> 4)) >> 3)) & 0xFFF)
   + ((2 * ((unsigned __int64)(a1 + v2 + 0x7FFFFFFFFFFFLL) >> 4)) >> 3)
   - v4
   + qword_140464538
   + 4096) >> 12,
    0);
  MiFlushTbList((int *)v8, v5, v6, v7);
}
