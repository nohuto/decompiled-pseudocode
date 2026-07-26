/*
 * XREFs of ndisOidPreRcvFilterClearFilter @ 0x1C005FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C005EE28 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 */

char __fastcall ndisOidPreRcvFilterClearFilter(__int64 a1)
{
  char v2; // si
  __int64 v3; // rcx
  struct _NDIS_MINIPORT_BLOCK *v4; // r14
  __int64 v5; // r13
  unsigned int v6; // r15d
  _BYTE *OidSourceHandle; // rax
  _BYTE *v8; // rbp
  __int64 v9; // r8
  unsigned int *v10; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveFilterByFilterId; // rax
  struct _NDIS_MINIPORT_BLOCK *v12; // r15
  KIRQL v13; // r10

  v2 = 1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *(_QWORD *)(v3 + 40);
  if ( *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_14;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) >= 0x10u )
  {
    if ( !v4 )
      return 0;
    v6 = *(_DWORD *)(v5 + 12);
    if ( !v6 )
    {
LABEL_7:
      *(_DWORD *)(a1 + 40) = -1073741811;
      return v2;
    }
    OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v3);
    v8 = OidSourceHandle;
    if ( OidSourceHandle && *OidSourceHandle == 18 )
    {
      KeAcquireSpinLockRaiseToDpc(&v4->Lock);
      v4->MiniportThread = KeGetCurrentThread();
      ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v4, v6, v9, v10);
      v4->MiniportThread = 0LL;
      v12 = ReceiveFilterByFilterId;
      KeReleaseSpinLock(&v4->Lock, v13);
      if ( v12 && (_BYTE *)v12->ShortRef.SpinLock == v8 && *(_DWORD *)(v5 + 8) == LODWORD(v12->FirstPendingPacket) )
        return 0;
      goto LABEL_7;
    }
LABEL_14:
    *(_DWORD *)(a1 + 40) = -1073741637;
    return v2;
  }
  *(_DWORD *)(v3 + 56) = 16;
  *(_DWORD *)(a1 + 40) = -1073676268;
  return v2;
}
