/*
 * XREFs of ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0023280
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C006C844 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002560 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0002960 (ndisSortNetBufferLists.c)
 *     NdisAcquireRWLockRead @ 0x1C0005E40 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     ndisIndicateToPmodeOpens @ 0x1C00263D8 (ndisIndicateToPmodeOpens.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0026498 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  char v5; // r13
  __int64 v6; // rbp
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  KSPIN_LOCK *v12; // rsi
  struct _NET_BUFFER_LIST *v13; // r14
  unsigned int Number; // esi
  char *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  char *PoolWithTag; // rbx
  _QWORD *v19; // rbp
  struct _NET_BUFFER_LIST *Alignment; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned int v23; // r12d
  int v24; // r15d
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rcx
  struct _NET_BUFFER_LIST *v28; // rdx
  __int64 v29; // rsi
  unsigned int v30; // r15d
  int v31; // r14d
  unsigned int v32; // esi
  unsigned int i; // edi
  __int64 v34; // rax
  int v35; // r14d
  __int64 v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // rcx
  struct _NET_BUFFER_LIST *v39; // rdx
  signed __int32 v40[8]; // [rsp+0h] [rbp-78h] BYREF
  char v41; // [rsp+30h] [rbp-48h]
  struct _LOCK_STATE_EX LockState; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v43; // [rsp+38h] [rbp-40h]
  unsigned int v44; // [rsp+3Ch] [rbp-3Ch]
  __int64 v45; // [rsp+40h] [rbp-38h]

  v5 = a5;
  *(_WORD *)&LockState.OldIrql = 515;
  v6 = a1;
  LockState.Flags = 0;
  v43 = a5 & 1;
  v45 = *(_QWORD *)(a1 + 400);
  v10 = *(_QWORD *)(v45 + 288);
  if ( (a5 & 1) != 0 )
  {
    v11 = (_QWORD *)(*(_QWORD *)(v10 + 32) + (KeGetPcr()->Prcb.Number << 12));
    LockState.OldIrql = 2;
    ++*v11;
    _InterlockedOr(v40, 0);
    v12 = (KSPIN_LOCK *)(v10 + 16);
    if ( *(_QWORD *)(v10 + 16) && *v11 <= 1uLL && *(struct _KTHREAD **)(v10 + 24) != KeGetCurrentThread() )
    {
      *v11 = 0LL;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 16));
      *v11 = 1LL;
      KeReleaseSpinLockFromDpcLevel(v12);
    }
    LockState.LockState = 3;
  }
  else
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)v10, &LockState, 0);
  }
  v13 = 0LL;
  v44 = 0;
  v41 = 0;
  if ( (v43 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v15 = (char *)ndisPerProcRcvTrackers,
        v16 = 2096LL * Number,
        v44 = Number,
        v17 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v16),
        (unsigned int)v17 < 3) )
  {
    v41 = 1;
    PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v17 + v16 + 8;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v16) = v17 + 1;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C00A0253 >= 2u )
        WPP_SF_(10LL, &WPP_708561b8cd4433a8527d88173b1ed8eb_Traceguids);
      goto LABEL_31;
    }
  }
  v19 = *(_QWORD **)(v6 + 400);
  PoolWithTag[692] = 0;
  Alignment = a2;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v13 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v21 = v19[41];
  if ( v21 && *(_BYTE *)(*(_QWORD *)(v21 + 24) + 56LL) >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v21, a2, (unsigned __int8 *)a3, a4, a5);
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_DWORD *)PoolWithTag + 20) = 0;
  }
  else
  {
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 3) = a2;
    *((_QWORD *)PoolWithTag + 1) = v19;
    *((_DWORD *)PoolWithTag + 4) = a5;
    *((_QWORD *)PoolWithTag + 4) = v13;
    *((_DWORD *)PoolWithTag + 10) = a3;
    *((_DWORD *)PoolWithTag + 11) = a4;
    ndisSortNetBufferLists((__int64 *)PoolWithTag, a5, v15);
    if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
    {
      if ( !*v19 || a3 )
        PoolWithTag[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
      if ( !v21 )
      {
        v22 = v19[1];
        if ( v22 )
        {
          v23 = *((_DWORD *)PoolWithTag + 172);
          v24 = *((_DWORD *)PoolWithTag + 4) | 2;
          do
          {
            v25 = *(_QWORD *)(v22 + 424);
            v26 = 0LL;
            do
            {
              v27 = (unsigned int)v26;
              v28 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v26 + 64];
              v26 = (unsigned int)(v26 + 1);
              if ( v28 )
                ndisMIndicateNetBufferListsToOpen(
                  v22,
                  v28,
                  (unsigned __int8 *)*((unsigned int *)PoolWithTag + 10),
                  *(_DWORD *)&PoolWithTag[40 * v27 + 80],
                  v24);
            }
            while ( (unsigned int)v26 <= v23 );
            v22 = v25;
          }
          while ( v25 );
        }
        v29 = v19[2];
        if ( v29 )
        {
          v30 = *((_DWORD *)PoolWithTag + 172);
          v31 = *((_DWORD *)PoolWithTag + 4);
          if ( (a5 & 2) != 0 )
          {
            v35 = v31 | 2;
            do
            {
              v36 = *(_QWORD *)(v29 + 424);
              v37 = 0LL;
              do
              {
                v38 = (unsigned int)v37;
                v39 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v37 + 64];
                v37 = (unsigned int)(v37 + 1);
                if ( v39 )
                  ndisMIndicateNetBufferListsToOpen(
                    v29,
                    v39,
                    (unsigned __int8 *)*((unsigned int *)PoolWithTag + 10),
                    *(_DWORD *)&PoolWithTag[40 * v38 + 80],
                    v35);
              }
              while ( (unsigned int)v37 <= v30 );
              v29 = v36;
            }
            while ( v36 );
          }
          else
          {
            v32 = *((_DWORD *)PoolWithTag + 10);
            if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2260LL) )
              ndisIndicateToPmodeOpens(PoolWithTag);
            for ( i = 1; i <= v30; ++i )
            {
              v34 = i;
              ndisMIndicateNetBufferListsToOpen(
                *(_QWORD *)&PoolWithTag[40 * v34 + 56],
                *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v34 + 64],
                (unsigned __int8 *)v32,
                *(_DWORD *)&PoolWithTag[40 * v34 + 80],
                v31);
            }
          }
        }
      }
    }
  }
  if ( PoolWithTag[692] )
  {
    a2 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
    v6 = a1;
    v5 = a5;
LABEL_31:
    if ( a2 )
    {
      if ( byte_1C009FE30 && (*(_DWORD *)(v6 + 5916) & 2) != 0 )
        PktMonClientNblDropNdis(v6 + 5864, (_DWORD)a2, (_DWORD)v15, 1, -1073676270, -536866809);
      if ( (v5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(v6, a2, v43, 0LL);
    }
  }
  if ( v41 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v44);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v45 + 288), &LockState);
}
