/*
 * XREFs of ValidateHmonitor @ 0x1C00597A0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 *     NtUserGetHDevName @ 0x1C00B63C0 (NtUserGetHDevName.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C00597B4 (HMValidateSharedHandle.c)
 */

__int64 __fastcall ValidateHmonitor(__int64 a1)
{
  return HMValidateSharedHandle(a1);
}
