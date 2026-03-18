/*
 * XREFs of ThreadLockMenuNoModify @ 0x1C012F8A4
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00FBBBC (xxxPaintMenuBar.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     xxxCalcMenuBar @ 0x1C012F780 (xxxCalcMenuBar.c)
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C024AA44 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ThreadLockMenuNoModify(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x200u;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3);
  *a2 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = a2;
  a2[1] = a1;
  return HMLockObject(a1);
}
