/*
 * XREFs of RtlRegisterWait @ 0x18002BA40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpTpResumeImpersonation @ 0x18002BCB8 (RtlpTpResumeImpersonation.c)
 *     TpAllocWait @ 0x18002BF10 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18002C0B0 (TpSetWaitEx.c)
 *     RtlpTpInitializeData @ 0x18002F1A4 (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x18002F218 (RtlpTpRevertCapture.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 */

NTSTATUS __cdecl RtlRegisterWait(
        PHANDLE WaitHandle,
        HANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG Milliseconds,
        ULONG Flags)
{
  int v8; // edi
  __int64 v9; // rdx
  char *Heap; // rax
  HANDLE *v11; // rbx
  PTP_WAIT *v12; // r12
  int v13; // eax
  char v15; // [rsp+20h] [rbp-98h]
  int v16; // [rsp+24h] [rbp-94h]
  PVOID BaseAddress; // [rsp+28h] [rbp-90h]
  HANDLE TokenHandle; // [rsp+30h] [rbp-88h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+40h] [rbp-78h] BYREF

  v15 = 0;
  TokenHandle = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( (char *)Handle - 1 > (char *)0xFFFFFFFFFFFFFFFCLL || !Function )
    return -1073741811;
  *WaitHandle = 0LL;
  v8 = RtlpTpRevertCapture(&TokenHandle);
  v16 = v8;
  v9 = 0LL;
  if ( v8 < 0 )
  {
    v11 = 0LL;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v11 = (HANDLE *)Heap;
    BaseAddress = Heap;
    v9 = 0LL;
    if ( Heap )
    {
      v12 = (PTP_WAIT *)(Heap + 48);
      *((_QWORD *)Heap + 6) = 0LL;
      v8 = RtlpTpInitializeData((PHANDLE)Heap);
      v16 = v8;
      v9 = 0LL;
      if ( v8 >= 0 )
      {
        v15 = 1;
        v11[2] = 0LL;
        *((_DWORD *)v11 + 6) = 0;
        v11[4] = Function;
        v11[5] = Context;
        v11[7] = Handle;
        if ( Milliseconds == -1 )
        {
          v11[8] = 0LL;
          v11[9] = 0LL;
        }
        else
        {
          v11[8] = (HANDLE)Milliseconds;
          v11[8] = (HANDLE)(-10000LL * Milliseconds);
          v11[9] = v11 + 8;
        }
        v11[10] = 0LL;
        *((_DWORD *)v11 + 22) = 0;
        CallbackEnviron.Version = 3;
        memset(&CallbackEnviron.Pool, 0, 52);
        CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
        CallbackEnviron.Size = 72;
        v13 = 0;
        if ( (Flags & 0xC4) != 0 )
        {
          v13 = 2;
          CallbackEnviron.u.Flags = 2;
        }
        if ( (Flags & 0x10) != 0 )
          CallbackEnviron.u.Flags = v13 | 1;
        CallbackEnviron.FinalizationCallback = (void (__fastcall *)(struct _TP_CALLBACK_INSTANCE *, void *))RtlpTpWaitFinalizationCallback;
        v8 = TpAllocWait(v12, RtlpTpWaitCallback, v11, &CallbackEnviron);
        v16 = v8;
        v9 = 0LL;
        if ( v8 >= 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v11 + 2);
          *WaitHandle = v11;
          TpSetWaitEx(*v12, Handle, (PLARGE_INTEGER)v11[9], 0LL);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v11 + 2);
          v9 = 0LL;
          v11 = 0LL;
          BaseAddress = 0LL;
          v8 = 0;
          v16 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741801;
      v16 = -1073741801;
    }
  }
  if ( v11 )
  {
    if ( v15 )
    {
      if ( *v11 )
        NtClose(*v11);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v8 = v16;
  }
  RtlpTpResumeImpersonation(TokenHandle, v9);
  return v8;
}
