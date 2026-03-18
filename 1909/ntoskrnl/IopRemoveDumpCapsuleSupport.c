/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1401939C4
 * Callers:
 *     IoConfigureCrashDump @ 0x1401938E0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x140774C60 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 IopRemoveDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized == 1 )
  {
    if ( CapsuleTriageDumpBlock )
    {
      ExFreePoolWithTag(CapsuleTriageDumpBlock, 0);
      CapsuleTriageDumpBlock = 0LL;
    }
    CapsuleTriageDumpBlockInitialized = 0;
  }
  return 0LL;
}
