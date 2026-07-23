/*
 * XREFs of MiSetImageProtection @ 0x1400DA5A4
 * Callers:
 *     MmChangeImageProtection @ 0x140652920 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiCompactServiceTable @ 0x1407195C8 (MiCompactServiceTable.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14085CFE4 (MiProcessKernelCfgImageLoadConfig.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           a4);
}
