/*
 * XREFs of ndisLegacyRequest @ 0x1C006ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C0023DD4 (ndisReferenceOpenByHandle.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisCompleteOidRequestToRequest @ 0x1C006A470 (ndisCompleteOidRequestToRequest.c)
 */

__int64 __fastcall ndisLegacyRequest(__int64 a1, __int64 a2)
{
  unsigned __int8 v5; // bp
  unsigned int v6; // edi
  PVOID PoolWithTag; // rax
  __int64 v8; // rbx

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) >= 6u )
    return 3221291012LL;
  v5 = ndisReferenceOpenByHandle(a1, 6u);
  if ( v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x6572444Eu);
    v8 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xF8uLL);
      *(_DWORD *)(v8 + 4) = *(_DWORD *)(a2 + 32);
      *(_DWORD *)v8 = 16253334;
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 3688LL) & 0x400) == 0 )
        *(_BYTE *)(v8 + 232) = 1;
      if ( *(_DWORD *)(a2 + 32) == 12 )
      {
        v6 = -1073741811;
      }
      else
      {
        *(_DWORD *)(v8 + 32) = *(_DWORD *)(a2 + 40);
        *(_QWORD *)(v8 + 40) = *(_QWORD *)(a2 + 48);
        *(_DWORD *)(v8 + 48) = *(_DWORD *)(a2 + 56);
        *(_DWORD *)(v8 + 52) = *(_DWORD *)(a2 + 60);
        *(_DWORD *)(v8 + 56) = *(_DWORD *)(a2 + 64);
        *(_DWORD *)(v8 + 88) |= 0x20u;
        *(_QWORD *)(v8 + 96) = a2;
        *(_QWORD *)(v8 + 104) = a1;
        v6 = ndisQueueOidRequest(v8, *(_QWORD *)(a1 + 16), 0LL, 0LL);
        if ( v6 == 259 )
          return v6;
      }
      ndisCompleteOidRequestToRequest(a1, v8, v6);
      v6 = 259;
    }
    else
    {
      v6 = -1073741670;
    }
    if ( v5 == 1 )
      ndisMDereferenceOpenUnlocked(a1, 6);
    return v6;
  }
  return (unsigned int)-1073676286;
}
