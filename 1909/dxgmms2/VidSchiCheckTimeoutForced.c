/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C00094E0
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C007B3F0 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C007C5B4 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 408) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
