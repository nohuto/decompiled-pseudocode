/*
 * XREFs of ndisIfCreateFilterInterface @ 0x1C001C89C
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C3AC8 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C4374 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C00C46F0 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00C47CC (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfCreateFilterInterface(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  unsigned __int16 ifType; // r14
  int v4; // esi
  unsigned int v5; // ebx
  KIRQL v6; // al
  struct _NDIS_IF_NETWORK_BLOCK *Network; // rbx
  struct _GUID InterfaceGuid; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF
  union _NET_LUID_LH v11; // [rsp+78h] [rbp+10h] BYREF

  Miniport = a1->Miniport;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(189LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  ifType = Miniport->IfBlock->ifType;
  v4 = 0;
  v5 = ndisIfAllocateAndVerifyNetLuidIndex(ifType, &v10, 1u, 0);
  if ( !v5 )
  {
    if ( (unsigned int)ndisIfGetFilterIfInfoFromRegistry(a1, &a1->InterfaceGuid) )
    {
      if ( ExUuidCreate(&a1->InterfaceGuid) < 0 )
      {
        v5 = -1073741823;
        goto LABEL_10;
      }
      InterfaceGuid = a1->InterfaceGuid;
      ndisIfSetFilterIfInfoInRegistry(a1, &InterfaceGuid);
    }
    v11.Value = (((unsigned __int64)ifType << 24) | v10 & 0xFFFFFF) << 24;
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Network = Miniport->IfBlock->Network;
    KeReleaseSpinLock(&ndisIfListLock, v6);
    if ( (int)ndisIfCreateInterface(Network, 0, 0LL, &v11, 0LL, 0LL, a1, NdisIfBlockSourceAutomaticLwFilter) < 0 )
      v4 = -1073741823;
    v5 = v4;
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qD(190LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, v5);
  return v5;
}
