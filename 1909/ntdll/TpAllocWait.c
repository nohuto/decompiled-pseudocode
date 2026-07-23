/*
 * XREFs of TpAllocWait @ 0x180031130
 * Callers:
 *     RtlRegisterWait @ 0x180030960 (RtlRegisterWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007C554 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007D3A0 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x180031620 (TppGetCurrentThreadNumaNode.c)
 *     TppInitializeTimer @ 0x180031AA0 (TppInitializeTimer.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x18009E720 (NtCreateWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocWait(
        PTP_WAIT *WaitReturn,
        PTP_WAIT_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // esi
  int v5; // r12d
  char *Heap; // rbx
  HANDLE *v9; // r14
  int v10; // edx
  int WaitCompletionPacket; // edi
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  char *v14; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (int)CallbackEnviron;
  v5 = (int)Context;
  if ( !WaitReturn
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8, 0x1D8uLL);
    if ( !Heap )
      return -1073741801;
    v9 = (HANDLE *)(Heap + 368);
    *((_QWORD *)Heap + 22) = retaddr;
    WaitCompletionPacket = NtCreateWaitCompletionPacket((PHANDLE)Heap + 46, 1u, 0LL);
    if ( WaitCompletionPacket < 0
      || (LOBYTE(v10) = 1,
          WaitCompletionPacket = TppInitializeTimer(
                                   (_DWORD)Heap,
                                   v10,
                                   v5,
                                   v4,
                                   (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                   (__int64)&TppWaitpTaskVFuncs),
          WaitCompletionPacket < 0) )
    {
      if ( *v9 )
        NtClose(*v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, Heap);
    }
    else
    {
      v12 = *((_QWORD *)Heap + 18);
      *((_QWORD *)Heap + 56) = TppWaitCompletion;
      v13 = Heap + 456;
      v14 = Heap + 460;
      if ( v12 )
      {
        TppGetCurrentThreadNumaNode(v12, Heap + 456, Heap + 460);
      }
      else
      {
        *v13 = 0;
        *v14 = 0;
      }
      *((_QWORD *)Heap + 53) = 0LL;
      *((_QWORD *)Heap + 55) = Heap + 432;
      *((_QWORD *)Heap + 54) = Heap + 432;
      *((_QWORD *)Heap + 49) = TppDirectTaskVFuncs;
      *((_DWORD *)Heap + 100) = *v13;
      Heap[404] = *v14;
      *((_QWORD *)Heap + 10) = Callback;
      *WaitReturn = (PTP_WAIT)Heap;
    }
    return WaitCompletionPacket;
  }
}
