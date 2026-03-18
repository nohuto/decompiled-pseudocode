/*
 * XREFs of SetHungFlag @ 0x1C0058F94
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F5E78 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SetHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  int v5; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x18) == 0 && *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
    VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu, v5);
  return SetOrClrWF(1LL, a1, a2, 1LL);
}
