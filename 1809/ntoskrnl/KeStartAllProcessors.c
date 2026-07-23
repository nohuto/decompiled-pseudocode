/*
 * XREFs of KeStartAllProcessors @ 0x1409B6DAC
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140001010 (MmFreeIndependentPages.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400CA580 (MmDeleteKernelStack.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     KiQueryProcessorNode @ 0x14017E69C (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x14017EBD0 (HvlStartBootLogicalProcessors.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x14029044C (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x1402A6354 (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x14031A67C (ExDeletePoolTagTable.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     KiConfigureSchedulingInformation @ 0x1405734C0 (KiConfigureSchedulingInformation.c)
 *     KiInitializePrcbContext @ 0x1405737D8 (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x1405738EC (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x140573988 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x140573A74 (MmInitializeProcessor.c)
 *     KiComputeProcessorDataSize @ 0x140573FFC (KiComputeProcessorDataSize.c)
 *     KiUnshadowProcessorAllocation @ 0x14057CA9C (KiUnshadowProcessorAllocation.c)
 *     MmAllocateIsrStack @ 0x14072ABDC (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14072ADB8 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14072AFA8 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x14072AFF4 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x14072B81C (ExCreatePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x140818A2C (HvlDeleteProcessor.c)
 *     KiResetBootProcessorApicMask @ 0x140844004 (KiResetBootProcessorApicMask.c)
 *     KiAllocateCpuSetData @ 0x1409B6B78 (KiAllocateCpuSetData.c)
 */

