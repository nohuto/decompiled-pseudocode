/*
 * XREFs of SymCryptSha256AppendBlocks @ 0x1401BA590
 * Callers:
 *     SymCryptSha256Append @ 0x1401BA4D0 (SymCryptSha256Append.c)
 *     SymCryptSha256Result @ 0x1401BBD10 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256AppendBytes_serial @ 0x1401BD324 (SymCryptParallelSha256AppendBytes_serial.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14013C34C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptSha256AppendBlocks_shani @ 0x1401BA5F4 (SymCryptSha256AppendBlocks_shani.c)
 *     SymCryptSha256AppendBlocks_ul1 @ 0x1401BA9BC (SymCryptSha256AppendBlocks_ul1.c)
 */

__int64 __fastcall SymCryptSha256AppendBlocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x42) != 0 )
    return SymCryptSha256AppendBlocks_ul1(a1, a2, a3, a4);
  else
    return SymCryptSha256AppendBlocks_shani(a1, a2, a3, a4);
}
