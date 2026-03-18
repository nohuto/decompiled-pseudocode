/*
 * XREFs of IoInitializeDumpStack @ 0x140144684
 * Callers:
 *     PopRestoreHiberContext @ 0x140569770 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_14043C7D8 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_14043C7D8)(a1, 0LL);
  }
  return result;
}
