/*
 * XREFs of TppUpdateSubQueueTimer @ 0x18002D104
 * Callers:
 *     TppCancelTimer @ 0x18002C984 (TppCancelTimer.c)
 *     TppSingleTimerExpiration @ 0x18002CE38 (TppSingleTimerExpiration.c)
 *     TppSetTimer @ 0x18002CFD4 (TppSetTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwCancelTimer2 @ 0x1800A1510 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x1800A37B0 (ZwSetTimer2.c)
 *     TppETWTimerCancelNtTimer @ 0x180110ED0 (TppETWTimerCancelNtTimer.c)
 *     TppETWTimerSetNtTimer @ 0x18011119C (TppETWTimerSetNtTimer.c)
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
      *(_QWORD *)a1 = v4;
      v11 = 10000LL * (unsigned int)v5;
      *(_DWORD *)(a1 + 112) = v5;
      if ( !a2 )
      {
        v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
        if ( v6 > v4 )
          v4 = 0LL;
        else
          v4 = v6 - v4;
      }
      v9 = v4;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v7 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v7 = 2147353478LL;
      if ( *(_BYTE *)v7 )
        TppETWTimerSetNtTimer(a1, v4, (unsigned int)v5);
      ZwSetTimer2(*(_QWORD *)(a1 + 24), &v9, 0LL, &v10);
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      TppETWTimerCancelNtTimer(a1);
    ZwCancelTimer2(*(_QWORD *)(a1 + 24), 0LL);
  }
}
