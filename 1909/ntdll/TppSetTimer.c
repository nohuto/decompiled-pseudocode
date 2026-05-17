/*
 * XREFs of TppSetTimer @ 0x1800326A0
 * Callers:
 *     TppSetupNextWait @ 0x180031544 (TppSetupNextWait.c)
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 * Callees:
 *     TppUpdateSubQueueTimer @ 0x1800327D4 (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x180032940 (TppEnqueueTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlSetLastWin32Error @ 0x180053C30 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800744F0 (RtlNtStatusToDosErrorNoTeb.c)
 *     TppETWTimerSet @ 0x18010F8D8 (TppETWTimerSet.c)
 */

__int64 __fastcall TppSetTimer(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  __int64 v6; // rcx
  bool v8; // bp
  __int64 *v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v16; // eax

  v6 = 1LL;
  v8 = *a3 >= 0;
  *(_DWORD *)(a1 + 348) = a4;
  v10 = (__int64 *)(a1 + 328);
  *(_DWORD *)(a1 + 344) = a5;
  v11 = (-(__int64)v8 & 0xFFFFFFFFFFFFFF88uLL) + a2 + 128;
  if ( v8 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v12 = *a3;
    if ( !*a3 )
      v12 = 1LL;
  }
  else
  {
    if ( a1 == -328 )
    {
      v16 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v16);
      v6 = MEMORY[0];
    }
    else
    {
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      *v10 = v6;
    }
    v12 = v6 - *a3;
    if ( v12 < v6 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  *v10 = v12;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v6) )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    TppETWTimerSet(v11, a1);
  RtlAcquireSRWLockExclusive(a2);
  TppEnqueueTimer(v11, a1);
  LOBYTE(v14) = v8;
  TppUpdateSubQueueTimer(v11, v14);
  return RtlReleaseSRWLockExclusive(a2);
}
