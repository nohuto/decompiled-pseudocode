/*
 * XREFs of IoDumpStackResumeCapable @ 0x140159AE0
 * Callers:
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_14043D8C8 )
      return ((__int64 (*)(void))qword_14043D8C8)();
  }
  return result;
}
