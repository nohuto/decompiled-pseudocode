/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x140188568
 * Callers:
 *     IoConfigureCrashDump @ 0x14018848C (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14074CFC0 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
