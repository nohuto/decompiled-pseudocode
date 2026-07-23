/*
 * XREFs of TpAllocWait @ 0x18002BF10
 * Callers:
 *     RtlRegisterWait @ 0x18002BA40 (RtlRegisterWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x180080E74 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081C00 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppInitializeTimer @ 0x18002D9D4 (TppInitializeTimer.c)
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x1800A1B70 (NtCreateWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocWait(
        PTP_WAIT *WaitReturn,
        PTP_WAIT_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // esi
  int v5; // r12d
  PTP_WAIT *v7; // r15
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
  v7 = WaitReturn;
  if ( !WaitReturn
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || (WaitReturn = (PTP_WAIT *)NtCurrentPeb()->Ldr, *((_BYTE *)WaitReturn + 72)) )
  {
    TppRaiseInvalidParameter(WaitReturn, Callback, Context, CallbackEnviron);
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
      *v7 = (PTP_WAIT)Heap;
    }
    return WaitCompletionPacket;
  }
}
