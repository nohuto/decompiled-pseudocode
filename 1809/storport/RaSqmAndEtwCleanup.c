/*
 * XREFs of RaSqmAndEtwCleanup @ 0x1C0074588
 * Callers:
 *     RaDeleteDriver @ 0x1C00744A8 (RaDeleteDriver.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C003C268 (McGenEventUnregister.c)
 *     StorSqmCleanup @ 0x1C00535E4 (StorSqmCleanup.c)
 *     StorpUnRegisterTraceLogging @ 0x1C0075AA0 (StorpUnRegisterTraceLogging.c)
 */

__int64 __fastcall RaSqmAndEtwCleanup(ULONGLONG *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&g_RaidSQMAndETWRefCount, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    if ( g_RaidSQMInitialized == 1 )
    {
      KeCancelTimer(&g_RaidSQMTimer);
      StorSqmCleanup();
      g_RaidSQMInitialized = 0;
    }
    McGenEventUnregister(a1);
    return StorpUnRegisterTraceLogging();
  }
  return result;
}
