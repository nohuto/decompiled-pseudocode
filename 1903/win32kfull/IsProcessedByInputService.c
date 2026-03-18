/*
 * XREFs of IsProcessedByInputService @ 0x1C0012034
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012058 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001F240 (EditionHandleAndPostKeyEvent.c)
 *     WakeSomeone @ 0x1C0023FC4 (WakeSomeone.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsProcessedByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x10000) != 0 || (v1 & 0x20000) != 0 || (v1 & 0x40000) != 0;
}
