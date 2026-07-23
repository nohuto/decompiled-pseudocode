/*
 * XREFs of IopDisableCrashDump @ 0x140188828
 * Callers:
 *     IoConfigureCrashDump @ 0x1401885EC (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_14043D8A8 && CrashdmpInitialized )
  {
    result = ((__int64 (*)(void))qword_14043D8A8)();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
