/*
 * XREFs of ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0135B88
 * Callers:
 *     DragOperationFromMaximizedAllowed @ 0x1C0135B58 (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C01D6744 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01D6774 (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C01D688C (WindowArrangementAllowed.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00F0E40 (GetAppCompatFlags2QuadWord.c)
 */

_BOOL8 __fastcall WindowArrangementApplicable(struct tagWND *a1)
{
  __int64 v1; // rdx

  return IsNonImmersiveBand((__int64)a1) && (GetAppCompatFlags2QuadWord(0LL, v1) & 0x100000000LL) == 0;
}
