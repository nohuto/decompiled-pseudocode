/*
 * XREFs of KiStartDynamicProcessor @ 0x140844028
 * Callers:
 *     KeStartDynamicProcessor @ 0x140844E10 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140001010 (MmFreeIndependentPages.c)
 *     MmUnlockPagableImageSection @ 0x140097E40 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400CA580 (MmDeleteKernelStack.c)
 *     MmAllocateIndependentPages @ 0x140109020 (MmAllocateIndependentPages.c)
 *     ExInitializeProcessor @ 0x14017D68C (ExInitializeProcessor.c)
 *     KiQueryProcessorNode @ 0x14017E69C (KiQueryProcessorNode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiDynamicProcessorInitialization @ 0x14028D728 (KiDynamicProcessorInitialization.c)
 *     KiAdjustGroupConfiguration @ 0x14028FFA8 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x14029044C (KiRemoveProcessorFromGroupDatabase.c)
 *     KiDynamicProcessorAddNotification @ 0x140293454 (KiDynamicProcessorAddNotification.c)
 *     MmDeleteProcessor @ 0x1402A6354 (MmDeleteProcessor.c)
 *     EtwpCCSwapDeleteProcessor @ 0x140314BE0 (EtwpCCSwapDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x14031A67C (ExDeletePoolTagTable.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KiInitializePrcbContext @ 0x1405737D8 (KiInitializePrcbContext.c)
 *     MmInitializeProcessor @ 0x140573A74 (MmInitializeProcessor.c)
 *     KiComputeProcessorDataSize @ 0x140573FFC (KiComputeProcessorDataSize.c)
 *     KiInitializeDynamicProcessor @ 0x14057C1F8 (KiInitializeDynamicProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x14057CA9C (KiUnshadowProcessorAllocation.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x14057CAE0 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x14057FF80 (WheaInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x14072A3FC (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14072A4B4 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x14072A5D0 (IoInitializeProcessor.c)
 *     MmAllocateIsrStack @ 0x14072ABDC (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14072ADB8 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14072AFA8 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x14072AFF4 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x14072B81C (ExCreatePoolTagTable.c)
 *     EtwInitializeProcessor @ 0x140744504 (EtwInitializeProcessor.c)
 *     CmInitializeProcessor @ 0x1407F7EE0 (CmInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140818A2C (HvlDeleteProcessor.c)
 *     MmFreeIsrStack @ 0x14085A0E4 (MmFreeIsrStack.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, SIZE_T a2, MEMORY_CACHING_TYPE a3, unsigned int a4)
{
  unsigned __int16 v4; // r14
  __int64 v5; // r15
  _OWORD *v6; // rsi
  struct _KPRCB *v7; // rdi
  __int64 KernelStack; // r13
  __int64 v9; // r12
  int v10; // ebx
  unsigned int v11; // r15d
  unsigned __int64 v12; // r14
  int v13; // ebx
  PVOID v14; // rcx
  __int64 v15; // r15
  int v16; // r14d
  __int64 v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 EtwSupport; // rcx
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v23; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v24; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v25; // [rsp+80h] [rbp-80h]
  unsigned int v26; // [rsp+84h] [rbp-7Ch]
  __int64 IndependentPages; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v30; // [rsp+98h] [rbp-68h] BYREF
  void *PoolTagTable; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  _OWORD v33[22]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v34[184]; // [rsp+210h] [rbp+110h] BYREF

  v26 = a4;
  v4 = a3;
  v24 = a2;
  v5 = 0LL;
  PoolTagTable = 0LL;
  v6 = 0LL;
  IndependentPages = 0LL;
  v7 = 0LL;
  v30 = 0LL;
  KernelStack = 0LL;
  v25 = 0;
  v9 = 0LL;
  v23 = 0;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x500
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    v10 = -1073741223;
    goto LABEL_39;
  }
  v10 = HalRegisterDynamicProcessor((unsigned int)KeRegisteredProcessors, v24);
  if ( v10 < 0 )
  {
LABEL_42:
    KiBarrierWait = 0;
    if ( v5 )
    {
      v17 = 3LL;
      v18 = (_OWORD *)v5;
      a2 = 128LL;
      do
      {
        *v18 = *v6;
        v18[1] = v6[1];
        v18[2] = v6[2];
        v18[3] = v6[3];
        v18[4] = v6[4];
        v18[5] = v6[5];
        v18[6] = v6[6];
        v18 += 8;
        v19 = v6[7];
        v6 += 8;
        *(v18 - 1) = v19;
        --v17;
      }
      while ( v17 );
      KeNodeBlock[v23] = v5;
    }
    if ( v7 )
    {
      HvlDeleteProcessor(v7, a2, a3);
      MmDeleteProcessor((__int64)v7);
      EtwSupport = (__int64)v7->EtwSupport;
      if ( EtwSupport )
      {
        EtwpCCSwapDeleteProcessor(EtwSupport);
        ExFreePoolWithTag(v7->EtwSupport, 0);
        v7->EtwSupport = 0LL;
      }
    }
    v12 = IndependentPages;
    v11 = v25;
    goto LABEL_50;
  }
  v23 = v4;
  v10 = KiQueryProcessorNode(v26, &v24, &v23);
  if ( v10 )
    goto LABEL_39;
  KiAdjustGroupConfiguration(KeNodeBlock[v23]);
  v11 = KiComputeProcessorDataSize(KeMaximumProcessors, &v29, &v28);
  v25 = v11;
  IndependentPages = MmAllocateIndependentPages(v11, v23);
  v12 = IndependentPages;
  if ( !IndependentPages )
  {
    v10 = -1073741670;
    KiBarrierWait = 0;
    return (unsigned int)v10;
  }
  v13 = v26;
  PoolTagTable = ExCreatePoolTagTable(v26, v23);
  if ( PoolTagTable )
  {
    KernelStack = MmCreateKernelStack(0, v23, 0LL);
    if ( !KernelStack || (v9 = MmCreateKernelStack(0, v23, 0LL)) == 0 || !MmAllocateIsrStack(&v30, v23) )
    {
      v10 = -1073741670;
      KiBarrierWait = 0;
LABEL_50:
      if ( PoolTagTable )
        ExDeletePoolTagTable(v26);
      goto LABEL_52;
    }
    v5 = KeNodeBlock[v23];
    v32 = v5;
    memset(v33, 0, sizeof(v33));
    v33[1] = *(_OWORD *)&PsLoadedModuleList;
    LODWORD(Size) = v25;
    v7 = (struct _KPRCB *)KxInitializeProcessorState(
                            v34,
                            v33,
                            v12,
                            1,
                            Size,
                            v23,
                            v13,
                            KeMaximumProcessors,
                            v29,
                            v28,
                            KernelStack,
                            v9,
                            v30);
    if ( !v7 )
    {
      v10 = -1073741670;
      goto LABEL_42;
    }
    v6 = (_OWORD *)KeNodeBlock[v23];
    if ( !(unsigned int)MmInitializeProcessor((__int64)v7) )
    {
      v10 = -1073741823;
      goto LABEL_40;
    }
    v10 = KiInitializePrcbContext((__int64)v7, v23);
    if ( v10 < 0 )
      goto LABEL_40;
    v10 = KeInitializeTimerTable((__int64)v7);
    if ( v10 < 0
      || (v10 = ExInitializeProcessor((__int64)v7, 1), v10 < 0)
      || (v10 = ObInitializeProcessor(v7), v10 < 0)
      || (v10 = IoInitializeProcessor((__int64)v7, 0LL), v10 < 0)
      || (v10 = CcInitializeProcessor((__int64)v7), v10 < 0)
      || (v10 = EtwInitializeProcessor((__int64)v7), v10 < 0)
      || (v10 = WheaInitializeProcessor((__int64)v7, 0), v10 < 0)
      || (v10 = HvlInitializeProcessor((_SLIST_HEADER *)v7), v10 < 0) )
    {
LABEL_40:
      if ( v7 )
        KiRemoveProcessorFromGroupDatabase((__int64)v7);
      goto LABEL_42;
    }
    v14 = ExPageLockHandle;
    v7->ProcessorProfileControlArea = 0LL;
    v7->ProfileEventIndexAddress = &v7->ProfileEventIndexAddress;
    MiLockPagableImageSection((ULONG_PTR)v14, 1uLL);
    KiAddProcessorToGroupSchedulingDatabase((__int64)v7);
    v15 = KeLoaderBlock_0;
    KiBarrierWait = 1;
    if ( !KeLoaderBlock_0 )
    {
      KeLoaderBlock_0 = (__int64)v33;
      v33[1] = *(_OWORD *)&PsLoadedModuleList;
    }
    v10 = KiDynamicProcessorAddNotification(0, v7->Number, v7->Group, v7->GroupIndex, v24, 0);
    v16 = 2;
    if ( v10 >= 0 )
    {
      if ( (unsigned __int8)HalStartDynamicProcessor(v34, v26, v24, v23) )
      {
        while ( *((_QWORD *)&v33[8] + 1) )
          _mm_pause();
        KiInitializeDynamicProcessor((struct _SINGLE_LIST_ENTRY *)v7);
        v16 = 1;
      }
      else
      {
        v10 = -1073741823;
      }
    }
    KiDynamicProcessorAddNotification(v16, v7->Number, v7->Group, v7->GroupIndex, v24, v10);
    if ( v10 >= 0 )
    {
      WheaInitializeProcessor((__int64)v7, 1u);
      CmInitializeProcessor((__int64)v7);
      KiDynamicProcessorInitialization((__int64)v7);
    }
    KeLoaderBlock_0 = v15;
    MmUnlockPagableImageSection(ExPageLockHandle);
    v5 = v32;
LABEL_39:
    if ( v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_40;
  }
  v10 = -1073741670;
  KiBarrierWait = 0;
LABEL_52:
  if ( v12 )
  {
    if ( v7 )
      KiUnshadowProcessorAllocation((__int64)v7, (__int64)v34);
    MmFreeIndependentPages(v12, v11);
  }
  if ( KernelStack )
    MmDeleteKernelStack(KernelStack, 0);
  if ( v9 )
    MmDeleteKernelStack(v9, 0);
  if ( v30 )
    MmFreeIsrStack();
  return (unsigned int)v10;
}
