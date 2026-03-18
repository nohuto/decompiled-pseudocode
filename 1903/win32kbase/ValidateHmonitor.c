/*
 * XREFs of ValidateHmonitor @ 0x1C003D600
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C003D614 (HMValidateSharedHandle.c)
 */

__int64 __fastcall ValidateHmonitor(__int64 a1)
{
  return HMValidateSharedHandle(a1);
}
