/*
 * XREFs of PhkFirstValid @ 0x1C00B5BC8
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00A4CCC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     EditionLLMouseButtonHook @ 0x1C00B47C0 (EditionLLMouseButtonHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00B586C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00B5990 (EditionKeyEventLLHook.c)
 *     xxxCallMouseHook @ 0x1C00B90F0 (xxxCallMouseHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     EditionLLMouseWheelHook @ 0x1C01C8ED0 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01D3AA0 (zzzUnhookWindowsHook.c)
 *     xxxPointerCallHook @ 0x1C01DB658 (xxxPointerCallHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C00B5C80 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 912);
  if ( (v3 || (v3 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8LL * a2 + 48)) != 0) && (*(_DWORD *)(v3 + 64) & 0x80u) != 0 )
    return PhkNextValid(v3);
  return v3;
}
