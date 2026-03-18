/*
 * XREFs of MiAllocatePfnRepurposeLogDispatch @ 0x14013B290
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC990 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void MiAllocatePfnRepurposeLogDispatch()
{
  _SLIST_ENTRY *v0; // rsi
  struct _SLIST_ENTRY *PoolWithTag; // rax
  __int64 v2; // r8
  struct _SLIST_ENTRY *v3; // rdi
  PSLIST_ENTRY v4; // rbx
  struct _SLIST_ENTRY *Next; // rax
  unsigned int Alignment_low; // edi
  int v7; // edi
  volatile signed __int64 *v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x70526D4Du);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Next = 0LL;
    PoolWithTag[2].Next = (struct _SLIST_ENTRY *)((char *)PoolWithTag + 72);
    *((_QWORD *)&PoolWithTag[2].Next + 1) = (char *)PoolWithTag + 4088;
    *((_DWORD *)&PoolWithTag->Next + 2) = 2;
    PoolWithTag[1].Next = v0;
  }
  v8[0] = 0LL;
  v8[1] = (volatile signed __int64 *)&SpinLock;
  KxAcquireQueuedSpinLock((__int64)v8, (volatile __int64 *)&SpinLock, v2);
  v4 = P;
  if ( !dword_14043A8E8 )
  {
LABEL_13:
    P = 0LL;
    goto LABEL_6;
  }
  if ( v3 )
  {
    P = v3;
    v3 = 0LL;
    goto LABEL_6;
  }
  if ( P )
  {
    if ( ((__int64)P[2].Next & 0xFFFLL) != 0 )
    {
      v4 = 0LL;
      goto LABEL_6;
    }
    goto LABEL_13;
  }
LABEL_6:
  KxReleaseQueuedSpinLock(v8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
  {
    Next = v4[2].Next;
    if ( Next == (struct _SLIST_ENTRY *)(&v4[4].Next + 1) )
      goto LABEL_27;
    if ( ((unsigned __int16)Next & 0xFFF) != 0 )
    {
      if ( v0 < v4[1].Next )
      {
        v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
        Next = v4[2].Next;
      }
      *((_QWORD *)&v4[1].Next + 1) = v0;
      *((_QWORD *)&v4[2].Next + 1) = (char *)Next - 8;
    }
    v4[2].Next = (PSLIST_ENTRY)((char *)v4 + 72);
    if ( !ExAcquireRundownProtection_0(&RunRef) )
      goto LABEL_27;
    Alignment_low = LOWORD(stru_1404D7540.Alignment);
    if ( LOWORD(stru_1404D7540.Alignment) < (unsigned int)dword_1404D7528 )
    {
      RtlpInterlockedPushEntrySList(&stru_1404D7540, v4);
      if ( !Event.Header.SignalState && Alignment_low >= 8 )
        KeSetEvent(&Event, 0, 0);
      v7 = 1;
    }
    else
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_14043BE50, 0x64u);
      v7 = 0;
    }
    ExReleaseRundownProtection_0(&RunRef);
    if ( !v7 )
LABEL_27:
      ExFreePoolWithTag(v4, 0);
  }
}
