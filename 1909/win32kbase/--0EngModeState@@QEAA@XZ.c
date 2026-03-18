/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00BCC64
 * Callers:
 *     EngCombineRgn @ 0x1C012EAA0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C012EB40 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C012EBC0 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C012EC40 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C012ECB0 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C012ED60 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C012EDC0 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C012EE30 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C012EED0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C012EF40 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C012EFA0 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C012F030 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C012F0D0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C012F170 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
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
