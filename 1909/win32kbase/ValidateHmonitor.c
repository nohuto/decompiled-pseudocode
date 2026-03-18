/*
 * XREFs of ValidateHmonitor @ 0x1C004FDD0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C004FDE4 (HMValidateSharedHandle.c)
 */

__int64 __fastcall ValidateHmonitor(__int64 a1)
{
  return HMValidateSharedHandle(a1);
}
