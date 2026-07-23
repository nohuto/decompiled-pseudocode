/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140951EF8
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140951E9C (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x1409FC420 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x14095201C (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
