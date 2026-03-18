/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C007AE7C
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C002E230 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushDevice @ 0x1C007AD00 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C007AEE0 (VidSchFlushContext.c)
 *     VidSchiFlushPendingFlips @ 0x1C00C6AFC (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 *     VidSchFlushHwQueue @ 0x1C00CA1B0 (VidSchFlushHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0014904 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0067AE0 (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, (const GUID *)a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1664), (_QWORD *)a2, 0LL);
}
