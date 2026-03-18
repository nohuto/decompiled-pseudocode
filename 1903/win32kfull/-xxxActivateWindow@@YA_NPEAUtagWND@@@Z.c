/*
 * XREFs of ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01184B0
 * Callers:
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C01183FC (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0210D60 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

char __fastcall xxxActivateWindow(struct tagWND *a1)
{
  return xxxActivateWindowWithOptions((__int64)a1, 0LL, 0LL, 1);
}
