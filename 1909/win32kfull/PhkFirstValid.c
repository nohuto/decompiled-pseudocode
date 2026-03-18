/*
 * XREFs of PhkFirstValid @ 0x1C0055270
 * Callers:
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00550BC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00551E0 (EditionKeyEventLLHook.c)
 *     EditionLLMouseButtonHook @ 0x1C0056730 (EditionLLMouseButtonHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MouseCursorPerf@@@Z @ 0x1C0086374 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     xxxCallMouseHook @ 0x1C0111180 (xxxCallMouseHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01DC670 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01E8510 (zzzUnhookWindowsHook.c)
 *     xxxPointerCallHook @ 0x1C01F11D0 (xxxPointerCallHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C005530C (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 912);
  if ( (v3 || (v3 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * a2 + 48)) != 0) && (*(_DWORD *)(v3 + 64) & 0x80u) != 0 )
    return PhkNextValid(v3);
  return v3;
}
