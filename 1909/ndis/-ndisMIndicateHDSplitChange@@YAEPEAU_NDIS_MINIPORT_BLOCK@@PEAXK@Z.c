/*
 * XREFs of ?ndisMIndicateHDSplitChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C00972D4
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisMIndicateHDSplitChange(struct _NDIS_MINIPORT_BLOCK *a1, _QWORD *a2, unsigned int a3)
{
  char v6; // si
  KIRQL v7; // cl
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rdx

  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
  a1->MiniportThread = KeGetCurrentThread();
  if ( HDSplitCurrentConfig && a3 >= 0x1C && *(_BYTE *)a2 == 0x80 && *((_WORD *)a2 + 1) >= 0x1Cu && *((_BYTE *)a2 + 1) )
  {
    v6 = 1;
    *(_OWORD *)&HDSplitCurrentConfig->Header.Type = *(_OWORD *)a2;
    *(_QWORD *)&HDSplitCurrentConfig->HDSplitCombineFlags = a2[2];
    HDSplitCurrentConfig->MaxHeaderSize = *((_DWORD *)a2 + 6);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v7);
  return v6;
}
