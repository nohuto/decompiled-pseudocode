/*
 * XREFs of ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C001DA78
 * Callers:
 *     TimersProc @ 0x1C001D6A0 (TimersProc.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01B3EA0 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall TimerStatistics(const struct tagTIMER *a1)
{
  __int64 v2; // r11
  int v3; // r8d
  unsigned int *v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  int v8; // r10d
  __int64 v9; // rdx
  int v10; // eax
  _DWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax

  if ( (gdwExtraInstrumentations & 2) != 0 )
  {
    v2 = 0LL;
    v3 = dword_1C032FF58;
    v4 = (unsigned int *)&unk_1C02E5D38;
    v5 = *((_DWORD *)a1 + 10);
    v6 = 0LL;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v8 = v7 - *((_DWORD *)a1 + 32);
    if ( !dword_1C032FF58 )
      v3 = v7;
    dword_1C032FF58 = v3;
    do
    {
      if ( v5 <= *v4 )
        break;
      v6 = (unsigned int)(v6 + 1);
      ++v4;
    }
    while ( (unsigned int)v6 < 7 );
    v9 = v6 + 8LL * gTimerCoalCurrentState;
    ++gaTimerDeliveryDistribution[2 * v9];
    v10 = v8 + gaTimerDeliveryDistribution[2 * v9 + 1] - *((_DWORD *)a1 + 10);
    gaTimerDeliveryDistribution[2 * v9 + 1] = v10;
    if ( gaTimerDeliveryDistribution[2 * v9] >= 0x7FFFFFFFu || v10 >= 0x3FFFFFFF || (unsigned int)(v7 - v3) >= 0xEA60 )
    {
      v11 = &unk_1C032B538;
      v12 = 4LL;
      do
      {
        v13 = v2 + (gServiceSessionId != gSessionId ? 4 : 0);
        ++v2;
        *v11 = *((_DWORD *)&gTimerCoalescingSpec + v13);
        v11 += 16;
        --v12;
      }
      while ( v12 );
      EtwTraceTimerDelayStatistics(gSessionId, 8LL, 4LL, &unk_1C02E5D38, 32, 8, gaTimerDeliveryDistribution);
      dword_1C032FF58 = v7;
      memset(gaTimerDeliveryDistribution, 0, 0x100uLL);
    }
  }
}
