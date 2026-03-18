/*
 * XREFs of ACPIDevicePowerDpc @ 0x1C0016760
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDevicePowerProcessPhase4 @ 0x1C000C388 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C000C45C (ACPIDevicePowerProcessPhase3.c)
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qsLLdqss @ 0x1C0016F30 (WPP_RECORDER_SF_qsLLdqss.c)
 *     ACPIInternalMovePowerList @ 0x1C0019A20 (ACPIInternalMovePowerList.c)
 *     ACPIDeviceCompleteRequest @ 0x1C0026AE4 (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceRecordDependencies @ 0x1C0027C20 (ACPIDeviceRecordDependencies.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C0027E90 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerProcessBlockedItems @ 0x1C0027F94 (ACPIDevicePowerProcessBlockedItems.c)
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C0029200 (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIDeviceRecordBlockedOnPhase3List @ 0x1C0030238 (ACPIDeviceRecordBlockedOnPhase3List.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C0051BB0 (ACPIMovePowerListUnblockedItems.c)
 */

void __fastcall ACPIDevicePowerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  PVOID *v5; // rdi
  PVOID *v6; // rbx
  PVOID **v7; // rcx
  PVOID *v8; // rbx
  char v9; // bp
  PVOID *v10; // rsi
  PVOID *v11; // r14
  unsigned __int32 v12; // eax
  unsigned __int32 v13; // ebx
  __int64 v14; // rdx
  int v15; // edx
  char v16; // si
  _QWORD *v17; // rcx
  void *v18; // r10
  PVOID v19; // rax
  void *v20; // r9
  __int64 v21; // r8
  const char *v22; // r8
  PVOID *v23; // rdi
  PVOID *v24; // rsi
  unsigned __int32 v25; // eax
  __int64 v26; // rdx
  int v27; // edx
  char v28; // di
  _QWORD *v29; // r8
  void *v30; // r10
  PVOID v31; // rax
  void *v32; // r9
  __int64 v33; // rcx
  const char *v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  _QWORD *v39; // rcx
  void **v40; // rax
  PVOID **v41; // rax
  _QWORD *v42; // rcx
  void **v43; // rax
  PVOID **v44; // rax
  __int64 i; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-88h]
  int v47; // [rsp+48h] [rbp-60h]
  PVOID Entry[2]; // [rsp+70h] [rbp-38h] BYREF

  Entry[1] = Entry;
  Entry[0] = Entry;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  v4 = AcpiPowerDpcFlags;
  while ( (AcpiPowerDpcFlags & 2) != 0 )
  {
    AcpiPowerDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiPowerQueueList != &AcpiPowerQueueList )
      ACPIInternalMovePowerList(&AcpiPowerQueueList, Entry);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
    if ( (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List )
    {
      if ( (__int64 *)AcpiPowerBlockedOnPhase3List != &AcpiPowerBlockedOnPhase3List )
        ACPIInternalMovePowerList(&AcpiPowerBlockedOnPhase3List, Entry);
    }
    else
    {
      if ( Entry[0] == Entry )
        goto LABEL_9;
      ACPIDeviceRecordBlockedOnPhase3List(Entry);
    }
    if ( Entry[0] != Entry )
    {
      ACPIDeviceRecordDependencies(Entry);
      ACPIInternalMovePowerList(Entry, &AcpiPowerPhase0List);
    }
LABEL_9:
    if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
      ACPIDevicePowerProcessBlockedItems();
    v5 = (PVOID *)AcpiPowerPhase0List;
    if ( AcpiPowerPhase0List != &AcpiPowerPhase0List )
    {
      v9 = 1;
      while ( 1 )
      {
        v10 = (PVOID *)*v5;
        v11 = v5;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)v5 + 52, 1, 1);
        v13 = v12;
        if ( v12 >= 5 )
LABEL_124:
          KeBugCheckEx(0xA3u, 1uLL, 0xC1743uLL, 0LL, 0LL);
        _mm_lfence();
        v14 = AcpiDevicePowerProcessPhase0Dispatch[v12];
        if ( !v14 )
          goto LABEL_39;
        _InterlockedCompareExchange((volatile signed __int32 *)v5 + 52, 1, v12);
        if ( (*(int (__fastcall **)(PVOID *))(v14 + 8LL * *((int *)v5 + 12)))(v5) < 0 )
          break;
LABEL_43:
        if ( v5 == &AcpiPowerPhase0List )
        {
          if ( v9 )
            ACPIInternalMovePowerList(&AcpiPowerPhase0List, &AcpiPowerPhase1List);
          goto LABEL_12;
        }
      }
      v13 = 0;
