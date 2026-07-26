/*
 * XREFs of ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C006C844
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C006D3EC (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006E750 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002560 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0002960 (ndisSortNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0023280 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     ndisIndicateToPmodeOpens @ 0x1C00263D8 (ndisIndicateToPmodeOpens.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0026498 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 */

__int64 __fastcall ndisDoPeriodicReceivesIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int v3; // r14d
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  struct _NET_BUFFER_LIST *v5; // rbp
  unsigned int v6; // r15d
  unsigned int i; // r12d
  struct _NET_BUFFER_LIST *v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  KSPIN_LOCK *p_Lock; // rcx
  unsigned int Number; // r14d
  char *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  char *PoolWithTag; // rbx
  _X_FILTER *EthDB; // r13
  struct _NET_BUFFER_LIST *v17; // rcx
  __int64 v18; // rdx
  __int64 SingleActiveOpen; // r14
  __int64 NoFTypeOpenList; // rbp
  unsigned int v21; // r13d
  int v22; // edi
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rcx
  struct _NET_BUFFER_LIST *v26; // rdx
  int v27; // r15d
  unsigned int v28; // r13d
  unsigned int v29; // r14d
  unsigned int k; // ebp
  __int64 v31; // rax
  _X_FILTER *v33; // [rsp+30h] [rbp-58h]
  unsigned int j; // [rsp+98h] [rbp+10h]
  char v36; // [rsp+98h] [rbp+10h]
  unsigned int v37; // [rsp+A0h] [rbp+18h]
  unsigned int v38; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v37 = 0;
  v4 = a1;
  do
  {
    v5 = Alignment;
    if ( !Alignment )
      break;
    v6 = (unsigned int)Alignment->ProtocolReserved[0];
    for ( i = 1; ; ++i )
    {
      v8 = Alignment;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment || v6 != LODWORD(Alignment->ProtocolReserved[0]) )
        break;
    }
    v4->PeriodicReceiveQueue.NumNblsDequeued -= i;
    v8->Link.Alignment = 0LL;
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      CurrentThread = KeGetCurrentThread();
      for ( v4->LockDbg = 2494419; ; v4->LockDbg = 2494420 )
      {
        v4->MiniportThread = CurrentThread;
        p_Lock = &v4->Lock;
        if ( !v4->LockAcquired )
          break;
        v4->MiniportThread = 0LL;
        v4->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        for ( j = 0; j < 0x32; ++j )
          ;
        KeAcquireSpinLockAtDpcLevel(&v4->Lock);
        CurrentThread = KeGetCurrentThread();
      }
      v4->LockAcquired = 1;
      v4->LockDbgX = 2494420;
      v4->LockThread = KeGetCurrentThread();
      v4->MiniportThread = 0LL;
      v4->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
    }
    if ( !v4->InitMode )
    {
      v38 = 0;
      v36 = 0;
      if ( ndisPerProcRcvTrackers
        && (Number = KeGetPcr()->Prcb.Number,
            v12 = (char *)ndisPerProcRcvTrackers,
            v13 = 2096LL * Number,
            v38 = Number,
            v14 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v13),
            (unsigned int)v14 < 3) )
      {
        v36 = 1;
        PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v14 + v13 + 8;
        *((_DWORD *)ndisPerProcRcvTrackers + 524 * Number) = v14 + 1;
LABEL_21:
        EthDB = v4->EthDB;
        v17 = v5;
        v33 = EthDB;
        PoolWithTag[692] = 0;
        do
        {
          v18 = (__int64)v17;
          v17->Flags = v17->Flags & 0xFFFFFFF0 | 4;
          v17 = (struct _NET_BUFFER_LIST *)v17->Link.Alignment;
        }
        while ( v17 );
        SingleActiveOpen = (__int64)EthDB->SingleActiveOpen;
        if ( SingleActiveOpen && *(_BYTE *)(*(_QWORD *)(SingleActiveOpen + 24) + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(SingleActiveOpen, v5, (unsigned __int8 *)v6, i, 1);
          *((_QWORD *)PoolWithTag + 8) = 0LL;
          *((_DWORD *)PoolWithTag + 20) = 0;
        }
        else
        {
          *((_QWORD *)PoolWithTag + 3) = v5;
          *((_QWORD *)PoolWithTag + 1) = EthDB;
          *((_DWORD *)PoolWithTag + 4) = 1;
          *(_QWORD *)PoolWithTag = v4;
          *((_QWORD *)PoolWithTag + 4) = v18;
          *((_DWORD *)PoolWithTag + 10) = v6;
          *((_DWORD *)PoolWithTag + 11) = i;
          ndisSortNetBufferLists((__int64 *)PoolWithTag, v18, v12);
          if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
          {
            if ( !EthDB->OpenList || v6 )
              PoolWithTag[692] = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)PoolWithTag);
            if ( !SingleActiveOpen )
            {
              NoFTypeOpenList = (__int64)EthDB->NoFTypeOpenList;
              if ( NoFTypeOpenList )
              {
                v21 = *((_DWORD *)PoolWithTag + 172);
                v22 = *((_DWORD *)PoolWithTag + 4) | 2;
                do
                {
                  v23 = *(_QWORD *)(NoFTypeOpenList + 424);
                  v24 = 0LL;
                  do
                  {
                    v25 = (unsigned int)v24;
                    v26 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v24 + 64];
                    v24 = (unsigned int)(v24 + 1);
                    if ( v26 )
                      ndisMIndicateNetBufferListsToOpen(
                        NoFTypeOpenList,
                        v26,
                        (unsigned __int8 *)*((unsigned int *)PoolWithTag + 10),
                        *(_DWORD *)&PoolWithTag[40 * v25 + 80],
                        v22);
                  }
                  while ( (unsigned int)v24 <= v21 );
                  NoFTypeOpenList = v23;
                }
                while ( v23 );
                v4 = a1;
                EthDB = v33;
              }
              if ( EthDB->FTypeOpenList )
              {
                v27 = *((_DWORD *)PoolWithTag + 4);
                v28 = *((_DWORD *)PoolWithTag + 10);
                v29 = *((_DWORD *)PoolWithTag + 172);
                if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2260LL) )
                  ndisIndicateToPmodeOpens((__int64)PoolWithTag);
                for ( k = 1; k <= v29; ++k )
                {
                  v31 = k;
                  ndisMIndicateNetBufferListsToOpen(
                    *(_QWORD *)&PoolWithTag[40 * v31 + 56],
                    *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v31 + 64],
                    (unsigned __int8 *)v28,
                    *(_DWORD *)&PoolWithTag[40 * v31 + 80],
                    v27);
                }
              }
            }
          }
        }
        if ( PoolWithTag[692] )
        {
          v5 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
          goto LABEL_51;
        }
      }
      else
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
        if ( PoolWithTag )
          goto LABEL_21;
        if ( (unsigned __int8)byte_1C00A0253 >= 2u )
          WPP_SF_(0xAu, &WPP_708561b8cd4433a8527d88173b1ed8eb_Traceguids);
LABEL_51:
        if ( v5 )
        {
          if ( byte_1C009FE30 && (*((_DWORD *)&v4->PktMonComp + 13) & 2) != 0 )
            PktMonClientNblDropNdis((__int64)&v4->PktMonComp, (__int64)v5, (__int64)v12, 1LL, 0xC0010012);
          ndisReturnNetBufferListsInternal((__int64)v4, v5, 1LL, 0LL);
        }
      }
      if ( v36 )
      {
        --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v38);
      }
      else if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      v3 = v37;
      goto LABEL_61;
    }
    ndisMDispatchReceiveNetBufferListsWithLock((__int64)v4, v5, v6, i, 1u);
LABEL_61:
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      *(_QWORD *)&v4->LockDbg = 0LL;
      v4->LockAcquired = 0;
      v4->LockThread = 0LL;
      v4->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    v4->PeriodicReceiveQueue.TrackingIndicated += i;
    v3 += i;
    v37 = v3;
  }
  while ( Alignment );
  return v3;
}
