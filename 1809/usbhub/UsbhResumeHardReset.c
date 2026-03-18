/*
 * XREFs of UsbhResumeHardReset @ 0x1C000649C
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0004490 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001BF30 (UsbhDispatch_HardResetEvent.c)
 */

__int64 __fastcall UsbhResumeHardReset(int a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192818, 0, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, (unsigned int)(v1 + 11));
}
