/*
 * XREFs of TppTimerQueueExpiration @ 0x18002CAB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppPHDelete @ 0x18002CD2C (TppPHDelete.c)
 *     TppSingleTimerExpiration @ 0x18002CE38 (TppSingleTimerExpiration.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A1490 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A37B0 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 *     TppETWTimerExpirationBegin @ 0x18011106C (TppETWTimerExpirationBegin.c)
 *     TppETWTimerSetNtTimer @ 0x18011119C (TppETWTimerSetNtTimer.c)
 */

__int64 __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4)
{
  __int64 v4; // r13
  volatile signed __int64 *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  volatile signed __int64 *v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // r12
  __int64 v15; // r11
  _QWORD *v16; // r14
  __int64 v17; // r11
  _QWORD *v18; // rax
  __int64 v19; // rcx
  volatile signed __int64 v20; // r14
  signed __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rbx
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  bool v29; // [rsp+40h] [rbp-49h]
  _QWORD *v30; // [rsp+48h] [rbp-41h] BYREF
  _QWORD **v31; // [rsp+50h] [rbp-39h]
  __int64 v32; // [rsp+58h] [rbp-31h]
  volatile signed __int64 v33; // [rsp+60h] [rbp-29h] BYREF
  char v34[6]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v35; // [rsp+6Eh] [rbp-1Bh]
  volatile signed __int64 *v36; // [rsp+88h] [rbp-1h]
  int v37; // [rsp+90h] [rbp+7h] BYREF
  __int64 v38; // [rsp+98h] [rbp+Fh]

  v4 = *(_QWORD *)(a4 + 8);
  v37 = 0;
  v5 = a3;
  v38 = 0LL;
  v29 = v4 != 0;
  if ( v4 )
  {
    v6 = 1LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = (volatile signed __int64 *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v32 = v7;
  v8 = &v5[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v31 = &v30;
  v30 = &v30;
  v12 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v7 = v32;
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  }
  else
  {
    v13 = 2147353478LL;
  }
  if ( *(_BYTE *)v13 )
    TppETWTimerExpirationBegin(v8);
  RtlAcquireSRWLockExclusive((unsigned __int64)v5, v9, v10, v11);
  v14 = v8 + 1;
  while ( *v14 && *(_QWORD *)(*v14 + 40LL) <= v7 )
  {
    TppPHDelete(v8 + 1, *v14);
    v16 = (_QWORD *)(v15 - 40);
    TppPHDelete(v8 + 2, v15 - 40);
    *(_BYTE *)(v17 + 64) = 0;
    v18 = v31;
    if ( *v31 != &v30 )
      __fastfail(3u);
    v16[1] = v31;
    *v16 = &v30;
    *v18 = v16;
    v31 = (_QWORD **)v16;
  }
  v19 = *((_QWORD *)v8 + 2);
  if ( v19 )
  {
    v20 = *(_QWORD *)(*v14 + 32LL);
    v21 = *(_QWORD *)(v19 + 32) - v20;
    *v8 = v20;
    v22 = v21 / 10000;
    *((_DWORD *)v8 + 28) = v21 / 10000;
    v38 = 10000LL * (unsigned int)(v21 / 10000);
    if ( !v4 )
      v20 = v7 - v20;
    v33 = v20;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v23 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v23 = 2147353478LL;
    if ( *(_BYTE *)v23 )
      TppETWTimerSetNtTimer(v8, v20, (unsigned int)v22);
    ZwSetTimer2(*((_QWORD *)v8 + 3), &v33, 0LL, &v37);
  }
  else
  {
    *v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v5);
  v25 = v30;
  while ( v25 != &v30 )
  {
    v26 = v25 - 31;
    LOBYTE(v24) = v29;
    v25 = (_QWORD *)*v25;
    TppSingleTimerExpiration(v26, v5, v24);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v27 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v27 = 2147353478LL;
  if ( *(_BYTE *)v27 )
  {
    v36 = v8;
    v35 = 7215;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v12, 1026LL, 8LL, v34);
  }
  return ZwAssociateWaitCompletionPacket(
           *((_QWORD *)v8 + 4),
           *((_QWORD *)v5 - 6),
           *((_QWORD *)v8 + 3),
           v8 + 5,
           v5,
           0,
           v29,
           0LL);
}
