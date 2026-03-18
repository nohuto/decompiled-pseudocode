/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x140185480
 * Callers:
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14010DB20 (MmFreeIndependentPages.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140285DA4 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x140285FA8 (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x14028638C (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpSelectLpSet @ 0x140286524 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x140286978 (HvlpSelectVpSet.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140286C4C (HvlpSetLogicalProcessorProperty.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140288AF0 (HvlNotifyAllProcessorsStarted.c)
 *     HvlpDiscoverTopologyLocal @ 0x1408513D4 (HvlpDiscoverTopologyLocal.c)
 */

__int64 __fastcall HvlStartBootLogicalProcessors(int a1)
{
  unsigned int MaximumProcessorCount; // eax
  __int64 v3; // rdi
  unsigned __int64 v4; // r15
  void *IndependentPages; // rax
  unsigned __int64 v6; // rsi
  int ApicIdAndNumaNode; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v9; // rcx
  unsigned int v10; // r14d
  unsigned __int16 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // r11
  __int64 LpcbByApicId; // rax
  char v18; // r10
  int v19; // edi
  int *v20; // r14
  __int64 v21; // rcx
  _DWORD *v22; // rax
  _BYTE v23[32]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v24[8]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v25[816]; // [rsp+98h] [rbp-70h] BYREF
  int v26; // [rsp+D88h] [rbp+C80h] BYREF

  v26 = a1;
  memset(v24, 0, sizeof(v24));
  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  v26 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD *, int *))off_140426798[0])(11LL, 64LL, v24, &v26) >= 0
    && v26 == 64 )
  {
    HvlpQueryProcessorNode = v24[1];
    HvlpQueryProximityId = v24[5];
    HvlpQueryProximityNode = v24[3];
    HvlpQueryNodeDistance = v24[7];
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
    dword_1405798E4[0] = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_1405798E8, &unk_1405798EC);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_40;
    qword_140579900 = (__int64)CurrentPrcb->StatisticsPage;
    dword_1405798F8 = CurrentPrcb->Number;
    HvlpCpuVendor = CurrentPrcb->CpuVendor;
    HvlpDiscoverTopologyLocal(v9, (unsigned int)dword_1405798E8, &unk_1405798F0, &unk_1405798F4);
    LODWORD(HvlpLogicalProcessorCount) = 1;
    HvlpLogicalProcessorRegions = 1;
    ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v3, v6);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_40;
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
      goto LABEL_40;
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
      goto LABEL_38;
    if ( HvlpActiveProcessorCount != (_DWORD)HvlpLogicalProcessorCount )
    {
      qsort(&HvlpLogicalProcessorRegions, (unsigned int)HvlpLogicalProcessorCount, 0x78uLL, HvlpCompareActiveLpcbs);
      v19 = 0;
      if ( (_DWORD)HvlpLogicalProcessorCount )
      {
        do
        {
          memset(v25, 0, 0xCB8uLL);
          ApicIdAndNumaNode = 0;
          v20 = &dword_1405798E4[30 * v19];
          v21 = (unsigned int)*v20;
          if ( (_DWORD)v21 != v19 )
          {
            v25[0] = v19;
            ApicIdAndNumaNode = HvlpSetLogicalProcessorProperty(v21, 6LL, v25);
            if ( ApicIdAndNumaNode >= 0 )
              *v20 = v19;
          }
          if ( ApicIdAndNumaNode < 0 )
            goto LABEL_40;
        }
        while ( ++v19 < (unsigned int)HvlpLogicalProcessorCount );
      }
    }
    memset(v23, 0, sizeof(v23));
    ApicIdAndNumaNode = 0;
    v22 = (_DWORD *)HvlpAcquireHypercallPage(v23, 1LL, 0LL, 8LL);
    v22[1] = HvlpActiveProcessorCount;
    *v22 = 5;
    if ( (unsigned __int16)HvcallCodeVa() )
      ApicIdAndNumaNode = -1073741823;
    HvlpReleaseHypercallPage(v23);
    if ( ApicIdAndNumaNode >= 0 )
    {
LABEL_38:
      ApicIdAndNumaNode = 0;
      if ( !KeDynamicPartitioningSupported )
        HvlNotifyAllProcessorsStarted(v13, v12, v14, v15);
    }
LABEL_40:
    MmFreeIndependentPages(v6, v4);
    return (unsigned int)ApicIdAndNumaNode;
  }
  return (unsigned int)-1073741670;
}
