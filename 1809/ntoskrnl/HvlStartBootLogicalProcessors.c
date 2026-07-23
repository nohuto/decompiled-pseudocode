/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x14017EBD0
 * Callers:
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140001010 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     HvlpCommitLpIndices @ 0x1401B3B5C (HvlpCommitLpIndices.c)
 *     HvlpUpdateLpcbIndex @ 0x1401B3C60 (HvlpUpdateLpcbIndex.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140271F8C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x14027216C (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x140272518 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x140272640 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x140272A84 (HvlpSelectVpSet.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140274C54 (HvlNotifyAllProcessorsStarted.c)
 *     HvlpDiscoverTopologyLocal @ 0x140818B98 (HvlpDiscoverTopologyLocal.c)
 */

__int64 __fastcall HvlStartBootLogicalProcessors(int a1)
{
  unsigned int MaximumProcessorCount; // eax
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  void *IndependentPages; // rax
  unsigned __int64 v6; // rsi
  int ApicIdAndNumaNode; // ebx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned __int16 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // r11
  __int64 LpcbByApicId; // rax
  char v18; // r10
  unsigned int v19; // edi
  char v20[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+58h] [rbp-30h]
  __int64 v24; // [rsp+68h] [rbp-20h]
  int v25; // [rsp+90h] [rbp+8h] BYREF

  v25 = a1;
  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  v25 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, char *, int *))off_140401458[0])(11LL, 64LL, v20, &v25) >= 0 && v25 == 64 )
  {
    HvlpQueryProcessorNode = v21;
    HvlpQueryProximityId = v23;
    HvlpQueryProximityNode = v22;
    HvlpQueryNodeDistance = v24;
  }
  else
  {
    HvlpQueryProcessorNode = 0LL;
    HvlpQueryProximityId = 0LL;
    HvlpQueryProximityNode = 0LL;
    HvlpQueryNodeDistance = 0LL;
  }
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v3 = MaximumProcessorCount;
  v4 = 36 * MaximumProcessorCount;
  IndependentPages = (void *)MmAllocateIndependentPagesEx(v4, -1, 0LL, 0);
  v6 = (unsigned __int64)IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, v4);
    CurrentPrcb = KeGetCurrentPrcb();
    dword_140549744 = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_140549748, &unk_14054974C);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_35;
    qword_140549760 = (__int64)CurrentPrcb->StatisticsPage;
    dword_140549758 = CurrentPrcb->Number;
    HvlpCpuVendor = CurrentPrcb->CpuVendor;
    HvlpDiscoverTopologyLocal(v9, (unsigned int)dword_140549748, &unk_140549750, &unk_140549754);
    LODWORD(HvlpLogicalProcessorCount) = 1;
    HvlpLogicalProcessorRegions[0] = 1;
    ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v3, v6);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_35;
    v10 = 1;
    if ( (unsigned int)v3 > 1 )
    {
      v11 = (unsigned __int16 *)(v6 + 44);
      do
      {
        if ( *((_BYTE *)v11 - 7) )
        {
          if ( (int)HvlpEnableNextLogicalProcessor(*((unsigned int *)v11 - 1), *v11) < 0 )
            break;
          LODWORD(HvlpLogicalProcessorCount) = HvlpLogicalProcessorCount + 1;
          *((_BYTE *)v11 - 6) = 1;
        }
        ++v10;
        v11 += 18;
      }
      while ( v10 < (unsigned int)v3 );
    }
    ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v3, v6);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_35;
    if ( (_DWORD)v3 )
    {
      v15 = v6 + 1;
      v16 = v3;
      do
      {
        if ( *(_BYTE *)v15 || *(_BYTE *)(v15 + 2) )
        {
          LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v15 + 3));
          if ( v18 )
            *(_DWORD *)(LpcbByApicId + 48) = 1;
          if ( *(_BYTE *)(v15 + 2) )
          {
            ++HvlpActiveProcessorCount;
            *(_BYTE *)(LpcbByApicId + 112) = 1;
          }
        }
        v15 += 36LL;
        --v16;
      }
      while ( v16 );
    }
    if ( (HvlpRootFlags & 0x800) == 0 )
      goto LABEL_33;
    if ( HvlpActiveProcessorCount != (_DWORD)HvlpLogicalProcessorCount )
    {
      qsort(HvlpLogicalProcessorRegions, (unsigned int)HvlpLogicalProcessorCount, 0x78uLL, HvlpCompareActiveLpcbs);
      v19 = 0;
      if ( (_DWORD)HvlpLogicalProcessorCount )
      {
        do
        {
          ApicIdAndNumaNode = HvlpUpdateLpcbIndex(&HvlpLogicalProcessorRegions[30 * v19], v19);
          if ( ApicIdAndNumaNode < 0 )
            goto LABEL_35;
        }
        while ( ++v19 < (unsigned int)HvlpLogicalProcessorCount );
      }
    }
    ApicIdAndNumaNode = HvlpCommitLpIndices(v13, v12, v14, v15);
    if ( ApicIdAndNumaNode >= 0 )
    {
LABEL_33:
      ApicIdAndNumaNode = 0;
      if ( !KeDynamicPartitioningSupported )
        HvlNotifyAllProcessorsStarted(v13, v12, v14, v15);
    }
LABEL_35:
    MmFreeIndependentPages(v6, v4);
    return (unsigned int)ApicIdAndNumaNode;
  }
  return (unsigned int)-1073741670;
}
