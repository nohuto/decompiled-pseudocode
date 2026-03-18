/*
 * XREFs of PhkFirstValid @ 0x1C00D7E40
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C0069DB0 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     xxxCallMouseHook @ 0x1C00D7154 (xxxCallMouseHook.c)
 *     EditionLLMouseButtonHook @ 0x1C00D73E0 (EditionLLMouseButtonHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00D7CAC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00D7DB0 (EditionKeyEventLLHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     EditionLLMouseWheelHook @ 0x1C01A6E90 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01B0A70 (zzzUnhookWindowsHook.c)
 *     xxxPointerCallHook @ 0x1C01B89EC (xxxPointerCallHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C003BC60 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = a2 + 1;
  v4 = *(_QWORD *)(a1 + 8 * v3 + 896);
  if ( (v4 || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8 * v3 + 40)) != 0) && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4);
  return v4;
}
