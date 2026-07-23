/*
 * XREFs of sub_180035FA0 @ 0x180035FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180036214 @ 0x180036214 (sub_180036214.c)
 *     sub_180036320 @ 0x180036320 (sub_180036320.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x18009D890 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x18009FBD0 (ZwSetTimer2.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 *     sub_18010F72C @ 0x18010F72C (sub_18010F72C.c)
 *     sub_18010F85C @ 0x18010F85C (sub_18010F85C.c)
 */

NTSTATUS __fastcall sub_180035FA0(__int64 a1, __int64 a2, _RTL_SRWLOCK *a3, __int64 a4)
{
  _RTL_SRWLOCK *ApcContext; // r15
  unsigned __int8 v5; // r13
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
  _QWORD *Ptr; // rcx
  LARGE_INTEGER v17; // r14
  LONGLONG v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rbx
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  _QWORD *v26; // [rsp+40h] [rbp-39h] BYREF
  _QWORD **v27; // [rsp+48h] [rbp-31h]
  __int64 v28; // [rsp+50h] [rbp-29h]
  LARGE_INTEGER DueTime; // [rsp+58h] [rbp-21h] BYREF
  char Fields[6]; // [rsp+60h] [rbp-19h] BYREF
  __int16 v31; // [rsp+66h] [rbp-13h]
  _RTL_SRWLOCK *v32; // [rsp+80h] [rbp+7h]
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+88h] [rbp+Fh] BYREF

  ApcContext = a3;
  Parameters.Version = 0;
  Parameters.NoWakeTolerance = 0LL;
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
    a3 = (_RTL_SRWLOCK *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v28 = v7;
  v8 = &ApcContext[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    sub_18010EFC8(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v27 = &v26;
  v26 = &v26;
  v9 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v7 = v28;
    v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  }
  else
  {
    v10 = 2147353478LL;
  }
  if ( *(_BYTE *)v10 )
    sub_18010F72C(v8);
  RtlAcquireSRWLockExclusive(ApcContext);
  v11 = (LARGE_INTEGER **)&v8[1];
  while ( *v11 && (*v11)[5].QuadPart <= v7 )
  {
    sub_180036214(&v8[1], *v11);
    v13 = (_QWORD *)(v12 - 40);
    sub_180036214(&v8[2], v12 - 40);
    *(_BYTE *)(v14 + 64) = 0;
    v15 = v27;
    if ( *v27 != &v26 )
      __fastfail(3u);
    v13[1] = v27;
    *v13 = &v26;
    *v15 = v13;
    v27 = (_QWORD **)v13;
  }
  Ptr = v8[2].Ptr;
  if ( Ptr )
  {
    v17 = (*v11)[4];
    v18 = Ptr[4] - v17.QuadPart;
    v8->Ptr = (PVOID)v17;
    v19 = v18 / 10000;
    LODWORD(v8[14].Ptr) = v18 / 10000;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)(v18 / 10000);
    if ( !v5 )
      v17.QuadPart = v7 - v17.QuadPart;
    DueTime = v17;
    if ( RtlGetCurrentServiceSessionId() )
      v20 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v20 = 2147353478LL;
    if ( *(_BYTE *)v20 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_18010F85C)(v8, (LARGE_INTEGER)v17.QuadPart, (unsigned int)v19);
    ZwSetTimer2(v8[3].Ptr, &DueTime, 0LL, &Parameters);
  }
  else
  {
    v8->Ptr = 0LL;
  }
  RtlReleaseSRWLockExclusive(ApcContext);
  v22 = v26;
  while ( v22 != &v26 )
  {
    v23 = v22 - 31;
    LOBYTE(v21) = v5;
    v22 = (_QWORD *)*v22;
    sub_180036320(v23, ApcContext, v21);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v24 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v24 = 2147353478LL;
  if ( *(_BYTE *)v24 )
  {
    v32 = v8;
    v31 = 7215;
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x402u, 8u, Fields);
  }
  return ZwAssociateWaitCompletionPacket(v8[4].Ptr, ApcContext[-6].Ptr, v8[3].Ptr, &v8[5], ApcContext, 0, v5, 0LL);
}
