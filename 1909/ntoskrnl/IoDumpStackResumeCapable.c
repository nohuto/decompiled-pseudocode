/*
 * XREFs of IoDumpStackResumeCapable @ 0x140169BA0
 * Callers:
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140468078 )
      return ((__int64 (*)(void))qword_140468078)();
  }
  return result;
}
