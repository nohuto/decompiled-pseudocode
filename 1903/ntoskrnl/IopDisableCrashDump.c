/*
 * XREFs of IopDisableCrashDump @ 0x140193344
 * Callers:
 *     IoConfigureCrashDump @ 0x140193100 (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_140468318 && CrashdmpInitialized )
  {
    result = ((__int64 (*)(void))qword_140468318)();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
