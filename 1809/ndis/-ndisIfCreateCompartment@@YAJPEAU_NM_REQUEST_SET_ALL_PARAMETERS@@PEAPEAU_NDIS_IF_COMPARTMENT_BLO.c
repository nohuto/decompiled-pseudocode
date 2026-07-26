/*
 * XREFs of ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003E7A0
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00405A0 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C0001338 (-ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001C2F0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C001EBA8 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIfFindCompartmentBlock @ 0x1C001FB00 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00202F0 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003EF20 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C3AC8 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00CB4CC (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00E2324 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 __fastcall ndisIfCreateCompartment(
        struct _NM_REQUEST_SET_ALL_PARAMETERS *a1,
        struct _NDIS_IF_COMPARTMENT_BLOCK **a2)
{
  __int64 v2; // r14
  int Network; // esi
  char v6; // bp
  _GUID *v7; // rbx
  KIRQL v8; // r15
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v10; // rdi
  unsigned int Flags; // eax
  bool v12; // cf
  struct _NDIS_IF_COMPARTMENT_BLOCK *v13; // rdi
  struct _NDIS_NSI_COMPARTMENT_RW *p_LoopbackInfo; // r15
  _GUID v15; // xmm0
  KIRQL v16; // bl
  _LIST_ENTRY *CompartmentBlock; // rax
  KIRQL v18; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rsi
  __int64 v20; // rdx
  _IF_COUNTED_STRING_LH *p_CompartmentDescr; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  KIRQL v24; // bl
  unsigned int v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+88h] [rbp+10h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v28; // [rsp+90h] [rbp+18h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  Network = 0;
  v6 = 0;
  v7 = (_GUID *)(v2 + 1080);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_(0x95u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids);
  *a2 = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid((const struct _GUID *)(v2 + 1080));
  v28 = CompartmentBlockByGuid;
  v10 = CompartmentBlockByGuid;
  if ( CompartmentBlockByGuid )
  {
    Flags = CompartmentBlockByGuid->Flags;
    if ( (Flags & 1) != 0 )
    {
      v10 = 0LL;
      v28 = 0LL;
    }
    else if ( (Flags & 2) != 0 )
    {
      v10->Flags = Flags & 0xFFFFFFFD;
      _InterlockedIncrement(&v10->Ref);
      v10 = v28;
      v6 = 1;
    }
    else if ( *((_DWORD *)a1 + 12) == 1 )
    {
      Network = -1073741270;
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( Network >= 0 )
  {
    if ( v10 )
    {
LABEL_23:
      v20 = 4LL;
      p_CompartmentDescr = &v10->LoopbackInfo.CompartmentDescr;
      v22 = (_OWORD *)(v2 + 1096);
      do
      {
        *(_OWORD *)&p_CompartmentDescr->Length = *v22;
        *(_OWORD *)&p_CompartmentDescr->String[7] = v22[1];
        *(_OWORD *)&p_CompartmentDescr->String[15] = v22[2];
        *(_OWORD *)&p_CompartmentDescr->String[23] = v22[3];
        *(_OWORD *)&p_CompartmentDescr->String[31] = v22[4];
        *(_OWORD *)&p_CompartmentDescr->String[39] = v22[5];
        *(_OWORD *)&p_CompartmentDescr->String[47] = v22[6];
        p_CompartmentDescr = (_IF_COUNTED_STRING_LH *)((char *)p_CompartmentDescr + 128);
        v23 = v22[7];
        v22 += 8;
        *(_OWORD *)&p_CompartmentDescr[-1].String[249] = v23;
        --v20;
      }
      while ( v20 );
      *(_DWORD *)&p_CompartmentDescr->Length = *(_DWORD *)v22;
      memmove(*((void **)a1 + 4), &v10->LoopbackInfo, 0x668uLL);
      **((_DWORD **)a1 + 2) = v10->CompartmentId;
      if ( v6 )
      {
        ndisNsiNotifyClientCompartmentChange(v10, 1LL);
        v24 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        COMPARTMENTBLOCK_DECREMENT_REF((__int64)v10);
        KeReleaseSpinLock(&ndisIfListLock, v24);
      }
      goto LABEL_27;
    }
    Network = ndisIfCreateCompartmentBlock(0, (struct _GUID *)(v2 + 1080), 0LL, &v28);
    if ( Network >= 0 )
    {
      v12 = *(_BYTE *)(v2 + 1) < 2u;
      v13 = v28;
      *a2 = v28;
      if ( !v12 )
        v13->LoopbackInfo.Flags = *(_DWORD *)(v2 + 1616);
      p_LoopbackInfo = &v13->LoopbackInfo;
      v13->LoopbackInfo.Header = *(_NDIS_OBJECT_HEADER *)v2;
      v15 = *v7;
      v13->LoopbackInfo.CompartmentGuid = *v7;
      v13->LoopbackInfo.CompartmentType = *(_DWORD *)(v2 + 1612);
      if ( (v13->LoopbackInfo.Flags & 4) != 0 )
      {
        v13->LoopbackInfo.NamespaceGuid = v15;
      }
      else
      {
        v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        ndisCmGetThreadState(KeGetCurrentThread(), &v26, &v27);
        CompartmentBlock = ndisIfFindCompartmentBlock(v26);
        v13 = v28;
        v28->LoopbackInfo.NamespaceGuid = *(_GUID *)((char *)CompartmentBlock + 1144);
        KeReleaseSpinLock(&ndisIfListLock, v16);
      }
      Network = ndisIfCreateNetwork(&v13->LoopbackInfo.LoopbackIfNetworkGuid, v13->CompartmentId);
      if ( Network >= 0 )
      {
        v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        NetworkBlock = ndisIfFindNetworkBlock(&v13->LoopbackInfo.LoopbackIfNetworkGuid);
        KeReleaseSpinLock(&ndisIfListLock, v18);
        if ( !NetworkBlock )
        {
          Network = -1073741772;
          goto LABEL_27;
        }
        v13->LoopbackNetwork = NetworkBlock;
        Network = ndisIfCreateInterface(
                    NetworkBlock,
                    1u,
                    p_LoopbackInfo,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    NdisIfBlockSourceAutomaticLoopback);
        if ( Network >= 0 )
        {
          _InterlockedIncrement(&v13->Ref);
          v10 = v28;
          v6 = 1;
          goto LABEL_23;
        }
      }
    }
  }
LABEL_27:
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_dq(150LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (unsigned int)Network, *a2);
  return (unsigned int)Network;
}
