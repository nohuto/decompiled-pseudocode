/*
 * XREFs of NtInitializeRegistry @ 0x14071EF70
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ZwInitializeRegistry @ 0x1401BA230 (ZwInitializeRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     CmpAcceptBoot @ 0x14071F028 (CmpAcceptBoot.c)
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 *     CmpHandlePageFileOpenNotification @ 0x14075A7D4 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x1407F5738 (CmpSyncNextBackupHive.c)
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
