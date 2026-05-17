/*
 * XREFs of sub_1800D5984 @ 0x1800D5984
 * Callers:
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 *     sub_1800D5450 @ 0x1800D5450 (sub_1800D5450.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D5984(char *a1)
{
  char v1; // al
  unsigned int v2; // edx

  v1 = *a1;
  v2 = 0;
  if ( !*a1 )
    return 0x80000000;
  do
  {
    ++a1;
    v2 = v1 + 65599 * v2;
    v1 = *a1;
  }
  while ( *a1 );
  if ( !v2 )
    return 0x80000000;
  return v2;
}
