/*
 * XREFs of IoInitializeDumpStack @ 0x1401447A4
 * Callers:
 *     PopRestoreHiberContext @ 0x14056A770 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_14043D898 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_14043D898)(a1, 0LL);
  }
  return result;
}
