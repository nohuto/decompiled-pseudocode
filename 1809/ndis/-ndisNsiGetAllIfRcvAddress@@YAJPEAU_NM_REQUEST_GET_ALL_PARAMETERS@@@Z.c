/*
 * XREFs of ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C000A8E0 (ndisIfDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     ndisIfReferenceMiniport @ 0x1C000E020 (ndisIfReferenceMiniport.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001C21C (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C00241D4 (ndisIfFindInterfaceByNetLuid.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00E2438 (-ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00E24C8 (-ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00E2B80 (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 */

__int64 __fastcall ndisNsiGetAllIfRcvAddress(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
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
  _QWORD v19[8]; // [rsp+20h] [rbp-58h] BYREF

  InterfaceByNetLuid = 0LL;
  IfRcvAddressRodInformation = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(0x58u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1);
  memset(v19, 0, sizeof(v19));
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 40 )
  {
    IfRcvAddressRodInformation = -1073741808;
    goto LABEL_41;
  }
  v4 = (_LIST_ENTRY **)*((_QWORD *)a1 + 2);
  v5 = *v4;
  v6 = (unsigned __int8 *)(v4 + 1);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = *((_DWORD *)a1 + 8);
  v9 = v7;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        IfRcvAddressRodInformation = -1073741808;
        goto LABEL_18;
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
      goto LABEL_16;
    }
  }
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v5);
LABEL_16:
  if ( InterfaceByNetLuid )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid[90].Flink, 9u);
    ++LODWORD(InterfaceByNetLuid[81].Blink);
    **((_QWORD **)a1 + 2) = InterfaceByNetLuid[82].Flink;
  }
LABEL_18:
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( IfRcvAddressRodInformation < 0 )
    goto LABEL_39;
  if ( !InterfaceByNetLuid )
  {
    IfRcvAddressRodInformation = *((_DWORD *)a1 + 8) != 0 ? -2147483622 : -1073741772;
    goto LABEL_41;
  }
  v12 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid, 5u);
  if ( !v12 )
  {
    IfRcvAddressRodInformation = 0;
    goto LABEL_39;
  }
  if ( *(_QWORD *)(v12 + 400) )
  {
    v14 = *((_DWORD *)a1 + 8);
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        Flink = (__int64)InterfaceByNetLuid[80].Flink;
        goto LABEL_33;
      }
      if ( v14 != 2 )
      {
        IfRcvAddressRodInformation = -1073741808;
        goto LABEL_38;
      }
      NextRcvAddress = ndisIfFindNextRcvAddress((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, v6);
    }
    else
    {
      NextRcvAddress = ndisIfFindRcvAddress((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, v6);
    }
    Flink = (__int64)NextRcvAddress;
LABEL_33:
    if ( Flink )
    {
      v16 = *((_QWORD *)a1 + 2);
      *(_OWORD *)(v16 + 8) = *(_OWORD *)(Flink + 8);
      *(_OWORD *)(v16 + 24) = *(_OWORD *)(Flink + 24);
      HIDWORD(v19[6]) = 0;
      if ( *((_QWORD *)a1 + 1) == 3LL )
      {
        v19[5] = *((_QWORD *)a1 + 7);
        LODWORD(v19[6]) = *((_DWORD *)a1 + 16);
        LODWORD(v19[4]) = 1;
        IfRcvAddressRodInformation = ndisNsiGetIfRcvAddressRodInformation(
                                       (struct _NDIS_IF_BLOCK *)InterfaceByNetLuid,
                                       (struct _NDIS_IF_RCV_ADDRESS *)Flink,
                                       (struct _NM_REQUEST_GET_PARAMETER *)v19);
        *((_DWORD *)a1 + 16) = v19[6];
      }
      else
      {
        IfRcvAddressRodInformation = -1073741811;
      }
    }
    else
    {
      IfRcvAddressRodInformation = v14 != 0 ? -2147483622 : -1073741772;
    }
    goto LABEL_38;
  }
  IfRcvAddressRodInformation = 0;
LABEL_38:
  ndisIfDereferenceMiniport((__int64)InterfaceByNetLuid, Flink, 5u);
LABEL_39:
  if ( InterfaceByNetLuid )
  {
    v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF(InterfaceByNetLuid, 9u);
    KeReleaseSpinLock(&ndisIfListLock, v17);
  }
LABEL_41:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qD(0x59u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1, IfRcvAddressRodInformation);
  return (unsigned int)IfRcvAddressRodInformation;
}
