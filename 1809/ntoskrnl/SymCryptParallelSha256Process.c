/*
 * XREFs of SymCryptParallelSha256Process @ 0x1401B2318
 * Callers:
 *     KeComputeParallelSha256 @ 0x1401873B0 (KeComputeParallelSha256.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14013A88C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptRestoreYmm @ 0x14018EEFC (SymCryptRestoreYmm.c)
 *     SymCryptSaveYmm @ 0x14018EF10 (SymCryptSaveYmm.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SymCryptParallelHashProcess @ 0x1401B2758 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401B2A04 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptRestoreXmm @ 0x14028F990 (SymCryptRestoreXmm.c)
 */

__int64 __fastcall SymCryptParallelSha256Process(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _XSTATE_SAVE v11; // [rsp+40h] [rbp-78h] BYREF

  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0
    || (unsigned int)SymCryptSaveYmm(&v11) )
  {
    if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 2) != 0
      || (unsigned int)SymCryptCpuFeaturesNeverPresent() )
    {
      return SymCryptParallelHashProcess_serial(
               (unsigned int)&SymCryptParallelSha256Algorithm_default,
               a1,
               a2,
               a3,
               a4,
               a5,
               a6);
    }
    else
    {
      SymCryptParallelHashProcess((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6, 4);
      return SymCryptRestoreXmm(&v11);
    }
  }
  else
  {
    SymCryptParallelHashProcess((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6, 8);
    return SymCryptRestoreYmm();
  }
}
