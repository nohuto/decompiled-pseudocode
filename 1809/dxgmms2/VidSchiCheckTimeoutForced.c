/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C0008600
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C0069B20 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 408) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
