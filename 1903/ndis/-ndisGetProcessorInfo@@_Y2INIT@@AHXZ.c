/*
 * XREFs of ?ndisGetProcessorInfo@@_Y2INIT@@AHXZ @ 0x1C01465C0
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisGetLogicalProcessorInformation@@YAJPEAU_NDIS_SYSTEM_PROCESSOR_INFO_EX@@@Z @ 0x1C0146798 (-ndisGetLogicalProcessorInformation@@YAJPEAU_NDIS_SYSTEM_PROCESSOR_INFO_EX@@@Z.c)
 */

__int64 ndisGetProcessorInfo(void)
{
  SIZE_T v0; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v2; // rdi
  __int64 v8; // rcx
  NTSTATUS LogicalProcessorInformation; // ebx
  ULONG v10; // esi
  __int64 v11; // rdi
  __int64 j; // rbp
  ULONG v14; // edi
  __int64 i; // rbx

  v0 = 20 * (ndisMaxNumberOfProcessors + 2LL + 2LL * ndisMaxNumRssCpus);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x2020444Eu);
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = PoolWithTag;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v0);
  _RAX = 0LL;
  *v2 = 2621824;
  __asm { cpuid }
  if ( (_DWORD)_RBX == 1970169159 )
  {
    if ( (_DWORD)_RDX == 1231384169 && (_DWORD)_RCX == 1818588270 )
    {
      v2[2] = 1;
      goto LABEL_6;
    }
  }
  else if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RDX == 1769238117 && (_DWORD)_RCX == 1145913699 )
  {
    v2[2] = 2;
    goto LABEL_6;
  }
  v2[2] = 0;
LABEL_6:
  ndisRssProcessors = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * ndisMaxNumRssCpus, 0x2020444Eu);
  if ( !ndisRssProcessors )
    return (unsigned int)-1073741670;
  v8 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 32LL) = ndisNumberOfActiveProcessorsAtBoot;
  WPP_MAIN_CB.Queue.ListEntry.Blink = (_LIST_ENTRY *)(v8 + 40);
  *(_DWORD *)(v8 + 12) = 1;
  *(_DWORD *)(v8 + 16) = 1;
  *(_DWORD *)(v8 + 24) = 1;
  *(_DWORD *)(v8 + 20) = 1;
  *(_DWORD *)(v8 + 28) = 40;
  *(_DWORD *)(v8 + 36) = 20;
  LogicalProcessorInformation = ndisGetLogicalProcessorInformation((struct _NDIS_SYSTEM_PROCESSOR_INFO_EX *)v8);
  if ( LogicalProcessorInformation < 0 )
  {
    v14 = ndisRssBaseCpu;
    for ( i = 0LL;
          v14 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)i < ndisMaxNumRssCpus;
          i = (unsigned int)(i + 1) )
    {
      KeGetProcessorNumberFromIndex(v14++, (PPROCESSOR_NUMBER)ndisRssProcessors + i);
    }
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = i;
    return 0;
  }
  else
  {
    v10 = ndisRssBaseCpu;
    v11 = 0LL;
    while ( v10 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)v11 < ndisMaxNumRssCpus )
    {
      for ( j = 0LL; (unsigned int)j < (unsigned int)v11; j = (unsigned int)(j + 1) )
      {
        if ( *(_LIST_ENTRY **)((char *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink
                             + 20 * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ndisRssProcessors + j)
                             + 4) == *(_LIST_ENTRY **)((char *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + 20 * v10 + 4) )
          break;
      }
      if ( (_DWORD)j == (_DWORD)v11 )
      {
        LogicalProcessorInformation = KeGetProcessorNumberFromIndex(v10, (PPROCESSOR_NUMBER)ndisRssProcessors + v11);
        v11 = (unsigned int)(v11 + 1);
      }
      ++v10;
    }
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = v11;
  }
  return (unsigned int)LogicalProcessorInformation;
}
