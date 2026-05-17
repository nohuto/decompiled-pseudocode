/*
 * XREFs of TppTimerQueueExpiration @ 0x180035FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     TppPHDelete @ 0x180036214 (TppPHDelete.c)
 *     TppSingleTimerExpiration @ 0x180036320 (TppSingleTimerExpiration.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x18009E040 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A0380 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 *     TppETWTimerExpirationBegin @ 0x18010F85C (TppETWTimerExpirationBegin.c)
 *     TppETWTimerSetNtTimer @ 0x18010F98C (TppETWTimerSetNtTimer.c)
 */

__int64 __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4)
{
  volatile signed __int64 *v4; // r15
  unsigned __int8 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  volatile signed __int64 *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // r12
  __int64 v12; // r11
  _QWORD *v13; // r14
  __int64 v14; // r11
  _QWORD *v15; // rax
  __int64 v16; // rcx
  volatile signed __int64 v17; // r14
  signed __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rbx
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // [rsp+20h] [rbp-59h]
  int v29; // [rsp+28h] [rbp-51h]
  __int64 v30; // [rsp+30h] [rbp-49h]
  _QWORD *v31; // [rsp+40h] [rbp-39h] BYREF
  _QWORD **v32; // [rsp+48h] [rbp-31h]
  __int64 v33; // [rsp+50h] [rbp-29h]
  volatile signed __int64 v34; // [rsp+58h] [rbp-21h] BYREF
  char v35[6]; // [rsp+60h] [rbp-19h] BYREF
  __int16 v36; // [rsp+66h] [rbp-13h]
  volatile signed __int64 *v37; // [rsp+80h] [rbp+7h]
  int v38; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v39; // [rsp+90h] [rbp+17h]

  v4 = a3;
  v38 = 0;
  v39 = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v5 = 1;
    v6 = 1LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v5 = 0;
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = (volatile signed __int64 *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v33 = v7;
  v8 = &v4[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v32 = &v31;
  v31 = &v31;
  v9 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1) )
  {
    v7 = v33;
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  }
  else
  {
    v10 = 2147353478LL;
  }
  if ( *(_BYTE *)v10 )
    TppETWTimerExpirationBegin(v8);
  RtlAcquireSRWLockExclusive(v4);
  v11 = v8 + 1;
  while ( *v11 && *(_QWORD *)(*v11 + 40LL) <= v7 )
  {
    TppPHDelete(v8 + 1, *v11);
    v13 = (_QWORD *)(v12 - 40);
    TppPHDelete(v8 + 2, v12 - 40);
    *(_BYTE *)(v14 + 64) = 0;
    v15 = v32;
    if ( *v32 != &v31 )
      __fastfail(3u);
    v13[1] = v32;
    *v13 = &v31;
    *v15 = v13;
    v32 = (_QWORD **)v13;
  }
  v16 = *((_QWORD *)v8 + 2);
  if ( v16 )
  {
    v17 = *(_QWORD *)(*v11 + 32LL);
    v18 = *(_QWORD *)(v16 + 32) - v17;
    *v8 = v17;
    v19 = v18 / 10000;
    v20 = 10000LL * (unsigned int)(v18 / 10000);
    *((_DWORD *)v8 + 28) = v19;
    v39 = v20;
    if ( !v5 )
      v17 = v7 - v17;
    v34 = v17;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v20) )
      v21 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v21 = 2147353478LL;
    if ( *(_BYTE *)v21 )
      TppETWTimerSetNtTimer(v8, v17, (unsigned int)v19);
    ZwSetTimer2(*((_QWORD *)v8 + 3), &v34, 0LL, &v38, v28, v29, v30);
  }
  else
  {
    *v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v4);
  v24 = v31;
  while ( v24 != &v31 )
  {
    v25 = v24 - 31;
    LOBYTE(v23) = v5;
    v24 = (_QWORD *)*v24;
    TppSingleTimerExpiration(v25, v4, v23);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v22) )
    v26 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v26 = 2147353478LL;
  if ( *(_BYTE *)v26 )
  {
    v37 = v8;
    v36 = 7215;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v26) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v9, 1026LL, 8LL, v35);
  }
  return ZwAssociateWaitCompletionPacket(
           *((_QWORD *)v8 + 4),
           *((_QWORD *)v4 - 6),
           *((_QWORD *)v8 + 3),
           v8 + 5,
           v4,
           0,
           v5,
           0LL);
}
