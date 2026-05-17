/*
 * XREFs of TppSingleTimerExpiration @ 0x18002CE38
 * Callers:
 *     TppTimerQueueExpiration @ 0x18002CAB0 (TppTimerQueueExpiration.c)
 * Callees:
 *     TppWorkPost @ 0x180014F60 (TppWorkPost.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppUpdateSubQueueTimer @ 0x18002D104 (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18002D270 (TppEnqueueTimer.c)
 *     TppIteWakeWaiters @ 0x180073E38 (TppIteWakeWaiters.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A1530 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     TppRaiseHandleStatus @ 0x180110858 (TppRaiseHandleStatus.c)
 *     TppETWTimerExpiration @ 0x180110FCC (TppETWTimerExpiration.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, volatile signed __int64 *a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rbx

  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWTimerExpiration((char *)a2 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFF88uLL) + 128, a1);
  v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive(a1 + 240, MEMORY[0x7FFE03B0], (unsigned __int64 *)0x7FFE03B0, 2147352584LL);
  v10 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v10 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      v15 = *(_QWORD *)(a1 + 368);
      *(_QWORD *)(a1 + 328) = 0LL;
      v16 = ZwCancelWaitCompletionPacket(v15, 0LL);
      if ( v16 )
      {
        if ( v16 != 259 && v16 != -1073741536 )
          TppRaiseHandleStatus(v16, *(_QWORD *)(a1 + 360), a1);
        goto LABEL_14;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      *(_QWORD *)(a1 + 360) = 0LL;
    }
    else
    {
      v11 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v11 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 328) = v7;
        v12 = 10000 * v11;
        v13 = 10000 * v11 + *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v13;
        if ( v13 <= v7 )
        {
          v8 = (v7 - v13) % v12;
          *(_QWORD *)(a1 + 328) = v12 + v7 - v8;
        }
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive((unsigned __int64)a2, v8, (unsigned __int64 *)v12, v9);
        TppEnqueueTimer(a2 + 16, a1);
        TppUpdateSubQueueTimer(a2 + 16, 0LL);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_14:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v17 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  TppIteWakeWaiters(v17);
LABEL_15:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
