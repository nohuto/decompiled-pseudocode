/*
 * XREFs of ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B9708
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0012CE4 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F84E8 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C00099C8 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B98D8 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B9944 (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

struct _NDIS_PCW_DATA_BLOCK *__fastcall ndisPcwGetMiniportDataBlockInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _UNICODE_STRING *pModifiedInstanceName; // rax
  unsigned int v3; // esi
  unsigned __int16 v4; // bp
  SIZE_T v5; // r14
  struct _NDIS_PCW_DATA_BLOCK *PoolWithTag; // rax
  struct _NDIS_PCW_DATA_BLOCK *v7; // rbx
  unsigned int v8; // r9d
  __int64 v9; // r14
  unsigned int v10; // esi
  char *v11; // r14
  unsigned int MiniportInstanceId; // eax
  __int64 v13; // r9
  int v14; // r9d
  unsigned int v15; // r10d
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a1->Reserved4.Buffer )
  {
    pModifiedInstanceName = a1->pModifiedInstanceName;
    v3 = ndisMaxNumberOfProcessors * ndisPcwPerCpuDataStride;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = a1->pAdapterInstanceName;
    v4 = pModifiedInstanceName->Length + 18;
    v5 = v3 + ndisPcwOffsetToPerCpuData + v4 * (ndisMaxNumberOfProcessors + 1);
    PoolWithTag = (struct _NDIS_PCW_DATA_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v5, 0x7763444Eu);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v5);
      v8 = ndisMaxNumberOfProcessors;
      v9 = v3;
      v10 = 0;
      v11 = (char *)v7 + ndisPcwOffsetToPerCpuData + v9;
      v7->Miniport = a1;
      v7->ReferenceCount = 2;
      if ( v8 )
      {
        do
        {
          ndisPcwGetPerCpuDataForProcessor(v7, v10);
          MiniportInstanceId = ndisPcwGetMiniportInstanceId(a1, v10);
          *(_DWORD *)(v13 + 408) = MiniportInstanceId;
          *(_WORD *)(v13 + 416) = 0;
          *(_WORD *)(v13 + 418) = v4;
          *(_QWORD *)(v13 + 424) = &v11[v10 * v4];
          if ( ndisPcwGetInstanceName(a1, v10, (struct _UNICODE_STRING *)(v13 + 416)) < 0 )
            goto LABEL_11;
        }
        while ( ++v10 < ndisMaxNumberOfProcessors );
      }
      v7->TotalInstanceId = ndisPcwGetMiniportInstanceId(a1, 0xFFFu);
      v7->TotalInstanceName.Length = 0;
      v7->TotalInstanceName.MaximumLength = v4;
      v7->TotalInstanceName.Buffer = (wchar_t *)&v11[v14 * v4];
      if ( ndisPcwGetInstanceName(a1, v15, &v7->TotalInstanceName) < 0 )
      {
LABEL_11:
        ExFreePoolWithTag(v7, 0);
        return a1->PcwDataBlock;
      }
      a1->IfBlock->PcwDataBlock = v7;
      a1->Reserved4.Buffer = (wchar_t *)v7;
      _InterlockedOr(v17, 0);
      v7->Next = (_NDIS_PCW_DATA_BLOCK *)ndisPcwDataBlockList;
      ndisPcwDataBlockList = v7;
    }
  }
  return a1->PcwDataBlock;
}
