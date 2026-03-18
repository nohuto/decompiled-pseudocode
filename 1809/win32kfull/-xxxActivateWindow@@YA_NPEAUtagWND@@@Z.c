/*
 * XREFs of ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00D86B8
 * Callers:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00D8C48 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FA0A0 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

bool __fastcall xxxActivateWindow(struct tagWND *a1)
{
  return xxxActivateWindowWithOptions((__int64)a1, 0LL, 0LL, 1);
}
