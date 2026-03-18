/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C019EDEC
 * Callers:
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     ConstrainWindowPos @ 0x1C0030FB0 (ConstrainWindowPos.c)
 *     ConstrainWindowSize @ 0x1C00FD3D4 (ConstrainWindowSize.c)
 */

__int64 __fastcall ConstrainWindowSIZERECT(int *a1)
{
  __int64 v1; // r10

  ConstrainWindowPos(a1, a1 + 1);
  return ConstrainWindowSize((int *)(v1 + 8), (int *)(v1 + 12));
}
