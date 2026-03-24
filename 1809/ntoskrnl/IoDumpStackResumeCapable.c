/*
 * XREFs of IoDumpStackResumeCapable @ 0x1401599E0
 * Callers:
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_14043C808 )
      return ((__int64 (*)(void))qword_14043C808)();
  }
  return result;
}