ULONG KeStartAllProcessors()
{
  KPCR *Pcr; // rax
  void *Base; // rbx
  PVOID PoolWithTag; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edi
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  unsigned int v10; // r13d
  unsigned int v11; // ebx
  unsigned int v12; // esi
  unsigned int v13; // r15d
  unsigned __int64 v14; // rcx
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // rsi
  _OWORD *v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned int v23; // esi
  unsigned __int64 v24; // rcx
  char IsHyperThreadingEnabled; // r15
  unsigned int v26; // r8d
  __int64 v27; // r10
  __int64 v28; // rdi
  __int64 v29; // rdx
  int v30; // r14d
  unsigned int i; // r9d
  __int64 v32; // r11
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  int v38; // eax
  ULONG result; // eax
  SIZE_T v40; // rdx
  __int64 v41; // rcx
  _OWORD *v42; // rax
  __int128 v43; // xmm1
  unsigned int v44; // edi
  _OWORD *v45; // rbx
  PVOID v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int128 v49; // xmm1
  unsigned int v50; // ecx
  unsigned int v51; // edx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v53; // [rsp+78h] [rbp-90h] BYREF
  int v54; // [rsp+7Ch] [rbp-8Ch]
  unsigned int Size; // [rsp+80h] [rbp-88h]
  unsigned int Size_4; // [rsp+84h] [rbp-84h] BYREF
  __int64 IndependentPages; // [rsp+88h] [rbp-80h]
  int v58; // [rsp+90h] [rbp-78h] BYREF
  int v59; // [rsp+94h] [rbp-74h] BYREF
  unsigned int MaximumProcessorCount; // [rsp+98h] [rbp-70h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-68h]
  __int64 v62; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-58h]
  __int64 KernelStack; // [rsp+B8h] [rbp-50h]
  _QWORD v65[3]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v66[184]; // [rsp+D8h] [rbp-30h] BYREF

  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_99;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x500 )
    KeRegisteredProcessors = 1280;
  KiBarrierWait = 1;
  memset(v66, 0, sizeof(v66));
  if ( !(unsigned __int8)HalIsHyperThreadingEnabled(v4, v3, v5) )
    KiResetBootProcessorApicMask();
  v6 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  if ( KeNumprocSpecified && KeNumprocSpecified < v6 )
    v6 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v6 )
    v6 = KeBootprocSpecified;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  if ( (int)KiInitializePrcbContext((__int64)CurrentPrcb, 0LL) < 0 || !MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0) )
    goto LABEL_99;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v9 = MaximumProcessorCount;
  v10 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x500 )
    v9 = 1280;
  v11 = KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
  if ( v9 <= v11 )
    v11 = v9;
  if ( KeNumprocSpecified && KeNumprocSpecified < v11 )
    v11 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v11 > v6 )
    v11 = v6;
  if ( !(unsigned int)KiAllocateCpuSetData(v11) )
    goto LABEL_99;
  v12 = KiComputeProcessorDataSize(v11, &v59, &v58);
  v65[0] = (unsigned int)v59;
  v65[1] = (unsigned int)v58;
  Size = v12;
  if ( (int)HvlStartBootLogicalProcessors(v58) < 0 )
    goto LABEL_99;
  v13 = 0;
  do
  {
    v14 = 0xFFFFLL;
    if ( (unsigned int)KeNumberProcessors_0 >= v6 )
      break;
    Size_4 = -1;
    LOWORD(v53) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(++v8, &Size_4, (unsigned __int16 *)&v53) )
    {
      ++v13;
      IndependentPages = MmAllocateIndependentPagesEx(v12, (unsigned __int16)v53, v65, 2u);
      if ( !IndependentPages )
        goto LABEL_99;
      if ( !ExCreatePoolTagTable(v13, v53) )
        goto LABEL_99;
      KernelStack = MmCreateKernelStack(0, v53, 0LL);
      v15 = KernelStack;
      if ( !KernelStack )
        goto LABEL_99;
      v16 = MmCreateKernelStack(0, v53, 0LL);
      v61 = v16;
      if ( !v16 )
        goto LABEL_99;
      v62 = 0LL;
      if ( !MmAllocateIsrStack(&v62, v53) )
        goto LABEL_99;
      v63 = KeNodeBlock[(unsigned __int16)v53];
      LODWORD(BugCheckParameter4) = Size;
      v17 = KxInitializeProcessorState(
              v66,
              (_QWORD *)KeLoaderBlock_0,
              IndependentPages,
              0,
              BugCheckParameter4,
              (unsigned __int16)v53,
              v13,
              v11,
              v59,
              v58,
              v15,
              v16,
              v62);
      if ( !v17 )
        goto LABEL_99;
      v18 = (_OWORD *)KeNodeBlock[(unsigned __int16)v53];
      if ( (unsigned int)HvlInitializeProcessor((_SLIST_HEADER *)v17)
        || !(unsigned int)MmInitializeProcessor(v17)
        || (int)KiInitializePrcbContext(v17, (unsigned __int16)v53) < 0
        || (int)KeInitializeTimerTable(v17) < 0 )
      {
        goto LABEL_99;
      }
      if ( !(unsigned __int8)HalStartNextProcessor(v66, v13, Size_4) )
      {
        KiRemoveProcessorFromGroupDatabase(v17);
        v40 = v63;
        v41 = 3LL;
        v42 = (_OWORD *)v63;
        do
        {
          *v42 = *v18;
          v42[1] = v18[1];
          v42[2] = v18[2];
          v42[3] = v18[3];
          v42[4] = v18[4];
          v42[5] = v18[5];
          v42[6] = v18[6];
          v42 += 8;
          v43 = v18[7];
          v18 += 8;
          *(v42 - 1) = v43;
          --v41;
        }
        while ( v41 );
        KeNodeBlock[(unsigned __int16)v53] = v40;
        HvlDeleteProcessor((struct _KPRCB *)v17, v40, (MEMORY_CACHING_TYPE)0x140000000uLL);
        MmDeleteProcessor(v17);
        ExDeletePoolTagTable(v13);
        KiUnshadowProcessorAllocation(v17, (__int64)v66);
        MmFreeIndependentPages(IndependentPages, Size);
        MmDeleteKernelStack(KernelStack, 0);
        MmDeleteKernelStack(v61, 0);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock(v17);
      KiUpdateProcessorCount(v13, *(unsigned __int8 *)(v17 + 208));
      v12 = Size;
    }
  }
  while ( v8 < 0x4FF );
  IndependentPages = 0x3333333333333333LL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v19 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    v14 = (0x101010101010101LL
         * (((v19 & 0x3333333333333333LL)
           + ((v19 >> 2) & 0x3333333333333333LL)
           + (((v19 & 0x3333333333333333LL) + ((v19 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( (_DWORD)v14 == (_DWORD)KeNumberProcessors_0 )
    {
      v20 = 0x140000000uLL;
LABEL_41:
      v21 = 0;
      goto LABEL_42;
    }
LABEL_99:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  v21 = 0;
  v20 = 0x140000000uLL;
  v44 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v45 = (_OWORD *)((char *)&KiNodeInit + 384 * v44);
      if ( (_OWORD *)KeNodeBlock[v44] == v45 )
      {
        v46 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C0uLL, 0x2020654Bu);
        v47 = (__int64)v46;
        if ( !v46 )
          goto LABEL_99;
        memset(v46, 0, 0x1C0uLL);
        v48 = 3LL;
        v14 = v47;
        do
        {
          *(_OWORD *)v14 = *v45;
          *(_OWORD *)(v14 + 16) = v45[1];
          *(_OWORD *)(v14 + 32) = v45[2];
          *(_OWORD *)(v14 + 48) = v45[3];
          *(_OWORD *)(v14 + 64) = v45[4];
          *(_OWORD *)(v14 + 80) = v45[5];
          *(_OWORD *)(v14 + 96) = v45[6];
          v14 += 128LL;
          v49 = v45[7];
          v45 += 8;
          *(_OWORD *)(v14 - 16) = v49;
          --v48;
        }
        while ( v48 );
        v20 = 0x140000000uLL;
        KeNodeBlock[v44] = v47;
      }
      ++v44;
    }
    while ( v44 < (unsigned __int16)KeNumberNodes );
    goto LABEL_41;
  }
LABEL_42:
  v22 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 5616512),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  v23 = 0;
  IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(v14, v22, v20);
  LOBYTE(v54) = IsHyperThreadingEnabled;
  Size = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v26 = KeNumberProcessors_0;
      v24 = v23;
      if ( (unsigned int)KeNumberProcessors_0 > 0x40 )
        v26 = 64;
      v27 = KeNodeBlock[v23];
      v61 = v27;
      v28 = *(_QWORD *)(v27 + 136);
      v29 = v28;
      if ( v28 )
      {
        v30 = *(unsigned __int16 *)(v27 + 144);
        for ( i = 0; i < 0x40; ++i )
        {
          v32 = v29;
          if ( !v29 )
            break;
          if ( _bittest64(&v29, i) )
          {
            v33 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v30 + i]];
            v34 = IsHyperThreadingEnabled
                ? *(_QWORD *)(v33 + 24920)
                : v28 & *(_QWORD *)(v33 + 8LL * *(unsigned __int8 *)(v33 + 208) + 24728);
            v35 = v34;
            v36 = v34 >> 1;
            v29 = v32 & ~v34;
            v37 = (IndependentPages & (v35 - (v36 & 0x5555555555555555LL)))
                + (IndependentPages & ((v35 - (v36 & 0x5555555555555555LL)) >> 2));
            v24 = (0x101010101010101LL * ((v37 + (v37 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            if ( (unsigned int)v24 < v26 )
              v26 = (unsigned int)((0x101010101010101LL * ((v37 + (v37 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          }
        }
        v23 = Size;
        *(_BYTE *)(v61 + 150) = v26;
        do
        {
          if ( !v28 )
            break;
          if ( _bittest64(&v28, v21) )
          {
            v28 &= ~(1LL << v21);
            KiConfigureSchedulingInformation(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v30 + v21]], 0);
          }
          ++v21;
        }
        while ( v21 < 0x40 );
        IsHyperThreadingEnabled = v54;
        v21 = 0;
      }
      Size = ++v23;
    }
    while ( v23 < (unsigned __int16)KeNumberNodes );
    v10 = MaximumProcessorCount;
  }
  LOBYTE(v24) = 1;
  ((void (__fastcall *)(unsigned __int64, _QWORD))off_1403FF3F0[0])(v24, 0LL);
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v10 <= (unsigned int)KeNumberProcessors_0 )
    {
      v38 = KeNumberProcessors_0;
LABEL_67:
      KeMaximumProcessors = v38;
      goto LABEL_68;
    }
    v50 = KeRegisteredProcessors * *(_DWORD *)(KiProcessorBlock[0] + 160) * *(_DWORD *)(KiProcessorBlock[0] + 164);
    KeMaximumProcessors = v50;
    v51 = v50;
    if ( v50 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      KeMaximumProcessors = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v50 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v51 = v50;
    }
    if ( v50 > v10 )
    {
      KeMaximumProcessors = v10;
      v51 = v10;
    }
    v38 = 1280;
    if ( v51 > 0x500 )
      goto LABEL_67;
  }
LABEL_68:
  if ( !KeDynamicPartitioningSupported )
    KiMaximumGroups = KiActiveGroups;
  KiBootProcessorsStarted = 1;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBootProcessorCount = result;
  KiBarrierWait = 0;
  return result;
}
