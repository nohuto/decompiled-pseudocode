/*
 * XREFs of VidSchiProcessDpcDmaPacket @ 0x1C002EDA4
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x1C002DCC0 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0004B50 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0006A10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C0011880 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0011D1C (VidSchiProcessDpcSystemRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiProcessDpcDmaPacket(struct _VIDSCH_DMA_PACKET *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  KSPIN_LOCK *v6; // rdi
  __int64 v7; // rax
  int v8; // ecx
  void (__fastcall *v9)(KSPIN_LOCK); // rax
  void (__fastcall *v10)(KSPIN_LOCK); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a1 + 6);
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(unsigned int *)(v4 + 1408);
  v6 = *(KSPIN_LOCK **)(*(_QWORD *)(v2 + 104) + 32LL);
  if ( a1 != (struct _VIDSCH_DMA_PACKET *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(v4 + 8 * v5 + 1416),
                                            0LL,
                                            (signed __int64)a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v7 + 24) = v6;
    *(_QWORD *)(v7 + 32) = a1;
    WdLogEvent5_WdAssertion(v7);
  }
  _InterlockedExchange((volatile __int32 *)(v4 + 1408), ((_BYTE)v5 + 1) & 0xF);
  *(_DWORD *)(v4 + 496) = ((unsigned __int8)*(_DWORD *)(v4 + 496) + 1) & 0xF;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v6 + 206, &LockHandle);
  v8 = *((_DWORD *)a1 + 23);
  if ( (v8 & 0x400) != 0 )
  {
    v8 &= ~0x400u;
    *((_DWORD *)a1 + 23) = v8;
    if ( *(_DWORD *)(v4 + 11192) != -1 )
    {
      v9 = (void (__fastcall *)(KSPIN_LOCK))v6[308];
      if ( v9 )
      {
        v9(v6[312]);
        v8 = *((_DWORD *)a1 + 23);
      }
    }
  }
  if ( (v8 & 0x800) != 0 )
  {
    if ( *(_DWORD *)(v6[*(unsigned int *)(*((_QWORD *)a1 + 7) + 396LL) + 322] + 33280) != -1 )
    {
      v10 = (void (__fastcall *)(KSPIN_LOCK))v6[306];
      if ( v10 )
      {
        v10(v6[312]);
        v8 = *((_DWORD *)a1 + 23);
      }
    }
    *((_DWORD *)a1 + 23) = v8 & 0xFFFFF7FF;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( *((_DWORD *)a1 + 22) == 3 )
  {
    VidSchiProcessDpcSystemRequest((__int64)a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 10 || *((_DWORD *)a1 + 18) == 18 )
  {
    VidSchiProcessDpcCompletedPacket(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 11 )
  {
    VidSchiProcessDpcPreemptedPacket((__int64)a1);
  }
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(*(_QWORD *)(v4 + 24) + 1656LL), v4 + 11200, (_QWORD *)a1 + 2, 0LL);
}
