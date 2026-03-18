/*
 * XREFs of ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C02123A8
 * Callers:
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212264 (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212290 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212358 (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212384 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C01166E0 (GetAppCompatFlags2QuadWord.c)
 */

_BOOL8 __fastcall WindowArrangementApplicable(struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  return IsNonImmersiveBand((__int64)a1) && (GetAppCompatFlags2QuadWord(0LL, v1, v2, v3) & 0x100000000LL) == 0;
}
