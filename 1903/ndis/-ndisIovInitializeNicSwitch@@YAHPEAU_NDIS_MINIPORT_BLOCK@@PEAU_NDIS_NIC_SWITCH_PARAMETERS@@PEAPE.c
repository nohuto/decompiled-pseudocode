/*
 * XREFs of ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00B0B74
 * Callers:
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00329D4 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C00B2030 (ndisOidPostIovCreateNicSwitch.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisIovInitializeNicSwitch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_NIC_SWITCH_PARAMETERS *a2,
        struct _NDIS_NIC_SWITCH_BLOCK **a3,
        struct _NDIS_PF_BLOCK **a4,
        struct _NDIS_VPORT_BLOCK **a5)
{
  unsigned int v5; // ebx
  struct _NDIS_NIC_SWITCH_BLOCK *PoolWithTag; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *v11; // rdi
  struct _NDIS_PF_BLOCK *v12; // rax
  struct _NDIS_PF_BLOCK *v13; // r14
  _LIST_ENTRY *p_AttachedVPortList; // rax
  struct _NDIS_VPORT_BLOCK *v15; // rax
  struct _NDIS_VPORT_BLOCK *v16; // rsi
  unsigned __int8 Number; // cl

  v5 = 0;
  if ( !a3 || !a4 || !a5 )
    return (unsigned int)-1073741811;
  PoolWithTag = (struct _NDIS_NIC_SWITCH_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A0uLL, 0x6F69444Eu);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _NDIS_NIC_SWITCH_BLOCK));
    v11->AdapterLink.Blink = &v11->AdapterLink;
    v11->AdapterLink.Flink = &v11->AdapterLink;
    v11->VFList.Blink = &v11->VFList;
    v11->VFList.Flink = &v11->VFList;
    v11->VPortList.Blink = &v11->VPortList;
    v11->VPortList.Flink = &v11->VPortList;
    v11->Miniport = a1;
    v11->SwitchId = a2->SwitchId;
    v11->Reference = 1;
    v12 = (struct _NDIS_PF_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6F69444Eu);
    v13 = v12;
    if ( v12 )
    {
      v12->Open = 0LL;
      *(_QWORD *)&v12->Reference = 0LL;
      v12->AttachedVPortList.Blink = 0LL;
      v12->Miniport = a1;
      v12->NicSwitch = v11;
      p_AttachedVPortList = &v12->AttachedVPortList;
      p_AttachedVPortList->Blink = p_AttachedVPortList;
      p_AttachedVPortList->Flink = p_AttachedVPortList;
      v11->PFBlock = v13;
      v15 = (struct _NDIS_VPORT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x388uLL, 0x6F69444Eu);
      v16 = v15;
      if ( v15 )
      {
        memset(v15, 0, sizeof(struct _NDIS_VPORT_BLOCK));
        v16->Miniport = a1;
        v16->Flags |= 1u;
        v16->NicSwitch = v11;
        v16->AttachedFunction = v13;
        *(_QWORD *)&v16->VPortParams.Header.Type = 49283456LL;
        v16->VPortParams.SwitchId = v11->SwitchId;
        v16->VPortParams.AttachedFunctionId = -1;
        v16->VPortParams.VPortState = NdisNicSwitchVPortStateActivated;
        v16->VPortParams.VPortId = 0;
        v16->VPortParams.InterruptModeration = NdisNicSwitchVPortInterruptModerationUndefined;
        v16->VPortParams.NumQueuePairs = a2->NumQueuePairsForDefaultVPort;
        v16->VPortParams.ProcessorAffinity.Group = a1->RssBaseProcessor.Group;
        Number = a1->RssBaseProcessor.Number;
        v16->CombinedNdisRSSParameters = 0LL;
        v16->RssParametersBuffer = 0LL;
        v16->VPortParams.ProcessorAffinity.Mask = 1LL << Number;
        v16->FilterList.Blink = &v16->FilterList;
        v16->FilterList.Flink = &v16->FilterList;
        *a3 = v11;
        *a4 = v13;
        *a5 = v16;
        return v5;
      }
      ExFreePoolWithTag(v13, 0);
    }
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)-1073741670;
}
