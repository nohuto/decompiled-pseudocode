/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x14015FABC
 * Callers:
 *     PopHiberInitializeResources @ 0x140726638 (PopHiberInitializeResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2))(void)
{
  __int64 (*result)(void); // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_140468340;
    if ( qword_140468340 )
      return (__int64 (*)(void))qword_140468340();
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
