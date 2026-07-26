/*
 * XREFs of ?ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C005EADC
 * Callers:
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C0060240 (ndisOidPreRcvFilterEnumQueues.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __fastcall ndisCopyReceiveQueueInfo(struct _NDIS_RECEIVE_QUEUE_INFO *a1, struct _NDIS_RECEIVE_QUEUE_BLOCK *a2)
{
  NDIS_VM_NAME *p_VmName; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  _IF_COUNTED_STRING_LH *v7; // rax
  __int128 v8; // xmm1
  NDIS_QUEUE_NAME *p_QueueName; // rcx
  _IF_COUNTED_STRING_LH *v10; // rax
  __int128 v11; // xmm1

  memset(&a1->Flags, 0, 0x444uLL);
  a1->Header = (NDIS_OBJECT_HEADER)71565952;
  p_VmName = &a1->VmName;
  a1->Flags = a2->QueueParameters.Flags;
  a1->QueueType = a2->QueueParameters.QueueType;
  v5 = 4LL;
  a1->QueueId = a2->QueueId;
  v6 = 4LL;
  a1->QueueGroupId = a2->QueueParameters.QueueGroupId;
  a1->ProcessorAffinity = a2->QueueParameters.ProcessorAffinity;
  a1->NumSuggestedReceiveBuffers = a2->QueueParameters.NumSuggestedReceiveBuffers;
  a1->MSIXTableEntry = a2->QueueParameters.MSIXTableEntry;
  a1->LookaheadSize = a2->QueueParameters.LookaheadSize;
  v7 = &a2->QueueParameters.VmName;
  do
  {
    *(_OWORD *)&p_VmName->Length = *(_OWORD *)&v7->Length;
    *(_OWORD *)&p_VmName->String[7] = *(_OWORD *)&v7->String[7];
    *(_OWORD *)&p_VmName->String[15] = *(_OWORD *)&v7->String[15];
    *(_OWORD *)&p_VmName->String[23] = *(_OWORD *)&v7->String[23];
    *(_OWORD *)&p_VmName->String[31] = *(_OWORD *)&v7->String[31];
    *(_OWORD *)&p_VmName->String[39] = *(_OWORD *)&v7->String[39];
    *(_OWORD *)&p_VmName->String[47] = *(_OWORD *)&v7->String[47];
    p_VmName = (NDIS_VM_NAME *)((char *)p_VmName + 128);
    v8 = *(_OWORD *)&v7->String[55];
    v7 = (_IF_COUNTED_STRING_LH *)((char *)v7 + 128);
    *(_OWORD *)&p_VmName[-1].String[249] = v8;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)&p_VmName->Length = *(_DWORD *)&v7->Length;
  p_QueueName = &a1->QueueName;
  v10 = &a2->QueueParameters.QueueName;
  do
  {
    *(_OWORD *)&p_QueueName->Length = *(_OWORD *)&v10->Length;
    *(_OWORD *)&p_QueueName->String[7] = *(_OWORD *)&v10->String[7];
    *(_OWORD *)&p_QueueName->String[15] = *(_OWORD *)&v10->String[15];
    *(_OWORD *)&p_QueueName->String[23] = *(_OWORD *)&v10->String[23];
    *(_OWORD *)&p_QueueName->String[31] = *(_OWORD *)&v10->String[31];
    *(_OWORD *)&p_QueueName->String[39] = *(_OWORD *)&v10->String[39];
    *(_OWORD *)&p_QueueName->String[47] = *(_OWORD *)&v10->String[47];
    p_QueueName = (NDIS_QUEUE_NAME *)((char *)p_QueueName + 128);
    v11 = *(_OWORD *)&v10->String[55];
    v10 = (_IF_COUNTED_STRING_LH *)((char *)v10 + 128);
    *(_OWORD *)&p_QueueName[-1].String[249] = v11;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)&p_QueueName->Length = *(_DWORD *)&v10->Length;
  *((_DWORD *)&a1->QueueName + 129) = a2->NumFilters;
  a1[1].Header = (NDIS_OBJECT_HEADER)a2->QueueParameters.InterruptCoalescingDomainId;
}
