/*
 * XREFs of IopDisableCrashDump @ 0x1401886C8
 * Callers:
 *     IoConfigureCrashDump @ 0x14018848C (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_14043C7E8 && CrashdmpInitialized )
  {
    result = ((__int64 (*)(void))qword_14043C7E8)();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
