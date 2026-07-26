/*
 * XREFs of ndisMUpdateHiddenFlag @ 0x1C003F3C0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ndisIfUpdateInterfaceHiddenFlag @ 0x1C0109958 (ndisIfUpdateInterfaceHiddenFlag.c)
 */

void __fastcall ndisMUpdateHiddenFlag(__int64 a1, char a2)
{
  KIRQL v4; // al
  int v5; // edx
  int v6; // r8d
  unsigned int v7; // edx
  KIRQL v8; // al
  struct _LIST_ENTRY *Flink; // rbx
  KIRQL v10; // r14
  struct _LIST_ENTRY *v11; // rsi
  __int64 v12; // rdx
  KIRQL v13; // al

  if ( a2 != ((*(_DWORD *)(a1 + 124) & 0x1000) != 0) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v5 = *(_DWORD *)(a1 + 124);
    v6 = v5 | 0x1000;
    v7 = v5 & 0xFFFFEFFF;
    if ( !a2 )
      v6 = v7;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 124) = v6;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Flink = ndisIfList.Flink;
    v10 = v8;
    while ( Flink != &ndisIfList )
    {
      v11 = Flink - 77;
      if ( BYTE2(Flink[10].Flink) && v11[88].Flink[2].Flink == (_LIST_ENTRY *)a1 )
      {
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v11[89].Blink, 0xEu);
        ++LODWORD(v11[81].Blink);
        KeReleaseSpinLock(&ndisIfListLock, v10);
        LOBYTE(v12) = a2;
        ndisIfUpdateInterfaceHiddenFlag(&Flink[-77], v12);
        v13 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        Flink = Flink->Flink;
        v10 = v13;
        IFBLOCK_DECREMENT_REF((char *)v11, 0xEu);
      }
      else
      {
        Flink = Flink->Flink;
      }
    }
    KeReleaseSpinLock(&ndisIfListLock, v10);
    if ( (*(_DWORD *)(a1 + 120) & 0x100) == 0 )
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 3832));
  }
}
