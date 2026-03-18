/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x1409513F0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14016EDF4 (BgpFwQueryPerformanceCounter.c)
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayCharacter @ 0x140179EF4 (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x14094F754 (LogFwStat.c)
 */

void __fastcall AnFwpProgressIndicatorTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v5; // r9
  LARGE_INTEGER v6; // rbx
  __int16 v7; // ax
  LARGE_INTEGER v8[3]; // [rsp+40h] [rbp-18h] BYREF

  BgpFwAcquireLock();
  if ( byte_1404C64E0 )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v8);
    v5 = word_1404039D0;
    v6 = PerformanceCounter;
    if ( word_1404039D0 != -7989
      && (qword_1404C64E8 + 10 * (v8[0].QuadPart / 33) / 100 - PerformanceCounter.QuadPart) / (v8[0].QuadPart / 33) >= 2 )
    {
      v5 = ++word_1404039D0;
    }
    if ( (unsigned __int16)(v5 + 8110) <= 0x79u )
    {
      LogFwStat(1, 0, v8);
      BgpTxtDisplayCharacter(qword_140405B90, word_1404039D0, 0, 0LL, 0LL);
      LogFwStat(0, 0, v8);
      v5 = word_1404039D0;
    }
    v7 = -8118;
    if ( v5 != -7989 )
      v7 = v5 + 1;
    word_1404039D0 = v7;
    qword_1404C64E8 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
