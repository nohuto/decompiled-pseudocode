/*
 * XREFs of SBCtlSetup @ 0x1C0241A70
 * Callers:
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0240810 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C0241B40 (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff2 @ 0x1C004B35C (CalcSBStuff2.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 */

INT __fastcall SBCtlSetup(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v2 = *(_QWORD *)a1;
  v4[1] = 0LL;
  GetRect(v2, (__int64)v4, 17);
  return CalcSBStuff2((int *)(a1 + 16), (int *)v4, (int *)(a1 + 16), *(_DWORD *)(a1 + 8));
}