LABEL_39:
      v5 = v10;
      if ( v13 == 1 )
      {
        v15 = *((_DWORD *)v11 + 14);
        if ( (v15 & 0x10000000) != 0
          || (v16 = 0, (v15 & 0x1000000) != 0)
          && ((v15 & 0x4000000) != 0
           || (*((_BYTE *)v11[5] + 952) & 0x40) != 0
           && (v11[8] != v11 + 8 || (v15 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
        {
          v16 = 1;
        }
        v17 = v11[5];
        v18 = &unk_1C006FE7D;
        LOBYTE(v19) = 0;
        v20 = &unk_1C006FE7D;
        if ( v17 )
        {
          v21 = v17[1];
          v19 = v11[5];
          if ( (v21 & 0x200000000000LL) != 0 )
          {
            v18 = (void *)v17[70];
            if ( (v21 & 0x400000000000LL) != 0 )
              v20 = (void *)v17[71];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( v16 )
            v22 = "IS";
          else
            v22 = "NOT";
          WPP_RECORDER_SF_qsLLdqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            (_DWORD)v22,
            (_DWORD)v20,
            BugCheckParameter4,
            (char)v11,
            (__int64)v22,
            v15,
            *((_DWORD *)v17 + 238),
            v47,
            (char)v19,
            (__int64)v18,
            (__int64)v20);
        }
        if ( v16 )
        {
          v42 = *v11;
          if ( *((PVOID **)*v11 + 1) != v11
            || (v43 = (void **)v11[1], *v43 != v11)
            || (*v43 = v42,
                v42[1] = v43,
                v11[12] = &AcpiPowerPhase0List,
                v44 = (PVOID **)qword_1C00820F8,
                *(__int64 **)qword_1C00820F8 != &AcpiPowerBlockedOnDependencyList) )
          {
LABEL_111:
            __fastfail(3u);
          }
          *v11 = &AcpiPowerBlockedOnDependencyList;
          v11[1] = v44;
          *v44 = v11;
          qword_1C00820F8 = (__int64)v11;
          goto LABEL_43;
        }
      }
      else if ( !v13 )
      {
        goto LABEL_41;
      }
      v9 = 0;
LABEL_41:
      if ( v13 == 2 )
        ACPIDeviceCompleteRequest(v11);
      goto LABEL_43;
    }
LABEL_12:
    if ( (__int64 *)AcpiPowerPhase1List != &AcpiPowerPhase1List )
    {
      if ( AcpiPowerPhase0List != &AcpiPowerPhase0List )
        goto LABEL_19;
      v36 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase1List, &AcpiDevicePowerProcessPhase1Dispatch, 7LL, 0LL);
      if ( v36 >= 0 && v36 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase1List, &AcpiPowerPhase2List);
    }
    if ( AcpiPowerPhase0List == &AcpiPowerPhase0List )
    {
      if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
        && (__int64 *)AcpiPowerPhase2List != &AcpiPowerPhase2List )
      {
        v37 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase2List, &AcpiDevicePowerProcessPhase2Dispatch, 6LL, 0LL);
        if ( v37 >= 0 && v37 != 259 )
          ACPIInternalMovePowerList(&AcpiPowerPhase2List, &AcpiPowerPhase3List);
      }
      if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
        && AcpiPowerPhase0List == &AcpiPowerPhase0List
        && (__int64 *)AcpiPowerPhase3List != &AcpiPowerPhase3List
        && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
      {
        v35 = ACPIDevicePowerProcessPhase3();
        if ( v35 >= 0 )
        {
          if ( v35 == 259 )
          {
            if ( (unsigned __int8)ACPIIsPhase3ListEmptyOfUnblockedItems() )
            {
              ACPIMovePowerListUnblockedItems(&AcpiPowerPhase3List);
              for ( i = AcpiPowerPhase3List; (__int64 *)i != &AcpiPowerPhase3List; i = *(_QWORD *)i )
                *(_DWORD *)(i + 56) &= 0xEEFFFFFF;
            }
          }
          else
          {
            ACPIInternalMovePowerList(&AcpiPowerPhase3List, &AcpiPowerPhase4List);
          }
        }
      }
    }
