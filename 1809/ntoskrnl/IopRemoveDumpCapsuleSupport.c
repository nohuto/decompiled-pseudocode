/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1401886C8
 * Callers:
 *     IoConfigureCrashDump @ 0x1401885EC (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14074E190 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
