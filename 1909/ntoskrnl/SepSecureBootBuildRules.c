/*
 * XREFs of SepSecureBootBuildRules @ 0x140A3DC30
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140A09958 (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     <none>
 */

__int64 SepSecureBootBuildRules()
{
  unsigned __int16 v0; // dx
  char *v1; // r8
  __int64 v2; // r9
  char *v3; // r8
  int v4; // edx
  char v5; // al

  v0 = *((_WORD *)qword_140509B40 + 18);
  if ( v0 )
  {
    v1 = (char *)qword_140509B40 + *((unsigned int *)qword_140509B40 + 10) + 60;
    qword_14050E9F8 = (__int64)v1;
    v2 = v0;
    v3 = v1 + 4;
    v4 = dword_14050EA00;
    do
    {
      v5 = v3[3];
      v3 += 12;
      v4 |= 1 << (v5 & 0xF);
      --v2;
    }
    while ( v2 );
    dword_14050EA00 = v4;
  }
  if ( *((_WORD *)qword_140509B40 + 19) )
    qword_14050EA10 = (__int64)qword_140509B40 + *((unsigned int *)qword_140509B40 + 11) + 60;
  return 0LL;
}
