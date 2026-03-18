/*
 * XREFs of BiLookupObjectByBootEntry @ 0x14093193C
 * Callers:
 *     BiBuildIdentifierList @ 0x14092FB9C (BiBuildIdentifierList.c)
 *     BiTranslateBootEntryId @ 0x140931D7C (BiTranslateBootEntryId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiLookupObjectByBootEntry(__int64 **a1, int a2, _QWORD *a3)
{
  __int64 *i; // r9

  for ( i = *a1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)a1 )
      return 3221226021LL;
    if ( (i[6] & 3) != 0 && *((_DWORD *)i + 8) == a2 )
      break;
  }
  *a3 = i;
  return 0LL;
}
