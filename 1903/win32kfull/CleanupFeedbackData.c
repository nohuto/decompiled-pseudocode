/*
 * XREFs of CleanupFeedbackData @ 0x1C0141B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CleanupFeedbackData()
{
  __int64 result; // rax

  if ( Feedback::gpevtPointerCursorOperation )
  {
    result = Win32FreePool(Feedback::gpevtPointerCursorOperation);
    Feedback::gpevtPointerCursorOperation = 0LL;
  }
  return result;
}
