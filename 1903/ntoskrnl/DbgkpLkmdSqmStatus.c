/*
 * XREFs of DbgkpLkmdSqmStatus @ 0x14084BD0C
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14084B148 (DbgkCaptureLiveDump.c)
 * Callees:
 *     DbgkpLkmdSqmIncrementDword @ 0x1402819B8 (DbgkpLkmdSqmIncrementDword.c)
 */

NTSTATUS __fastcall DbgkpLkmdSqmStatus(REGHANDLE a1, int *a2)
{
  int v2; // eax

  v2 = a2[1];
  if ( (v2 & 2) != 0 )
  {
    DbgkpLkmdSqmIncrementDword(a1, 3297);
    v2 = a2[1];
  }
  if ( (v2 & 8) != 0 )
  {
    DbgkpLkmdSqmIncrementDword(a1, 3298);
    v2 = a2[1];
  }
  if ( (v2 & 0x4000) != 0 )
  {
    DbgkpLkmdSqmIncrementDword(a1, 3294);
    v2 = a2[1];
  }
  if ( (v2 & 0x8000) != 0 )
    DbgkpLkmdSqmIncrementDword(a1, 3295);
  if ( *a2 >= 0 )
    DbgkpLkmdSqmIncrementDword(a1, 3296);
  return DbgkpLkmdSqmIncrementDword(a1, 3293);
}
