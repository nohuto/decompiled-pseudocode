/*
 * XREFs of MiSetImageProtection @ 0x1400FA72C
 * Callers:
 *     MmChangeImageProtection @ 0x1406A5850 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140710BB4 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiCompactServiceTable @ 0x140742D58 (MiCompactServiceTable.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
