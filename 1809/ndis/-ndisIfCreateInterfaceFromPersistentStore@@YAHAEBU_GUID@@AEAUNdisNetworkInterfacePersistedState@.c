/*
 * XREFs of ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0023FDC
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00B3EDC (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001C2F0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfFindCompartmentBlock @ 0x1C001FB00 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0024140 (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C00241D4 (ndisIfFindInterfaceByNetLuid.c)
 *     WPP_SF_I @ 0x1C0041920 (WPP_SF_I.c)
 *     WPP_SF_IL @ 0x1C0041954 (WPP_SF_IL.c)
 *     WPP_SF_i_guid_ @ 0x1C0041F20 (WPP_SF_i_guid_.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C3AC8 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C4374 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfCreateInterfaceFromPersistentStore(
        const struct _GUID *a1,
        struct NdisNetworkInterfacePersistedState *a2,
        unsigned int a3)
{
  unsigned int v5; // edi
  const union _NET_LUID_LH *v6; // r14
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 InterfaceByNetLuid; // rbx
  KIRQL v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  ULONG64 Value_high; // rcx
  KIRQL v14; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  unsigned int CompartmentId; // ecx
  int Interface; // eax
  int v18; // ecx
  _LIST_ENTRY *CompartmentBlock; // rbp
  KIRQL v21; // r10
  __int64 v22; // rcx
  unsigned int v23; // [rsp+80h] [rbp+18h] BYREF

  v23 = a3;
  v5 = 0;
  v6 = (const union _NET_LUID_LH *)((char *)a2 + 24);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_I(164LL, a2, v6->Value);
  LOBYTE(v7) = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v6->Value, v8, v7);
  KeReleaseSpinLock(&ndisIfListLock, v10);
  if ( InterfaceByNetLuid )
    goto LABEL_15;
  v12 = (v6->Value >> 24) & 0xFFFFFF;
  Value_high = HIWORD(v6->Value);
  v23 = v12;
  if ( (unsigned int)v12 < 0x7F00 || (unsigned int)v12 > 0xC000 )
  {
    v5 = ndisIfAllocateAndVerifyNetLuidIndex(Value_high, &v23, 0, 0);
    if ( v5 )
      goto LABEL_12;
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)((char *)a2 + 36));
  KeReleaseSpinLock(&ndisIfListLock, v14);
  if ( NetworkBlock )
    goto LABEL_7;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(*((_DWORD *)a2 + 13));
  if ( !CompartmentBlock )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    *((_DWORD *)a2 + 13) = 1;
  }
  KeReleaseSpinLock(&ndisIfListLock, v21);
  if ( !CompartmentBlock )
  {
LABEL_15:
    v5 = -1073741823;
    goto LABEL_12;
  }
  NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)CompartmentBlock[3].Blink;
  if ( NetworkBlock )
  {
    *(_GUID *)((char *)a2 + 36) = NetworkBlock->NetworkGuid;
LABEL_7:
    CompartmentId = NetworkBlock->Compartment->CompartmentId;
    if ( *((_DWORD *)a2 + 13) != CompartmentId )
      *((_DWORD *)a2 + 13) = CompartmentId;
    Interface = ndisIfCreateInterface(NetworkBlock, 0, 0LL, v6, a1, a2, 0LL, NdisIfBlockSourcePersistedNetSetup);
    v18 = v5;
    if ( Interface < 0 )
      v18 = -1073741823;
    v5 = v18;
    ndisIfUpdateInterfaceFromPersistentStore(a2);
    goto LABEL_12;
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 3u )
    WPP_SF_i_guid_(v22, v11, v6->Value, (char *)a2 + 36);
  v5 = -1073741252;
LABEL_12:
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_IL(166LL, v11, v6->Value, v5);
  return v5;
}
