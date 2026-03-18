/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C0164B98
 * Callers:
 *     W32kCddClipRegion @ 0x1C0275580 (W32kCddClipRegion.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  *(_QWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_DWORD *)(ThreadWin32Thread + 328) |= 0x10u;
  return this;
}
