/*
 * XREFs of CmpCompleteUnloadKey @ 0x1405B061C
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1405B0C50 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14013775C (CmpDecrementAppHiveUnloadCount.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B336C (CmpUnJoinClassOfTrust.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140581888 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1405820C4 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpDiscardKcb @ 0x1405AB6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AB8A0 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x1405ADA60 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCmdHiveClose @ 0x1405B0A08 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1405B0B54 (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1405B0C04 (CmpVolumeContextDecrementRefCount.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B2514 (UNLOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     HvHiveCleanup @ 0x1405FC440 (HvHiveCleanup.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpDoFileSetSizeEx @ 0x1406B9BE0 (CmpDoFileSetSizeEx.c)
 *     HvMarkBaseBlockDirty @ 0x1406CC1D4 (HvMarkBaseBlockDirty.c)
 */

BOOLEAN __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rdi
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // ecx
  REGHANDLE v11; // r15
  ULONGLONG v12; // rax
  unsigned int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // r9d
  ULONGLONG v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  int v22; // r14d
  unsigned int v23; // ebx
  struct _PRIVILEGE_SET *v24; // rcx
  unsigned int v25; // esi
  unsigned int v26; // eax
  REGHANDLE v27; // rbx
  BOOLEAN result; // al
  signed __int32 v29[8]; // [rsp+0h] [rbp-99h] BYREF
  __int16 v30; // [rsp+30h] [rbp-69h] BYREF
  int v31; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR v33; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+70h] [rbp-29h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v6 = *(_DWORD *)(v3 + 4152) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4292), 1u) & 0x7F) + 4296) = 6;
  _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 2944), 1LL, 0LL);
  v7 = *(_QWORD *)(v3 + 4192);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v3 + 64);
    v9 = *(_DWORD *)(v8 + 144);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      v10 = v9 & 0xFFFFFFFE;
    else
      v10 = v9 | 1;
    *(_DWORD *)(v8 + 144) = v10;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  v11 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v12 = *(_QWORD *)(v3 + 1840);
    v13 = 0;
    v30 = 0;
    if ( v12 )
    {
      UserData[0].Ptr = v12;
      v13 = 1;
      UserData[0].Size = *(unsigned __int16 *)(v3 + 1832);
      UserData[0].Reserved = 0;
    }
    v14 = v13;
    v15 = v13 + 1;
    UserData[v14].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&UserData[v14].Size = 2LL;
    v16 = *(_QWORD *)(v3 + 1856);
    if ( v16 )
    {
      v17 = v15++;
      UserData[v17].Ptr = v16;
      UserData[v17].Size = *(unsigned __int16 *)(v3 + 1848);
      *(&UserData[0].Reserved + 1 * v17) = 0;
    }
    v18 = v15;
    UserData[v18].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&UserData[v18].Size = 2LL;
    EtwWrite(v11, &EventDescriptor, 0LL, v15 + 1, UserData);
  }
  CmpRemoveHiveFromNamespace(v3, a1);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4292), 1u) & 0x7F) + 4296) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4824) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 1LL, 0);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  CmpRemoveLayerLinkForDiscardedKcb(a1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL), 1);
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(v3 + 160) & 0x400) != 0 )
  {
    v20 = *(_QWORD *)(v3 + 1616);
    if ( *(_QWORD *)(v20 + 8) != v3 + 1616 || (v21 = *(_QWORD **)(v3 + 1624), *v21 != v3 + 1616) )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
  }
  CmpVERemoveHiveFromSIDMappingTable(v3);
  v22 = CmpFlushHive(v3);
  if ( v22 == -1073741811 )
    v22 = 0;
  v23 = *(_DWORD *)(v3 + 272) + 4096;
  HvHiveCleanup(v3);
  if ( v22 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1792) - v23) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v23, 0LL);
  CmpCmdHiveClose(v3);
  v24 = *(struct _PRIVILEGE_SET **)(v3 + 4848);
  if ( v24 )
    CmpVolumeContextDecrementRefCount(v24);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4824) = 0;
    _InterlockedOr(v29, 0);
    if ( *(_QWORD *)(v3 + 4832) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4832), 0LL);
  }
  v25 = 0;
  if ( *(_DWORD *)(v3 + 2912) )
  {
    do
    {
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v3 + 2920) + 8LL * v25), 0, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v3 + 2920) + 8LL * v25));
      v26 = *(_DWORD *)(v3 + 2912);
      ++v25;
    }
    while ( v25 < v26 );
    if ( v26 )
      ExFreePoolWithTag(*(PVOID *)(v3 + 2920), 0);
  }
  v27 = EtwpRegTraceHandle;
  v31 = v22;
  v33 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &v33);
  if ( result )
  {
    *(_QWORD *)&v34.Size = 4LL;
    v34.Ptr = (ULONGLONG)&v31;
    return EtwWrite(v27, &v33, 0LL, 1u, &v34);
  }
  return result;
}
