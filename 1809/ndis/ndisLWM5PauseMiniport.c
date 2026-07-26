/*
 * XREFs of ndisLWM5PauseMiniport @ 0x1C0061C8C
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C010B084 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLWM5PauseMiniport(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  unsigned int v3; // edi
  KIRQL v4; // dl
  bool v5; // zf
  KSPIN_LOCK *v6; // rcx

  v1 = (KSPIN_LOCK *)(a1 + 2008);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2008));
  *(_QWORD *)(a1 + 2024) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 2032) = 731555;
  *(_DWORD *)(a1 + 2016) = 5;
  if ( *(_BYTE *)(a1 + 2001) )
  {
    if ( *(_DWORD *)(a1 + 2020) )
      v3 = 259;
    else
      *(_DWORD *)(a1 + 2016) = 6;
    *(_QWORD *)(a1 + 2024) = 0LL;
    v6 = v1;
    *(_DWORD *)(a1 + 2032) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 2020) = 0;
    *(_QWORD *)(a1 + 2024) = 0LL;
    *(_DWORD *)(a1 + 2032) = 0;
    *(_BYTE *)(a1 + 2001) = 1;
    *(_DWORD *)(a1 + 2016) = 6;
    KeReleaseSpinLock(v1, v4);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v5 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_QWORD *)(a1 + 2192) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a1 + 640) = EthIndicateReceive;
    *(_DWORD *)(a1 + 1864) = 731574;
    *(_QWORD *)(a1 + 2200) = a1;
    if ( !v5 )
      *(_QWORD *)(a1 + 432) = ndisMIndicatePacketsToNetBufferLists;
    *(_QWORD *)(a1 + 1904) = ndisMIndicatePacketsToNetBufferLists;
    v6 = (KSPIN_LOCK *)(a1 + 96);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
  }
  KeReleaseSpinLock(v6, v4);
  return v3;
}