LABEL_19:
    if ( AcpiPowerPhase4List != &AcpiPowerPhase4List )
    {
      v38 = ACPIDevicePowerProcessPhase4();
      if ( v38 >= 0 && v38 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase4List, &AcpiPowerPhase5List);
    }
    v6 = (PVOID *)AcpiPowerPhase5List;
    if ( AcpiPowerPhase5List != &AcpiPowerPhase5List )
    {
      do
      {
        v23 = (PVOID *)*v6;
        v24 = v6;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)v6 + 52, 1, 1);
        if ( v25 >= 9 )
          goto LABEL_124;
        _mm_lfence();
        v26 = AcpiDevicePowerProcessPhase5Dispatch[v25];
        if ( v26 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)v6 + 52, 1, v25);
          if ( (*(int (__fastcall **)(PVOID *))(v26 + 8LL * *((int *)v6 + 12)))(v6) >= 0 )
            continue;
          v25 = 0;
        }
        v6 = v23;
        if ( v25 == 1 )
        {
          v27 = *((_DWORD *)v24 + 14);
          if ( (v27 & 0x10000000) != 0
            || (v28 = 0, (v27 & 0x1000000) != 0)
            && ((v27 & 0x4000000) != 0
             || (*((_BYTE *)v24[5] + 952) & 0x40) != 0
             && (v24[8] != v24 + 8 || (v27 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
          {
            v28 = 1;
          }
          v29 = v24[5];
          v30 = &unk_1C006FE7D;
          LOBYTE(v31) = 0;
          v32 = &unk_1C006FE7D;
          if ( v29 )
          {
            v33 = v29[1];
            v31 = v24[5];
            if ( (v33 & 0x200000000000LL) != 0 )
            {
              v30 = (void *)v29[70];
              if ( (v33 & 0x400000000000LL) != 0 )
                v32 = (void *)v29[71];
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v34 = "IS";
            if ( !v28 )
              v34 = "NOT";
            WPP_RECORDER_SF_qsLLdqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v27,
              (_DWORD)v29,
              (_DWORD)v32,
              BugCheckParameter4,
              (char)v24,
              (__int64)v34,
              v27,
              *((_DWORD *)v29 + 238),
              v47,
              (char)v31,
              (__int64)v30,
              (__int64)v32);
          }
          if ( v28 )
          {
            v39 = *v24;
            if ( *((PVOID **)*v24 + 1) != v24 )
              goto LABEL_111;
            v40 = (void **)v24[1];
            if ( *v40 != v24 )
              goto LABEL_111;
            *v40 = v39;
            v39[1] = v40;
            v24[12] = &AcpiPowerPhase5List;
            v41 = (PVOID **)qword_1C00820F8;
            if ( *(__int64 **)qword_1C00820F8 != &AcpiPowerBlockedOnDependencyList )
              goto LABEL_111;
            *v24 = &AcpiPowerBlockedOnDependencyList;
            v24[1] = v41;
            *v41 = v24;
            qword_1C00820F8 = (__int64)v24;
          }
        }
        else if ( (v25 & 0xFFFFFFFD) == 0 )
        {
          ACPIDeviceCompleteRequest(v24);
        }
      }
      while ( v6 != &AcpiPowerPhase5List );
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
    v4 = AcpiPowerDpcFlags;
  }
  if ( AcpiPowerPhase0List == &AcpiPowerPhase0List
    && (__int64 *)AcpiPowerBlockedOnDependencyList == &AcpiPowerBlockedOnDependencyList
    && (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List
    && AcpiPowerPhase5List == &AcpiPowerPhase5List
    && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
    && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
    && AcpiPowerPhase4List == &AcpiPowerPhase4List )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x33u,
        (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids);
    if ( (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
      ACPIInternalMovePowerList(&AcpiPowerSynchronizeList, Entry);
  }
  AcpiPowerDpcFlags &= ~1u;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  v7 = (PVOID **)Entry[0];
  if ( Entry[0] != Entry )
  {
    do
    {
      v8 = *v7;
      ACPIDeviceCompleteRequest(v7);
      v7 = (PVOID **)v8;
    }
    while ( v8 != Entry );
  }
}
