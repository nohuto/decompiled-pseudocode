/*
 * XREFs of RtlWriteReleaseTickLock @ 0x140177FC8
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x14056B040 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x140571D00 (KiCreateCpuSetForProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWriteReleaseTickLock(__int64 *a1)
{
  __int64 result; // rax

  result = *a1 + 1;
  *a1 = result;
  return result;
}
