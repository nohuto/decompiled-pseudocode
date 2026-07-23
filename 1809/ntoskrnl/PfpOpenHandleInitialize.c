/*
 * XREFs of PfpOpenHandleInitialize @ 0x140865238
 * Callers:
 *     PfpReadSupportInitialize @ 0x1400DF388 (PfpReadSupportInitialize.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall PfpOpenHandleInitialize(_QWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0x200000000LL;
  a1[3] = 0x200000000LL;
  return result;
}
