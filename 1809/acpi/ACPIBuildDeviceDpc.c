/*
 * XREFs of ACPIBuildDeviceDpc @ 0x1C001C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildProcessSynchronizationList @ 0x1C0019798 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIPowerScheduleDpc @ 0x1C001C68C (ACPIPowerScheduleDpc.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C001CBE4 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BE18 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIInternalMoveList @ 0x1C0030560 (ACPIInternalMoveList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIBuildDeviceDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned __int32 v13; // eax
  void (__fastcall *v14)(__int64); // rdx
  __int64 v15; // rdi
  signed __int32 v16; // edi
  char v17; // bp
  __int64 v18; // rsi
  unsigned __int32 v19; // eax
  __int64 (__fastcall *v20)(PSLIST_ENTRY); // rdx
  signed __int32 v21; // ebx
  __int64 *v22; // rdx
  __int64 **v23; // rax
  __int64 v24; // rax
  __int64 *v25; // r8
  char v26; // bp
  __int64 v27; // rsi
  unsigned __int32 v28; // eax
  void (__fastcall *v29)(__int64); // rdx
  signed __int32 v30; // ebx
  __int64 v31; // rsi
  unsigned __int32 v32; // eax
  __int64 (__fastcall *v33)(PSLIST_ENTRY); // rdx
  signed __int32 v34; // ebx
  __int64 v35; // rsi
  unsigned __int32 v36; // eax
  void (__fastcall *v37)(__int64); // rdx
  signed __int32 v38; // ebx
  __int64 v39; // rsi
  unsigned __int32 v40; // eax
  void (__fastcall *v41)(__int64); // rdx
  signed __int32 v42; // ebx

  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = AcpiBuildDpcFlags;
  if ( (AcpiBuildDpcFlags & 2) == 0 )
    goto LABEL_20;
  do
  {
    v5 = AcpiBuildQueueList;
    AcpiBuildDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
    {
      do
      {
        v22 = *(__int64 **)v5;
        if ( (*(_DWORD *)(v5 + 20) & 0x40) == 0 )
        {
          if ( v22[1] != v5
            || (v23 = *(__int64 ***)(v5 + 8), *v23 != (__int64 *)v5)
            || (*v23 = v22, v22[1] = (__int64)v23,
                            v24 = *(_QWORD *)(v5 + 128),
                            v25 = *(__int64 **)(v24 + 8),
                            *v25 != v24) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)v5 = v24;
          *(_QWORD *)(v5 + 8) = v25;
          *v25 = v5;
          *(_QWORD *)(v24 + 8) = v5;
          *(_DWORD *)(v5 + 20) &= ~0x1000u;
          *(_QWORD *)(v5 + 128) = 0LL;
        }
        v5 = (__int64)v22;
      }
      while ( v22 != &AcpiBuildQueueList );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    v7 = AcpiBuildRunMethodList;
    if ( (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList )
    {
      v17 = 1;
      while ( 1 )
      {
        v18 = *(_QWORD *)v7;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 1, 1);
        if ( v19 >= 0xA )
          goto LABEL_90;
        v20 = AcpiBuildRunMethodDispatch[v19];
        if ( v20 )
        {
          if ( v19 != 2 )
            *(_DWORD *)(v7 + 28) = v19;
          v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 1, v19);
          v20((PSLIST_ENTRY)v7);
          if ( (v21 & 0xFFFFFFFD) != 0 )
            goto LABEL_30;
        }
        else
        {
          v17 = 0;
        }
        v7 = v18;
LABEL_30:
        if ( (__int64 *)v7 == &AcpiBuildRunMethodList )
        {
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          if ( v17 )
            AcpiBuildDpcFlags |= 2u;
          goto LABEL_19;
        }
      }
    }
    v8 = AcpiBuildOperationRegionList;
    while ( (__int64 *)v8 != &AcpiBuildOperationRegionList )
    {
      v39 = *(_QWORD *)v8;
      v40 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), 1, 1);
      if ( v40 >= 4 )
        goto LABEL_90;
      v41 = (void (__fastcall *)(__int64))*(&AcpiBuildOperationRegionDispatch + v40);
      if ( v41 )
      {
        if ( v40 != 2 )
          *(_DWORD *)(v8 + 28) = v40;
        v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), 1, v40);
        v41(v8);
        if ( (v42 & 0xFFFFFFFD) != 0 )
          continue;
      }
      v8 = v39;
    }
    v9 = AcpiBuildPowerResourceList;
    if ( (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList )
      goto LABEL_6;
    v26 = 1;
    do
    {
      v27 = *(_QWORD *)v9;
      v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), 1, 1);
      if ( v28 >= 7 )
        goto LABEL_90;
      v29 = (void (__fastcall *)(__int64))*(&AcpiBuildPowerResourceDispatch + v28);
      if ( !v29 )
      {
        v26 = 0;
LABEL_59:
        v9 = v27;
        continue;
      }
      if ( v28 != 2 )
        *(_DWORD *)(v9 + 28) = v28;
      v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), 1, v28);
      v29(v9);
      if ( (v30 & 0xFFFFFFFD) == 0 )
        goto LABEL_59;
    }
    while ( (__int64 *)v9 != &AcpiBuildPowerResourceList );
    if ( v26 )
    {
LABEL_6:
      v10 = AcpiBuildDelayedDependencyList;
      if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
      {
        do
        {
          v31 = *(_QWORD *)v10;
          v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 1, 1);
          if ( v32 >= 5 )
            goto LABEL_90;
          v33 = AcpiBuildDelayedDependencyDispatch[v32];
          if ( v33 )
          {
            if ( v32 != 2 )
              *(_DWORD *)(v10 + 28) = v32;
            v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 1, v32);
            v33((PSLIST_ENTRY)v10);
            if ( (v34 & 0xFFFFFFFD) != 0 )
              continue;
          }
          v10 = v31;
        }
        while ( (__int64 *)v10 != &AcpiBuildDelayedDependencyList );
        if ( (__int64 *)AcpiBuildDelayedDependencyList == &AcpiBuildDelayedDependencyList
          && (AcpiOverrideAttributes & 0x80000) != 0 )
        {
          ACPIBuildSynchronizationRequestInternal(
            RootDeviceExtension,
            (unsigned int)ACPIBuildIssueNotifyInvalidateRelations,
            RootDeviceExtension,
            v6,
            0);
        }
      }
      v11 = AcpiBuildDeviceList;
      if ( (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)v11;
          v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 1, 1);
          if ( v13 >= 0x22 )
            break;
          v14 = (void (__fastcall *)(__int64))*(&AcpiBuildDeviceDispatch + v13);
          if ( !v14 )
            goto LABEL_10;
          if ( v13 != 2 )
            *(_DWORD *)(v11 + 28) = v13;
          v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 1, v13);
          v14(v11);
          if ( (v16 & 0xFFFFFFFD) == 0 )
LABEL_10:
            v11 = v12;
          if ( (__int64 *)v11 == &AcpiBuildDeviceList )
            goto LABEL_12;
        }
LABEL_90:
        KeBugCheckEx(0xA3u, 1uLL, 0x102132uLL, 0LL, 0LL);
      }
LABEL_12:
      v15 = AcpiBuildThermalZoneList;
      while ( (__int64 *)v15 != &AcpiBuildThermalZoneList )
      {
        v35 = *(_QWORD *)v15;
        v36 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 24), 1, 1);
        if ( v36 >= 8 )
          goto LABEL_90;
        v37 = (void (__fastcall *)(__int64))*(&AcpiBuildThermalZoneDispatch + v36);
        if ( !v37 )
          goto LABEL_78;
        if ( v36 != 2 )
          *(_DWORD *)(v15 + 28) = v36;
        v38 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 24), 1, v36);
        v37(v15);
        if ( (v38 & 0xFFFFFFFD) == 0 )
LABEL_78:
          v15 = v35;
      }
      if ( (__int64 *)AcpiBuildDeviceList == &AcpiBuildDeviceList
        && (__int64 *)AcpiBuildOperationRegionList == &AcpiBuildOperationRegionList
        && (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
        && (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList
        && (__int64 *)AcpiBuildThermalZoneList == &AcpiBuildThermalZoneList )
      {
        KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
        if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
        {
          ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
          ACPIPowerScheduleDpc();
        }
        KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
      }
      if ( AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList )
        ACPIBuildProcessSynchronizationList();
      if ( AcpiBuildSpecialSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
        ACPIBuildProcessSpecialSynchronizationList();
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
LABEL_19:
    v4 = AcpiBuildDpcFlags;
  }
  while ( (AcpiBuildDpcFlags & 2) != 0 );
LABEL_20:
  AcpiBuildDpcFlags = v4 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
