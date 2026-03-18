/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1401931E4
 * Callers:
 *     IoConfigureCrashDump @ 0x140193100 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x140771680 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
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
