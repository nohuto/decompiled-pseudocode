/*
 * XREFs of ndisLWM5PauseMiniport @ 0x1C00997E4
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01300A0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLWM5PauseMiniport(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  unsigned int v3; // edi
  KIRQL v4; // al
  KIRQL v5; // al
  bool v6; // zf
  KIRQL v7; // dl
  KSPIN_LOCK *v8; // rcx

  v1 = (KSPIN_LOCK *)(a1 + 2000);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2000));
  *(_DWORD *)(a1 + 2008) = 5;
  if ( *(_BYTE *)(a1 + 1993) )
  {
    if ( *(_DWORD *)(a1 + 2012) )
      v3 = 259;
    else
      *(_DWORD *)(a1 + 2008) = 6;
    *(_QWORD *)(a1 + 2016) = 0LL;
    v7 = v4;
    v8 = v1;
  }
  else
  {
    *(_DWORD *)(a1 + 2012) = 0;
    *(_QWORD *)(a1 + 2016) = 0LL;
    *(_BYTE *)(a1 + 1993) = 1;
    *(_DWORD *)(a1 + 2008) = 6;
    KeReleaseSpinLock(v1, v4);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v6 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
    v7 = v5;
    *(_QWORD *)(a1 + 2184) = a1;
    *(_QWORD *)(a1 + 2176) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a1 + 640) = &EthIndicateReceive;
    if ( !v6 )
      *(_QWORD *)(a1 + 432) = ndisMIndicatePacketsToNetBufferLists;
    *(_QWORD *)(a1 + 1896) = ndisMIndicatePacketsToNetBufferLists;
    v8 = (KSPIN_LOCK *)(a1 + 96);
    *(_QWORD *)(a1 + 520) = 0LL;
  }
  KeReleaseSpinLock(v8, v7);
  return v3;
}
