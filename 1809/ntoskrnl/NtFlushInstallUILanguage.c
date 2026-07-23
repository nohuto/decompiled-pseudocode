/*
 * XREFs of NtFlushInstallUILanguage @ 0x140762950
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x14031F4D0 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x1407106FC (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  NTSTATUS v3; // ebx
  int v4; // edi
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  v4 = InstallUILanguage;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return -1073741823;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741790;
  if ( PsUILanguageComitted )
  {
    if ( v4 == WORD1(NlsMbCodePageTag) )
      return 0;
    return -1073741823;
  }
  if ( MUIRefreshCachedUILock
    || (result = MUIInitializeResourceLock((volatile signed __int64 *)&MUIRefreshCachedUILock),
        (result & 0xC0000000) != 0xC0000000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(MUIRefreshCachedUILock, 1u);
    if ( SetComittedFlag )
      PsUILanguageComitted = 1;
    if ( (_WORD)v4 != WORD1(NlsMbCodePageTag) )
    {
      WORD1(NlsMbCodePageTag) = v4;
      PsMachineUILanguageId = v4;
      v3 = MigrateOOBELanguageToInstallationLanguage();
    }
    ExReleaseResourceLite(MUIRefreshCachedUILock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v3;
  }
  return result;
}
