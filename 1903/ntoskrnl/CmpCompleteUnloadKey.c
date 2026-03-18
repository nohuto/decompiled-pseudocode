/*
 * XREFs of CmpCompleteUnloadKey @ 0x14063DD64
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x140662850 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     CmpRemoveHiveFromNamespace @ 0x14008BE7C (CmpRemoveHiveFromNamespace.c)
 *     CmpUnJoinClassOfTrust @ 0x14008BF44 (CmpUnJoinClassOfTrust.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14008BF90 (CmpDecrementAppHiveUnloadCount.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     HvHiveCleanup @ 0x14062E130 (HvHiveCleanup.c)
 *     CmpCleanUpSubKeyInfo @ 0x140631080 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpDiscardKcb @ 0x14063A964 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063AB64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063ABE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCmdHiveClose @ 0x14063E098 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14063E1EC (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x14063E29C (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14063E34C (CmpVolumeContextDecrementRefCount.c)
 *     UNLOCK_HIVE_LOAD @ 0x140661F00 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoFileSetSizeEx @ 0x140662D3C (CmpDoFileSetSizeEx.c)
 *     HvMarkBaseBlockDirty @ 0x1406EAC04 (HvMarkBaseBlockDirty.c)
 */

BOOLEAN __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rdi
  int v6; // eax
  signed __int64 v7; // r8
  int v8; // r12d
  __int64 v9; // rax
  REGHANDLE v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v12; // r14d
  unsigned int v13; // ebx
  struct _PRIVILEGE_SET *v14; // rcx
  unsigned int v15; // esi
  REGHANDLE v16; // rbx
  BOOLEAN result; // al
  unsigned int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int v23; // ecx
  ULONGLONG v24; // rax
  unsigned int v25; // r9d
  __int64 v26; // rax
  unsigned int v27; // r9d
  ULONGLONG v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  signed __int32 v31[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int16 v32; // [rsp+30h] [rbp-79h] BYREF
  int v33; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v34[2]; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR v36; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v34[0] = 0LL;
  v34[1] = 0LL;
  CmpInitializeDelayDerefContext(v34);
  v7 = (unsigned int)(v6 + 1);
  v8 = *(_DWORD *)(v3 + 4152) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4276), v6 + 1) & 0x7F) + 4280) = 6;
  _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 2944), v7, 0LL);
  v9 = *(_QWORD *)(v3 + 4192);
  if ( v9 )
  {
    v21 = *(_QWORD *)(v3 + 64);
    v22 = *(_DWORD *)(v21 + 144);
    if ( *(_QWORD *)(v9 + 16) == v9 + 16 )
      v23 = v22 & 0xFFFFFFFE;
    else
      v23 = v7 | v22;
    *(_DWORD *)(v21 + 144) = v23;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  v10 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v24 = *(_QWORD *)(v3 + 1840);
    v25 = 0;
    v32 = 0;
    if ( v24 )
    {
      UserData[0].Ptr = v24;
      v25 = 1;
      UserData[0].Size = *(unsigned __int16 *)(v3 + 1832);
      UserData[0].Reserved = 0;
    }
    v26 = v25;
    v27 = v25 + 1;
    UserData[v26].Ptr = (ULONGLONG)&v32;
    *(_QWORD *)&UserData[v26].Size = 2LL;
    v28 = *(_QWORD *)(v3 + 1856);
    if ( v28 )
    {
      v29 = v27++;
      UserData[v29].Ptr = v28;
      UserData[v29].Size = *(unsigned __int16 *)(v3 + 1848);
      *(&UserData[0].Reserved + 1 * v29) = 0;
    }
    v30 = v27;
    UserData[v30].Ptr = (ULONGLONG)&v32;
    *(_QWORD *)&UserData[v30].Size = 2LL;
    EtwWrite(v10, &EventDescriptor, 0LL, v27 + 1, UserData);
  }
  CmpRemoveHiveFromNamespace(v3, a1, (__int64)v34);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4276), 1u) & 0x7F) + 4280) = 8;
  if ( v8 )
  {
    *(_DWORD *)(v3 + 4808) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 1LL, (__int64)v34, 0);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), 1);
  CmpDrainDelayDerefContext(v34);
  CmpUnlockRegistry();
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD();
    *a3 &= ~4u;
  }
  ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(v3 + 1848));
  CmpDestroySecurityCache(v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpUnJoinClassOfTrust(v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(v3 + 160) & 0x400) != 0 )
  {
    v19 = *(_QWORD *)(v3 + 1616);
    if ( *(_QWORD *)(v19 + 8) != v3 + 1616 || (v20 = *(_QWORD **)(v3 + 1624), *v20 != v3 + 1616) )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
  }
  CmpVERemoveHiveFromSIDMappingTable(v3);
  v12 = CmpFlushHive(v3, 0x2Cu);
  if ( v12 == -1073741811 )
    v12 = 0;
  v13 = *(_DWORD *)(v3 + 272) + 4096;
  HvHiveCleanup(v3);
  if ( v12 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1792) - v13) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v13, 0LL);
  CmpCmdHiveClose(v3);
  v14 = *(struct _PRIVILEGE_SET **)(v3 + 4832);
  if ( v14 )
    CmpVolumeContextDecrementRefCount(v14);
  if ( v8 )
  {
    *(_DWORD *)(v3 + 4808) = 0;
    _InterlockedOr(v31, 0);
    if ( *(_QWORD *)(v3 + 4816) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4816), 0LL);
  }
  v15 = 0;
  if ( *(_DWORD *)(v3 + 2912) )
  {
    do
    {
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v3 + 2920) + 8LL * v15), 0, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v3 + 2920) + 8LL * v15));
      v18 = *(_DWORD *)(v3 + 2912);
      ++v15;
    }
    while ( v15 < v18 );
    if ( v18 )
      ExFreePoolWithTag(*(PVOID *)(v3 + 2920), 0);
  }
  v16 = EtwpRegTraceHandle;
  v33 = v12;
  v36 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &v36);
  if ( result )
  {
    *(_QWORD *)&v37.Size = 4LL;
    v37.Ptr = (ULONGLONG)&v33;
    return EtwWrite(v16, &v36, 0LL, 1u, &v37);
  }
  return result;
}
