/*
 * XREFs of TppUpdateSubQueueTimer @ 0x1800327D4
 * Callers:
 *     TppCancelTimer @ 0x18003257C (TppCancelTimer.c)
 *     TppSetTimer @ 0x1800326A0 (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x180036320 (TppSingleTimerExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwCancelTimer2 @ 0x18009E0C0 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x1800A0380 (ZwSetTimer2.c)
 *     TppETWTimerCancelNtTimer @ 0x18010F6C0 (TppETWTimerCancelNtTimer.c)
 *     TppETWTimerSetNtTimer @ 0x18010F98C (TppETWTimerSetNtTimer.c)
 */

void __fastcall TppUpdateSubQueueTimer(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v10 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v5 = (*(_QWORD *)(v3 + 32) - v4) / 10000;
    if ( *(_QWORD *)a1 != v4 || *(_DWORD *)(a1 + 112) != (_DWORD)v5 )
    {
      v6 = 10000LL * (unsigned int)v5;
      *(_QWORD *)a1 = v4;
      v11 = v6;
      *(_DWORD *)(a1 + 112) = v5;
      if ( !a2 )
      {
        v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
        if ( v6 > v4 )
        {
          v4 = 0LL;
        }
        else
        {
          v6 -= v4;
          v4 = v6;
        }
      }
      v9 = v4;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v6) )
        v7 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v7 = 2147353478LL;
      if ( *(_BYTE *)v7 )
        TppETWTimerSetNtTimer(a1, v4, (unsigned int)v5);
      ((void (__fastcall *)(_QWORD, __int64 *, _QWORD, int *))ZwSetTimer2)(*(_QWORD *)(a1 + 24), &v9, 0LL, &v10);
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(0LL) )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      TppETWTimerCancelNtTimer(a1);
    ZwCancelTimer2(*(_QWORD *)(a1 + 24), 0LL);
  }
}
