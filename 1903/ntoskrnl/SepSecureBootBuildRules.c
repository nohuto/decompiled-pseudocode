/*
 * XREFs of SepSecureBootBuildRules @ 0x140A3DE60
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140A0942C (SeSecureBootRegisterPolicy.c)
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

  v0 = *((_WORD *)qword_140509E00 + 18);
  if ( v0 )
  {
    v1 = (char *)qword_140509E00 + *((unsigned int *)qword_140509E00 + 10) + 60;
    qword_14050ECC8 = (__int64)v1;
    v2 = v0;
    v3 = v1 + 4;
    v4 = dword_14050ECB4;
    do
    {
      v5 = v3[3];
      v3 += 12;
      v4 |= 1 << (v5 & 0xF);
      --v2;
    }
    while ( v2 );
    dword_14050ECB4 = v4;
  }
  if ( *((_WORD *)qword_140509E00 + 19) )
    qword_14050ECC0 = (__int64)qword_140509E00 + *((unsigned int *)qword_140509E00 + 11) + 60;
  return 0LL;
}
