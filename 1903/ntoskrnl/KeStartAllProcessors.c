/*
 * XREFs of KeStartAllProcessors @ 0x1409EDD08
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 *     MmCreateKernelStack @ 0x1400C3CE0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400C4CB0 (MmDeleteKernelStack.c)
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14010DB20 (MmFreeIndependentPages.c)
 *     HvlStartBootLogicalProcessors @ 0x140185480 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x140186DA8 (KiQueryProcessorNode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x1402A6C7C (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x1402BD8AC (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x140339238 (ExDeletePoolTagTable.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     KiComputeProcessorDataSize @ 0x14059F050 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x14059F444 (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x14059F558 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x14059F5F4 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x14059F6E4 (MmInitializeProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x1405AB9BC (KiUnshadowProcessorAllocation.c)
 *     MmAllocateIsrStack @ 0x14074D918 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14074DAF0 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14074DCE0 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x14074DD2C (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x14074E594 (ExCreatePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14085124C (HvlDeleteProcessor.c)
 *     KiResetBootProcessorApicMask @ 0x14087E7E4 (KiResetBootProcessorApicMask.c)
 *     MmFreeIsrStack @ 0x140892B30 (MmFreeIsrStack.c)
 *     KiAllocateCpuSetData @ 0x1409ED638 (KiAllocateCpuSetData.c)
 *     KiConfigureAllSchedulingInformation @ 0x1409ED6DC (KiConfigureAllSchedulingInformation.c)
 *     KeIsHyperThreadingEnabled @ 0x140A3BAFC (KeIsHyperThreadingEnabled.c)
 */

