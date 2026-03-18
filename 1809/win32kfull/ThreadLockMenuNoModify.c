/*
 * XREFs of ThreadLockMenuNoModify @ 0x1C00A6E2C
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C000A004 (xxxDrawMenuBarUnderlines.c)
 *     xxxCalcMenuBar @ 0x1C00A6D14 (xxxCalcMenuBar.c)
 *     xxxPaintMenuBar @ 0x1C00A6E80 (xxxPaintMenuBar.c)
 *     xxxMNStartMenu @ 0x1C01FA218 (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C0232510 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ThreadLockMenuNoModify(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x200u;
  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  *a2 = *(_QWORD *)(result + 416);
  *(_QWORD *)(result + 416) = a2;
  a2[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
