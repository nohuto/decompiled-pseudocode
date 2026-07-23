/*
 * XREFs of MiInitializeZeroingAttributes @ 0x1409DC1F4
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeZeroingAttributes()
{
  __int64 result; // rax
  int *v1; // rdx
  unsigned int i; // ecx
  _DWORD *v3; // rcx

  LODWORD(result) = 0;
  v1 = dword_14043B1D8;
  for ( i = 0; i < 3; ++i )
  {
    *v1 = i;
    v1[1] = i;
    v1[2] = i;
    v1[3] = i;
    v1 += 4;
  }
  v3 = &unk_14043B208;
  do
  {
    *v3 = result;
    result = (unsigned int)(result + 1);
    ++v3;
  }
  while ( (unsigned int)result <= 3 );
  dword_14043B214 = 1;
  return result;
}
