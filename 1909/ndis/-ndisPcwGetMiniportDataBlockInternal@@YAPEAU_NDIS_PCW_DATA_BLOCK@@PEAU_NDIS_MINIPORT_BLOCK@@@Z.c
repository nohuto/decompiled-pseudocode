/*
 * XREFs of ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01000A8
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001F590 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A5B8 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0011D40 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ??$WritePointerRelease@U_NDIS_PCW_DATA_BLOCK@@@mem@@YAXPEAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z @ 0x1C0012390 (--$WritePointerRelease@U_NDIS_PCW_DATA_BLOCK@@@mem@@YAXPEAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z @ 0x1C001F460 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x1C001F7B0 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C001F838 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C007F6F8 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C010003C (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01002F8 (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

wchar_t *__fastcall ndisPcwGetMiniportDataBlockInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  wchar_t **p_Buffer; // r15
  _UNICODE_STRING *pModifiedInstanceName; // rax
  unsigned int v5; // esi
  unsigned __int16 v6; // r12
  SIZE_T v7; // rbp
  struct _NDIS_PCW_DATA_BLOCK *PoolWithTag; // rax
  struct _NDIS_PCW_DATA_BLOCK *v9; // rbx
  unsigned int v10; // r9d
  __int64 v11; // rbp
  unsigned int v12; // esi
  char *v13; // rbp
  const wchar_t *v14; // rdx
  struct _NDIS_PCW_PER_CPU_DATA_BLOCK *PerCpuDataForProcessor; // r8
  int v16; // r10d
  int v17; // r11d
  int v18; // ecx
  struct _UNICODE_STRING *v19; // r14
  struct _UNICODE_STRING *v20; // rcx
  int v21; // eax
  ULONG v22; // r8d
  _UNICODE_STRING *pAdapterInstanceName; // rdx
  int v24; // r9d
  unsigned int v25; // r11d

  p_Buffer = &a1->Reserved4.Buffer;
  if ( !a1->Reserved4.Buffer )
  {
    pModifiedInstanceName = a1->pModifiedInstanceName;
    v5 = ndisMaxNumberOfProcessors * ndisPcwPerCpuDataStride;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = a1->pAdapterInstanceName;
    v6 = pModifiedInstanceName->Length + 18;
    v7 = v5 + ndisPcwOffsetToPerCpuData + v6 * (ndisMaxNumberOfProcessors + 1);
    PoolWithTag = (struct _NDIS_PCW_DATA_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7, 0x7763444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v7);
      v10 = ndisMaxNumberOfProcessors;
      v11 = v5;
      v12 = 0;
      v13 = (char *)v9 + ndisPcwOffsetToPerCpuData + v11;
      v9->Miniport = a1;
      v9->ReferenceCount = 2;
      if ( v10 )
      {
        do
        {
          PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor(v9, v12);
          v18 = v12 == v16 ? v16 : v17 & v12 | ((v17 & a1->IfIndex) << 12) | (a1->NetLuid.Value >> 24) & 0xFF000000;
          *((_DWORD *)PerCpuDataForProcessor + 102) = v18;
          v19 = (struct _UNICODE_STRING *)((char *)PerCpuDataForProcessor + 416);
          *((_WORD *)PerCpuDataForProcessor + 209) = v6;
          *((_WORD *)PerCpuDataForProcessor + 208) = 0;
          *((_QWORD *)PerCpuDataForProcessor + 53) = &v13[v12 * v6];
          v20 = (struct _UNICODE_STRING *)((char *)PerCpuDataForProcessor + 416);
          if ( v12 == v16 )
          {
            v21 = RtlUnicodeStringCopy(v20, &ndisPcwSystemTotalInstanceName, (ULONG)PerCpuDataForProcessor);
          }
          else
          {
            if ( v12 == v17 )
              v21 = RtlUnicodeStringCopyString(v20, v14);
            else
              v21 = RtlUnicodeStringPrintf(v20, L"%u, ", v12);
            if ( v21 >= 0 )
            {
              pAdapterInstanceName = a1->pModifiedInstanceName;
              if ( !pAdapterInstanceName )
                pAdapterInstanceName = a1->pAdapterInstanceName;
              v21 = RtlUnicodeStringCat(v19, pAdapterInstanceName, v22);
            }
          }
          if ( v21 < 0 )
            goto LABEL_23;
        }
        while ( ++v12 < ndisMaxNumberOfProcessors );
      }
      v9->TotalInstanceId = ndisPcwGetMiniportInstanceId(a1, 0xFFFu);
      v9->TotalInstanceName.Length = 0;
      v9->TotalInstanceName.MaximumLength = v6;
      v9->TotalInstanceName.Buffer = (wchar_t *)&v13[v24 * v6];
      if ( (int)ndisPcwGetInstanceName(a1, (const wchar_t *)v25, &v9->TotalInstanceName) < 0 )
      {
LABEL_23:
        ExFreePoolWithTag(v9, 0);
        return *p_Buffer;
      }
      a1->IfBlock->PcwDataBlock = v9;
      mem::WritePointerRelease<_NDIS_PCW_DATA_BLOCK>(p_Buffer, (__int64)v9);
      v9->Next = (_NDIS_PCW_DATA_BLOCK *)ndisPcwDataBlockList;
      ndisPcwDataBlockList = v9;
    }
  }
  return *p_Buffer;
}