ULONG KeStartAllProcessors()
{
  KPCR *Pcr; // rax
  void *Base; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v3; // edi
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v5; // r13d
  unsigned int MaximumProcessorCount; // edx
  unsigned int v7; // r12d
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned int v10; // r15d
  __int64 v11; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  _OWORD *v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  ULONG result; // eax
  SIZE_T v19; // rdx
  __int64 v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  unsigned int i; // edi
  _OWORD *v24; // rbx
  PVOID v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  unsigned int v30; // ecx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v32; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int Size; // [rsp+80h] [rbp-88h]
  unsigned int Size_4; // [rsp+84h] [rbp-84h] BYREF
  int v36; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-78h] BYREF
  __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  __int64 IndependentPages; // [rsp+A0h] [rbp-68h]
  __int64 v40; // [rsp+A8h] [rbp-60h]
  __int64 KernelStack; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v42; // [rsp+B8h] [rbp-50h]
  _QWORD v43[3]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v44[184]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v44, 0, sizeof(v44));
  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_82;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x500 )
    KeRegisteredProcessors = 1280;
  KiBarrierWait = 1;
  if ( !(unsigned __int8)KeIsHyperThreadingEnabled() )
    KiResetBootProcessorApicMask();
  v3 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  if ( KeNumprocSpecified && KeNumprocSpecified < v3 )
    v3 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v3 )
    v3 = KeBootprocSpecified;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  if ( (int)KiInitializePrcbContext((__int64)CurrentPrcb, 0LL) < 0 )
    goto LABEL_82;
  if ( !MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0LL) )
    goto LABEL_82;
  v37 = (__int64)KeGetPcr()->Prcb.ExceptionStack + 80;
  if ( !MmAllocateIsrStack(&v37, 0LL) )
    goto LABEL_82;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v7 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x500 )
    MaximumProcessorCount = 1280;
  v8 = KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
  if ( MaximumProcessorCount <= v8 )
    v8 = MaximumProcessorCount;
  if ( KeNumprocSpecified && KeNumprocSpecified < v8 )
    v8 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v8 > v3 )
    v8 = v3;
  if ( !(unsigned int)KiAllocateCpuSetData(v8) )
    goto LABEL_82;
  v9 = KiComputeProcessorDataSize(v8, &v36, &Size_4);
  v43[0] = (unsigned int)v36;
  v43[1] = Size_4;
  Size = v9;
  if ( (int)HvlStartBootLogicalProcessors(Size_4) < 0 )
    goto LABEL_82;
  v10 = 0;
  while ( (unsigned int)KeNumberProcessors_0 < v3 )
  {
    v33 = -1;
    LOWORD(v32) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(++v5, &v33, (unsigned __int16 *)&v32) )
    {
      ++v10;
      IndependentPages = MmAllocateIndependentPagesEx(v9, (unsigned __int16)v32, v43, 2u);
      if ( !IndependentPages )
        goto LABEL_82;
      if ( !ExCreatePoolTagTable(v10, v32) )
        goto LABEL_82;
      KernelStack = MmCreateKernelStack(0, (unsigned __int16)v32, 0LL);
      v11 = KernelStack;
      if ( !KernelStack )
        goto LABEL_82;
      v12 = MmCreateKernelStack(0, (unsigned __int16)v32, 0LL);
      v42 = v12;
      if ( !v12 )
        goto LABEL_82;
      v38 = 0LL;
      if ( !MmAllocateIsrStack(&v38, (unsigned __int16)v32) )
        goto LABEL_82;
      v37 = 0LL;
      if ( !MmAllocateIsrStack(&v37, (unsigned __int16)v32) )
        goto LABEL_82;
      v40 = KeNodeBlock[(unsigned __int16)v32];
      LODWORD(BugCheckParameter4) = Size;
      v13 = KxInitializeProcessorState(
              v44,
              (_QWORD *)KeLoaderBlock_0,
              IndependentPages,
              0,
              BugCheckParameter4,
              (unsigned __int16)v32,
              v10,
              v8,
              v36,
              Size_4,
              v11,
              v12,
              v38,
              v37);
      if ( !v13 )
        goto LABEL_82;
      v14 = (_OWORD *)KeNodeBlock[(unsigned __int16)v32];
      if ( (unsigned int)HvlInitializeProcessor((_SLIST_HEADER *)v13)
        || !(unsigned int)MmInitializeProcessor(v13)
        || (int)KiInitializePrcbContext(v13, (unsigned __int16)v32) < 0
        || (int)KeInitializeTimerTable(v13) < 0 )
      {
        goto LABEL_82;
      }
      if ( !(unsigned __int8)HalStartNextProcessor(v44, v10, v33) )
      {
        KiRemoveProcessorFromGroupDatabase(v13);
        v19 = v40;
        v20 = 3LL;
        v21 = (_OWORD *)v40;
        do
        {
          *v21 = *v14;
          v21[1] = v14[1];
          v21[2] = v14[2];
          v21[3] = v14[3];
          v21[4] = v14[4];
          v21[5] = v14[5];
          v21[6] = v14[6];
          v21 += 8;
          v22 = v14[7];
          v14 += 8;
          *(v21 - 1) = v22;
          --v20;
        }
        while ( v20 );
        KeNodeBlock[(unsigned __int16)v32] = v19;
        HvlDeleteProcessor((struct _KPRCB *)v13, v19, (MEMORY_CACHING_TYPE)128);
        MmDeleteProcessor(v13);
        ExDeletePoolTagTable(v10);
        KiUnshadowProcessorAllocation(v13, (__int64)v44);
        MmFreeIndependentPages(IndependentPages, Size);
        MmDeleteKernelStack(KernelStack, 0);
        MmDeleteKernelStack(v42, 0);
        if ( v38 )
          MmFreeIsrStack(v38);
        if ( v37 )
          MmFreeIsrStack(v37);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock(v13);
      KiUpdateProcessorCount(v10, *(unsigned __int8 *)(v13 + 208));
      v9 = Size;
    }
    if ( v5 >= 0x4FF )
      break;
  }
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v15 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v15 & 0x3333333333333333LL)
                         + ((v15 >> 2) & 0x3333333333333333LL)
                         + (((v15 & 0x3333333333333333LL) + ((v15 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 == (_DWORD)KeNumberProcessors_0 )
      goto LABEL_43;
LABEL_82:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v24 = (_OWORD *)((char *)&KiNodeInit + 384 * i);
    if ( (_OWORD *)KeNodeBlock[i] == v24 )
    {
      v25 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C0uLL, 0x2020654Bu);
      v26 = (__int64)v25;
      if ( !v25 )
        goto LABEL_82;
      memset(v25, 0, 0x1C0uLL);
      v27 = 3LL;
      v28 = (_OWORD *)v26;
      do
      {
        *v28 = *v24;
        v28[1] = v24[1];
        v28[2] = v24[2];
        v28[3] = v24[3];
        v28[4] = v24[4];
        v28[5] = v24[5];
        v28[6] = v24[6];
        v28 += 8;
        v29 = v24[7];
        v24 += 8;
        *(v28 - 1) = v29;
        --v27;
      }
      while ( v27 );
      KeNodeBlock[i] = v26;
    }
  }
LABEL_43:
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 5813248),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  KiConfigureAllSchedulingInformation();
  LOBYTE(v16) = 1;
  ((void (__fastcall *)(__int64, _QWORD))off_1404243F0[0])(v16, 0LL);
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v7 <= (unsigned int)KeNumberProcessors_0 )
    {
      v17 = KeNumberProcessors_0;
LABEL_48:
      KeMaximumProcessors = v17;
      goto LABEL_49;
    }
    v30 = KeRegisteredProcessors
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 142)
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 143);
    KeMaximumProcessors = v30;
    if ( v30 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      KeMaximumProcessors = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v30 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
    }
    if ( v30 > v7 )
    {
      KeMaximumProcessors = v7;
      v30 = v7;
    }
    v17 = 1280;
    if ( v30 > 0x500 )
      goto LABEL_48;
  }
LABEL_49:
  if ( !KeDynamicPartitioningSupported )
    KiMaximumGroups = KiActiveGroups;
  KiBootProcessorsStarted = 1;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBootProcessorCount = result;
  KiBarrierWait = 0;
  return result;
}
