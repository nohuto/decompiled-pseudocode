/*
 * XREFs of VidSchUnregisterCompletionEvent @ 0x1C00CCDE4
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0010E78 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000EC10 (VidSchiInterlockedRemoveEntryList.c)
 */

bool __fastcall VidSchUnregisterCompletionEvent(__int64 a1, _QWORD *a2)
{
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1664), a2, 0LL);
}
