/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140990F58
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140990EFC (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140A40E74 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
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
