/*
 * XREFs of PsLookupThreadByThreadId @ 0x1405D0860
 * Callers:
 *     PspThreadFromTicket @ 0x1405D0800 (PspThreadFromTicket.c)
 *     PsOpenThread @ 0x140672920 (PsOpenThread.c)
 *     PsLookupProcessThreadByCid @ 0x140672E10 (PsLookupProcessThreadByCid.c)
 *     NtAlertThreadByThreadId @ 0x1406C0150 (NtAlertThreadByThreadId.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1407299C4 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x1408C8CF0 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CD50C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     PsIsThreadInSilo @ 0x1400064B4 (PsIsThreadInSilo.c)
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExLockHandleTableEntry @ 0x14003FD50 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14007ED40 (ExSlowReplenishHandleTableEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140109B58 (ExfAcquireReleasePushLockExclusive.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x1405FAA80 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406BCCE4 (ExpBlockOnLockedHandleEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v4; // r14
  __int64 v5; // rbp
  signed __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int128 v8; // rt0
  unsigned __int8 v9; // tt
  unsigned __int64 v10; // rax
  struct _KTHREAD *v11; // rdi
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v13; // rbx
  bool v14; // zf
  int v16; // ebx
  __int64 v17; // r8
  signed __int64 OtherTransferCount; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int128 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+30h] [rbp-38h]
  signed __int64 v24; // [rsp+38h] [rbp-30h]
  unsigned __int64 v25; // [rsp+40h] [rbp-28h]
  __int64 v26; // [rsp+48h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ((unsigned __int16)ThreadId & 0x3FC) == 0 )
    goto LABEL_28;
  v4 = (unsigned __int64 *)ExpLookupHandleTableEntry(PspCidTable, ThreadId);
  if ( !v4 )
    goto LABEL_28;
  v5 = PspCidTable;
  v23 = 0LL;
  v24 = 0LL;
  _m_prefetchw(v4);
  *(_QWORD *)&v22 = *v4;
  v6 = v4[1];
  *((_QWORD *)&v22 + 1) = v6;
  v7 = v22;
  if ( (v22 & 0x1FFFE) == 0 )
  {
LABEL_17:
    v16 = 0;
    if ( !ExLockHandleTableEntry(PspCidTable, (signed __int64 *)v4) )
      goto LABEL_28;
    v11 = (struct _KTHREAD *)(((__int64)*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (v11->Header.Type & 0x7F) == 6 )
    {
      if ( (*(_DWORD *)((((__int64)*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x6E0) & 3) == 2 )
        v16 = ExSlowReplenishHandleTableEntry(v4);
      v17 = (unsigned int)(v16 + 1);
      _m_prefetchw(&v11[-1].OtherTransferCount);
      OtherTransferCount = v11[-1].OtherTransferCount;
      if ( OtherTransferCount )
      {
        while ( 1 )
        {
          v19 = OtherTransferCount;
          OtherTransferCount = _InterlockedCompareExchange64(
                                 &v11[-1].OtherTransferCount,
                                 v17 + OtherTransferCount,
                                 OtherTransferCount);
          if ( v19 == OtherTransferCount )
            break;
          if ( !OtherTransferCount )
            goto LABEL_31;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo((__int64)&v11[-1].OtherTransferCount, 1, v17, 0x746C6644u);
        goto LABEL_25;
      }
LABEL_31:
      v26 = 0LL;
      v25 = *v4 & 0xFFFFFFFFFFFE0001uLL;
      *v4 = v25;
    }
    v11 = 0LL;
LABEL_25:
    v20 = PspCidTable;
    _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 1uLL);
    ThreadId = (HANDLE)(v20 + 48);
    _InterlockedOr(v21, 0);
    if ( *(_QWORD *)ThreadId )
      ExfUnblockPushLock((volatile __int64 *)ThreadId, 0LL);
LABEL_9:
    if ( v11 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      v13 = CurrentServerSilo;
      if ( (*(_DWORD *)(&v11[1].SwapListEntry + 1) & 2) != 0 )
      {
        if ( !PsIsThreadInSilo((__int64)v11, CurrentServerSilo) )
          goto LABEL_40;
      }
      else
      {
        _InterlockedOr(v21, 0);
        if ( ((__int64)v11[1].WaitBlockList & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&v11[1].WaitBlockList);
        if ( (*(_DWORD *)(&v11[1].SwapListEntry + 1) & 2) == 0 || !PsIsThreadInSilo((__int64)v11, v13) )
          goto LABEL_40;
      }
    }
    goto LABEL_12;
  }
  while ( 1 )
  {
    if ( (v7 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v5, v4, v7);
      _m_prefetchw(v4);
      v6 = v4[1];
      *(_QWORD *)&v22 = *v4;
      v7 = v22;
      *((_QWORD *)&v22 + 1) = v6;
      goto LABEL_29;
    }
    v24 = v6;
    v23 = v7 - 2;
    *(_QWORD *)&v8 = v7;
    *((_QWORD *)&v8 + 1) = v6;
    v9 = _InterlockedCompareExchange128((volatile signed __int64 *)v4, v6, v7 - 2, (signed __int64 *)&v8);
    v6 = v8 >> 64;
    v10 = v8;
    v7 = v8;
    v22 = v8;
    if ( v9 )
      break;
LABEL_29:
    if ( (v7 & 0x1FFFE) == 0 )
      goto LABEL_17;
  }
  ThreadId = (HANDLE)(v10 >> 1);
  if ( (unsigned __int16)(v10 >> 1) == 16 )
  {
    v7 = ((unsigned int)v7 ^ (2 * (_DWORD)ThreadId - 2)) & 0x1FFFE ^ (unsigned __int64)v7;
    *(_QWORD *)&v22 = v7;
  }
  v11 = (struct _KTHREAD *)((v7 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v11->Header.Type & 0x7F) == 6 )
    goto LABEL_9;
LABEL_40:
  ObfDereferenceObject(v11);
LABEL_28:
  v11 = 0LL;
LABEL_12:
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)ThreadId);
  if ( !v11 )
    return -1073741813;
  *Thread = v11;
  return 0;
}
