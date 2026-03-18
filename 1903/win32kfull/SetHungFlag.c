/*
 * XREFs of SetHungFlag @ 0x1C0013594
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0116710 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SetHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  int v5; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x18) == 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
    VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu, v5);
  return SetOrClrWF(1LL, a1, a2, 1LL);
}
