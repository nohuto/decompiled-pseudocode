/*
 * XREFs of ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0211E68
 * Callers:
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211D24 (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211D50 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211E18 (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211E44 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1C00F0F30 (GetAppCompatFlags2QuadWord.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 */

_BOOL8 __fastcall WindowArrangementApplicable(struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  return IsNonImmersiveBand((__int64)a1) && (GetAppCompatFlags2QuadWord(0LL, v1, v2) & 0x100000000LL) == 0;
}
