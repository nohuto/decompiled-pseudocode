/*
 * XREFs of SepSecureBootBuildRules @ 0x1409F8328
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x1409DC17C (SeSecureBootRegisterPolicy.c)
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

  v0 = *((_WORD *)qword_1404DC690 + 18);
  if ( v0 )
  {
    v1 = (char *)qword_1404DC690 + *((unsigned int *)qword_1404DC690 + 10) + 60;
    qword_1404E1528 = (__int64)v1;
    v2 = v0;
    v3 = v1 + 4;
    v4 = dword_1404E1514;
    do
    {
      v5 = v3[3];
      v3 += 12;
      v4 |= 1 << (v5 & 0xF);
      --v2;
    }
    while ( v2 );
    dword_1404E1514 = v4;
  }
  if ( *((_WORD *)qword_1404DC690 + 19) )
    qword_1404E1520 = (__int64)qword_1404DC690 + *((unsigned int *)qword_1404DC690 + 11) + 60;
  return 0LL;
}
