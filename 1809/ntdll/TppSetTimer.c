/*
 * XREFs of TppSetTimer @ 0x18002CFD4
 * Callers:
 *     TppSetupNextWait @ 0x18002C320 (TppSetupNextWait.c)
 *     TpSetTimerEx @ 0x18002C800 (TpSetTimerEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppUpdateSubQueueTimer @ 0x18002D104 (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18002D270 (TppEnqueueTimer.c)
 *     RtlSetLastWin32Error @ 0x18004ED60 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180078300 (RtlNtStatusToDosErrorNoTeb.c)
 *     TppETWTimerSet @ 0x1801110E8 (TppETWTimerSet.c)
 */

signed __int64 __fastcall TppSetTimer(__int64 a1, volatile signed __int64 *a2, __int64 *a3, int a4, int a5)
{
  bool v6; // bp
  __int64 *v9; // rbx
  char *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v19; // eax

  v6 = *a3 >= 0;
  *(_DWORD *)(a1 + 348) = a4;
  v9 = (__int64 *)(a1 + 328);
  *(_DWORD *)(a1 + 344) = a5;
  v10 = (char *)a2 + (-(__int64)v6 & 0xFFFFFFFFFFFFFF88uLL) + 128;
  if ( v6 )
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
      v19 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v19);
      v11 = MEMORY[0];
    }
    else
    {
      v11 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      *v9 = v11;
    }
    v12 = v11 - *a3;
    if ( v12 < v11 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  *v9 = v12;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v16 = 2147353478LL;
  if ( *(_BYTE *)v16 )
    TppETWTimerSet(v10, a1);
  RtlAcquireSRWLockExclusive((unsigned __int64)a2, v13, v14, v15);
  TppEnqueueTimer(v10, a1);
  LOBYTE(v17) = v6;
  TppUpdateSubQueueTimer(v10, v17);
  return RtlReleaseSRWLockExclusive(a2);
}
