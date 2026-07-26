/*
 * XREFs of ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C002A168
 * Callers:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0029FE0 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0063D7C (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C0002A30 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0002E20 (ndisIfReferenceMiniport.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0011F54 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002527C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C0029E34 (ndisIfUpdateFilterIfStack.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00630CC (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceIsolationNetworkIdLocked(
        struct _NDIS_IF_BLOCK *a1,
        const struct _GUID *a2,
        char a3)
{
  _GUID *p_NetworkGuid; // r13
  _NDIS_IF_NETWORK_BLOCK *Network; // rbp
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v10; // rdi
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rax
  char v12; // r14
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r15
  __int64 v14; // rdx
  _LIST_ENTRY *p_NetworkLink; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_InterfaceLink; // rax
  _LIST_ENTRY *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  struct _GUID NetworkGuid; // [rsp+20h] [rbp-58h] BYREF

  p_NetworkGuid = &a1->NetworkGuid;
  if ( !(unsigned int)ndisCompareGuid(&a1->NetworkGuid, a2) )
    return 0LL;
  Network = a1->Network;
  if ( Network )
  {
    NetworkBlock = ndisIfFindNetworkBlock(a2);
    v10 = NetworkBlock;
    if ( NetworkBlock )
    {
      if ( (NetworkBlock->Flags & 3) == 0 )
      {
        if ( a1->NetworkIdOverridden && !a3 )
          return 0LL;
        Compartment = Network->Compartment;
        if ( Compartment->LoopbackIf == a1 )
        {
          if ( v10->Compartment != Compartment )
            return 3221225485LL;
          Compartment->LoopbackNetwork = v10;
          Network->Compartment->LoopbackInfo.LoopbackIfNetworkGuid = v10->NetworkGuid;
        }
        if ( a1->ProviderHandle != ndisIfProviderHandle || (a1->Flags & 2) == 0 )
          goto LABEL_20;
        v12 = 0;
        *(_QWORD *)&NetworkGuid.Data1 = 0LL;
        *(_QWORD *)NetworkGuid.Data4 = 0LL;
        if ( a1->IsNdisFilter )
        {
          NetworkGuid = *(struct _GUID *)(*(_QWORD *)(*(_QWORD *)&a1->Miniport->Reserved4.Length + 4040LL) + 580LL);
        }
        else
        {
          if ( !ndisIfReferenceMiniport((__int64)a1) )
            goto LABEL_20;
          BaseMiniport = a1->Miniport->BaseMiniport;
          if ( ndisMReferenceIfBlock((__int64)BaseMiniport, 8u) )
          {
            v12 = 1;
            NetworkGuid = BaseMiniport->IfBlock->NetworkGuid;
            ndisMDereferenceIfBlock((__int64)BaseMiniport, MPIFREF_CHIIC);
          }
          ndisIfDereferenceMiniport((__int64)a1, v14, 6u);
          if ( !v12 )
            goto LABEL_20;
        }
        if ( !(unsigned int)ndisCompareGuid(a2, &NetworkGuid) )
        {
LABEL_20:
          p_NetworkLink = &a1->NetworkLink;
          Flink = a1->NetworkLink.Flink;
          if ( Flink->Blink != &a1->NetworkLink
            || (Blink = a1->NetworkLink.Blink, Blink->Flink != p_NetworkLink)
            || (Blink->Flink = Flink,
                Flink->Blink = Blink,
                NETWORKBLOCK_DECREMENT_REF(Network),
                p_InterfaceLink = &v10->InterfaceLink,
                v19 = v10->InterfaceLink.Flink,
                v19->Blink != &v10->InterfaceLink) )
          {
            __fastfail(3u);
          }
          p_NetworkLink->Flink = v19;
          a1->NetworkLink.Blink = p_InterfaceLink;
          v19->Blink = p_NetworkLink;
          p_InterfaceLink->Flink = p_NetworkLink;
          ++v10->Ref;
          a1->Compartment = v10->Compartment;
          a1->CompartmentId = v10->Compartment->CompartmentId;
          a1->Network = v10;
          *p_NetworkGuid = v10->NetworkGuid;
          if ( a3 )
            a1->NetworkIdOverridden = 1;
          if ( a1->ProviderHandle == ndisIfProviderHandle && (a1->Flags & 2) == 0 )
          {
            v20 = ndisIfReferenceMiniport((__int64)a1);
            if ( v20 )
            {
              ndisIfUpdateFilterIfStack(v20);
              ndisIfDereferenceMiniport((__int64)a1, v21, 7u);
            }
          }
          return 0LL;
        }
      }
    }
  }
  return 3221225485LL;
}
