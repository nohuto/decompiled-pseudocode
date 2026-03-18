/*
 * XREFs of ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C020E5E0
 * Callers:
 *     ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z @ 0x1C00E4960 (-EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z.c)
 *     ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z @ 0x1C020DA40 (-EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z.c)
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C020DD60 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C020FA50 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     ?RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C020E4C0 (-RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 */

void __fastcall InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand **a2)
{
  InkFeedbackProviderBase::RemoveActiveCommand(this, (struct InkFeedbackProviderBase::ActiveCommand ***)*a2);
  if ( *a2 )
    Win32FreePool(*a2);
  *a2 = 0LL;
}
