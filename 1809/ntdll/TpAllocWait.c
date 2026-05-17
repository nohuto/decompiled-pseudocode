/*
 * XREFs of TpAllocWait @ 0x18002BF10
 * Callers:
 *     RtlRegisterWait @ 0x18002BA40 (RtlRegisterWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x180080E64 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081BF0 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppInitializeTimer @ 0x18002D9D4 (TppInitializeTimer.c)
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x1800A1B50 (NtCreateWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocWait(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // r12d
  _QWORD *p_Length; // r15
  unsigned __int64 Heap; // rbx
  HANDLE *v9; // r14
  int v10; // edx
  int WaitCompletionPacket; // edi
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  _BYTE *v14; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  p_Length = &Ldr->Length;
  if ( !Ldr
    || !a2
    || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8u, 472LL);
    if ( Heap )
    {
      v9 = (HANDLE *)(Heap + 368);
      *(_QWORD *)(Heap + 176) = retaddr;
      WaitCompletionPacket = NtCreateWaitCompletionPacket(Heap + 368, 1LL);
      if ( WaitCompletionPacket < 0
        || (LOBYTE(v10) = 1,
            WaitCompletionPacket = TppInitializeTimer(
                                     Heap,
                                     v10,
                                     v5,
                                     v4,
                                     (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                     (__int64)TppWaitpTaskVFuncs),
            WaitCompletionPacket < 0) )
      {
        if ( *v9 )
          NtClose(*v9);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, Heap);
      }
      else
      {
        v12 = *(_QWORD *)(Heap + 144);
        *(_QWORD *)(Heap + 448) = TppWaitCompletion;
        v13 = (_DWORD *)(Heap + 456);
        v14 = (_BYTE *)(Heap + 460);
        if ( v12 )
        {
          TppGetCurrentThreadNumaNode(v12, Heap + 456, Heap + 460);
        }
        else
        {
          *v13 = 0;
          *v14 = 0;
        }
        *(_QWORD *)(Heap + 424) = 0LL;
        *(_QWORD *)(Heap + 440) = Heap + 432;
        *(_QWORD *)(Heap + 432) = Heap + 432;
        *(_QWORD *)(Heap + 392) = TppDirectTaskVFuncs;
        *(_DWORD *)(Heap + 400) = *v13;
        *(_BYTE *)(Heap + 404) = *v14;
        *(_QWORD *)(Heap + 80) = a2;
        *p_Length = Heap;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}
