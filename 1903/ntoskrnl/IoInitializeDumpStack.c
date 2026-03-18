/*
 * XREFs of IoInitializeDumpStack @ 0x14016A130
 * Callers:
 *     PopRestoreHiberContext @ 0x140599380 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140599640 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140468308 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_140468308)(a1, 0LL);
  }
  return result;
}
