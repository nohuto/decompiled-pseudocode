/*
 * XREFs of IopDisableCrashDump @ 0x140193B24
 * Callers:
 *     IoConfigureCrashDump @ 0x1401938E0 (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_140468058 && CrashdmpInitialized )
  {
    result = ((__int64 (*)(void))qword_140468058)();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
