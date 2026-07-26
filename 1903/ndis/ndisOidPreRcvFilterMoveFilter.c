/*
 * XREFs of ndisOidPreRcvFilterMoveFilter @ 0x1C0060580
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B5C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C005EE28 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 *     ndisIovFindVPortByVPortId @ 0x1C00B19D0 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisOidPreRcvFilterMoveFilter(__int64 a1)
{
  __int64 v1; // r8
  char v2; // r14
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // rcx
  _NDIS_PF_BLOCK *v7; // r9
  __int64 v8; // r8
  _NDIS_PF_BLOCK *v9; // r9
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  unsigned int v11; // r12d
  _BYTE *OidSourceHandle; // rax
  _BYTE *v13; // r15
  struct _KTHREAD *CurrentThread; // r8
  unsigned int *v15; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveFilterByFilterId; // rax
  struct _NDIS_MINIPORT_BLOCK *v17; // r13
  KIRQL v18; // r10
  _NDIS_MINIPORT_BLOCK *PrimaryMiniport; // rcx
  __int64 v20; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 1;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 0x18u )
    {
      if ( v3 )
      {
        if ( ndisIovNicSwitchWithoutIovSupported((__int64)v3) && v3->PFBlock == v7 )
          goto LABEL_13;
        if ( !ndisIovNicSwitchWithoutIovSupported(v6) )
        {
          SriovCurrentCapabilities = v3->SriovCurrentCapabilities;
          if ( !SriovCurrentCapabilities || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 || v3->PFBlock == v9 )
            goto LABEL_13;
        }
        v11 = *(_DWORD *)(v5 + 4);
        if ( !v11 )
          goto LABEL_13;
        OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v8);
        v13 = OidSourceHandle;
        if ( !OidSourceHandle || *OidSourceHandle != 18 )
        {
          *(_DWORD *)(a1 + 40) = -1073741637;
          return v2;
        }
        KeAcquireSpinLockRaiseToDpc(&v3->Lock);
        CurrentThread = KeGetCurrentThread();
        v3->MiniportThread = CurrentThread;
        ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v3, v11, (__int64)CurrentThread, v15);
        v3->MiniportThread = 0LL;
        v17 = ReceiveFilterByFilterId;
        KeReleaseSpinLock(&v3->Lock, v18);
        if ( !v17 )
          goto LABEL_13;
        if ( (_BYTE *)v17->ShortRef.SpinLock == v13
          && (PrimaryMiniport = v17->PrimaryMiniport) != 0LL
          && *(_DWORD *)(v5 + 8) == LODWORD(v17->FirstPendingPacket)
          && *(_QWORD *)(v5 + 12) == PrimaryMiniport->PnPFlags
          && (v20 = *(unsigned int *)(v5 + 20), *(_DWORD *)(v5 + 12) != (_DWORD)v20)
          && ndisIovFindVPortByVPortId(v3, v20) )
        {
          return 0;
        }
        else
        {
LABEL_13:
          *(_DWORD *)(a1 + 40) = -1073741811;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 24;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v2;
}
