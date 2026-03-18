/*
 * XREFs of ExpSafeWcslen @ 0x14090E968
 * Callers:
 *     ExpSetBootEntry @ 0x14090E998 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14090F178 (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x1409106B4 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x140910810 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x140910C00 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140911240 (NtEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
  }
  while ( (unsigned __int64)v2 < a2 );
  if ( (unsigned __int64)v2 >= a2 )
    return 0xFFFFFFFFLL;
  else
    return v2 - a1;
}
