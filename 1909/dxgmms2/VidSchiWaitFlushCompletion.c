/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C007C36C
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C002E8C4 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushDevice @ 0x1C007C1F0 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C007C780 (VidSchFlushContext.c)
 *     VidSchiFlushPendingFlips @ 0x1C00C9810 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00CAE30 (VidSchFlushAdapter.c)
 *     VidSchFlushHwQueue @ 0x1C00CCC50 (VidSchFlushHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E9D0 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchRegisterCompletionEvent @ 0x1C007C4EC (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C007C5B4 (VidSchWaitForCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1664), (_QWORD *)a2, 0LL);
}
