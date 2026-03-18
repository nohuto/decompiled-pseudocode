/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C013B40C
 * Callers:
 *     W32kCddClipRegion @ 0x1C0243DA0 (W32kCddClipRegion.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  *(_QWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 331) = 1;
  return this;
}
