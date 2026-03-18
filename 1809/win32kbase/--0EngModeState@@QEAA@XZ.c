/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00AC228
 * Callers:
 *     EngCombineRgn @ 0x1C0106F40 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C0106FE0 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C0107060 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C01070E0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C0107160 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C0107220 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C0107280 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C01072F0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C0107390 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C0107400 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C0107460 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C01074F0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C0107590 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0107630 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  __int64 ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 331) = 1;
  return this;
}
