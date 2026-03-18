/*
 * XREFs of ThreadLockMenuNoModify @ 0x1C000EBFC
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000CCE4 (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C000ED5C (xxxCalcMenuBar.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C0209284 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ThreadLockMenuNoModify(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x200u;
  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  *a2 = *(_QWORD *)(result + 408);
  *(_QWORD *)(result + 408) = a2;
  a2[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
