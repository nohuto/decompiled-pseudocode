/*
 * XREFs of KiSetClockTickRate @ 0x1400FCE54
 * Callers:
 *     KiSetClockIntervalToMinimumRequested @ 0x1400FCD90 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     KiEventClockStateChange @ 0x1400FCFB4 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x1400FCFF4 (KiSetPendingTick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiSetClockTickRate(unsigned int a1, char a2)
{
  unsigned __int32 v2; // edi
  __int64 v5; // rcx
  int v6; // eax
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER *v8; // rbx
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v2 = KiClockState;
  v12 = a1;
  KiLastRequestedTimeIncrement = a1;
  if ( a2 )
  {
    ((void (__fastcall *)(__int64, _QWORD, unsigned int *))off_1403FF5D0[0])(1LL, a1, &v11);
    v6 = 1;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, unsigned int *))off_1403FF5D0[0])(0LL, a1, &v11);
    v6 = 0;
  }
  LOBYTE(v5) = 1;
  KiClockOwnerOneShotRequestState = v6;
  KiSetPendingTick(v5);
  if ( v2 == 2 )
    v2 = _InterlockedExchange(&KiClockState, 0);
  KiEventClockStateChange(0LL, v2, &v11, &v12);
  KeTimeIncrement = v11;
  v7.QuadPart = MEMORY[0xFFFFF78000000008];
  KiClockTimerNextTickTime = MEMORY[0xFFFFF78000000008] + v11;
  if ( v11 < dword_140422734 )
    dword_140422734 = v11;
  if ( v11 > dword_140422730 )
    dword_140422730 = v11;
  if ( a1 < dword_14042273C )
    dword_14042273C = a1;
  if ( a1 > dword_140422738 )
    dword_140422738 = a1;
  v8 = (LARGE_INTEGER *)((char *)&KiClockIncrementTrace + 32 * (unsigned int)KiClockIncrementTraceCount);
  KiClockIncrementTraceCount = ((_BYTE)KiClockIncrementTraceCount + 1) & 0xF;
  v9 = KiLastRequestedTimeIncrement;
  v8->LowPart = v11;
  v8->HighPart = v9;
  v8[1] = v7;
  v8[2] = KeQueryPerformanceCounter(0LL);
  result = (unsigned int)KeTimeIncrement;
  LOBYTE(v8[3].LowPart) = a2;
  return result;
}
