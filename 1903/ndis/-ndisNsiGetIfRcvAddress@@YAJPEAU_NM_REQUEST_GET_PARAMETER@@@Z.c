/*
 * XREFs of ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064BA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C0002A30 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0002E20 (ndisIfReferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0039EF8 (ndisIfFindInterfaceByNetLuid.c)
 *     ?ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C0113DA8 (-ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C0113E38 (-ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0114544 (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 */

__int64 __fastcall ndisNsiGetIfRcvAddress(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  _LIST_ENTRY *InterfaceByNetLuid; // rsi
  int IfRcvAddressRodInformation; // edi
  _LIST_ENTRY **v4; // rax
  _LIST_ENTRY *v5; // rbx
  unsigned __int8 *v6; // r15
  KIRQL v7; // al
  int v8; // ecx
  KIRQL v9; // r14
  int v10; // ecx
  _LIST_ENTRY *v11; // rax
  __int64 v12; // rax
  __int64 Flink; // rdx
  int v14; // ebx
  struct _NDIS_IF_RCV_ADDRESS *NextRcvAddress; // rax
  __int64 v16; // rax
  KIRQL v17; // bl
  int v18; // edx

  InterfaceByNetLuid = 0LL;
  IfRcvAddressRodInformation = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      87,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 40 || !*((_QWORD *)a1 + 5) )
  {
    IfRcvAddressRodInformation = -1073741808;
    goto LABEL_42;
  }
  v4 = (_LIST_ENTRY **)*((_QWORD *)a1 + 2);
  v5 = *v4;
  v6 = (unsigned __int8 *)(v4 + 1);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = *((_DWORD *)a1 + 14);
  v9 = v7;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        IfRcvAddressRodInformation = -1073741808;
        goto LABEL_19;
      }
    }
    else if ( v5 == (_LIST_ENTRY *)-1LL )
    {
      do
      {
        v11 = ndisIfList.Flink - 77;
        if ( ndisIfList.Flink == &ndisIfList )
          v11 = InterfaceByNetLuid;
        InterfaceByNetLuid = v11;
      }
      while ( !v11 || !v11[80].Flink );
      goto LABEL_17;
    }
  }
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v5);
LABEL_17:
  if ( InterfaceByNetLuid )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid[89].Blink, 8u);
    ++LODWORD(InterfaceByNetLuid[81].Blink);
    **((_QWORD **)a1 + 2) = InterfaceByNetLuid[82].Flink;
  }
LABEL_19:
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( IfRcvAddressRodInformation < 0 )
    goto LABEL_40;
  if ( !InterfaceByNetLuid )
  {
    IfRcvAddressRodInformation = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    goto LABEL_42;
  }
  v12 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid);
  if ( !v12 )
  {
    IfRcvAddressRodInformation = 0;
    goto LABEL_40;
  }
  if ( *(_QWORD *)(v12 + 400) )
  {
    v14 = *((_DWORD *)a1 + 14);
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        Flink = (__int64)InterfaceByNetLuid[80].Flink;
        goto LABEL_34;
      }
      if ( v14 != 2 )
      {
        IfRcvAddressRodInformation = -1073741808;
        goto LABEL_39;
      }
      NextRcvAddress = ndisIfFindNextRcvAddress((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, v6);
    }
    else
    {
      NextRcvAddress = ndisIfFindRcvAddress((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, v6);
    }
    Flink = (__int64)NextRcvAddress;
LABEL_34:
    if ( Flink )
    {
      v16 = *((_QWORD *)a1 + 2);
      IfRcvAddressRodInformation = -1073741811;
      *(_OWORD *)(v16 + 8) = *(_OWORD *)(Flink + 8);
      *(_OWORD *)(v16 + 24) = *(_OWORD *)(Flink + 24);
      if ( *((_QWORD *)a1 + 1) == 3LL && *((_DWORD *)a1 + 8) == 1 )
        IfRcvAddressRodInformation = ndisNsiGetIfRcvAddressRodInformation(
                                       (struct _NDIS_IF_BLOCK *)InterfaceByNetLuid,
                                       (struct _NDIS_IF_RCV_ADDRESS *)Flink,
                                       a1);
    }
    else
    {
      IfRcvAddressRodInformation = v14 != 0 ? -2147483622 : -1073741772;
    }
    goto LABEL_39;
  }
  IfRcvAddressRodInformation = 0;
LABEL_39:
  ndisIfDereferenceMiniport((__int64)InterfaceByNetLuid, Flink, 4u);
LABEL_40:
  if ( InterfaceByNetLuid )
  {
    v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF((char *)InterfaceByNetLuid, 8u);
    KeReleaseSpinLock(&ndisIfListLock, v17);
  }
LABEL_42:
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v18,
      22,
      88,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      IfRcvAddressRodInformation);
  }
  return (unsigned int)IfRcvAddressRodInformation;
}
