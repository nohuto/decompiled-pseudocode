/*
 * XREFs of ndisIfUpdateL2MtuSize @ 0x1C0068198
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisIfUpdateL2MtuSizeAndNotify @ 0x1C011509C (ndisIfUpdateL2MtuSizeAndNotify.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIfUpdateL2MtuSize(__int64 a1, int a2)
{
  KIRQL v4; // al
  char v5; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( *(_DWORD *)(a1 + 1120) == a2 )
  {
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1120) = a2;
    v5 = 1;
  }
  KeReleaseSpinLock(&ndisIfListLock, v4);
  return v5;
}
