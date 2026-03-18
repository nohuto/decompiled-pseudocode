/*
 * XREFs of NtInitializeRegistry @ 0x14071DCF0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B2F1C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F5C (CmpInitializeThreadInfo.c)
 *     ZwInitializeRegistry @ 0x1401BA0B0 (ZwInitializeRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     CmpAcceptBoot @ 0x14071DDA8 (CmpAcceptBoot.c)
 *     CmCompleteRegistryInitialization @ 0x1407455D4 (CmCompleteRegistryInitialization.c)
 *     CmpHandlePageFileOpenNotification @ 0x140759604 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x1407F4558 (CmpSyncNextBackupHive.c)
 */

NTSTATUS __stdcall NtInitializeRegistry(USHORT Flag)
{
  USHORT v1; // r10
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS v3; // r8d
  PVOID v5[3]; // [rsp+20h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v5);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( v1 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry(v1);
    }
  }
  else if ( (unsigned __int16)(v1 - 4096) > 0x3E7u )
  {
    if ( v1 == 2 )
    {
      CmpHandlePageFileOpenNotification();
    }
    else if ( v1 < 2u )
    {
      CmCompleteRegistryInitialization(v1);
    }
  }
  else
  {
    CmpAcceptBoot(v1);
  }
  CmCleanupThreadInfo(v5);
  return v3;
}
