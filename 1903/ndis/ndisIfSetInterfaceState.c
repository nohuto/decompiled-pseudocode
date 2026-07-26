/*
 * XREFs of ndisIfSetInterfaceState @ 0x1C001AE84
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FBC4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038D04 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisUpdateOperationalStatus @ 0x1C003F7B8 (ndisUpdateOperationalStatus.c)
 *     ndisPnPPortActivation @ 0x1C0062064 (ndisPnPPortActivation.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C006E3C0 (ndisOidPreSetPortAuthentication.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5A10 (ndisWdfDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001B118 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001B148 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisIsDefaultPortStateOperational @ 0x1C001B250 (ndisIsDefaultPortStateOperational.c)
 */

char __fastcall ndisIfSetInterfaceState(__int64 a1, char a2, KIRQL a3)
{
  int v3; // ebx
  char v6; // bp
  __int64 v7; // rsi
  KIRQL v8; // bl
  int v9; // ecx
  int v10; // edx
  int v11; // r12d
  int v12; // r9d
  KIRQL v13; // cl
  KIRQL v14; // bl

  v3 = *(_DWORD *)(a1 + 4068);
  *(_DWORD *)(a1 + 4068) = 0;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 2248) == 1 )
    goto LABEL_4;
  if ( *(_DWORD *)(a1 + 480) != 1 )
  {
    *(_DWORD *)(a1 + 4068) = 2;
LABEL_4:
    *(_DWORD *)(a1 + 4064) = 2;
    goto LABEL_5;
  }
  if ( (unsigned __int8)ndisIsDefaultPortStateOperational(a1) )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2248) - 5) <= 1 )
    {
      *(_DWORD *)(a1 + 4068) |= 4u;
      *(_DWORD *)(a1 + 4064) = 5;
    }
    else
    {
      *(_QWORD *)(a1 + 4064) = 1LL;
      if ( (v3 & 8) != 0 )
        *(_DWORD *)(a1 + 4068) = 0x1000000;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4068) |= 1u;
    *(_DWORD *)(a1 + 4064) = 2;
  }
LABEL_5:
  v7 = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a1 + 4032) )
  {
    v7 = *(_QWORD *)(a1 + 4040);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v7 + 1440), 0xAu);
    ++*(_DWORD *)(v7 + 1396);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v8);
  if ( v7 )
  {
    v9 = *(_DWORD *)(a1 + 4064);
    v10 = *(_DWORD *)(v7 + 1112);
    v11 = *(_DWORD *)(v7 + 1220);
    *(_DWORD *)(v7 + 1112) = v9;
    *(_DWORD *)(v7 + 1192) = *(_DWORD *)(a1 + 4060);
    v12 = *(_DWORD *)(a1 + 480);
    *(_DWORD *)(v7 + 1220) = v12;
    *(_DWORD *)(v7 + 1224) = *(_DWORD *)(a1 + 488);
    *(_QWORD *)(v7 + 1208) = *(_QWORD *)(a1 + 800);
    *(_QWORD *)(v7 + 1200) = *(_QWORD *)(a1 + 792);
    *(_DWORD *)(v7 + 1116) = *(_DWORD *)(a1 + 4068);
    if ( v10 == v9 || (v6 = 1, !a2) )
    {
      v13 = a3;
    }
    else
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), a3);
      ndisNsiScheduleIfBlockRodChangeNotification(v7, v7 + 1112, 8LL, 536LL);
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      v12 = *(_DWORD *)(v7 + 1220);
    }
    if ( v11 != v12 && a2 )
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
      ndisNsiScheduleIfBlockRodChangeNotification(v7, v7 + 1220, 4LL, 644LL);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    }
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    IFBLOCK_DEREFERENCE_MINIPORT_LINK(*(struct _NDIS_IF_BLOCK **)(a1 + 4040), MPIFREF_SETISTATE);
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v14);
  }
  return v6;
}
