/*
 * XREFs of IsProcessedByInputService @ 0x1C00D5CC8
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C00D21B0 (EditionHandleAndPostKeyEvent.c)
 *     WakeSomeone @ 0x1C00D435C (WakeSomeone.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00D66A8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsProcessedByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x10000) != 0 || (v1 & 0x20000) != 0 || (v1 & 0x40000) != 0;
}
