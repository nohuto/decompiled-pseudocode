/*
 * XREFs of RtlWriteReleaseTickLock @ 0x1401780E8
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x14056C040 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x140572D00 (KiCreateCpuSetForProcessor.c)
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
