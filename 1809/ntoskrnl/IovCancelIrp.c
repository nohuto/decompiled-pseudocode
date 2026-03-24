/*
 * XREFs of IovCancelIrp @ 0x140923F90
 * Callers:
 *     IoCancelIrp @ 0x140121E30 (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x140924998 (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14093E224 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093E3A4 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCancelIrp @ 0x14093E808 (ViWdBeforeCancelIrp.c)
 */

__int64 __fastcall IovCancelIrp(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  IovpLogStackTrace(a1);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  v3 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 248) )
      ViWdBeforeCancelIrp();
    return VfIrpDatabaseEntryReleaseLock(v3);
  }
  return result;
}
