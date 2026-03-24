/*
 * XREFs of DbgkpLkmdSqmStatus @ 0x1408122B4
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140811720 (DbgkCaptureLiveDump.c)
 * Callees:
 *     DbgkpLkmdSqmIncrementDword @ 0x14026DE98 (DbgkpLkmdSqmIncrementDword.c)
 */

NTSTATUS __fastcall DbgkpLkmdSqmStatus(REGHANDLE RegHandle, int *a2)
{
  int v2; // eax

  v2 = a2[1];
  if ( (v2 & 2) != 0 )
  {
    DbgkpLkmdSqmIncrementDword(RegHandle, 3297);
    v2 = a2[1];
  }
  if ( (v2 & 8) != 0 )
  {
    DbgkpLkmdSqmIncrementDword(RegHandle, 3298);
    v2 = a2[1];
  }
  if ( (v2 & 0x4000) != 0 )
  {
    DbgkpLkmdSqmIncrementDword(RegHandle, 3294);
    v2 = a2[1];
  }
  if ( (v2 & 0x8000) != 0 )
    DbgkpLkmdSqmIncrementDword(RegHandle, 3295);
  if ( *a2 >= 0 )
    DbgkpLkmdSqmIncrementDword(RegHandle, 3296);
  return DbgkpLkmdSqmIncrementDword(RegHandle, 3293);
}
