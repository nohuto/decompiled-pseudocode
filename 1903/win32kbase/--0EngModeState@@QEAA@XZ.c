/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00BF180
 * Callers:
 *     EngCombineRgn @ 0x1C0131250 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C01312F0 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C0131370 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C01313F0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C0131460 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C0131510 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C0131570 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C01315E0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C0131680 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C01316F0 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C0131750 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C01317E0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C0131880 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0131920 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  __int64 ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_DWORD *)(ThreadWin32Thread + 328) |= 0x10u;
  return this;
}
