/*
 * XREFs of NtUserPeekMessage @ 0x1C003C8F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ClientGetMessageMPH @ 0x1C003BB1C (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, __int64 a2, __int64 a3, int a4, unsigned int a5, char a6)
{
  unsigned int v7; // r12d
  _OWORD *v9; // rdi
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG64 v17; // rcx
  int Message; // eax
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  __int128 v22; // [rsp+40h] [rbp-68h] BYREF
  __int128 v23; // [rsp+50h] [rbp-58h]
  __int128 v24; // [rsp+60h] [rbp-48h]
  union _LARGE_INTEGER v25; // [rsp+78h] [rbp-30h] BYREF

  v7 = a3;
  v9 = a1;
  v10 = 0;
  if ( (a6 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    v25.QuadPart = 0LL;
    if ( KeWaitForSingleObject(*(PVOID *)(v12 + 1416), WrUserRequest, 1, 0, &v25) == 258 )
      return 0LL;
    if ( (a6 & 2) != 0 )
      --*(_QWORD *)(*(_QWORD *)(v12 + 472) + 8LL);
    v9 = a1;
  }
  v22 = 0uLL;
  v23 = 0uLL;
  v24 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL, a5, v15, v16);
  }
  else
  {
    LODWORD(Timeout) = a5;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL) <= 0 )
      Message = xxxRealInternalGetMessage((unsigned int)&v22, a2, v7, a4, (unsigned __int64)Timeout, 0);
    else
      Message = ClientGetMessageMPH(&v22, a2, v7, a4, a5, 0);
    v10 = Message;
    if ( Message )
    {
      HIDWORD(v22) = 0;
      HIDWORD(v24) = 0;
      v19 = v23;
      v20 = v24;
      v17 = MmUserProbeAddress;
      if ( (unsigned __int64)v9 >= MmUserProbeAddress )
        v9 = (_OWORD *)MmUserProbeAddress;
      *v9 = v22;
      v9[1] = v19;
      v9[2] = v20;
    }
  }
  UserSessionSwitchLeaveCrit(v17);
  return v10;
}
