/*
 * XREFs of Device_IsRemovable @ 0x1C000272C
 * Callers:
 *     Controller_SetControllerGone @ 0x1C00102A4 (Controller_SetControllerGone.c)
 * Callees:
 *     <none>
 */

bool __fastcall Device_IsRemovable(__int64 a1)
{
  return (*(_DWORD *)(a1 + 28) & 0x10) != 0;
}
