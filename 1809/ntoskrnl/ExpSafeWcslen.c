/*
 * XREFs of ExpSafeWcslen @ 0x1408D16DC
 * Callers:
 *     ExpSetBootEntry @ 0x1408D170C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D1ECC (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x1408D3380 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1408D34DC (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x1408D38D0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D3F20 (NtEnumerateDriverEntries.c)
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
