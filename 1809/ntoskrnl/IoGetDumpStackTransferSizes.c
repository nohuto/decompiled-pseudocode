/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x140144A4C
 * Callers:
 *     PopHiberInitializeResources @ 0x1406DF264 (PopHiberInitializeResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2))(void)
{
  __int64 (*result)(void); // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_14043C810;
    if ( qword_14043C810 )
      return (__int64 (*)(void))qword_14043C810();
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
