/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140950EF8
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140950E9C (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x1409FB410 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECCC (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x14095101C (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
