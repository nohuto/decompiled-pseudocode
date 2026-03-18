/*
 * XREFs of RtlWriteReleaseTickLock @ 0x140181894
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x14059AE90 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x1405A1C6C (KiCreateCpuSetForProcessor.c)
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
