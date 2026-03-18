/*
 * XREFs of NtUserPeekMessage @ 0x1C0032570
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ClientGetMessageMPH @ 0x1C0103FA4 (ClientGetMessageMPH.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  int v8; // r13d
  _OWORD *v9; // rdi
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdx
  ULONG64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int Message; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  __int128 v23; // [rsp+40h] [rbp-68h] BYREF
  __int128 v24; // [rsp+50h] [rbp-58h]
  __int128 v25; // [rsp+60h] [rbp-48h]
  union _LARGE_INTEGER v26; // [rsp+78h] [rbp-30h] BYREF

  v8 = a2;
  v9 = a1;
  v10 = 0;
  if ( (a6 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    v26.QuadPart = 0LL;
    if ( KeWaitForSingleObject(*(PVOID *)(v12 + 1392), WrUserRequest, 1, 0, &v26) == 258 )
      return 0LL;
    if ( (a6 & 2) != 0 )
      --*(_QWORD *)(*(_QWORD *)(v12 + 480) + 8LL);
    v9 = a1;
  }
  v23 = 0uLL;
  v24 = 0uLL;
  v25 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL);
  }
  else
  {
    LODWORD(Timeout) = a5;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL) <= 0 )
      Message = xxxRealInternalGetMessage((unsigned int)&v23, v8, a3, a4, (unsigned __int64)Timeout, 0);
    else
      Message = ClientGetMessageMPH((unsigned int)&v23, v8, a3, a4, a5, 0);
    v10 = Message;
    if ( Message )
    {
      HIDWORD(v23) = 0;
      HIDWORD(v25) = 0;
      v20 = v24;
      v21 = v25;
      v16 = MmUserProbeAddress;
      if ( (unsigned __int64)v9 >= MmUserProbeAddress )
        v9 = (_OWORD *)MmUserProbeAddress;
      *v9 = v23;
      v9[1] = v20;
      v9[2] = v21;
    }
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v10;
}
