/*
 * XREFs of HvlReadPerfMsr @ 0x140285610
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReadPerfRegister @ 0x1402863E8 (HvlpReadPerfRegister.c)
 */

__int64 __fastcall HvlReadPerfMsr(__int64 a1, unsigned int a2, __int64 a3)
{
  return HvlpReadPerfRegister(a1, a2 | 0x10000000000000LL, a3);
}
