/*
 * XREFs of SymCryptParallelSha256Process @ 0x1401B21B8
 * Callers:
 *     KeComputeParallelSha256 @ 0x140187250 (KeComputeParallelSha256.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14013A76C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptRestoreYmm @ 0x14018ED9C (SymCryptRestoreYmm.c)
 *     SymCryptSaveYmm @ 0x14018EDB0 (SymCryptSaveYmm.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     SymCryptParallelHashProcess @ 0x1401B25F8 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401B28A4 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptRestoreXmm @ 0x14028F6A0 (SymCryptRestoreXmm.c)
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
