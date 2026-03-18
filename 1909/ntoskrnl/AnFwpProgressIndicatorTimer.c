/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x140991450
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x140178CC4 (BgpFwQueryPerformanceCounter.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayCharacter @ 0x140183298 (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x14098F79C (LogFwStat.c)
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

  v8[0].QuadPart = 0LL;
  BgpFwAcquireLock();
  if ( byte_1404F2820 )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v8);
    v5 = word_140429E38;
    v6 = PerformanceCounter;
    if ( word_140429E38 != -7989
      && (qword_1404F2828 + 10 * (v8[0].QuadPart / 33) / 100 - PerformanceCounter.QuadPart) / (v8[0].QuadPart / 33) >= 2 )
    {
      v5 = ++word_140429E38;
    }
    if ( (unsigned __int16)(v5 + 8110) <= 0x79u )
    {
      LogFwStat(1, 0, v8);
      BgpTxtDisplayCharacter(qword_14042C0D0, word_140429E38, 0, 0LL, 0LL);
      LogFwStat(0, 0, v8);
      v5 = word_140429E38;
    }
    v7 = -8118;
    if ( v5 != -7989 )
      v7 = v5 + 1;
    word_140429E38 = v7;
    qword_1404F2828 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
