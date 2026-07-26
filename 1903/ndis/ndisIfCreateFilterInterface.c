/*
 * XREFs of ndisIfCreateFilterInterface @ 0x1C002A5BC
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010301C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C0105C94 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C0105DDC (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106450 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfCreateFilterInterface(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  int v2; // esi
  unsigned __int16 ifType; // r14
  int v5; // edx
  unsigned int v6; // ebx
  KIRQL v7; // al
  struct _NDIS_IF_NETWORK_BLOCK *Network; // rbx
  struct _GUID InterfaceGuid; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+8h] BYREF
  union _NET_LUID_LH v12; // [rsp+88h] [rbp+10h] BYREF

  Miniport = a1->Miniport;
  v2 = 0;
  v12.Value = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      190,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  ifType = Miniport->IfBlock->ifType;
  v6 = ndisIfAllocateAndVerifyNetLuidIndex(ifType, &v11, 1u, 0);
  if ( !v6 )
  {
    if ( (unsigned int)ndisIfGetFilterIfInfoFromRegistry(a1, &a1->InterfaceGuid) )
    {
      if ( ExUuidCreate(&a1->InterfaceGuid) < 0 )
      {
        v6 = -1073741823;
        goto LABEL_10;
      }
      InterfaceGuid = a1->InterfaceGuid;
      ndisIfSetFilterIfInfoInRegistry(a1, &InterfaceGuid);
    }
    v12.Value = (((unsigned __int64)ifType << 24) | v11 & 0xFFFFFF) << 24;
    v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Network = Miniport->IfBlock->Network;
    KeReleaseSpinLock(&ndisIfListLock, v7);
    if ( (int)ndisIfCreateInterface(Network, 0, 0LL, &v12, 0LL, 0LL, a1, NdisIfBlockSourceAutomaticLwFilter) < 0 )
      v2 = -1073741823;
    v6 = v2;
  }
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      22,
      191,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v6);
  }
  return v6;
}
