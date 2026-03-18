/*
 * XREFs of ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0017BE4
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C008FBDC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C0091DF4 (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0002934 (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C00106E4 (RtlStringCbPrintfW.c)
 *     ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0017D88 (-CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_AD.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GNENGJFG@@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@I@Z @ 0x1C0017E64 (-AllocateElements@-$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GNENGJFG@@@QEAAPEAU.c)
 *     ?GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PARTITION@@@Z @ 0x1C0082A20 (-GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PA.c)
 */

__int64 __fastcall VIDMM_PARTITION::EnsureAdapter(VIDMM_PARTITION *this, struct VIDMM_GLOBAL *a2)
{
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  struct VIDMM_PARTITION_ADAPTER_INFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  wchar_t *v8; // r12
  unsigned int v9; // ebp
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupStateForPartition; // rax
  __int64 v11; // rdx
  PPCW_INSTANCE *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  NTSTATUS v15; // ebx
  struct _PCW_REGISTRATION *v16; // rdx
  struct _PCW_DATA *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  struct _PCW_DATA v26; // [rsp+50h] [rbp-38h] BYREF
  PPCW_INSTANCE *v27; // [rsp+60h] [rbp-28h] BYREF
  int v28; // [rsp+68h] [rbp-20h]
  NTSTATUS v29; // [rsp+A0h] [rbp+18h]

  AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, a2);
  v5 = AdapterInfo;
  if ( *((_QWORD *)AdapterInfo + 1) )
    return 0LL;
  if ( !NonPagedPoolZeroedArray<VIDMM_SEGMENT_GROUP_STATE,1,1833789782>::AllocateElements(
          (char *)AdapterInfo + 24,
          *((unsigned int *)a2 + 1748)) )
  {
    _InterlockedIncrement(&dword_1C004E710);
    v19 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v19 + 24) = 442LL;
    WdLogEvent5_WdLowResource(v19);
    return 3221225495LL;
  }
  *((_QWORD *)v5 + 1) = a2;
  *(_QWORD *)v5 = this;
  VIDMM_GLOBAL::CalculatePartitionAdapterBudgets(a2, this, v5);
  v8 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v8 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v20);
    return 3221225495LL;
  }
  v9 = 0;
  if ( !*((_DWORD *)a2 + 1748) )
  {
    v15 = v29;
    goto LABEL_10;
  }
  while ( 1 )
  {
    SegmentGroupStateForPartition = VIDMM_GLOBAL::GetSegmentGroupStateForPartition(a2, v9, this);
    v11 = *((_QWORD *)a2 + 3);
    v12 = (PPCW_INSTANCE *)SegmentGroupStateForPartition;
    LODWORD(v24) = *((_DWORD *)this + 8);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    LODWORD(v23) = v9;
    LODWORD(Data) = *(_DWORD *)(v11 + 276);
    v15 = RtlStringCbPrintfW(
            v8,
            0x208uLL,
            L"luid_0x%08X_0x%08X_phys_%u_part_%u",
            *(unsigned int *)(v11 + 280),
            Data,
            v23,
            v24);
    if ( v15 < 0 )
      break;
    RtlInitUnicodeString(&DestinationString, v8);
    if ( *(_DWORD *)v12 )
    {
      if ( *(_DWORD *)v12 != 1 )
        goto LABEL_9;
      v16 = GpuPerformanceCounterSetNonLocalAdapterMemory;
      v17 = (struct _PCW_DATA *)&v27;
      v27 = v12;
      v28 = 328;
    }
    else
    {
      v16 = GpuPerformanceCounterSetLocalAdapterMemory;
      v17 = &v26;
      v26.Data = v12;
      v26.Size = 328;
    }
    v15 = PcwCreateInstance(v12 + 40, v16, &DestinationString, 1u, v17);
    if ( v15 < 0 )
      break;
LABEL_9:
    if ( ++v9 >= *((_DWORD *)a2 + 1748) )
      goto LABEL_10;
  }
  v21 = WdLogNewEntry5_WdAssertion(v14, v13);
  WdLogEvent5_WdAssertion(v21);
LABEL_10:
  ExFreePoolWithTag(v8, 0);
  if ( v15 < 0 )
    return (unsigned int)v15;
  else
    return 0LL;
}
