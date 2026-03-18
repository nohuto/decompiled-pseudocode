/*
 * XREFs of SBCtlSetup @ 0x1C02295E4
 * Callers:
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0228618 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C02296AC (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff2 @ 0x1C0020124 (CalcSBStuff2.c)
 *     GetRect @ 0x1C0021568 (GetRect.c)
 */

INT __fastcall SBCtlSetup(__int64 a1)
{
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  GetRect(*(_QWORD *)a1, (__int64)v3, 17);
  return CalcSBStuff2((int *)(a1 + 16), v3, (int *)(a1 + 16), *(_DWORD *)(a1 + 8));
}
