/*
 * XREFs of MiFlushKernelCfgBitmap @ 0x1402DD670
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140746B78 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
  v4 = qword_140464838 + ((2 * ((unsigned __int64)(a1 + 0x800000000000LL) >> 4)) >> 3);
  MiInsertTbFlushEntry(
    (__int64)v8,
    v4 & 0xFFFFFFFFFFFFF000uLL,
    ((((_WORD)qword_140464838 + (unsigned __int16)((2 * ((unsigned __int64)(a1 + 0x800000000000LL) >> 4)) >> 3)) & 0xFFF)
   + ((2 * ((unsigned __int64)(a1 + v2 + 0x7FFFFFFFFFFFLL) >> 4)) >> 3)
   - v4
   + qword_140464838
   + 4096) >> 12,
    0);
  MiFlushTbList((int *)v8, v5, v6, v7);
}
