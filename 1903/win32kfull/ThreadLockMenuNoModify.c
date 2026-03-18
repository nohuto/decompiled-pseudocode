/*
 * XREFs of ThreadLockMenuNoModify @ 0x1C00FC34C
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00F912C (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C00FC000 (xxxCalcMenuBar.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C024B184 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ThreadLockMenuNoModify(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x200u;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  *a2 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = a2;
  a2[1] = a1;
  return HMLockObject(a1);
}
