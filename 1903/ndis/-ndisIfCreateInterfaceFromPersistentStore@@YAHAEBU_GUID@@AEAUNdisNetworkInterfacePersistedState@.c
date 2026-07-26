/*
 * XREFs of ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BF0
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00FC168 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002528C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368CC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0039D8C (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 *     WPP_RECORDER_SF_IL @ 0x1C0039E6C (WPP_RECORDER_SF_IL.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0039EF8 (ndisIfFindInterfaceByNetLuid.c)
 *     WPP_RECORDER_SF_I @ 0x1C0039F2C (WPP_RECORDER_SF_I.c)
 *     WPP_RECORDER_SF_i_guid_ @ 0x1C0067314 (WPP_RECORDER_SF_i_guid_.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010301C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106450 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfCreateInterfaceFromPersistentStore(
        const struct _GUID *a1,
        struct NdisNetworkInterfacePersistedState *a2,
        unsigned int a3)
{
  const union _NET_LUID_LH *v5; // r14
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 InterfaceByNetLuid; // rbx
  KIRQL v9; // r8
  int v10; // edx
  int v11; // r8d
  KIRQL v12; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  unsigned int CompartmentId; // ecx
  int Interface; // eax
  int v16; // ecx
  unsigned int v17; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rbp
  KIRQL v20; // r8
  int v21; // r9d
  int v22; // [rsp+20h] [rbp-48h]
  unsigned int v23; // [rsp+80h] [rbp+18h] BYREF

  v23 = a3;
  v5 = (const union _NET_LUID_LH *)((char *)a2 + 24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, 165);
  LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v5->Value, v7, v6);
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( InterfaceByNetLuid )
    goto LABEL_14;
  v23 = (v5->Value >> 24) & 0xFFFFFF;
  if ( v23 - 32512 > 0x4100 )
  {
    v17 = ndisIfAllocateAndVerifyNetLuidIndex(*((_WORD *)a2 + 15), &v23, 0, 0);
    if ( v17 )
      goto LABEL_11;
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)((char *)a2 + 36));
  KeReleaseSpinLock(&ndisIfListLock, v12);
  if ( NetworkBlock )
    goto LABEL_6;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(*((_DWORD *)a2 + 13));
  if ( !CompartmentBlock )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    *((_DWORD *)a2 + 13) = 1;
  }
  KeReleaseSpinLock(&ndisIfListLock, v20);
  if ( !CompartmentBlock )
  {
LABEL_14:
    v17 = -1073741823;
    goto LABEL_11;
  }
  NetworkBlock = CompartmentBlock->LoopbackNetwork;
  if ( NetworkBlock )
  {
    *(_GUID *)((char *)a2 + 36) = NetworkBlock->NetworkGuid;
LABEL_6:
    CompartmentId = NetworkBlock->Compartment->CompartmentId;
    if ( *((_DWORD *)a2 + 13) != CompartmentId )
      *((_DWORD *)a2 + 13) = CompartmentId;
    Interface = ndisIfCreateInterface(NetworkBlock, 0, 0LL, v5, a1, a2, 0LL, NdisIfBlockSourcePersistedNetSetup);
    v16 = 0;
    if ( Interface < 0 )
      v16 = -1073741823;
    v17 = v16;
    ndisIfUpdateInterfaceFromPersistentStore(a2);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, v21);
  v17 = -1073741252;
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 167, v22, v5->Value, v17);
  return v17;
}
