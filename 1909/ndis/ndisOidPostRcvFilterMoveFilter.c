/*
 * XREFs of ndisOidPostRcvFilterMoveFilter @ 0x1C005F820
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C005EFFC (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 *     ndisIovFindVPortByVPortId @ 0x1C00B1BA0 (ndisIovFindVPortByVPortId.c)
 */

void __fastcall ndisOidPostRcvFilterMoveFilter(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // r8
  unsigned int *v8; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveFilterByFilterId; // rax
  struct _NDIS_MINIPORT_BLOCK *v10; // r15
  KIRQL v11; // r10
  _NDIS_MINIPORT_BLOCK *PrimaryMiniport; // rbx
  __int64 VPortByVPortId; // rax
  $0435C4B2B0E4B8E5F1E4BB6C25558CBF *v14; // rcx
  __int64 v15; // r8
  wchar_t *Buffer; // rdx
  __int64 v17; // rdx
  wchar_t *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( !v3 || v3 == 65539 && (v1->Flags & 4) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v4 + 48) >= 8u )
      {
        v5 = *(_QWORD *)(v4 + 40);
        v6 = *(_DWORD *)(v5 + 4);
        KeAcquireSpinLockRaiseToDpc(&v1->Lock);
        CurrentThread = KeGetCurrentThread();
        v1->MiniportThread = CurrentThread;
        ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v1, v6, (__int64)CurrentThread, v8);
        v1->MiniportThread = 0LL;
        v10 = ReceiveFilterByFilterId;
        KeReleaseSpinLock(&v1->Lock, v11);
        PrimaryMiniport = v10->PrimaryMiniport;
        VPortByVPortId = ndisIovFindVPortByVPortId(v1, *(unsigned int *)(v5 + 20));
        v14 = &v10->32;
        v15 = *(_QWORD *)&v10->Reserved4.Length;
        if ( *(struct _NDIS_MINIPORT_BLOCK **)(v15 + 8) != (struct _NDIS_MINIPORT_BLOCK *)&v10->32 )
          goto LABEL_17;
        Buffer = v10->Reserved4.Buffer;
        if ( *($0435C4B2B0E4B8E5F1E4BB6C25558CBF **)Buffer != v14 )
          goto LABEL_17;
        *(_QWORD *)Buffer = v15;
        *(_QWORD *)(v15 + 8) = Buffer;
        --LODWORD(PrimaryMiniport->WorkQueue[5].Next);
        v17 = *(_QWORD *)&PrimaryMiniport->LinkStateIndicationFlags;
        if ( PrimaryMiniport->PnPFlags )
          --*(_DWORD *)(v17 + 656);
        else
          --*(_DWORD *)(v17 + 652);
        v18 = (wchar_t *)(VPortByVPortId + 872);
        v19 = *(_QWORD *)(VPortByVPortId + 872);
        if ( *(_QWORD *)(v19 + 8) != VPortByVPortId + 872 )
LABEL_17:
          __fastfail(3u);
        *(_QWORD *)&v14->Reserved4.Length = v19;
        v10->Reserved4.Buffer = v18;
        *(_QWORD *)(v19 + 8) = v14;
        *(_QWORD *)v18 = v14;
        ++*(_DWORD *)(VPortByVPortId + 864);
        v20 = *(_QWORD *)(VPortByVPortId + 88);
        if ( *(_DWORD *)(VPortByVPortId + 124) )
          ++*(_DWORD *)(v20 + 656);
        else
          ++*(_DWORD *)(v20 + 652);
        v10->PrimaryMiniport = (_NDIS_MINIPORT_BLOCK *)VPortByVPortId;
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
  }
}
