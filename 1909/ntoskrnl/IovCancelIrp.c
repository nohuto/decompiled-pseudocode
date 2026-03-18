/*
 * XREFs of IovCancelIrp @ 0x1409630F0
 * Callers:
 *     IoCancelIrp @ 0x140128400 (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x140963B18 (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14097DAB8 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14097DC38 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCancelIrp @ 0x14097E09C (ViWdBeforeCancelIrp.c)
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
