/*
 * XREFs of NtFlushInstallUILanguage @ 0x140761780
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x14031F1E0 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x14070F47C (MUIInitializeResourceLock.c)
 */

__int64 __fastcall NtFlushInstallUILanguage(int a1, int a2)
{
  unsigned int v3; // ebx
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return 3221225473LL;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 3221225506LL;
  if ( PsUILanguageComitted )
  {
    if ( a1 == WORD1(NlsMbCodePageTag) )
      return 0LL;
    return 3221225473LL;
  }
  if ( MUIRefreshCachedUILock
    || (result = MUIInitializeResourceLock((volatile signed __int64 *)&MUIRefreshCachedUILock),
        (result & 0xC0000000) != 0xC0000000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(MUIRefreshCachedUILock, 1u);
    if ( a2 )
      PsUILanguageComitted = 1;
    if ( (_WORD)a1 != WORD1(NlsMbCodePageTag) )
    {
      WORD1(NlsMbCodePageTag) = a1;
      PsMachineUILanguageId = a1;
      v3 = MigrateOOBELanguageToInstallationLanguage();
    }
    ExReleaseResourceLite(MUIRefreshCachedUILock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v3;
  }
  return result;
}
