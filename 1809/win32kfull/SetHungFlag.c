/*
 * XREFs of SetHungFlag @ 0x1C00D8654
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C010FB38 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

char __fastcall SetHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  int v5; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x18) == 0 && *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
    VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu, v5);
  return SetOrClrWF(1, (__int64)a1, a2, 1);
}
