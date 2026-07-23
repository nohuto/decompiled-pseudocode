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
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0EB0 (NtTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A14B0 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A37D0 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 *     TppETWTimerExpirationBegin @ 0x18011106C (TppETWTimerExpirationBegin.c)
 *     TppETWTimerSetNtTimer @ 0x18011119C (TppETWTimerSetNtTimer.c)
 */

NTSTATUS __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, _RTL_SRWLOCK *a3, __int64 a4)
{
  __int64 v4; // r13
  _RTL_SRWLOCK *ApcContext; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  _RTL_SRWLOCK *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  LARGE_INTEGER **v11; // r12
  __int64 v12; // r11
  _QWORD *v13; // r14
  __int64 v14; // r11
  _QWORD *v15; // rax
  unsigned __int64 Value; // rcx
  LARGE_INTEGER v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rbx
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  bool v26; // [rsp+40h] [rbp-49h]
  _QWORD *v27; // [rsp+48h] [rbp-41h] BYREF
  _QWORD **v28; // [rsp+50h] [rbp-39h]
  __int64 v29; // [rsp+58h] [rbp-31h]
  LARGE_INTEGER DueTime; // [rsp+60h] [rbp-29h] BYREF
  char Fields[6]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v32; // [rsp+6Eh] [rbp-1Bh]
  _RTL_SRWLOCK *v33; // [rsp+88h] [rbp-1h]
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+90h] [rbp+7h] BYREF

  v4 = *(_QWORD *)(a4 + 8);
  Parameters.Version = 0;
  ApcContext = a3;
  Parameters.NoWakeTolerance = 0LL;
  v26 = v4 != 0;
  if ( v4 )
  {
    v6 = 1LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = (_RTL_SRWLOCK *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v29 = v7;
  v8 = &ApcContext[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v28 = &v27;
  v27 = &v27;
  v9 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v7 = v29;
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  }
  else
  {
    v10 = 2147353478LL;
  }
  if ( *(_BYTE *)v10 )
    TppETWTimerExpirationBegin(v8);
  RtlAcquireSRWLockExclusive(ApcContext);
  v11 = (LARGE_INTEGER **)&v8[1];
  while ( *v11 && (*v11)[5].QuadPart <= v7 )
  {
    TppPHDelete(&v8[1], *v11);
    v13 = (_QWORD *)(v12 - 40);
    TppPHDelete(&v8[2], v12 - 40);
    *(_BYTE *)(v14 + 64) = 0;
    v15 = v28;
    if ( *v28 != &v27 )
      __fastfail(3u);
    v13[1] = v28;
    *v13 = &v27;
    *v15 = v13;
    v28 = (_QWORD **)v13;
  }
  Value = v8[2].Value;
  if ( Value )
  {
    v17 = (*v11)[4];
    v18 = *(_QWORD *)(Value + 32) - v17.QuadPart;
    v8->0 = ($2F38BEDF952D5DA5F266621B11247D04)v17;
    v19 = v18 / 10000;
    *(_DWORD *)&v8[14].0 = v18 / 10000;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)(v18 / 10000);
    if ( !v4 )
      v17.QuadPart = v7 - v17.QuadPart;
    DueTime = v17;
    if ( RtlGetCurrentServiceSessionId() )
      v20 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v20 = 2147353478LL;
    if ( *(_BYTE *)v20 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))TppETWTimerSetNtTimer)(
        v8,
        (LARGE_INTEGER)v17.QuadPart,
        (unsigned int)v19);
    ZwSetTimer2(v8[3].Ptr, &DueTime, 0LL, &Parameters);
  }
  else
  {
    v8->Value = 0LL;
  }
  RtlReleaseSRWLockExclusive(ApcContext);
  v22 = v27;
  while ( v22 != &v27 )
  {
    v23 = v22 - 31;
    LOBYTE(v21) = v26;
    v22 = (_QWORD *)*v22;
    TppSingleTimerExpiration(v23, ApcContext, v21);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v24 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v24 = 2147353478LL;
  if ( *(_BYTE *)v24 )
  {
    v33 = v8;
    v32 = 7215;
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x402u, 8u, Fields);
  }
  return ZwAssociateWaitCompletionPacket(v8[4].Ptr, ApcContext[-6].Ptr, v8[3].Ptr, &v8[5], ApcContext, 0, v26, 0LL);
}
