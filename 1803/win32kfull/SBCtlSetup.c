/*
 * XREFs of SBCtlSetup @ 0x1C0200BAC
 * Callers:
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C01FFC28 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C0200C74 (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     CalcSBStuff2 @ 0x1C0038E5C (CalcSBStuff2.c)
 */

INT __fastcall SBCtlSetup(__int64 a1)
{
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  GetRect(*(_QWORD *)a1, v3, 17);
  return CalcSBStuff2((int *)(a1 + 16), v3, (int *)(a1 + 16), *(_DWORD *)(a1 + 8));
}
