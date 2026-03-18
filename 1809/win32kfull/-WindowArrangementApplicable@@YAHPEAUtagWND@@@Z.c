/*
 * XREFs of ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0156ECC
 * Callers:
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0156E9C (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB304 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB3E4 (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB410 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C010C8F0 (GetAppCompatFlags2QuadWord.c)
 */

_BOOL8 __fastcall WindowArrangementApplicable(struct tagWND *a1)
{
  __int64 v1; // rdx

  return IsNonImmersiveBand((__int64)a1) && (GetAppCompatFlags2QuadWord(0LL, v1) & 0x100000000LL) == 0;
}
