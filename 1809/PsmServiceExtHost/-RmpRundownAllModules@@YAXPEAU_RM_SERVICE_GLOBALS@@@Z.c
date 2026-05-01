/*
 * XREFs of ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180055714
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180041050 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18002FB60 (CempLockSleepConditionVariableExclusive.c)
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18005902C (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18005B040 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18005F4E0 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180061004 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180068FC0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall RmpRundownAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbx
  ExecutionModel::ResourceManager *v3; // rcx
  struct _RM_SERVICE_GLOBALS **v4; // rbx
  struct _RM_SERVICE_GLOBALS *v5; // rdi
  char *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)a1 + 1528;
  RtlAcquireSRWLockExclusive((char *)a1 + 1528);
  *((_DWORD *)a1 + 384) = GetCurrentThreadId();
  RmpAcquireGlobalLock();
  *((_DWORD *)a1 + 671) |= 2u;
  RmpReleaseGlobalLock();
  *((_DWORD *)a1 + 384) = 0;
  RtlReleaseSRWLockExclusive(v1);
  HampManagerRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1608));
  v3 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 336);
  if ( v3 )
    ExecutionModel::ResourceManager::Rundown(v3);
  RmpAcquireGlobalLock();
  v4 = *(struct _RM_SERVICE_GLOBALS ***)a1;
  if ( *(struct _RM_SERVICE_GLOBALS **)a1 != a1 )
  {
    do
    {
      v5 = *v4;
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)(v4 - 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4 - 1);
      v4 = (struct _RM_SERVICE_GLOBALS **)v5;
    }
    while ( v5 != a1 );
  }
  RmpReleaseGlobalLock();
  if ( *((_QWORD *)a1 + 178) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)a1 + 178) = 0LL;
  }
  RmpEnforcerContextRundown(a1);
  RmpGameModeRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1456));
  RtlAcquireSRWLockExclusive((char *)a1 + 312);
  *((_DWORD *)a1 + 80) = GetCurrentThreadId();
  *((_DWORD *)a1 + 88) |= 1u;
  while ( 1 )
  {
    v6 = (char *)a1 + 312;
    if ( !*((_DWORD *)a1 + 97) )
      break;
    CempLockSleepConditionVariableExclusive((__int64)v6, (__int64)a1 + 344, 0LL);
  }
  *((_DWORD *)a1 + 80) = 0;
  RtlReleaseSRWLockExclusive(v6);
  while ( 1 )
  {
    v10 = *((_DWORD *)a1 + 99);
    if ( !v10 )
      break;
    RtlWaitOnAddress((char *)a1 + 396, &v10, 4LL);
  }
  v7 = (void *)*((_QWORD *)a1 + 72);
  if ( v7 )
    PowerSettingUnregisterNotification(v7);
  v8 = (void *)*((_QWORD *)a1 + 73);
  if ( v8 )
    PowerSettingUnregisterNotification(v8);
  if ( *((_QWORD *)a1 + 75) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 76) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 77) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v9 = (void *)*((_QWORD *)a1 + 79);
  if ( v9 )
    NtClose(v9);
  if ( *((_QWORD *)a1 + 70) )
  {
    RmpAcquireGlobalLock();
    TpSetTimer(*((_QWORD *)a1 + 70), 0LL, 0LL, 0LL);
    RmpReleaseGlobalLock();
    TpWaitForTimer(*((_QWORD *)a1 + 70), 1LL);
  }
}
