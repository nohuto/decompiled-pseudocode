/*
 * XREFs of NtInitializeRegistry @ 0x1407463C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwInitializeRegistry @ 0x1401C2030 (ZwInitializeRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     CmpAcceptBoot @ 0x140746430 (CmpAcceptBoot.c)
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 *     CmpHandlePageFileOpenNotification @ 0x14077FE28 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x140831844 (CmpSyncNextBackupHive.c)
 */

NTSTATUS __stdcall NtInitializeRegistry(USHORT Flag)
{
  KPROCESSOR_MODE PreviousMode; // dl

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( Flag == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
        return CmpSyncNextBackupHive();
      else
        return -1073741727;
    }
    else
    {
      return ZwInitializeRegistry(Flag);
    }
  }
  else if ( (unsigned __int16)(Flag - 4096) > 0x3E7u )
  {
    if ( Flag == 2 )
    {
      return CmpHandlePageFileOpenNotification();
    }
    else if ( Flag >= 2u )
    {
      return -1073741811;
    }
    else
    {
      return CmCompleteRegistryInitialization();
    }
  }
  else
  {
    return CmpAcceptBoot();
  }
}
