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
 *     TppIteWakeWaiters @ 0x180073E48 (TppIteWakeWaiters.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A1550 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     TppRaiseHandleStatus @ 0x180110858 (TppRaiseHandleStatus.c)
 *     TppETWTimerExpiration @ 0x180110FCC (TppETWTimerExpiration.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  void *v12; // rcx
  unsigned __int32 v13; // eax
  __int64 v14; // rbx

  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWTimerExpiration((char *)&a2[16] + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFF88uLL), a1);
  v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v8 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v8 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      v12 = *(void **)(a1 + 368);
      *(_QWORD *)(a1 + 328) = 0LL;
      v13 = ZwCancelWaitCompletionPacket(v12, 0);
      if ( v13 )
      {
        if ( v13 != 259 && v13 != -1073741536 )
          TppRaiseHandleStatus(v13, *(_QWORD *)(a1 + 360), a1);
        goto LABEL_14;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      *(_QWORD *)(a1 + 360) = 0LL;
    }
    else
    {
      v9 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v9 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 328) = v7;
        v10 = 10000 * v9 + *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v10;
        if ( v10 <= v7 )
          *(_QWORD *)(a1 + 328) = 10000 * v9 + v7 - (v7 - v10) % (10000 * v9);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        TppEnqueueTimer(&a2[16], a1);
        TppUpdateSubQueueTimer(&a2[16], 0LL);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_14:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v14 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  TppIteWakeWaiters(v14);
LABEL_15:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
