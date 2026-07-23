/*
 * XREFs of MiFlushKernelCfgBitmap @ 0x1402C35D0
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140710634 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiFlushKernelCfgBitmap(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v7; // [rsp+24h] [rbp-D4h]
  __int64 v8; // [rsp+28h] [rbp-D0h]
  __int64 v9; // [rsp+30h] [rbp-C8h]
  __int64 v10; // [rsp+38h] [rbp-C0h]

  v6 = 0;
  v7 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v2 = qword_140439EE0 + ((2 * ((unsigned __int64)(a1 + 0x800000000000LL) >> 4)) >> 3);
  v8 = 20LL;
  MiInsertTbFlushEntry(
    (__int64)&v6,
    v2 & 0xFFFFFFFFFFFFF000uLL,
    ((v2 & 0xFFF) + ((2 * (((unsigned __int64)a2 + 0x7FFFFFFFFFFFLL + a1) >> 4)) >> 3) - v2 + qword_140439EE0 + 4096) >> 12,
    0);
  MiFlushTbList(&v6, v3, v4, v5);
}
