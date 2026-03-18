/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C0009720
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0077960 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C007AA10 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 408) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
