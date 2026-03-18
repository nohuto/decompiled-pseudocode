/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C007B98C
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C002E8C4 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushDevice @ 0x1C007B810 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C007B9F0 (VidSchFlushContext.c)
 *     VidSchiFlushPendingFlips @ 0x1C00C9B70 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00CB190 (VidSchFlushAdapter.c)
 *     VidSchFlushHwQueue @ 0x1C00CCFB0 (VidSchFlushHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000EC10 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0077960 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0077C4C (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, (const GUID *)a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1664), (_QWORD *)a2, 0LL);
}
