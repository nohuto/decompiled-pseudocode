/*
 * XREFs of KiStartDynamicProcessor @ 0x14087DF0C
 * Callers:
 *     KeStartDynamicProcessor @ 0x14087ED60 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1400A3B60 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400A4B30 (MmDeleteKernelStack.c)
 *     MmAllocateIndependentPages @ 0x1400DC990 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     MmUnlockPagableImageSection @ 0x14012A480 (MmUnlockPagableImageSection.c)
 *     KiQueryProcessorNode @ 0x140187358 (KiQueryProcessorNode.c)
 *     ExInitializeProcessor @ 0x14018BD8C (ExInitializeProcessor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiDynamicProcessorInitialization @ 0x1402A338C (KiDynamicProcessorInitialization.c)
 *     KiAdjustGroupConfiguration @ 0x1402A6538 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x1402A69DC (KiRemoveProcessorFromGroupDatabase.c)
 *     KiDynamicProcessorAddNotification @ 0x1402A99A4 (KiDynamicProcessorAddNotification.c)
 *     MmDeleteProcessor @ 0x1402BD60C (MmDeleteProcessor.c)
 *     EtwpCCSwapDeleteProcessor @ 0x1403327A0 (EtwpCCSwapDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x140338C98 (ExDeletePoolTagTable.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     KiComputeProcessorDataSize @ 0x14059F030 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x14059F424 (KiInitializePrcbContext.c)
 *     MmInitializeProcessor @ 0x14059F6C4 (MmInitializeProcessor.c)
 *     KiInitializeDynamicProcessor @ 0x1405AB0C8 (KiInitializeDynamicProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x1405AB99C (KiUnshadowProcessorAllocation.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x1405AB9E0 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x1405AEEA8 (WheaInitializeProcessor.c)
 *     MmLockPagableSectionByHandle @ 0x1406A14E0 (MmLockPagableSectionByHandle.c)
 *     MmAllocateIsrStack @ 0x14074E3A8 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14074E580 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14074E770 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x14074E7BC (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x14074F024 (ExCreatePoolTagTable.c)
 *     CcInitializeProcessor @ 0x14075EB78 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14075EC30 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x14075ED4C (IoInitializeProcessor.c)
 *     EtwInitializeProcessor @ 0x14076E0C0 (EtwInitializeProcessor.c)
 *     CmInitializeProcessor @ 0x14082F818 (CmInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14085094C (HvlDeleteProcessor.c)
 *     MmFreeIsrStack @ 0x140892350 (MmFreeIsrStack.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, unsigned int a2, unsigned __int16 a3, unsigned int a4)
{
  SIZE_T v5; // rdx
  MEMORY_CACHING_TYPE v6; // r8d
  __int64 v7; // r14
  _OWORD *v8; // r15
  struct _KPRCB *v9; // rdi
  __int64 KernelStack; // r13
  __int64 v11; // r12
  int v12; // ebx
  unsigned int v13; // r14d
  unsigned __int64 v14; // rsi
  int v15; // ebx
  PVOID v16; // rcx
  __int64 v17; // r14
  int v18; // esi
  __int64 v19; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int64 EtwSupport; // rcx
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v25; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v26; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+80h] [rbp-80h]
  unsigned int v28; // [rsp+84h] [rbp-7Ch]
  __int64 IndependentPages; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+90h] [rbp-70h] BYREF
  int v31; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v32; // [rsp+98h] [rbp-68h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-60h] BYREF
  void *PoolTagTable; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  _OWORD v36[22]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v37[184]; // [rsp+220h] [rbp+120h] BYREF

  v26 = a2;
  v28 = a4;
  memset(v36, 0, sizeof(v36));
  memset(v37, 0, sizeof(v37));
  PoolTagTable = 0LL;
  v7 = 0LL;
  IndependentPages = 0LL;
  v8 = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  v32 = 0LL;
  KernelStack = 0LL;
  v27 = 0;
  v11 = 0LL;
  v25 = 0;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x500
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    v12 = -1073741223;
    goto LABEL_40;
  }
  v12 = HalRegisterDynamicProcessor((unsigned int)KeRegisteredProcessors, v26);
  if ( v12 < 0 )
  {
LABEL_43:
    KiBarrierWait = 0;
    if ( v7 )
    {
      v19 = 3LL;
      v20 = (_OWORD *)v7;
      v5 = 128LL;
      do
      {
        *v20 = *v8;
        v20[1] = v8[1];
        v20[2] = v8[2];
        v20[3] = v8[3];
        v20[4] = v8[4];
        v20[5] = v8[5];
        v20[6] = v8[6];
        v20 += 8;
        v21 = v8[7];
        v8 += 8;
        *(v20 - 1) = v21;
        --v19;
      }
      while ( v19 );
      KeNodeBlock[v25] = v7;
    }
    if ( v9 )
    {
      HvlDeleteProcessor(v9, v5, v6);
      MmDeleteProcessor((__int64)v9);
      EtwSupport = (__int64)v9->EtwSupport;
      if ( EtwSupport )
      {
        EtwpCCSwapDeleteProcessor(EtwSupport);
        ExFreePoolWithTag(v9->EtwSupport, 0);
        v9->EtwSupport = 0LL;
      }
    }
    v14 = IndependentPages;
    v13 = v27;
    goto LABEL_51;
  }
  v25 = a3;
  v12 = KiQueryProcessorNode(v28, &v26, &v25);
  if ( v12 )
    goto LABEL_40;
  KiAdjustGroupConfiguration(KeNodeBlock[v25]);
  v13 = KiComputeProcessorDataSize(KeMaximumProcessors, &v31, &v30);
  v27 = v13;
  IndependentPages = MmAllocateIndependentPages(v13, v25);
  v14 = IndependentPages;
  if ( !IndependentPages )
  {
    v12 = -1073741670;
    KiBarrierWait = 0;
    return (unsigned int)v12;
  }
  v15 = v28;
  PoolTagTable = ExCreatePoolTagTable(v28, v25);
  if ( PoolTagTable )
  {
    KernelStack = MmCreateKernelStack(0, v25, 0LL);
    if ( !KernelStack
      || (v11 = MmCreateKernelStack(0, v25, 0LL)) == 0
      || !MmAllocateIsrStack(&v32, v25)
      || !MmAllocateIsrStack(&v33, v25) )
    {
      v12 = -1073741670;
      KiBarrierWait = 0;
LABEL_51:
      if ( PoolTagTable )
        ExDeletePoolTagTable(v28);
      goto LABEL_53;
    }
    v7 = KeNodeBlock[v25];
    v35 = v7;
    v36[1] = *(_OWORD *)&PsLoadedModuleList;
    LODWORD(Size) = v27;
    v9 = (struct _KPRCB *)KxInitializeProcessorState(
                            v37,
                            v36,
                            v14,
                            1,
                            Size,
                            v25,
                            v15,
                            KeMaximumProcessors,
                            v31,
                            v30,
                            KernelStack,
                            v11,
                            v32,
                            v33);
    if ( !v9 )
    {
      v12 = -1073741670;
      goto LABEL_43;
    }
    v8 = (_OWORD *)KeNodeBlock[v25];
    if ( !(unsigned int)MmInitializeProcessor((__int64)v9) )
    {
      v12 = -1073741823;
      goto LABEL_41;
    }
    v12 = KiInitializePrcbContext((__int64)v9, v25);
    if ( v12 < 0 )
      goto LABEL_41;
    v12 = KeInitializeTimerTable((__int64)v9);
    if ( v12 < 0
      || (v12 = ExInitializeProcessor((__int64)v9, 1), v12 < 0)
      || (v12 = ObInitializeProcessor(v9), v12 < 0)
      || (v12 = IoInitializeProcessor((__int64)v9, 0LL), v12 < 0)
      || (v12 = CcInitializeProcessor((__int64)v9), v12 < 0)
      || (v12 = EtwInitializeProcessor((__int64)v9), v12 < 0)
      || (v12 = WheaInitializeProcessor((__int64)v9, 0), v12 < 0)
      || (v12 = HvlInitializeProcessor((_SLIST_HEADER *)v9), v12 < 0) )
    {
LABEL_41:
      if ( v9 )
        KiRemoveProcessorFromGroupDatabase((__int64)v9);
      goto LABEL_43;
    }
    v16 = ExPageLockHandle;
    v9->ProcessorProfileControlArea = 0LL;
    v9->ProfileEventIndexAddress = &v9->ProfileEventIndexAddress;
    MmLockPagableSectionByHandle(v16);
    KiAddProcessorToGroupSchedulingDatabase((__int64)v9);
    v17 = KeLoaderBlock_0;
    KiBarrierWait = 1;
    if ( !KeLoaderBlock_0 )
    {
      KeLoaderBlock_0 = (__int64)v36;
      v36[1] = *(_OWORD *)&PsLoadedModuleList;
    }
    v12 = KiDynamicProcessorAddNotification(0, v9->Number, v9->Group, v9->GroupIndex, v26, 0);
    v18 = 2;
    if ( v12 >= 0 )
    {
      if ( (unsigned __int8)HalStartDynamicProcessor(v37, v28, v26, v25) )
      {
        while ( *((_QWORD *)&v36[8] + 1) )
          _mm_pause();
        KiInitializeDynamicProcessor((__int64)v9);
        v18 = 1;
      }
      else
      {
        v12 = -1073741823;
      }
    }
    KiDynamicProcessorAddNotification(v18, v9->Number, v9->Group, v9->GroupIndex, v26, v12);
    if ( v12 >= 0 )
    {
      WheaInitializeProcessor((__int64)v9, 1u);
      CmInitializeProcessor((__int64)v9);
      KiDynamicProcessorInitialization((__int64)v9);
    }
    KeLoaderBlock_0 = v17;
    MmUnlockPagableImageSection(ExPageLockHandle);
    v7 = v35;
LABEL_40:
    if ( v12 >= 0 )
      return (unsigned int)v12;
    goto LABEL_41;
  }
  v12 = -1073741670;
  KiBarrierWait = 0;
LABEL_53:
  if ( v14 )
  {
    if ( v9 )
      KiUnshadowProcessorAllocation((__int64)v9, (__int64)v37);
    MmFreeIndependentPages(v14, v13);
  }
  if ( KernelStack )
    MmDeleteKernelStack(KernelStack, 0);
  if ( v11 )
    MmDeleteKernelStack(v11, 0);
  if ( v32 )
    MmFreeIsrStack();
  if ( v33 )
    MmFreeIsrStack();
  return (unsigned int)v12;
}
