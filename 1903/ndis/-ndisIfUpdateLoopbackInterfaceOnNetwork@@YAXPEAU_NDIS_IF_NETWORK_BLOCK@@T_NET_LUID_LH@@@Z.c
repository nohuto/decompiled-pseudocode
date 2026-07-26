/*
 * XREFs of ?ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0039B90
 * Callers:
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010301C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0039EF8 (ndisIfFindInterfaceByNetLuid.c)
 */

void __fastcall ndisIfUpdateLoopbackInterfaceOnNetwork(struct _NDIS_IF_NETWORK_BLOCK *a1, union _NET_LUID_LH a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  KIRQL v6; // r8

  LOBYTE(v4) = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  a1->Compartment->LoopbackIf = (_NDIS_IF_BLOCK *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ndisIfFindInterfaceByNetLuid)(
                                                    (union _NET_LUID_LH)a2.Value,
                                                    v5,
                                                    v4);
  KeReleaseSpinLock(&ndisIfListLock, v6);
}
