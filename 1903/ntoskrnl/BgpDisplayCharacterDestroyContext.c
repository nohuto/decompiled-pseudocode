/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140990F58
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140990EFC (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140A410A4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x14099107C (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
